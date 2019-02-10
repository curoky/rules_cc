# Copyright 2019 curoky(cccuroky@gmail.com).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def native_github_repo(name, remote, branch = "master", patch_cmds = [], patches = [], patch_args = ["-p1"]):
    if not remote.startswith("http"):
        remote = "https://github.com/" + remote + ".git"
    return git_repository(
        name = name,
        remote = remote,
        branch = branch,
        patch_cmds = patch_cmds,
        patches = patches,
        patch_args = patch_args,
    )

def new_github_repo(name, remote, path = None, branch = "master", patch_cmds = [], patches = [], patch_args = ["-p1"]):
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
        patch_cmds = patch_cmds,
        patches = patches,
        patch_args = patch_args,
    )

def register():
    native_github_repo("rules_python", "bazelbuild/rules_python")
    native_github_repo(
        "com_github_nelhage_rules_boost",
        "nelhage/rules_boost",
        patch_cmds = [
            'sed -i -e "s/openssl/org_openssl/g" boost/boost.bzl',
            'sed -i -e "s/org_lzma_lzma/org_xz_xz/g" boost/boost.bzl',
            'sed -i -e "s?org_lzma_lzma//:lzma?org_xz_xz//:xz?g" BUILD.boost',
            'sed -i -e "s/org_lzma_lzma/org_xz_xz/g" BUILD.lzma',
        ],
    )

    native_github_repo("com_github_abseil_abseil", "abseil/abseil-cpp")
    native_github_repo("com_github_catchorg_catch2", "catchorg/Catch2", branch = "v2.x")
    native_github_repo(
        "com_github_cppitertools",
        "ryanhaining/cppitertools",
        patch_cmds = [
            "sed -i -e '42i\\include_prefix = \"cppitertools\",' BUILD",
        ],
    )
    native_github_repo("com_github_gflags_gflags", "gflags/gflags")
    native_github_repo("com_github_google_benchmark", "google/benchmark")
    native_github_repo("com_github_google_boringssl", "google/boringssl", branch = "master-with-bazel")
    native_github_repo("com_github_google_brotli", "google/brotli")
    native_github_repo(
        "com_github_google_double_conversion",
        "google/double-conversion",
        patch_cmds = ["sed -i -e '10i\\includes = [\".\"],' BUILD"],
    )
    native_github_repo("com_github_google_flatbuffers", "google/flatbuffers")
    native_github_repo("com_github_google_glog", "google/glog")
    native_github_repo("com_github_google_gtest", "google/googletest")
    native_github_repo("com_github_google_re2", "google/re2")
    native_github_repo("com_github_immer", "arximboldi/immer")
    native_github_repo("com_google_protobuf", "protocolbuffers/protobuf", patches = [
        "@rules_3rd//:third_party/protobuf/protobuf.patch",
    ])
    native_github_repo("com_grail_bazel_compdb", "grailbio/bazel-compilation-database")

    new_github_repo("com_axboe_liburing", "axboe/liburing")
    new_github_repo("com_github_aappleby_murmurhash", "aappleby/smhasher", path = "murmurhash/murmurhash")
    new_github_repo("com_github_apache_thrift", "apache/thrift", branch = "0.13.0")
    new_github_repo("com_github_argon2", "P-H-C/phc-winner-argon2", path = "argon2/argon2")
    new_github_repo("com_github_cameron314_concurrentqueue", "cameron314/concurrentqueue")
    new_github_repo("com_github_cameron314_readerwriterqueue", "cameron314/readerwriterqueue")
    new_github_repo("com_github_cjson", "DaveGamble/cJSON", path = "cjson/cjson")
    new_github_repo("com_github_cpp_httplib", "yhirose/cpp-httplib")
    new_github_repo("com_github_cpp_peglib", "yhirose/cpp-peglib", path = "peglib/peglib")
    new_github_repo("com_github_facebook_fatal", "facebook/fatal")
    new_github_repo("com_github_facebook_fbthrift", "facebook/fbthrift", branch = "master")
    new_github_repo("com_github_facebook_folly", "facebook/folly", branch = "master")
    new_github_repo("com_github_facebook_proxygen", "facebook/proxygen", branch = "master")
    new_github_repo("com_github_facebook_wangle", "facebook/wangle", branch = "master")
    new_github_repo("com_github_facebook_zstd", "facebook/zstd")
    new_github_repo("com_github_facebookincubator_fizz", "facebookincubator/fizz", branch = "master")
    new_github_repo("com_github_fmtlib_fmt", "fmtlib/fmt", path = "fmtlib/fmt")
    new_github_repo("com_github_gabime_spdlog", "gabime/spdlog", branch = "v1.x")
    new_github_repo("com_github_google_cityhash", "google/cityhash")
    new_github_repo("com_github_google_crc32c", "google/crc32c")
    new_github_repo("com_github_google_snappy", "google/snappy")
    new_github_repo("com_github_icecream", "renatoGarcia/icecream-cpp", path = "icecream/icecream")
    new_github_repo("com_github_jsoncpp", "open-source-parsers/jsoncpp")
    new_github_repo("com_github_lz4", "lz4/lz4", branch = "dev")
    new_github_repo("com_github_msgpack_msgpack", "msgpack/msgpack-c", path = "msgpack/msgpack", branch = "cpp_master")
    new_github_repo("com_github_neargye_nameof", "Neargye/nameof")
    new_github_repo("com_github_nlohmann_json", "nlohmann/json", path = "nlohmann_json/json")
    new_github_repo("com_github_parallel_hashmap", "greg7mdp/parallel-hashmap")
    new_github_repo("com_github_refl_cpp", "veselink1/refl-cpp")
    new_github_repo("com_github_restclient", "mrtazz/restclient-cpp", path = "restclient/restclient")
    new_github_repo("com_github_taskflow_taskflow", "taskflow/taskflow")
    new_github_repo("com_github_tencent_rapidjson", "Tencent/rapidjson")
    new_github_repo("com_github_ubpa_usrefl", "Ubpa/USRefl", path = "usrefl/usrefl")
    new_github_repo("com_github_whoshuu_cpr", "whoshuu/cpr")
    new_github_repo("net_zlib_zlib", "madler/zlib")

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
        name = "com_github_libsodium",
        build_file = "@rules_3rd//:third_party/libsodium/libsodium.BUILD",
        sha256 = "0c14604bbeab2e82a803215d65c3b6e74bb28291aaee6236d65c699ccfe1a98c",
        strip_prefix = "libsodium-1.0.16",
        url = "https://github.com/jedisct1/libsodium/archive/1.0.16.tar.gz",
    )

    http_archive(
        name = "org_xz_xz",
        build_file = "@rules_3rd//:third_party/xz/xz.BUILD",
        sha256 = "f6f4910fd033078738bd82bfba4f49219d03b17eb0794eb91efbae419f4aba10",
        strip_prefix = "xz-5.2.5",
        url = "https://tukaani.org/xz/xz-5.2.5.tar.gz",
    )

    http_archive(
        name = "rules_m4",
        urls = ["https://github.com/jmillikin/rules_m4/releases/download/v0.2/rules_m4-v0.2.tar.xz"],
        sha256 = "c67fa9891bb19e9e6c1050003ba648d35383b8cb3c9572f397ad24040fb7f0eb",
    )

    http_archive(
        name = "rules_flex",
        urls = ["https://github.com/jmillikin/rules_flex/releases/download/v0.2/rules_flex-v0.2.tar.xz"],
        sha256 = "f1685512937c2e33a7ebc4d5c6cf38ed282c2ce3b7a9c7c0b542db7e5db59d52",
        # don't special language by default
        patch_cmds = ["sed -i '76d' flex/flex.bzl"],
    )

    http_archive(
        name = "rules_bison",
        urls = ["https://github.com/jmillikin/rules_bison/releases/download/v0.2/rules_bison-v0.2.tar.xz"],
        sha256 = "6ee9b396f450ca9753c3283944f9a6015b61227f8386893fb59d593455141481",
        # don't special language by default
        patch_cmds = ["sed -i '83d' bison/bison.bzl"],
    )

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
