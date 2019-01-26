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
    "name": "org_openssl",
    "type": "new_git_repository",
    "build_file": "default/BUILD",
    "remote": "https://github.com/openssl/openssl",
    "used_version": "tags/OpenSSL_1_1_1g",
    "versions": {
        "tags/OpenSSL_1_1_1g": {},
    },
}
