load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
load("@rules_m4//m4:m4.bzl", "m4_register_toolchains")
load("@rules_flex//flex:flex.bzl", "flex_register_toolchains")
load("@rules_bison//bison:bison.bzl", "bison_register_toolchains")

def loads():
    # https://github.com/nelhage/rules_boost/blob/master/BUILD.boost
    boost_deps()

    m4_register_toolchains()

    flex_register_toolchains()

    bison_register_toolchains()
