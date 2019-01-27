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

load("@rules_cc//cc:defs.bzl", "cc_library")
load("@rules_m4//m4:m4.bzl", "m4")

m4(
    name = "version_h",
    srcs = ["m4/version.h.m4"],
    m4_options = ["-DM4_RESTCLIENT_VERSION=0.5.2"],
    output = "include/restclient-cpp/version.h",
)

# genrule(
#     name = "version_h",
#     srcs = ["m4/version.h.m4"],
#     outs = ["include/restclient-cpp/version.h"],
#     cmd = "$(M4) -DM4_RESTCLIENT_VERSION=0.5.2 $(SRCS) > $@",
#     toolchains = ["@rules_m4//m4:current_m4_toolchain"],
# )

cc_library(
    name = "restclient",
    srcs = glob(["source/**/*.cc"]),
    hdrs = glob(["include/**/*.h"]) + [":version_h"],
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = ["@com_github_curl//:curl"],
)
