load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "folly",
    srcs = glob(
        ["folly/**/*.cpp"],
        [
            "folly/**/test/**",
            "folly/**/example/**",
            "folly/python/**",
            "folly/tools/**",
            "folly/experimental/crypto/**",
            "folly/experimental/io/AsyncIO.cpp",
            "folly/experimental/io/IoUring.cpp",
            "folly/experimental/io/IoUringBackend.cpp",
            "folly/experimental/TestUtil.cpp",
            "folly/experimental/JSONSchemaTester.cpp",
        ],
    ),
    hdrs = glob(["folly/**/*.h"]),
    copts = [
        "-std=c++17",
        "-Iexternal/com_github_google_double_conversion",
    ],
    includes = ["."],
    linkopts = [
        "-ldl",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@//third_party/folly:config",
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
        "@com_github_fmtlib_fmt//:fmt",
        "@com_github_google_double_conversion//:double-conversion",
        "@com_github_google_glog//:glog",
        "@com_github_google_gtest//:gtest",
        "@com_github_libevent_libevent//:libevent",
        "@libiberty",
        "@org_openssl//:crypto",
        "@org_openssl//:ssl",
        "@zlib",
    ],
)