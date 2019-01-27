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

package(default_visibility = ["//visibility:public"])

"""
load("@rules_flex//flex:flex.bzl", "flex")
load("@rules_bison//bison:bison.bzl", "bison")
flex(
    name = "thriftl_srcs",
    src = "thrift/compiler/parse/thriftl.ll",
)

bison(
    name = "thrifty_srcs",
    src = "thrift/compiler/parse/thriftl.yy",
)

cc_library(
    name = "compiler",
    srcs = glob(
        ["thrift/compiler/**/*.cc"],
        [
            "thrift/compiler/**/test/**",
            "thrift/compiler/**/example/**",
            "thrift/compiler/**/benchmark/**",
        ],
    ) + [
        ":thriftl_srcs",
        ":thrifty_srcs",
    ],
    hdrs = glob([
        "thrift/compiler/**/*.h",
    ]),
    copts = [
        "-std=c++17",
        # "-DTHRIFTY_HH=",
        "-DTHRIFT_HAVE_LIBSNAPPY=0",
    ],
    includes = ["."],
    linkopts = ["-static"],
    visibility = ["//visibility:public"],
    deps = ["@com_github_facebook_folly//:folly"],
)
"""

# from cpp
cc_library(
    name = "thrift-core",
    srcs = [
        "thrift/lib/cpp/Thrift.cpp",
        "thrift/lib/cpp2/FieldRef.cpp",
    ],
    hdrs = glob([
        "thrift/lib/thrift/*.h",
        "thrift/lib/cpp/**/*.h",
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    deps = [
        "@com_github_facebook_folly//:folly",
    ],
)

cc_library(
    name = "concurrency",
    srcs = glob([
        "thrift/lib/cpp/concurrency/*.cpp",
    ]),
    hdrs = glob([
        "thrift/lib/cpp/**/*.h",
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    deps = [
        "@com_github_facebook_folly//:folly",
    ],
)

cc_library(
    name = "transport",
    srcs = glob([
        "thrift/lib/cpp/transport/*.cpp",
    ]) + [
        "thrift/lib/cpp/util/VarintUtils.cpp",
        "thrift/lib/cpp/util/THttpParser.cpp",
        "thrift/lib/cpp/util/PausableTimer.cpp",
    ],
    hdrs = glob([
        "thrift/lib/cpp/**/*.h",
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    deps = [
        "@com_github_facebook_folly//:folly",
        "@rules_3rd//third_party/fbthrift/extra:rpcmetadata",
    ],
)

cc_library(
    name = "async",
    srcs = glob([
        "thrift/lib/cpp/async/*.cpp",
    ]) + [
        "thrift/lib/cpp/ContextStack.cpp",
        "thrift/lib/cpp/EventHandlerBase.cpp",
        "thrift/lib/cpp/server/TServerObserver.cpp",
    ],
    hdrs = glob([
        "thrift/lib/cpp/**/*.h",
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    deps = [
        "@com_github_facebook_folly//:folly",
        "@rules_3rd//third_party/fbthrift/extra:rpcmetadata",
    ],
)

cc_library(
    name = "thrift",
    deps = [
        ":async",
        ":concurrency",
        ":thriftprotocol",
        ":transport",
    ],
)

cc_library(
    name = "thriftmetadata",
)

cc_library(
    name = "thriftfrozen2",
)

cc_library(
    name = "gen",
    srcs = glob([
        "thrift/lib/cpp2/gen/*.cpp",
    ]),
    hdrs = glob([
        "thrift/lib/cpp/**/*.h",
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    deps = [
        "@com_github_facebook_folly//:folly",
    ],
)

cc_library(
    name = "thriftprotocol",
    srcs = glob([
        "thrift/lib/cpp/protocol/*.cpp",
        "thrift/lib/cpp2/protocol/*.cpp",
    ]),
    hdrs = glob([
        "thrift/lib/cpp/**/*.h",
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    deps = [
        "@com_github_facebook_folly//:folly",
        "@rules_3rd//third_party/fbthrift/extra:frozen",
        "@rules_3rd//third_party/fbthrift/extra:reflection",
    ],
)

cc_library(
    name = "thriftcpp2",
    srcs = glob(
        [
            "thrift/lib/cpp2/async/*.cpp",
            "thrift/lib/cpp2/security/**/*.cpp",
            "thrift/lib/cpp2/server/*.cpp",
            "thrift/lib/cpp2/server/peeking/*.cpp",
            "thrift/lib/cpp2/transport/**/*.cpp",
            "thrift/lib/cpp2/util/*.cpp",
            "thrift/lib/cpp2/*.cpp",
        ],
        [
            "thrift/lib/cpp2/async/HTTP*.cpp",
            "thrift/lib/cpp2/transport/core/testutil/*.cpp",
            "thrift/lib/cpp2/**/test/**/*.cpp",
            "thrift/lib/cpp2/**/testutil/**/*.cpp",
        ],
    ),
    hdrs = glob([
        "thrift/lib/cpp2/**/*.h",
    ]),
    copts = [
        "-std=c++17",
    ],
    includes = ["."],
    visibility = ["//visibility:public"],
    deps = [
        ":concurrency",
        ":thrift",
        ":thriftprotocol",
        "@com_github_facebook_folly//:folly",
        "@com_github_facebook_proxygen//:proxygen",
        "@com_github_facebook_wangle//:wangle",
        "@rules_3rd//third_party/fbthrift/extra:rpcmetadata",
        "@zlib",
    ],
)
