load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "fizz",
    srcs = glob(
        ["fizz/**/*.cpp"],
        exclude = [
            "fizz/**/test/**/*.cpp",
            "fizz/**/javacrypto/**/*.cpp",
        ],
    ),
    hdrs = glob(["fizz/**/*.h"]),
    copts = ["-std=c++17"],
    includes = ["."],
    visibility = ["//visibility:public"],
    deps = [
        "@com_github_facebook_folly//:folly",
        "@com_github_facebook_zstd//:zstd",
        "@com_github_google_brotli//:brotlidec",
        "@com_github_google_brotli//:brotlienc",
        "@com_github_libsodium//:sodium",
    ],
)
