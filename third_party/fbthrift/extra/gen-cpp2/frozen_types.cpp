/**
 * Autogenerated by Thrift for /opt/vcpkg/buildtrees/fbthrift/src/269cfba3e3-647c846c4c.clean/thrift/lib/thrift/frozen.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/lib/thrift/gen-cpp2/frozen_types.h"
#include "thrift/lib/thrift/gen-cpp2/frozen_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/lib/thrift/gen-cpp2/frozen_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::frozen::schema::Field>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 2;
  static constexpr folly::StringPiece _names[] = {
    "layoutId",
    "offset",
  };
  static constexpr int16_t _ids[] = {
    1,
    2,
  };
  static constexpr TType _types[] = {
    TType::T_I16,
    TType::T_I16,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace frozen { namespace schema {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Field::Field(apache::thrift::FragileConstructor, int16_t layoutId__arg, int16_t offset__arg) :
    layoutId(std::move(layoutId__arg)),
    offset(std::move(offset__arg)) {
  __isset.layoutId = true;
  __isset.offset = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Field::__clear() {
  // clear all fields
  layoutId = 0;
  offset = static_cast<int16_t>(0);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Field::operator==(const Field& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.layoutId == rhs.layoutId)) {
    return false;
  }
  if (!(lhs.offset == rhs.offset)) {
    return false;
  }
  return true;
}

bool Field::operator<(const Field& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.layoutId == rhs.layoutId)) {
    return lhs.layoutId < rhs.layoutId;
  }
  if (!(lhs.offset == rhs.offset)) {
    return lhs.offset < rhs.offset;
  }
  return false;
}


void swap(Field& a, Field& b) {
  using ::std::swap;
  swap(a.layoutId_ref().value(), b.layoutId_ref().value());
  swap(a.offset_ref().value(), b.offset_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Field::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Field::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Field::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Field::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Field::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Field::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Field::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Field::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}}} // apache::thrift::frozen::schema
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::frozen::schema::Layout>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 4;
  static constexpr folly::StringPiece _names[] = {
    "size",
    "bits",
    "fields",
    "typeName",
  };
  static constexpr int16_t _ids[] = {
    1,
    2,
    3,
    4,
  };
  static constexpr TType _types[] = {
    TType::T_I32,
    TType::T_I16,
    TType::T_MAP,
    TType::T_STRING,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace frozen { namespace schema {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Layout::Layout(apache::thrift::FragileConstructor, int32_t size__arg, int16_t bits__arg, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field> fields__arg, ::std::string typeName__arg) :
    size(std::move(size__arg)),
    bits(std::move(bits__arg)),
    fields(std::move(fields__arg)),
    typeName(std::move(typeName__arg)) {
  __isset.size = true;
  __isset.bits = true;
  __isset.fields = true;
  __isset.typeName = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Layout::__clear() {
  // clear all fields
  size = 0;
  bits = static_cast<int16_t>(0);
  fields.clear();
  typeName = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Layout::operator==(const Layout& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.size == rhs.size)) {
    return false;
  }
  if (!(lhs.bits == rhs.bits)) {
    return false;
  }
  if (!(lhs.fields == rhs.fields)) {
    return false;
  }
  if (!(lhs.typeName == rhs.typeName)) {
    return false;
  }
  return true;
}

bool Layout::operator<(const Layout& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.size == rhs.size)) {
    return lhs.size < rhs.size;
  }
  if (!(lhs.bits == rhs.bits)) {
    return lhs.bits < rhs.bits;
  }
  if (!(lhs.fields == rhs.fields)) {
    return lhs.fields < rhs.fields;
  }
  if (!(lhs.typeName == rhs.typeName)) {
    return lhs.typeName < rhs.typeName;
  }
  return false;
}

const ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>& Layout::get_fields() const& {
  return fields;
}

::std::map<int16_t,  ::apache::thrift::frozen::schema::Field> Layout::get_fields() && {
  return std::move(fields);
}


void swap(Layout& a, Layout& b) {
  using ::std::swap;
  swap(a.size_ref().value(), b.size_ref().value());
  swap(a.bits_ref().value(), b.bits_ref().value());
  swap(a.fields_ref().value(), b.fields_ref().value());
  swap(a.typeName_ref().value(), b.typeName_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Layout::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Layout::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Layout::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Layout::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Layout::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Layout::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Layout::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Layout::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Layout,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>,
        ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Layout,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>,
        ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>,
    "inconsistent use of nimble option");

}}}} // apache::thrift::frozen::schema
namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::frozen::schema::Schema>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 4;
  static constexpr folly::StringPiece _names[] = {
    "fileVersion",
    "relaxTypeChecks",
    "layouts",
    "rootLayout",
  };
  static constexpr int16_t _ids[] = {
    4,
    1,
    2,
    3,
  };
  static constexpr TType _types[] = {
    TType::T_I32,
    TType::T_BOOL,
    TType::T_MAP,
    TType::T_I16,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace frozen { namespace schema {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Schema::Schema(apache::thrift::FragileConstructor, int32_t fileVersion__arg, bool relaxTypeChecks__arg, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout> layouts__arg, int16_t rootLayout__arg) :
    fileVersion(std::move(fileVersion__arg)),
    relaxTypeChecks(std::move(relaxTypeChecks__arg)),
    layouts(std::move(layouts__arg)),
    rootLayout(std::move(rootLayout__arg)) {
  __isset.fileVersion = true;
  __isset.relaxTypeChecks = true;
  __isset.layouts = true;
  __isset.rootLayout = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Schema::__clear() {
  // clear all fields
  fileVersion = 0;
  relaxTypeChecks = 0;
  layouts.clear();
  rootLayout = static_cast<int16_t>(0);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Schema::operator==(const Schema& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fileVersion == rhs.fileVersion)) {
    return false;
  }
  if (!(lhs.relaxTypeChecks == rhs.relaxTypeChecks)) {
    return false;
  }
  if (!(lhs.layouts == rhs.layouts)) {
    return false;
  }
  if (!(lhs.rootLayout == rhs.rootLayout)) {
    return false;
  }
  return true;
}

bool Schema::operator<(const Schema& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fileVersion == rhs.fileVersion)) {
    return lhs.fileVersion < rhs.fileVersion;
  }
  if (!(lhs.relaxTypeChecks == rhs.relaxTypeChecks)) {
    return lhs.relaxTypeChecks < rhs.relaxTypeChecks;
  }
  if (!(lhs.layouts == rhs.layouts)) {
    return lhs.layouts < rhs.layouts;
  }
  if (!(lhs.rootLayout == rhs.rootLayout)) {
    return lhs.rootLayout < rhs.rootLayout;
  }
  return false;
}

const ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>& Schema::get_layouts() const& {
  return layouts;
}

::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout> Schema::get_layouts() && {
  return std::move(layouts);
}


void swap(Schema& a, Schema& b) {
  using ::std::swap;
  swap(a.fileVersion_ref().value(), b.fileVersion_ref().value());
  swap(a.relaxTypeChecks_ref().value(), b.relaxTypeChecks_ref().value());
  swap(a.layouts_ref().value(), b.layouts_ref().value());
  swap(a.rootLayout_ref().value(), b.rootLayout_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Schema::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Schema::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Schema::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Schema::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Schema::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Schema::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Schema::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Schema::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Schema,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>,
        ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Schema,
        ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>,
        ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>,
    "inconsistent use of nimble option");

}}}} // apache::thrift::frozen::schema