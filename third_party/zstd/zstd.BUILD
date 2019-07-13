# Ref:
#  - https://github.com/nelhage/rules_boost/blob/master/BUILD.zstd
load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "zstd",
    srcs = glob(
        ["lib/**/*.c"],
        ["lib/legacy/**"],
    ),
    hdrs = glob(["lib/**/*.h"]),
    includes = [
        "lib",
        "lib/dictBuilder",
    ],
    visibility = ["//visibility:public"],
)
