load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lz4",
    srcs = glob(["lib/*.c"]),
    hdrs = glob(["lib/*.h"]),
    includes = ["lib"],
    visibility = ["//visibility:public"],
)
