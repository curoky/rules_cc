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

cc_library(
    name = "xz",
    srcs = glob(
        ["src/**/*.c"],
        exclude = [
            "src/xz/**",
            "src/liblzma/check/crc32_small.*",
        ],
    ),
    hdrs = glob(["src/**/*.h"]),
    copts = [
        "-Isrc/common",
        "-Isrc/liblzma/lz",
        "-Isrc/liblzma/common",
        "-Isrc/liblzma/check",
        "-DHAVE_CONFIG_H",
    ],
    # includes = [
    #     "src/common",
    #     "src/liblzma/api",
    #     "src/liblzma/check",
    #     "src/liblzma/common",
    #     "src/liblzma/delta",
    #     "src/liblzma/lz",
    #     "src/liblzma/lzma",
    #     "src/liblzma/rangecoder",
    #     "src/liblzma/simple",
    # ],
    linkstatic = 1,
    visibility = ["//visibility:public"],
    deps = ["@com_curoky_rules_cc//third_party/xz/extra:config"],
)
