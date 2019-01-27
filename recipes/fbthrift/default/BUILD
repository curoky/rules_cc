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

load("@com_curoky_rules_pkg//:recipes/fbthrift/build_defs.bzl", "fbthrift_library")
load("@rules_bison//bison:bison.bzl", "bison")
load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("@rules_flex//flex:flex.bzl", "flex")

cc_binary(
    name = "compiler_generate_build_templates",
    srcs = ["thrift/compiler/generate/build_templates.cc"],
    copts = ["-std=c++17"],
    deps = ["@boost//:filesystem"],
)

filegroup(
    name = "templates_files",
    srcs = glob(["thrift/compiler/generate/templates/**/*.mustache"]),
)

genrule(
    name = "templates_cc",
    srcs = [":templates_files"],
    outs = ["templates.cc"],
    cmd = "$(location :compiler_generate_build_templates) external/com_github_facebook_fbthrift/thrift/compiler/generate/templates >$@",
    tools = [":compiler_generate_build_templates"],
)

flex(
    name = "thriftl",
    src = "thrift/compiler/parse/thriftl.ll",
)

bison(
    name = "thrifty",
    src = "thrift/compiler/parse/thrifty.yy",
    bison_options = [
        "--skeleton=lalr1.cc",
        # "--language=c++",
    ],
)

cc_binary(
    name = "thriftc",
    srcs = glob(
        [
            "thrift/compiler/**/*.h",
            "thrift/compiler/**/*.cc",
            "thrift/compiler/**/*.cpp",
        ],
        exclude = [
            "thrift/compiler/**/test/**",
            "thrift/compiler/**/example/**",
            "thrift/compiler/**/benchmark/**",
            "thrift/compiler/generate/build_templates.cc",
        ],
    ) + [
        ":thriftl",
        ":thrifty",
        ":templates_cc",
    ],
    copts = [
        "-std=c++17",
        "-DTHRIFTY_HH=<thrifty.h>",
        "-DTHRIFT_HAVE_LIBSNAPPY=0",
    ],
    includes = ["."],
    linkopts = ["-static"],
    visibility = ["//visibility:public"],
    deps = ["@com_github_facebook_folly//:folly"],
)

fbthrift_library(
    name = "thrift_files",
    srcs = glob(["thrift/lib/thrift/*.thrift"]),
    include_prefix = "thrift/lib/thrift",
    out_prefix = "thrift/lib/thrift",
    services = [
        "ThriftMetadataService",
        "RocketUpgrade",
    ],
)

cc_library(
    name = "fbthrift",
    srcs = glob(
        ["thrift/lib/cpp*/**/*.cpp"],
        exclude = [
            "thrift/lib/cpp*/**/demo/**",
            "thrift/lib/cpp*/**/test/**",
            "thrift/lib/cpp*/**/tests/**",
            "thrift/lib/cpp*/**/testutil/**",
        ],
    ) + [":thrift_files"],
    hdrs = glob([
        "thrift/lib/thrift/*.h",
        "thrift/lib/cpp*/**/*.h",
    ]),
    copts = ["-std=c++17"],
    includes = ["."],
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_facebook_folly//:folly",
        "@com_github_facebook_proxygen//:proxygen",
        "@com_github_facebook_wangle//:wangle",
        "@net_zlib_zlib//:zlib",
    ],
)
