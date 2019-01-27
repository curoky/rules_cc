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

exports_files(["LICENSE"])

package(
    default_visibility = ["//visibility:public"],
)

genrule(
    name = "snappy_stubs_public_h",
    srcs = ["@rules_3rd//third_party/snappy/extra:snappy-stubs-public.h"],
    outs = ["snappy-stubs-public.h"],
    cmd = "cp $< $@",
)

genrule(
    name = "config_h",
    srcs = ["@rules_3rd//third_party/snappy/extra:config.h"],
    outs = ["config.h"],
    cmd = "cp $< $@",
)

cc_library(
    name = "snappy",
    srcs = glob(
        ["**/*.cc"],
        exclude = [
            "snappy-test.cc",
            "snappy_unittest.cc",
        ],
    ),
    hdrs = glob(
        ["**/*.h"],
        exclude = ["snappy-test.h"],
    ) + [
        ":config_h",
        ":snappy_stubs_public_h",
    ],
    defines = ["HAVE_CONFIG_H"],
    includes = ["."],
)
