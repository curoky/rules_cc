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

"""specific copts.
"""

BASE_COPTS = [
    "-g",
    "-O0",
    "-fno-omit-frame-pointer",
    "-gno-statement-frontiers",
    "-gno-variable-location-views",
    "-std=c++20",
    # "-rdynamic",

    # for lldb
    # https://stackoverflow.com/questions/58578615/cannot-inspect-a-stdstring-variable-in-lldb
    # "-fstandalone-debug",
]

IGNORED_COPTS = [
    # Note: We cannot require external libraries to conform to specifications
    "-Wno-deprecated-declarations",
    "-Wno-deprecated",
    "-Wno-sign-compare",
    "-Wno-unknown-pragmas",
    "-Wno-unused-but-set-variable",
    "-Wno-unused-function",
    "-Wno-unused-value",
    "-Wno-unused-variable",
]

DEFAULT_COPTS = BASE_COPTS + IGNORED_COPTS

DEFAULT_LINKOPTS = [
    "-latomic",
    "-lpthread",
    "-ldl",
    # "-fuse-ld=lld",
]
