/**
 * Autogenerated by Thrift for /opt/vcpkg/buildtrees/fbthrift/src/269cfba3e3-647c846c4c.clean/thrift/lib/thrift/metadata.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/thrift/gen-cpp2/ThriftMetadataService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace apache { namespace thrift { namespace metadata {
typedef apache::thrift::ThriftPresult<false> ThriftMetadataService_getThriftServiceMetadata_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRUCT,  ::apache::thrift::metadata::ThriftServiceMetadataResponse*>> ThriftMetadataService_getThriftServiceMetadata_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void ThriftMetadataServiceAsyncProcessor::_processInThread_getThriftServiceMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ThriftMetadataServiceAsyncProcessor::process_getThriftServiceMetadata<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ThriftMetadataServiceAsyncProcessor::process_getThriftServiceMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ThriftMetadataService_getThriftServiceMetadata_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ThriftMetadataService.getThriftServiceMetadata", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "getThriftServiceMetadata");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::metadata::ThriftServiceMetadataResponse>>>(std::move(req), std::move(ctxStack), return_getThriftServiceMetadata<ProtocolIn_,ProtocolOut_>, throw_wrapped_getThriftServiceMetadata<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_getThriftServiceMetadata(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue ThriftMetadataServiceAsyncProcessor::return_getThriftServiceMetadata(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::apache::thrift::metadata::ThriftServiceMetadataResponse const& _return) {
  ProtocolOut_ prot;
  ThriftMetadataService_getThriftServiceMetadata_presult result;
  result.get<0>().value = const_cast< ::apache::thrift::metadata::ThriftServiceMetadataResponse*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("getThriftServiceMetadata", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ThriftMetadataServiceAsyncProcessor::throw_wrapped_getThriftServiceMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "getThriftServiceMetadata");
    return;
  }
}


}}} // apache::thrift::metadata
