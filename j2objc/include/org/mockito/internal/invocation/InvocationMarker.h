//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationMarker.java
//

#ifndef _OrgMockitoInternalInvocationInvocationMarker_H_
#define _OrgMockitoInternalInvocationInvocationMarker_H_

#include "J2ObjC_header.h"

@protocol JavaUtilList;
@protocol OrgMockitoInternalInvocationCapturesArgumensFromInvocation;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalInvocationInvocationMarker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted;

- (void)markVerifiedWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted;

- (void)markVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)chunk
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationMarker)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationMarker_init(OrgMockitoInternalInvocationInvocationMarker *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMarker *new_OrgMockitoInternalInvocationInvocationMarker_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationMarker)

#endif // _OrgMockitoInternalInvocationInvocationMarker_H_
