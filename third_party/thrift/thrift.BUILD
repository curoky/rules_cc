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



load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("@rules_flex//flex:flex.bzl", "flex")
load("@rules_bison//bison:bison.bzl", "bison")

flex(
    name = "thriftl",
    src = "compiler/cpp/src/thrift/thriftl.ll",
)

bison(
    name = "thrifty",
    src = "compiler/cpp/src/thrift/thrifty.yy",
)

genrule(
    name = "copy_thrifty",
    srcs = [":thrifty"],
    outs = [
        "thrift/thrifty.hh",
        "thrift/thrifty.cc",
    ],
    cmd = "mkdir -p $(@D)/thrift && mv $(SRCS) $(@D)/thrift/ && mv $(@D)/thrift/thrifty.h $(@D)/thrift/thrifty.hh",
)

genrule(
    name = "compiler_version",
    srcs = ["compiler/cpp/src/thrift/version.h.in"],
    outs = ["thrift/version.h"],
    cmd = "sed 's/@PACKAGE_VERSION@/0.13.0/g' $< >$@",
)

cc_binary(
    name = "thriftc",
    srcs = glob(
        [
            "compiler/cpp/src/thrift/**/*.h",
            "compiler/cpp/src/thrift/**/*.cc",
            "compiler/cpp/src/thrift/**/*.cpp",
        ],
        exclude = ["compiler/cpp/src/thrift/logging.cc"],
    ) + [
        ":thriftl",
        ":copy_thrifty",
        ":compiler_version",
    ],
    includes = ["compiler/cpp/src"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "thrift",
    srcs = glob(
        [
            "lib/cpp/src/thrift/**/*.cpp",
            "lib/cpp/src/thrift/**/*.tcc",
        ],
        exclude = [
            "lib/cpp/src/thrift/windows/**",
            "lib/cpp/src/thrift/qt/**",
        ],
    ),
    hdrs = glob(["lib/cpp/src/thrift/**/*.h"]),
    # copts = ["-Ilib/cpp/src/"],
    includes = ["lib/cpp/src"],
    visibility = ["//visibility:public"],
    deps = [
        "@boost//:algorithm",
        "@boost//:locale",
        "@boost//:noncopyable",
        "@boost//:numeric_conversion",
        "@boost//:scoped_array",
        "@boost//:shared_array",
        "@boost//:smart_ptr",
        "@boost//:tokenizer",
        "@com_github_libevent_libevent//:libevent",
        "@rules_3rd//third_party/thrift/extra:config",
        "@zlib",
    ],
)
