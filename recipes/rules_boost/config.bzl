# Copyright 2019 curoky(cccuroky@gmail.com).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

config = {
    "type": "git_repository",
    "remote": "https://github.com/nelhage/rules_boost",
    "patch_cmds": [
        'sed -i -e "s/openssl/org_openssl/g" boost/boost.bzl',
        'sed -i -e "s/org_lzma_lzma/org_xz_xz/g" boost/boost.bzl',
        'sed -i -e "s?org_lzma_lzma//:lzma?org_xz_xz//:xz?g" BUILD.boost',
        'sed -i -e "s/org_lzma_lzma/org_xz_xz/g" BUILD.lzma',
    ],
    "used_version": "heads/master",
    "versions": {
        "heads/master": {},
    },
}
