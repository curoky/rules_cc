# Copyright 2019 curoky(cccuroky@gmail.com).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

config = {
    "name": "com_github_google_brotli",
    "type": "git_repository",
    # "remote": "https://github.com/google/brotli",
    "remote": "https://github.com/pefoley2/brotli",
    "used_version": "heads/master",
    "versions": {
        "heads/master": {},
        "tags/v1.0.9": {},
    },
}

# Note:
# 1: after v1.0.9, brotli use vla-parameter, which gcc-11 throw error by default
#    fix pr: https://github.com/google/brotli/pull/904
# external/com_github_google_brotli/c/dec/decode.c:2036:41: error: argument 2 of type 'const uint8_t *' {aka 'const unsigned char *'} declared as a pointer [-Werror=vla-parameter]
#  2036 |     size_t encoded_size, const uint8_t* encoded_buffer, size_t* decoded_size,
#       |                          ~~~~~~~~~~~~~~~^~~~~~~~~~~~~~
# In file included from external/com_github_google_brotli/c/dec/decode.c:7:
# bazel-out/k8-dbg/bin/external/com_github_google_brotli/_virtual_includes/brotli_inc/brotli/decode.h:204:19: note: previously declared as a variable length array 'const uint8_t[*decoded_size]' {aka 'const unsigned char[*decoded_size]'}
#   204 |     const uint8_t encoded_buffer[BROTLI_ARRAY_PARAM(encoded_size)],
#       |     ~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# external/com_github_google_brotli/c/dec/decode.c:2037:14: error: argument 4 of type 'uint8_t *' {aka 'unsigned char *'} declared as a pointer [-Werror=vla-parameter]
#  2037 |     uint8_t* decoded_buffer) {
#       |     ~~~~~~~~~^~~~~~~~~~~~~~
# In file included from external/com_github_google_brotli/c/dec/decode.c:7:
# bazel-out/k8-dbg/bin/external/com_github_google_brotli/_virtual_includes/brotli_inc/brotli/decode.h:206:13: note: previously declared as a variable length array 'uint8_t[encoded_size]' {aka 'unsigned char[encoded_size]'}
#   206 |     uint8_t decoded_buffer[BROTLI_ARRAY_PARAM(*decoded_size)]);
#       |     ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# cc1: all warnings being treated as errors
