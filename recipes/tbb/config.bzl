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
    "type": "new_local_repository",
    "build_file": "default/BUILD",
    "path": "/home/linuxbrew/.linuxbrew/opt/tbb",
    "used_version": "heads/master",
    "versions": {
        "heads/master": {},
    },
}
'''

config = {
    "name": "com_github_oneapi_src_onetbb",
    "type": "git_repository",
    "remote": "https://github.com/Vertexwahn/oneTBB",
    # "remote": "https://github.com/oneapi-src/oneTBB",
    "used_version": "heads/bazel-support",
    "versions": {
        "heads/bazel-support": {},
    },
}
