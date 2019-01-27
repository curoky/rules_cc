/**
 * Autogenerated by Thrift for /tmp/fbthrift@2020.12.14-20201219-1221310-1eb1djf/fbthrift-2020.12.14.00/thrift/lib/thrift/metadata.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/lib/thrift/gen-cpp2/metadata_metadata.h"

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

void EnumMetadata<::apache::thrift::metadata::ThriftPrimitiveType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("metadata.ThriftPrimitiveType", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "metadata.ThriftPrimitiveType";
  using EnumTraits = TEnumTraits<::apache::thrift::metadata::ThriftPrimitiveType>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftListType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftListType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftListType = res.first->second;
  metadata_ThriftListType.name_ref() = "metadata.ThriftListType";
  metadata_ThriftListType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftListType_fields[] = {
    std::make_tuple(1, "valueType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
  };
  for (const auto& f : metadata_ThriftListType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftListType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftSetType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftSetType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftSetType = res.first->second;
  metadata_ThriftSetType.name_ref() = "metadata.ThriftSetType";
  metadata_ThriftSetType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftSetType_fields[] = {
    std::make_tuple(1, "valueType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
  };
  for (const auto& f : metadata_ThriftSetType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftSetType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftMapType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftMapType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftMapType = res.first->second;
  metadata_ThriftMapType.name_ref() = "metadata.ThriftMapType";
  metadata_ThriftMapType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftMapType_fields[] = {
    std::make_tuple(1, "keyType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
    std::make_tuple(2, "valueType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
  };
  for (const auto& f : metadata_ThriftMapType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftMapType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftEnumType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftEnumType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftEnumType = res.first->second;
  metadata_ThriftEnumType.name_ref() = "metadata.ThriftEnumType";
  metadata_ThriftEnumType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftEnumType_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : metadata_ThriftEnumType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftEnumType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftStructType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftStructType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftStructType = res.first->second;
  metadata_ThriftStructType.name_ref() = "metadata.ThriftStructType";
  metadata_ThriftStructType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftStructType_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : metadata_ThriftStructType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftStructType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftUnionType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftUnionType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftUnionType = res.first->second;
  metadata_ThriftUnionType.name_ref() = "metadata.ThriftUnionType";
  metadata_ThriftUnionType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftUnionType_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : metadata_ThriftUnionType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftUnionType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftTypedefType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftTypedefType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftTypedefType = res.first->second;
  metadata_ThriftTypedefType.name_ref() = "metadata.ThriftTypedefType";
  metadata_ThriftTypedefType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftTypedefType_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "underlyingType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
  };
  for (const auto& f : metadata_ThriftTypedefType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftTypedefType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftStreamType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftStreamType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftStreamType = res.first->second;
  metadata_ThriftStreamType.name_ref() = "metadata.ThriftStreamType";
  metadata_ThriftStreamType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftStreamType_fields[] = {
    std::make_tuple(1, "elemType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
    std::make_tuple(2, "initialResponseType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
  };
  for (const auto& f : metadata_ThriftStreamType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftStreamType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftSinkType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftSinkType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftSinkType = res.first->second;
  metadata_ThriftSinkType.name_ref() = "metadata.ThriftSinkType";
  metadata_ThriftSinkType.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftSinkType_fields[] = {
    std::make_tuple(1, "elemType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
    std::make_tuple(2, "finalResponseType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
    std::make_tuple(3, "initialResponseType", true, std::make_unique<Typedef>("metadata.ThriftType", std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType"))),
  };
  for (const auto& f : metadata_ThriftSinkType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftSinkType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftType>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftType", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftType = res.first->second;
  metadata_ThriftType.name_ref() = "metadata.ThriftType";
  metadata_ThriftType.is_union_ref() = true;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftType_fields[] = {
    std::make_tuple(1, "t_primitive", false, std::make_unique<Enum< ::apache::thrift::metadata::ThriftPrimitiveType>>("metadata.ThriftPrimitiveType")),
    std::make_tuple(2, "t_list", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftListType>>("metadata.ThriftListType")),
    std::make_tuple(3, "t_set", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftSetType>>("metadata.ThriftSetType")),
    std::make_tuple(4, "t_map", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftMapType>>("metadata.ThriftMapType")),
    std::make_tuple(5, "t_enum", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftEnumType>>("metadata.ThriftEnumType")),
    std::make_tuple(6, "t_struct", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftStructType>>("metadata.ThriftStructType")),
    std::make_tuple(7, "t_union", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftUnionType>>("metadata.ThriftUnionType")),
    std::make_tuple(8, "t_typedef", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftTypedefType>>("metadata.ThriftTypedefType")),
    std::make_tuple(9, "t_stream", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftStreamType>>("metadata.ThriftStreamType")),
    std::make_tuple(10, "t_sink", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftSinkType>>("metadata.ThriftSinkType")),
  };
  for (const auto& f : metadata_ThriftType_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftType.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftEnum", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftEnum = res.first->second;
  metadata_ThriftEnum.name_ref() = "metadata.ThriftEnum";
  metadata_ThriftEnum.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftEnum_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "elements", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))),
  };
  for (const auto& f : metadata_ThriftEnum_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftEnum.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftField>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftField", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftField = res.first->second;
  metadata_ThriftField.name_ref() = "metadata.ThriftField";
  metadata_ThriftField.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftField_fields[] = {
    std::make_tuple(1, "id", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "type", false, std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType")),
    std::make_tuple(3, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(4, "is_optional", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
  };
  for (const auto& f : metadata_ThriftField_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftField.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftStruct = res.first->second;
  metadata_ThriftStruct.name_ref() = "metadata.ThriftStruct";
  metadata_ThriftStruct.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftStruct_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "fields", false, std::make_unique<List>(std::make_unique<Struct< ::apache::thrift::metadata::ThriftField>>("metadata.ThriftField"))),
    std::make_tuple(3, "is_union", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
  };
  for (const auto& f : metadata_ThriftStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftException = res.first->second;
  metadata_ThriftException.name_ref() = "metadata.ThriftException";
  metadata_ThriftException.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftException_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "fields", false, std::make_unique<List>(std::make_unique<Struct< ::apache::thrift::metadata::ThriftField>>("metadata.ThriftField"))),
  };
  for (const auto& f : metadata_ThriftException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftException.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftFunction>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftFunction", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftFunction = res.first->second;
  metadata_ThriftFunction.name_ref() = "metadata.ThriftFunction";
  metadata_ThriftFunction.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftFunction_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "return_type", false, std::make_unique<Union< ::apache::thrift::metadata::ThriftType>>("metadata.ThriftType")),
    std::make_tuple(3, "arguments", false, std::make_unique<List>(std::make_unique<Struct< ::apache::thrift::metadata::ThriftField>>("metadata.ThriftField"))),
    std::make_tuple(4, "exceptions", false, std::make_unique<List>(std::make_unique<Struct< ::apache::thrift::metadata::ThriftField>>("metadata.ThriftField"))),
    std::make_tuple(5, "is_oneway", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE)),
  };
  for (const auto& f : metadata_ThriftFunction_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftFunction.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftService>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftService", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftService = res.first->second;
  metadata_ThriftService.name_ref() = "metadata.ThriftService";
  metadata_ThriftService.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftService_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "functions", false, std::make_unique<List>(std::make_unique<Struct< ::apache::thrift::metadata::ThriftFunction>>("metadata.ThriftFunction"))),
    std::make_tuple(3, "parent", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : metadata_ThriftService_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftService.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftModuleContext>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftModuleContext", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftModuleContext = res.first->second;
  metadata_ThriftModuleContext.name_ref() = "metadata.ThriftModuleContext";
  metadata_ThriftModuleContext.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftModuleContext_fields[] = {
    std::make_tuple(1, "name", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : metadata_ThriftModuleContext_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftModuleContext.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftServiceContext>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftServiceContext", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftServiceContext = res.first->second;
  metadata_ThriftServiceContext.name_ref() = "metadata.ThriftServiceContext";
  metadata_ThriftServiceContext.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftServiceContext_fields[] = {
    std::make_tuple(1, "service_info", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftService>>("metadata.ThriftService")),
    std::make_tuple(2, "module", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftModuleContext>>("metadata.ThriftModuleContext")),
  };
  for (const auto& f : metadata_ThriftServiceContext_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftServiceContext.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftMetadata>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftMetadata", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftMetadata = res.first->second;
  metadata_ThriftMetadata.name_ref() = "metadata.ThriftMetadata";
  metadata_ThriftMetadata.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftMetadata_fields[] = {
    std::make_tuple(2, "enums", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Struct< ::apache::thrift::metadata::ThriftEnum>>("metadata.ThriftEnum"))),
    std::make_tuple(4, "structs", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Struct< ::apache::thrift::metadata::ThriftStruct>>("metadata.ThriftStruct"))),
    std::make_tuple(5, "exceptions", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Struct< ::apache::thrift::metadata::ThriftException>>("metadata.ThriftException"))),
    std::make_tuple(6, "services", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Struct< ::apache::thrift::metadata::ThriftService>>("metadata.ThriftService"))),
  };
  for (const auto& f : metadata_ThriftMetadata_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftMetadata.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::apache::thrift::metadata::ThriftServiceMetadataResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("metadata.ThriftServiceMetadataResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& metadata_ThriftServiceMetadataResponse = res.first->second;
  metadata_ThriftServiceMetadataResponse.name_ref() = "metadata.ThriftServiceMetadataResponse";
  metadata_ThriftServiceMetadataResponse.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  metadata_ThriftServiceMetadataResponse_fields[] = {
    std::make_tuple(1, "context", false, std::make_unique<Struct< ::apache::thrift::metadata::ThriftServiceContext>>("metadata.ThriftServiceContext")),
    std::make_tuple(2, "metadata", false, std::make_unique<Typedef>("metadata.ThriftMetadata", std::make_unique<Struct< ::apache::thrift::metadata::ThriftMetadata>>("metadata.ThriftMetadata"))),
  };
  for (const auto& f : metadata_ThriftServiceMetadataResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    metadata_ThriftServiceMetadataResponse.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

void ServiceMetadata<::apache::thrift::metadata::ThriftMetadataServiceSvIf>::gen_getThriftServiceMetadata(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getThriftServiceMetadata";
  auto func_ret_type = std::make_unique<Struct< ::apache::thrift::metadata::ThriftServiceMetadataResponse>>("metadata.ThriftServiceMetadataResponse");
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::metadata::ThriftMetadataServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService metadata_ThriftMetadataService;
  metadata_ThriftMetadataService.name_ref() = "metadata.ThriftMetadataService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::metadata::ThriftMetadataServiceSvIf>::gen_getThriftServiceMetadata,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, metadata_ThriftMetadataService);
  }
  context.service_info_ref() = std::move(metadata_ThriftMetadataService);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "metadata";
  context.module_ref() = std::move(module);
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
