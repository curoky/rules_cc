load("@rules_cc//cc:defs.bzl", "cc_library")

filegroup(
    name = "snappy_stubs_public_h_in",
    srcs = ["snappy-stubs-public.h.in"],
)

genrule(
    name = "snappy_stubs_public_h",
    srcs = [":snappy_stubs_public_h_in"],
    outs = ["snappy-stubs-public.h"],
    cmd = """
    export HAVE_SYS_UIO_H_01=1
    export PROJECT_VERSION_MAJOR=1
    export PROJECT_VERSION_MINOR=1
    export PROJECT_VERSION_PATCH=8
    envsubst < $< > $@
    """,
)

cc_library(
    name = "snappy",
    srcs = glob(
        ["**/*.cc"],
        exclude = [
            "*test*.cc",
            "*fuzzer.cc",
            "snappy_benchmark.cc",
        ],
    ),
    hdrs = glob(["**/*.h"]) + [":snappy_stubs_public_h"],
    defines = ["HAVE_CONFIG_H"],
    includes = ["."],
    visibility = ["//visibility:public"],
    deps = ["@com_curoky_rules_cc//third_party/snappy/extra:config"],
)
