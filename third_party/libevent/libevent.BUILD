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
    name = "libevent",
    srcs = glob(
        [
            "*.h",
            "*.c",
        ],
        [
            "arc4random.c",  # this is a header
            "bufferevent_async.c",
            "event_iocp.c",
            "buffer_iocp.c",
            "win32select.c",
            "evthread_win32.c",
        ],
    ),
    hdrs = glob(["include/**/*.h"]) + ["arc4random.c"],
    copts = [
        "-I.",
        "-DHAVE_CONFIG_H",
        "-Wno-unused-but-set-variable",
    ],
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = [
        "@rules_3rd//third_party/libevent/extra:config",
        "@rules_3rd//third_party/libevent/extra:config-private",
        "@org_openssl//:ssl",
    ],
)
