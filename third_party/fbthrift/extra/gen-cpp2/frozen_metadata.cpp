/**
 * Autogenerated by Thrift for /opt/vcpkg/buildtrees/fbthrift/src/269cfba3e3-647c846c4c.clean/thrift/lib/thrift/frozen.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/lib/thrift/gen-cpp2/frozen_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::frozen::schema::Field>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("frozen.Field", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& frozen_Field = res.first->second;
  frozen_Field.name_ref() = "frozen.Field";
  frozen_Field.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  frozen_Field_fields[] = {
    std::make_tuple(1, "layoutId", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)),
    std::make_tuple(2, "offset", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)),
  };
  for (const auto& f : frozen_Field_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    frozen_Field.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::frozen::schema::Layout>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("frozen.Layout", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& frozen_Layout = res.first->second;
  frozen_Layout.name_ref() = "frozen.Layout";
  frozen_Layout.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  frozen_Layout_fields[] = {
    std::make_tuple(1, "size", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "bits", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)),
    std::make_tuple(3, "fields", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Struct< ::apache::thrift::frozen::schema::Field>>("frozen.Field"))),
    std::make_tuple(4, "typeName", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : frozen_Layout_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    frozen_Layout.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::frozen::schema::Schema>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("frozen.Schema", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& frozen_Schema = res.first->second;
  frozen_Schema.name_ref() = "frozen.Schema";
  frozen_Schema.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  frozen_Schema_fields[] = {
    std::make_tuple(4, "fileVersion", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(1, "relaxTypeChecks", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
    std::make_tuple(2, "layouts", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Struct< ::apache::thrift::frozen::schema::Layout>>("frozen.Layout"))),
    std::make_tuple(3, "rootLayout", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)),
  };
  for (const auto& f : frozen_Schema_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    frozen_Schema.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
