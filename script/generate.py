#!/usr/bin/env python3

import yaml
import copy
from mypyutils import *
from dataclasses import dataclass


@dataclass
class Formula:
    name: str
    url: str
    versions: Optional[List[Any]] = None  # Any is Formula
    ver:Optional[str] = None
    git_url: Optional[str] = None
    namespace: Optional[str] = None
    build_path: Optional[str] = None
    build_args: Optional[Dict[str, str]] = None
    repo_args: Optional[Dict[str, str]] = None

    @staticmethod
    def fromYaml(name, content):
        url: str = content['url']
        build_args = content.get('build_args', {})
        repo_args = content.get('repo_args', {})
        namespace = content.get('namespace',
                                'com_github_' + url.replace('-', '_').replace('/', '_').lower())
        repo_type: str = content['repo_type']
        git_url = content.get('git_url', f'https://github.com/{url}')

        versions = []
        for idx, (ver, value) in enumerate(content['versions'].items()):
            zip_url = f'https://github.com/{url}/archive/refs/{ver}.zip'

            ref = ver.split('/')[1]
            ver_namespace = namespace + "_" + ref if idx != 0 else namespace

            ver_build_args = copy.deepcopy(build_args)
            ver_build_args.update((value or {}).get('build_args', {}))
            ver_repo_args = copy.deepcopy(repo_args)
            ver_repo_args.update((value or {}).get('repo_args', {}))
            if ver.startswith('tags'):
                ver_repo_args['tag'] = f'"{ref}"'
            else:
                ver_repo_args['branch'] = f'"{ref}"'
            f = Formula(name,
                        url,
                        git_url=git_url,
                        repo_args=ver_repo_args,
                        namespace=ver_namespace,ver=ver)

            if repo_type == 'new_github' or repo_type == 'local':
                build_path = url.lower() + '/' + ref + '.BUILD'
                if 'build_file' not in ver_repo_args:
                    ver_repo_args['build_file'] = f'"@com_curoky_rules_cc//:dist/{build_path}"'
                f.build_args = ver_build_args
                f.build_path = build_path
                f.repo_args = ver_repo_args
            if repo_type == 'local':
                f.repo_args.pop('branch')
            versions.append(f)
        return Formula(name, url, versions=versions)


class Generator(object):

    def __init__(self,):
        cwd = Path(__file__).parent
        self.output_prefix: Path = cwd.parent / 'dist'

        self.configs = self.loadConfigs(cwd.parent / 'formula')
        self.formulas: List[Formula] = self.getFormulas(self.configs)

        self.formula_template = jinja2.Template((cwd / 'formula.py.j2').read_text())
        self.register_template = jinja2.Template((cwd / 'register.py.j2').read_text())

    @staticmethod
    def loadConfigs(conf_path: Path):
        configs = {}
        for p in conf_path.glob('*.yaml'):
            configs[p.name[:-5]] = yaml.load(p.read_text(), Loader=yaml.Loader)
        return configs

    @staticmethod
    def getFormulas(configs):
        formulas = []
        for name, conf in configs.items():
            formulas.append(Formula.fromYaml(name, conf))
        return formulas

    def renderFormula(self):
        for formula in self.formulas:
            for vf in formula.versions:
                if vf.build_path and vf.build_args:
                    output: Path = self.output_prefix / vf.build_path
                    os.makedirs(output.parent, exist_ok=True)
                    output.write_text(self.formula_template.render(formula=vf))

    def renderRegister(self):
        all_formulas = []
        for formula in self.formulas:
            for vf in formula.versions:
                all_formulas.append(vf)
        output: Path = self.output_prefix / 'register.bzl'
        os.makedirs(output.parent, exist_ok=True)

        output.write_text(self.register_template.render(formulas=all_formulas))

    def renderConfig(self):
        self.output_prefix = Path.home() / 'repos/tools/rules_pkg/recipes'
        shutil.rmtree(self.output_prefix, ignore_errors=True)
        for formula in self.formulas:
            if len(formula.versions) != 1:
                print(f"formula.versions != 1, {formula.name}")
            for vf in formula.versions:
                local_root = Path(vf.url.lower())
                config_output = self.output_prefix / local_root / 'config.bzl'
                os.makedirs(config_output.parent, exist_ok=True)
                (self.output_prefix / local_root / 'BUILD').write_text('')
                if vf.build_path:
                    vf.build_path = rreplace(vf.build_path, '.', '/', 1)
                    vf.build_path = local_root / 'default' / Path(vf.build_path).name
                    output: Path = self.output_prefix / vf.build_path
                    os.makedirs(output.parent, exist_ok=True)
                    output.write_text(self.formula_template.render(formula=vf))

                    config_output.write_text(f'''
config = {{
    "type": "new_git_repository",
    "build_file": "default:BUILD",
    "remote": "{vf.git_url}",
    "used_version": "{vf.ver}",
    "versions": {{
        "{vf.ver}": {{}}
    }}
}}
''')
                else:
                    config_output.write_text(f'''
config = {{
    "type": "git_repository",
    "remote": "{vf.git_url}",
    "used_version": "{vf.ver}",
    "versions": {{
        "{vf.ver}": {{}}
    }}
}}
''')
        (self.output_prefix / 'BUILD').write_text('')
        output = self.output_prefix / 'configs.bzl'
        lines = []
        lines2 = []
        lines3 = []
        for formula in self.formulas:
            for vf in formula.versions:
                # name = vf.url.lower().replace('-', '_').replace('/','_')
                lines.append(
                    f'load("@com_curoky_rules_pkg//recipes/{vf.url.lower()}:config.bzl", {vf.namespace}_config="config")')
                lines2.append(f'"{vf.namespace}": {vf.namespace}_config,')
                lines3.append(f'"{vf.namespace}": "{vf.url.lower()}",')
        lines.append('configs ={')
        lines += lines2
        lines.append('}')
        lines.append('paths ={')
        lines += lines3
        lines.append('}')
        output.write_text('\n'.join(lines))



@app.command()
def gen():
    g = Generator()
    # g.renderFormula()
    # g.renderRegister()
    g.renderConfig()


@app.command()
def new(url: str):
    cwd = Path(__file__).parent
    template = jinja2.Template((cwd / 'conf.yaml.j2').read_text())
    name = url.split('/')[1]
    output_prefix: Path = cwd.parent / f'conf/{name}.yaml'
    output_prefix.write_text(template.render(name=url))


if __name__ == "__main__":
    app()
