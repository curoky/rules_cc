load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

def native_github_repo(name, remote, branch = "master", patch_cmds = []):
    if not remote.startswith("http"):
        remote = "https://github.com/" + remote + ".git"
    return git_repository(name = name, remote = remote, branch = branch, patch_cmds = patch_cmds)

def new_github_repo(name, remote, path = None, branch = "master"):
    if path == None:
        path = remote.rsplit("/")[-1]
        path = path + "/" + path

    if not remote.startswith("http"):
        remote = "https://github.com/" + remote + ".git"

    path = "@rules_3rd//:third_party/" + path + ".BUILD"

    return new_git_repository(
        name = name,
        remote = remote,
        branch = branch,
        build_file = path,
    )

def load_all_repo():
    # https://github.com/nelhage/rules_boost/blob/master/BUILD.boost
    boost_deps()

    native_github_repo("com_github_abseil_abseil", "abseil/abseil-cpp")
    native_github_repo("com_github_catchorg_catch2", "catchorg/Catch2", branch = "v2.x")
    native_github_repo("com_github_gflags_gflags", "gflags/gflags")
    native_github_repo("com_github_google_benchmark", "google/benchmark")
    native_github_repo("com_github_google_boringssl", "google/boringssl", branch = "master-with-bazel")
    native_github_repo("com_github_google_brotli", "google/brotli")
    native_github_repo(
        "com_github_google_double_conversion",
        "google/double-conversion",
        patch_cmds = [
            "sed -i -e '10i\\includes = [\".\"],' BUILD",
        ],
    )
    native_github_repo("com_github_google_flatbuffers", "google/flatbuffers")
    native_github_repo("com_github_google_glog", "google/glog")
    native_github_repo("com_github_google_gtest", "google/googletest")
    native_github_repo("com_github_google_re2", "google/re2")
    native_github_repo("com_google_protobuf", "protocolbuffers/protobuf")

    new_github_repo("com_axboe_liburing", "axboe/liburing")
    new_github_repo("com_github_aappleby_murmurhash", "aappleby/smhasher", path = "murmurhash/murmurhash")
    new_github_repo("com_github_apache_thrift", "apache/thrift", branch = "0.13.0")
    new_github_repo("com_github_cameron314_concurrentqueue", "cameron314/concurrentqueue")
    new_github_repo("com_github_cameron314_readerwriterqueue", "cameron314/readerwriterqueue")
    new_github_repo("com_github_cjson", "DaveGamble/cJSON", path = "cjson/cjson")
    new_github_repo("com_github_cpp_httplib", "yhirose/cpp-httplib")
    new_github_repo("com_github_facebook_fbthrift", "facebook/fbthrift", branch = "v2020.10.19.00")
    new_github_repo("com_github_facebook_folly", "facebook/folly")
    new_github_repo("com_github_facebook_proxygen", "facebook/proxygen", branch = "v2020.10.19.00")
    new_github_repo("com_github_facebook_wangle", "facebook/wangle", branch = "v2020.10.19.00")
    new_github_repo("com_github_facebook_zstd", "facebook/zstd")
    new_github_repo("com_github_facebookincubator_fizz", "facebookincubator/fizz", branch = "v2020.10.19.00")
    new_github_repo("com_github_fmtlib_fmt", "fmtlib/fmt", path = "fmtlib/fmt")
    new_github_repo("com_github_gabime_spdlog", "gabime/spdlog", branch = "v1.x")
    new_github_repo("com_github_google_cityhash", "google/cityhash")
    new_github_repo("com_github_google_crc32c", "google/crc32c")
    new_github_repo("com_github_jsoncpp", "open-source-parsers/jsoncpp")
    new_github_repo("com_github_lz4", "lz4/lz4", branch = "dev")
    new_github_repo("com_github_msgpack_msgpack", "msgpack/msgpack-c", path = "msgpack/msgpack", branch = "cpp_master")
    new_github_repo("com_github_neargye_nameof", "Neargye/nameof")
    new_github_repo("com_github_nlohmann_json", "nlohmann/json", path = "nlohmann_json/json")
    new_github_repo("com_github_parallel_hashmap", "greg7mdp/parallel-hashmap")
    new_github_repo("com_github_restclient", "mrtazz/restclient-cpp", path = "restclient/restclient")
    new_github_repo("com_github_taskflow_taskflow", "taskflow/taskflow")
    new_github_repo("com_github_tencent_rapidjson", "Tencent/rapidjson")
    new_github_repo("com_github_ubpa_usrefl", "Ubpa/USRefl", path = "usrefl/usrefl")
    new_github_repo("com_github_whoshuu_cpr", "whoshuu/cpr")
    new_github_repo("zlib", "madler/zlib")

    new_git_repository(
        name = "com_github_google_diff_match_patch",
        branch = "master",
        build_file = "@rules_3rd//:third_party/diff-match-patch/diff-match-patch.BUILD",
        patch_cmds = [
            "sed -i -e \"s/<QtCore>/<QtCore\\/QtCore>/g\" cpp/diff_match_patch.cpp",
            'sed -i -e "s/toAscii()/toLatin1()/g" cpp/diff_match_patch.cpp',
        ],
        remote = "https://github.com/google/diff-match-patch.git",
    )

    http_archive(
        name = "com_github_curl",
        build_file = "@rules_3rd//:third_party/curl/curl.BUILD",
        sha256 = "01ae0c123dee45b01bbaef94c0bc00ed2aec89cb2ee0fd598e0d302a6b5e0a98",
        # branch = "curl-7_69_1",
        strip_prefix = "curl-7.69.1",
        urls = ["https://curl.haxx.se/download/curl-7.69.1.tar.gz"],
    )

    http_archive(
        name = "org_openssl",
        build_file = "@rules_3rd//:third_party/openssl/openssl.BUILD",
        sha256 = "ddb04774f1e32f0c49751e21b67216ac87852ceb056b75209af2443400636d46",
        strip_prefix = "openssl-1.1.1g",
        urls = ["https://www.openssl.org/source/openssl-1.1.1g.tar.gz"],
    )

    http_archive(
        name = "com_github_google_snappy",
        build_file = "@rules_3rd//:third_party/snappy/snappy.BUILD",
        sha256 = "284891411a87e313753ce992b28739e4eb47ddb49ec00e5c5d97498cd4f8a305",
        strip_prefix = "snappy-ea660b57d65d68d521287c903459b6dd3b2804d0",
        urls = ["https://github.com/google/snappy/archive/ea660b57d65d68d521287c903459b6dd3b2804d0.tar.gz"],
    )

    http_archive(
        name = "com_github_argon2",
        build_file = "@rules_3rd//:third_party/argon2/argon2.BUILD",
        sha256 = "eaea0172c1f4ee4550d1b6c9ce01aab8d1ab66b4207776aa67991eb5872fdcd8",
        strip_prefix = "phc-winner-argon2-20171227",
        url = "https://github.com/P-H-C/phc-winner-argon2/archive/20171227.tar.gz",
    )

    http_archive(
        name = "com_github_libsodium",
        build_file = "@rules_3rd//:third_party/libsodium/libsodium.BUILD",
        sha256 = "0c14604bbeab2e82a803215d65c3b6e74bb28291aaee6236d65c699ccfe1a98c",
        strip_prefix = "libsodium-1.0.16",
        url = "https://github.com/jedisct1/libsodium/archive/1.0.16.tar.gz",
    )

    http_archive(
        name = "xz",
        build_file = "@rules_3rd//:third_party/xz/xz.BUILD",
        sha256 = "f6f4910fd033078738bd82bfba4f49219d03b17eb0794eb91efbae419f4aba10",
        strip_prefix = "xz-5.2.5",
        url = "https://tukaani.org/xz/xz-5.2.5.tar.gz",
    )

    # http_archive(
    #     name = "com_github_facebook_zstd",
    #     build_file = "@rules_3rd//:third_party/zstd/zstd.BUILD",
    #     sha256 = "188ba167e7a507b545c5f455af4afe3a34b2cee5551949fa000a8218ff4fda67",
    #     strip_prefix = "zstd-bd2740f3476c46b9f69d59e49e7391c2762e04b3",
    #     urls = ["https://github.com/facebook/zstd/archive/bd2740f3476c46b9f69d59e49e7391c2762e04b3.tar.gz"],
    # )

    new_git_repository(
        name = "com_github_libevent_libevent",
        branch = "5df3037d10556bfcb675bc73e516978b75fc7bc7",  # release-2.1.12-stable
        build_file = "@rules_3rd//:third_party/libevent/libevent.BUILD",
        remote = "https://github.com/libevent/libevent",
    )

    new_git_repository(
        name = "com_pagure_libaio",
        branch = "master",
        build_file = "@rules_3rd//:third_party/libaio/libaio.BUILD",
        remote = "https://pagure.io/libaio.git",
    )

    native.new_local_repository(
        name = "libiberty",
        build_file_content = """
cc_library(
    name = "libiberty",
    srcs = ["lib/libiberty.a"],
    hdrs = glob(["include/libiberty/*.h"]),
    visibility = ["//visibility:public"],
    includes = ["include/libiberty"],
)
        """,
        path = "/home/linuxbrew/.linuxbrew/opt/libiberty",
    )

    native.new_local_repository(
        # https://github.com/justbuchanan/bazel_rules_qt.git
        name = "qt",
        build_file = "@rules_3rd//:third_party/qt/qt.BUILD",
        # path = "/usr/include/x86_64-linux-gnu/qt5",
        path = "/home/linuxbrew/.linuxbrew/opt/qt@5.13.2",
    )

    native.new_local_repository(
        name = "tbb",
        build_file_content = """
cc_library(
    name = "tbb",
    srcs = ["lib/libtbb.so.2"],
    hdrs = glob(["include/**/*.h"]),
    visibility = ["//visibility:public"],
    includes = ["include"],
)
        """,
        path = "/home/linuxbrew/.linuxbrew/opt/tbb",
    )