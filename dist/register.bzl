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

def register():
    new_git_repository(
        remote = "https://github.com/lz4/lz4",
        name = "com_github_lz4_lz4",
        branch = "dev",
        build_file = "@com_curoky_rules_cc//:dist/lz4/lz4/dev.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/ryanhaining/cppitertools",
        name = "com_github_ryanhaining_cppitertools",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/ryanhaining/cppitertools/master.BUILD",
    )
    new_git_repository(
        remote = "https://pagure.io/libaio.git",
        name = "com_pagure_libaio",
        build_file = "@com_curoky_rules_cc//:third_party/libaio/libaio.BUILD",
        branch = "master",
    )
    git_repository(
        remote = "https://github.com/jmillikin/rules_bison",
        name = "rules_bison",
        patch_cmds = ["sed -i '83d' bison/bison.bzl"],
        tag = "v0.2",
    )
    new_git_repository(
        remote = "https://github.com/openssl/openssl",
        name = "org_openssl",
        build_file = "@com_curoky_rules_cc//:third_party/openssl/openssl.BUILD",
        tag = "OpenSSL_1_1_1g",
    )
    new_git_repository(
        remote = "https://github.com/facebookincubator/fizz",
        name = "com_github_facebookincubator_fizz",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/facebookincubator/fizz/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/aappleby/smhasher",
        name = "com_github_aappleby_smhasher",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/aappleby/smhasher/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/taskflow/taskflow",
        name = "com_github_taskflow_taskflow",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/taskflow/taskflow/master.BUILD",
    )
    native.new_local_repository(
        name = "qt",
        path = "/home/linuxbrew/.linuxbrew/opt/qt@5.13.2",
        build_file = "@com_curoky_rules_cc//:third_party/qt/qt.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/veselink1/refl-cpp",
        name = "com_github_veselink1_refl_cpp",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/veselink1/refl-cpp/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/xz-mirror/xz",
        name = "org_xz_xz",
        build_file = "@com_curoky_rules_cc//:third_party/xz/xz.BUILD",
        tag = "v5.2.5",
    )
    native.new_local_repository(
        name = "libiberty",
        path = "/home/linuxbrew/.linuxbrew/opt/libiberty",
        build_file = "@com_curoky_rules_cc//:dist/gcc/libiberty/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/google/cityhash",
        name = "com_github_google_cityhash",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/google/cityhash/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/yhirose/cpp-httplib",
        name = "com_github_yhirose_cpp_httplib",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/yhirose/cpp-httplib/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/nlohmann/json",
        name = "com_github_nlohmann_json",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/nlohmann/json/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/catchorg/catch2",
        name = "com_github_catchorg_catch2",
        branch = "v2.x",
    )
    new_git_repository(
        remote = "https://github.com/Tencent/rapidjson",
        name = "com_github_tencent_rapidjson",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/tencent/rapidjson/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/abseil/abseil-cpp",
        name = "com_github_abseil_abseil_cpp",
        branch = "master",
    )
    git_repository(
        remote = "https://github.com/protocolbuffers/protobuf",
        name = "com_google_protobuf",
        patch_cmds = ['sed -i -e "s/@zlib/@net_zlib_zlib/g" BUILD '],
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/facebook/folly",
        name = "com_github_facebook_folly",
        build_file = "@com_curoky_rules_cc//:third_party/folly/folly.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/DaveGamble/cJSON",
        name = "com_github_davegamble_cjson",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/davegamble/cjson/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/facebook/fbthrift",
        name = "com_github_facebook_fbthrift",
        build_file = "@com_curoky_rules_cc//:third_party/fbthrift/fbthrift.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/facebook/wangle",
        name = "com_github_facebook_wangle",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/facebook/wangle/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/open-source-parsers/jsoncpp",
        name = "com_github_open_source_parsers_jsoncpp",
        build_file = "@com_curoky_rules_cc//:third_party/jsoncpp/jsoncpp.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/Neargye/nameof",
        name = "com_github_neargye_nameof",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/neargye/nameof/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/facebook/zstd",
        name = "com_github_facebook_zstd",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/facebook/zstd/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/apache/thrift",
        name = "com_github_apache_thrift",
        build_file = "@com_curoky_rules_cc//:third_party/thrift/thrift.BUILD",
        tag = "v0.14.1",
    )
    git_repository(
        remote = "https://github.com/jmillikin/rules_m4",
        name = "rules_m4",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/msgpack/msgpack-c",
        name = "com_github_msgpack_msgpack_c",
        branch = "cpp_master",
        build_file = "@com_curoky_rules_cc//:dist/msgpack/msgpack-c/cpp_master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/yhirose/cpp-peglib",
        name = "com_github_yhirose_cpp_peglib",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/yhirose/cpp-peglib/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/google/brotli",
        name = "com_github_google_brotli",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/facebook/proxygen",
        name = "com_github_facebook_proxygen",
        build_file = "@com_curoky_rules_cc//:third_party/proxygen/proxygen.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/libevent/libevent",
        name = "com_github_libevent_libevent",
        build_file = "@com_curoky_rules_cc//:third_party/libevent/libevent.BUILD",
        tag = "release-2.1.12-stable",
    )
    git_repository(
        remote = "https://github.com/arximboldi/immer",
        name = "com_github_arximboldi_immer",
        branch = "master",
    )
    git_repository(
        remote = "https://github.com/google/benchmark",
        name = "com_github_google_benchmark",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/cameron314/concurrentqueue",
        name = "com_github_cameron314_concurrentqueue",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/cameron314/concurrentqueue/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/google/snappy",
        name = "com_github_google_snappy",
        build_file = "@com_curoky_rules_cc//:third_party/snappy/snappy.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/gabime/spdlog",
        name = "com_github_gabime_spdlog",
        branch = "v1.x",
        build_file = "@com_curoky_rules_cc//:dist/gabime/spdlog/v1.x.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/google/crc32c",
        name = "com_github_google_crc32c",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/google/crc32c/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/mrtazz/restclient-cpp",
        name = "com_github_mrtazz_restclient_cpp",
        build_file = "@com_curoky_rules_cc//:third_party/restclient/restclient.BUILD",
        branch = "master",
    )
    git_repository(
        remote = "https://github.com/jmillikin/rules_flex",
        name = "rules_flex",
        patch_cmds = ["sed -i '76d' flex/flex.bzl"],
        tag = "v0.2",
    )
    git_repository(
        remote = "https://github.com/nelhage/rules_boost",
        name = "com_github_nelhage_rules_boost",
        patch_cmds = [
            'sed -i -e "s/openssl/org_openssl/g" boost/boost.bzl',
            'sed -i -e "s/org_lzma_lzma/org_xz_xz/g" boost/boost.bzl',
            'sed -i -e "s?org_lzma_lzma//:lzma?org_xz_xz//:xz?g" BUILD.boost',
            'sed -i -e "s/org_lzma_lzma/org_xz_xz/g" BUILD.lzma',
        ],
        branch = "master",
    )
    git_repository(
        remote = "https://github.com/google/boringssl",
        name = "com_github_google_boringssl",
        branch = "aster-with-bazel",
    )
    new_git_repository(
        remote = "https://github.com/google/diff-match-patch",
        name = "com_github_google_diff_match_patch",
        patch_cmds = [
            "sed -i -e \"s/<QtCore>/<QtCore\\/QtCore>/g\" cpp/diff_match_patch.cpp",
            'sed -i -e "s/toAscii()/toLatin1()/g" cpp/diff_match_patch.cpp',
        ],
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/google/diff-match-patch/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/jedisct1/libsodium",
        name = "com_github_jedisct1_libsodium",
        build_file = "@com_curoky_rules_cc//:third_party/libsodium/libsodium.BUILD",
        tag = "1.0.16",
    )
    git_repository(
        remote = "https://github.com/google/glog",
        name = "com_github_google_glog",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/P-H-C/phc-winner-argon2",
        name = "com_github_p_h_c_phc_winner_argon2",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/p-h-c/phc-winner-argon2/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/madler/zlib",
        name = "com_github_madler_zlib",
        build_file = "@com_curoky_rules_cc//:third_party/zlib/zlib.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/axboe/liburing",
        name = "com_github_axboe_liburing",
        build_file = "@com_curoky_rules_cc//:third_party/liburing/liburing.BUILD",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/fmtlib/fmt",
        name = "com_github_fmtlib_fmt",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/fmtlib/fmt/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/google/flatbuffers",
        name = "com_github_google_flatbuffers",
        branch = "master",
    )
    native.new_local_repository(
        name = "tbb",
        path = "/home/linuxbrew/.linuxbrew/opt/tbb",
        build_file = "@com_curoky_rules_cc//:dist/tbb/tbb/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/google/double-conversion",
        name = "com_github_google_double_conversion",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/google/double-conversion/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/google/googletest",
        name = "com_github_google_googletest",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/curl/curl",
        name = "com_github_curl_curl",
        build_file = "@com_curoky_rules_cc//:third_party/curl/curl.BUILD",
        tag = "curl-7_69_1",
    )
    new_git_repository(
        remote = "https://github.com/renatoGarcia/icecream-cpp",
        name = "com_github_renatogarcia_icecream_cpp",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/renatogarcia/icecream-cpp/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/bazelbuild/rules_python",
        name = "rules_python",
        branch = "master",
    )
    native.new_local_repository(
        name = "llvm",
        path = "/home/linuxbrew/.linuxbrew/opt/llvm",
        build_file = "@com_curoky_rules_cc//:third_party/llvm/llvm.BUILD",
    )
    git_repository(
        remote = "https://github.com/gflags/gflags",
        name = "com_github_gflags_gflags",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/cameron314/readerwriterqueue",
        name = "com_github_cameron314_readerwriterqueue",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/cameron314/readerwriterqueue/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/google/re2",
        name = "com_github_google_re2",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/facebook/fatal",
        name = "com_github_facebook_fatal",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/facebook/fatal/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/greg7mdp/parallel-hashmap",
        name = "com_github_greg7mdp_parallel_hashmap",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/greg7mdp/parallel-hashmap/master.BUILD",
    )
    git_repository(
        remote = "https://github.com/grailbio/bazel-compilation-database",
        name = "com_github_grailbio_bazel_compilation_database",
        branch = "master",
    )
    new_git_repository(
        remote = "https://github.com/whoshuu/cpr",
        name = "com_github_whoshuu_cpr",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/whoshuu/cpr/master.BUILD",
    )
    new_git_repository(
        remote = "https://github.com/ubpa/usrefl",
        name = "com_github_ubpa_usrefl",
        branch = "master",
        build_file = "@com_curoky_rules_cc//:dist/ubpa/usrefl/master.BUILD",
    )
