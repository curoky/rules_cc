load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "city",
    srcs = ["src/city.cc"],
    hdrs = glob(["src/*.h"]),
    includes = ["src/"],
    visibility = ["//visibility:public"],
    deps = ["@rules_3rd//third_party/cityhash/extra:config"],
)
