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

licenses(["notice"])  # MIT

# cc_library(
#     name = "argon2",
#     srcs = [
#         "src/core.c",
#         "src/argon2.c",
#         "src/encoding.c",
#         "src/thread.c",
#         "src/ref.c",
#     ] + [
#         "src/core.h",
#         "src/encoding.h",
#         "src/thread.h",
#     ] + glob([
#         "src/blake2/*.h",
#         "src/blake2/*.c",
#     ]),
#     hdrs = ["include/argon2.h"],
#     include_prefix = "",
#     strip_include_prefix = "include",
#     visibility = ["//visibility:public"],
# )

cc_library(
    name = "argon2",
    srcs = glob(
        [
            "src/**/*.h",
            "src/**/*.c",
        ],
        [
            "**/test.c",
            "**/bench.c",
            "**/genkat.c",
            "**/opt.c",
            "**/run.c",
        ],
    ),
    hdrs = glob(["include/*.h"]),
    copts = [
        "-std=c++17",
        "-Isrc",
    ],
    includes = ["include"],
    visibility = ["//visibility:public"],
)
