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

load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "xz",
    srcs = glob(
        [
            "src/**/*.h",
            "src/**/*.c",
        ],
        exclude = [
            "src/xz/**/*.c",
            "src/liblzma/check/crc32_small.*",
        ],
    ),
    hdrs = glob(["src/**/*.h"]),
    copts = [
        "-I external/org_xz_xz/src/common",
        "-I external/org_xz_xz/src/liblzma",
        "-I external/org_xz_xz/src/liblzma/api",
        "-I external/org_xz_xz/src/liblzma/common",
        "-I external/org_xz_xz/src/liblzma/check",
        "-I external/org_xz_xz/src/liblzma/delta",
        "-I external/org_xz_xz/src/liblzma/lz",
        "-I external/org_xz_xz/src/liblzma/lzma",
        "-I external/org_xz_xz/src/liblzma/rangecoder",
        "-I external/org_xz_xz/src/liblzma/simple",
        "-DHAVE_CONFIG_H",
    ],
    includes = ["src/liblzma/api"],
    linkstatic = 1,
    visibility = ["//visibility:public"],
    deps = ["@com_curoky_rules_pkg//recipes/xz/default/extra:config"],
)
