# Copyright 2019 curoky(cccuroky@gmail.com).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
load("@rules_m4//m4:m4.bzl", "m4_register_toolchains")
load("@rules_flex//flex:flex.bzl", "flex_register_toolchains")
load("@rules_bison//bison:bison.bzl", "bison_register_toolchains")

def loads():
    # https://github.com/nelhage/rules_boost/blob/master/BUILD.boost
    boost_deps()

    m4_register_toolchains()

    flex_register_toolchains()

    bison_register_toolchains()
