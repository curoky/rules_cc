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
    name = "rpcmetadata",
    srcs = glob([
        "gen-cpp2/metadata*.cpp",
        "gen-cpp2/RpcMetadata*.cpp",
    ]),
    hdrs = glob([
        "gen-cpp2/metadata*.h",
        "gen-cpp2/metadata*.tcc",
        "gen-cpp2/RpcMetadata*.h",
        "gen-cpp2/RpcMetadata*.tcc",
    ]),
    copts = [
        "-std=c++17",
    ],
    include_prefix = "thrift/lib/thrift",
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_facebook_fbthrift//:gen",
        "@com_github_facebook_fbthrift//:thrift-core",
        "@com_github_facebook_folly//:folly",
    ],
)

cc_library(
    name = "reflection",
    srcs = glob([
        "gen-cpp2/reflection*.cpp",
    ]),
    hdrs = glob([
        "gen-cpp2/reflection*.h",
        "gen-cpp2/reflection*.tcc",
    ]),
    copts = [
        "-std=c++17",
    ],
    include_prefix = "thrift/lib/thrift",
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_facebook_fbthrift//:gen",
    ],
)

cc_library(
    name = "frozen",
    srcs = glob([
        "gen-cpp2/frozen*.cpp",
    ]),
    hdrs = glob([
        "gen-cpp2/frozen*.h",
        "gen-cpp2/frozen*.tcc",
    ]),
    copts = [
        "-std=c++17",
    ],
    include_prefix = "thrift/lib/thrift",
    # includes = ["."],
    visibility = ["//visibility:public"],
    deps = [
        "@rules_3rd//third_party/fbthrift/extra:rpcmetadata",
        "@com_github_facebook_fbthrift//:gen",
    ],
)
