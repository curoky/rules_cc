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
load("@com_curoky_rules_pkg//bazel:copts.bzl", "DEFAULT_COPTS")

cc_library(
    name = "folly",
    srcs = glob(
        ["folly/**/*.cpp"],
        exclude = [
            "folly/**/test/**",
            "folly/**/example/**",
            "folly/python/**",
            "folly/tools/**",
            "folly/experimental/exception_tracer/**",
            "folly/experimental/TestUtil.cpp",
            "folly/experimental/io/HugePageUtil.cpp",
            "folly/experimental/JSONSchemaTester.cpp",
        ],
    ),
    hdrs = glob(["folly/**/*.h"]),
    copts = DEFAULT_COPTS,
    includes = ["."],
    linkopts = [
        "-ldl",
        "-lpthread",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@boost//:algorithm",
        "@boost//:container",
        "@boost//:context",
        "@boost//:crc",
        "@boost//:filesystem",
        "@boost//:function_types",
        "@boost//:functional",
        "@boost//:interprocess",
        "@boost//:intrusive",
        "@boost//:multi_index",
        "@boost//:operators",
        "@boost//:preprocessor",
        "@boost//:program_options",
        "@boost//:regex",
        "@boost//:thread",
        "@boost//:variant",
        "@com_curoky_rules_pkg//recipes/folly/default/extra:config",
        "@com_github_axboe_liburing//:liburing",
        "@com_github_fmtlib_fmt//:fmt",
        "@com_github_google_double_conversion//:double-conversion",
        "@com_github_google_glog//:glog",
        "@com_github_google_googletest//:gtest",
        "@com_github_google_snappy//:snappy",
        "@com_github_jedisct1_libsodium//:sodium",
        "@com_github_libevent_libevent//:libevent",
        "@com_pagure_libaio//:libaio",
        "@libiberty",
        "@net_zlib_zlib//:zlib",
        "@org_openssl//:crypto",
        "@org_openssl//:ssl",
        "@org_xz_xz//:xz",
    ],
)
