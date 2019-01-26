load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "restclient",
    srcs = glob(["source/**"]),
    hdrs = glob(["include/**"]),
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = [
        "@rules_3rd//third_party/restclient/extra:version",
        "@com_github_curl//:curl",
    ],
)
