/**
 * Autogenerated by Thrift for /opt/vcpkg/buildtrees/fbthrift/src/269cfba3e3-647c846c4c.clean/thrift/lib/thrift/metadata.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/lib/thrift/gen-cpp2/metadata_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::apache::thrift::metadata::ThriftPrimitiveType> {
  using type = ::apache::thrift::metadata::ThriftPrimitiveType;
  static constexpr const std::size_t size = 10;
  static constexpr const std::array<type, size> values = {{
    type::THRIFT_BOOL_TYPE,
    type::THRIFT_BYTE_TYPE,
    type::THRIFT_I16_TYPE,
    type::THRIFT_I32_TYPE,
    type::THRIFT_I64_TYPE,
    type::THRIFT_FLOAT_TYPE,
    type::THRIFT_DOUBLE_TYPE,
    type::THRIFT_BINARY_TYPE,
    type::THRIFT_STRING_TYPE,
    type::THRIFT_VOID_TYPE,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "THRIFT_BOOL_TYPE",
    "THRIFT_BYTE_TYPE",
    "THRIFT_I16_TYPE",
    "THRIFT_I32_TYPE",
    "THRIFT_I64_TYPE",
    "THRIFT_FLOAT_TYPE",
    "THRIFT_DOUBLE_TYPE",
    "THRIFT_BINARY_TYPE",
    "THRIFT_STRING_TYPE",
    "THRIFT_VOID_TYPE",
  }};
};

template <> struct TEnumDataStorage<::apache::thrift::metadata::ThriftType::Type> {
  using type = ::apache::thrift::metadata::ThriftType::Type;
  static constexpr const std::size_t size = 10;
  static constexpr const std::array<type, size> values = {{
    type::t_primitive,
    type::t_list,
    type::t_set,
    type::t_map,
    type::t_enum,
    type::t_struct,
    type::t_union,
    type::t_typedef,
    type::t_stream,
    type::t_sink,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "t_primitive",
    "t_list",
    "t_set",
    "t_map",
    "t_enum",
    "t_struct",
    "t_union",
    "t_typedef",
    "t_stream",
    "t_sink",
  }};
};

}} // apache::thrift