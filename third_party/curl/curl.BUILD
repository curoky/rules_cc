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



# Ref: https://github.com/tensorflow/tensorflow/blob/master/third_party/curl.BUILD

load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "curl",
    srcs = glob(
        [
            "include/**/*.h",
            "lib/**/*.h",
            "lib/**/*.c",
        ],
        exclude = [],
    ),
    hdrs = glob(["include/**/*.h"]),
    copts = [
        "-Iexternal/com_github_curl/lib",
        "-D_GNU_SOURCE",
        "-DBUILDING_LIBCURL",
        "-DHAVE_CONFIG_H",
        "-DCURL_DISABLE_FTP",
        "-DCURL_DISABLE_NTLM",  # turning it off in configure is not enough
        "-DHAVE_LIBZ",
        "-DHAVE_ZLIB_H",
        # "-Wno-string-plus-int",
        "-DCURL_MAX_WRITE_SIZE=65536",
    ],
    defines = ["CURL_STATICLIB"],
    includes = ["include"],
    linkopts = ["-lrt"],
    visibility = ["//visibility:public"],
    deps = [
        "@org_openssl//:ssl",
        "@rules_3rd//third_party/curl/extra:config",
        "@net_zlib_zlib//:zlib",
    ],
)
