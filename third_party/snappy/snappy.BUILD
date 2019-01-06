load("@rules_cc//cc:defs.bzl", "cc_library")

filegroup(
    name = "snappy_stubs_public_h_in",
    srcs = ["snappy-stubs-public.h.in"],
)

genrule(
    name = "snappy_stubs_public_h",
    srcs = ["@//third_party/snappy/extra:snappy-stubs-public.h"],
    outs = ["snappy-stubs-public.h"],
    cmd = "cp $< $@",
)

genrule(
    name = "config_h",
    srcs = ["@//third_party/snappy/extra:config.h"],
    outs = ["config.h"],
    cmd = "cp $< $@",
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
