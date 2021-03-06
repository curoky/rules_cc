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

'''
config = {
    "name": "libiberty",
    "type": "new_local_repository",
    "build_file": "system/BUILD",
    # "path": "/home/linuxbrew/.linuxbrew/opt/libiberty",
    "path": "/tmp/gcc-11.1.0",
    "used_version": "heads/master",
    "versions": {
        "heads/master": {},
    },
}
#'''

#'''
config = {
    "type": "http_archive",
    "build_file": "default/BUILD",
    "urls": [
        "https://ftpmirror.gnu.org/gcc/gcc-11.1.0/gcc-11.1.0.tar.xz",
        "https://ftp.gnu.org/gnu/gcc/gcc-11.1.0/gcc-11.1.0.tar.gz",
    ],
    "strip_prefix": "gcc-11.1.0",
    "used_version": "heads/master",
    "versions": {
        "heads/master": {},
    },
}
#'''
