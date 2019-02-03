# Description:
#   curl is a tool for talking to web servers.

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
        "@zlib",
    ],
)
