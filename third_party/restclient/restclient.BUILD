load("@rules_cc//cc:defs.bzl", "cc_library")
load("@rules_m4//m4:m4.bzl", "m4")

m4(
    name = "version_h",
    srcs = ["m4/version.h.m4"],
    m4_options = ["-DM4_RESTCLIENT_VERSION=0.5.2"],
    output = "include/restclient-cpp/version.h",
)

# genrule(
#     name = "version_h",
#     srcs = ["m4/version.h.m4"],
#     outs = ["include/restclient-cpp/version.h"],
#     cmd = "$(M4) -DM4_RESTCLIENT_VERSION=0.5.2 $(SRCS) > $@",
#     toolchains = ["@rules_m4//m4:current_m4_toolchain"],
# )

cc_library(
    name = "restclient",
    srcs = glob(["source/**/*.cc"]),
    hdrs = glob(["include/**/*.h"]) + [":version_h"],
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = ["@com_github_curl//:curl"],
)
