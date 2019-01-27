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

licenses(["notice"])

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
    copts = ["-std=c++17"],
    # copts = ["-Ilib/cpp/src/"],
    includes = ["lib/cpp/src"],
    visibility = ["//visibility:public"],
    deps = [
        "@rules_3rd//third_party/thrift/extra:config",
        "@boost//:algorithm",
        "@boost//:locale",
        "@boost//:noncopyable",
        "@boost//:numeric_conversion",
        "@boost//:scoped_array",
        "@boost//:shared_array",
        "@boost//:smart_ptr",
        "@boost//:tokenizer",
        "@com_curoky_rules_cc//third_party/thrift/extra:config",
        "@com_github_libevent_libevent//:libevent",
        "@zlib",
    ],
)
