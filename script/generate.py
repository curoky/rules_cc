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
                        namespace=ver_namespace)

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


@app.command()
def gen():
    g = Generator()
    g.renderFormula()
    g.renderRegister()


@app.command()
def new(url: str):
    cwd = Path(__file__).parent
    template = jinja2.Template((cwd / 'conf.yaml.j2').read_text())
    name = url.split('/')[1]
    output_prefix: Path = cwd.parent / f'conf/{name}.yaml'
    output_prefix.write_text(template.render(name=url))


if __name__ == "__main__":
    app()
