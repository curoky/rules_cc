/**
 * Autogenerated by Thrift for /opt/vcpkg/buildtrees/fbthrift/src/269cfba3e3-647c846c4c.clean/thrift/lib/thrift/frozen.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/thrift/gen-cpp2/frozen_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::apache::thrift::frozen::schema::Field> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::apache::thrift::frozen::schema::Layout> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::apache::thrift::frozen::schema::Schema> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
void Field::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_layoutId:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::readWithContext(*iprot, this->layoutId, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.layoutId = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_offset:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::readWithContext(*iprot, this->offset, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.offset = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Field>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_layoutId;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_offset;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Field::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->layoutId);
  xfer += prot_->serializedFieldSize("offset", apache::thrift::protocol::T_I16, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->offset);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Field");
  xfer += prot_->serializedFieldSize("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->layoutId);
  xfer += prot_->serializedFieldSize("offset", apache::thrift::protocol::T_I16, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->offset);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Field::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Field");
  xfer += prot_->writeFieldBegin("layoutId", apache::thrift::protocol::T_I16, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->layoutId);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("offset", apache::thrift::protocol::T_I16, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->offset);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Field::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Field::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Field::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Field::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Field::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Field::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Field::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Field::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::frozen::schema
namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
void Layout::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_size:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::readWithContext(*iprot, this->size, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.size = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_bits:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::readWithContext(*iprot, this->bits, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.bits = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_fields:
  {
    _readState.beforeSubobject(iprot);
    
    this->fields = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::read(*iprot, this->fields);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.fields = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_typeName:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::read(*iprot, this->typeName);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.typeName = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Layout>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_size;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_bits;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_fields;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_typeName;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Layout::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Layout");
  xfer += prot_->serializedFieldSize("size", apache::thrift::protocol::T_I32, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::serializedSize<false>(*prot_, this->size);
  xfer += prot_->serializedFieldSize("bits", apache::thrift::protocol::T_I16, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->bits);
  xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::serializedSize<false>(*prot_, this->fields);
  xfer += prot_->serializedFieldSize("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->typeName);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Layout::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Layout");
  xfer += prot_->serializedFieldSize("size", apache::thrift::protocol::T_I32, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::serializedSize<false>(*prot_, this->size);
  xfer += prot_->serializedFieldSize("bits", apache::thrift::protocol::T_I16, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->bits);
  xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::serializedSize<false>(*prot_, this->fields);
  xfer += prot_->serializedFieldSize("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->typeName);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Layout::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Layout");
  xfer += prot_->writeFieldBegin("size", apache::thrift::protocol::T_I32, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::write(*prot_, this->size);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("bits", apache::thrift::protocol::T_I16, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->bits);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>::write(*prot_, this->fields);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("typeName", apache::thrift::protocol::T_STRING, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->typeName);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Layout::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Layout::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Layout::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Layout::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Layout::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Layout::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Layout::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Layout::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::frozen::schema
namespace apache { namespace thrift { namespace frozen { namespace schema {

template <class Protocol_>
void Schema::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_fileVersion:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::readWithContext(*iprot, this->fileVersion, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.fileVersion = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          1,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_relaxTypeChecks:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, bool>::readWithContext(*iprot, this->relaxTypeChecks, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.relaxTypeChecks = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_layouts:
  {
    _readState.beforeSubobject(iprot);
    
    this->layouts = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::read(*iprot, this->layouts);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.layouts = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_rootLayout:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::readWithContext(*iprot, this->rootLayout, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.rootLayout = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Schema>>();
  }

  switch (_readState.fieldId) {
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_fileVersion;
      } else {
        goto _skip;
      }
    }
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_relaxTypeChecks;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_layouts;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_rootLayout;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Schema::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::serializedSize<false>(*prot_, this->fileVersion);
  xfer += prot_->serializedFieldSize("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->relaxTypeChecks);
  xfer += prot_->serializedFieldSize("layouts", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::serializedSize<false>(*prot_, this->layouts);
  xfer += prot_->serializedFieldSize("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->rootLayout);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::serializedSize<false>(*prot_, this->fileVersion);
  xfer += prot_->serializedFieldSize("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->relaxTypeChecks);
  xfer += prot_->serializedFieldSize("layouts", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::serializedSize<false>(*prot_, this->layouts);
  xfer += prot_->serializedFieldSize("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->rootLayout);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Schema");
  xfer += prot_->writeFieldBegin("fileVersion", apache::thrift::protocol::T_I32, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int32_t>::write(*prot_, this->fileVersion);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("relaxTypeChecks", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->relaxTypeChecks);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("layouts", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>::write(*prot_, this->layouts);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("rootLayout", apache::thrift::protocol::T_I16, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->rootLayout);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Schema::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Schema::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Schema::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Schema::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Schema::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Schema::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Schema::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Schema::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::frozen::schema
