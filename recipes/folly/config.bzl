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
    "remote": "https://github.com/facebook/folly",
    "used_version": "tags/v2021.04.19.00",
    "versions": {
        "heads/master": {},
        "tags/v2021.04.19.00": {},
        "tags/v2021.05.10.00": {},
        "tags/v2021.05.24.00": {},
    },
}
# Note:
#
# 1. compile error (gcc-10)
#   range: tags/v2021.05.10.00~tags/v2021.05.24.00
#   commit id: https://github.com/facebook/folly/commit/cd58205e0dadeef1495b7e6242d70b137d62bfe4#diff-74c3ef39eb5b34a5af183c8f24862de266d4736f3986b8e7f62c1fdead75bba2R219-R220
#   error message:
#   external/com_github_facebook_folly/folly/concurrency/CacheLocality.h:209:43: error: static assertion failed: not trivial
#     209 |       std::is_trivial<GlobalState>::value || kCpplibVer, "not trivial");
#         |       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~
