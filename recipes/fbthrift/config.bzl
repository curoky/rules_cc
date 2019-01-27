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
    "type": "new_git_repository",
    "build_file": "default/BUILD",
    "remote": "https://github.com/facebook/fbthrift",
    "used_version": "tags/v2021.04.19.00",
    "patch_args": ["-p1"],
    "patches": [
        "v2021.04.19.00/patch/0001-fix-tpl-construct.patch",
    ],
    "versions": {
        "heads/master": {},
        "tags/v2021.04.19.00": {},
        "tags/v2021.05.10.00": {},
        "tags/v2021.05.24.00": {},
    },
}
