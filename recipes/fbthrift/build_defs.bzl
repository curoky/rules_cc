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

"""
Rules for building C++ fbthrift with Bazel.
"""

thriftc_path = "@com_github_facebook_fbthrift//:thriftc"

DEFAULT_INCLUDE_PATHS = [
    "./",
    "$(GENDIR)",
    "$(BINDIR)",
]

def fbthrift_library(
        name,
        srcs,
        services = [],
        language = "mstch_cpp2",
        out_prefix = ".",
        include_prefix = ".",
        include_paths = [],
        args = [],
        lang_options = ",json,reflection",
        visibility = None):
    output_headers = []
    output_srcs = []
    for s in srcs:
        fname = s.replace(".thrift", "").split("/")[-1]
        output_headers.append("%s_constants.h" % fname)
        output_srcs.append("%s_constants.cpp" % fname)

        output_headers.append("%s_data.h" % fname)
        output_srcs.append("%s_data.cpp" % fname)

        output_headers.append("%s_for_each_field.h" % fname)

        output_headers.append("%s_metadata.h" % fname)
        output_srcs.append("%s_metadata.cpp" % fname)

        output_headers.append("%s_types.h" % fname)
        output_headers.append("%s_types_custom_protocol.h" % fname)
        output_headers.append("%s_types.tcc" % fname)
        output_srcs.append("%s_types.cpp" % fname)

        output_headers.append("%s_visit_union.h" % fname)
        output_headers.append("%s_visitation.h" % fname)

        if "reflection" in lang_options:
            output_headers.append("%s_fatal_all.h" % fname)
            output_headers.append("%s_fatal_types.h" % fname)
            output_headers.append("%s_fatal.h" % fname)
            output_headers.append("%s_fatal_enum.h" % fname)
            output_headers.append("%s_fatal_union.h" % fname)
            output_headers.append("%s_fatal_struct.h" % fname)
            output_headers.append("%s_fatal_constant.h" % fname)
            output_headers.append("%s_fatal_service.h" % fname)

    for sname in services:
        output_headers.append("%s_custom_protocol.h" % sname)
        output_srcs.append("%s_processmap_binary.cpp" % sname)
        output_srcs.append("%s_processmap_compact.cpp" % sname)
        output_headers.append("%s.h" % sname)
        output_headers.append("%s.tcc" % sname)
        output_srcs.append("%s.cpp" % sname)
        output_headers.append("%sAsyncClient.h" % sname)
        output_srcs.append("%sAsyncClient.cpp" % sname)

    _output_files = output_headers + output_srcs
    output_files = []
    for f in _output_files:
        if out_prefix and out_prefix != ".":
            output_files.append(out_prefix + "/gen-cpp2/" + f)
        else:
            output_files.append("gen-cpp2/" + f)

    include_paths_cmd = ["-I %s" % (s) for s in include_paths]

    # '$(@D)' when given a single source target will give the appropriate
    # directory. Appending 'out_prefix' is only necessary when given a build
    # target with multiple sources.
    # output_directory = (
    #     ("-o $(@D)/%s" % (out_prefix)) if len(srcs) > 1 else ("-o $(@D)")
    # )
    output_directory = "-o $(@D)/%s" % (out_prefix)

    # -gen mstch_cpp2:include_prefix=thrift/lib/thrift -o $(@D)/thrift/lib/thrift $<
    genrule_cmd = " ".join([
        "mkdir -p $(@D)/%s;" % (out_prefix),
        "SRCS=($(SRCS));",
        "for f in $${SRCS[@]}; do",
        "$(location %s)" % (thriftc_path),
        "-gen %s:include_prefix=%s%s" % (language, include_prefix, lang_options),
        " ".join(args),
        " ".join(include_paths_cmd),
        output_directory,
        "$$f;",
        "done",
    ])

    native.genrule(
        name = name,
        srcs = srcs,
        outs = output_files,
        output_to_bindir = False,
        tools = [thriftc_path],
        cmd = genrule_cmd,
        message = "Generating fbthrift files for %s:" % (name),
    )
