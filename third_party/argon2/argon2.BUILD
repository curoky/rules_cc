load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "argon2",
    srcs = glob(
        [
            "src/**/*.h",
            "src/**/*.c",
        ],
        exclude = [
            "**/test.c",
            "**/bench.c",
            "**/genkat.c",
            "**/opt.c",
            "**/run.c",
        ],
    ),
    hdrs = glob(["include/*.h"]),
    copts = [
        "-std=c++17",
        "-Isrc",
    ],
    includes = ["include"],
    visibility = ["//visibility:public"],
)
