//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/InOrderContextImpl.java
//

#ifndef _OrgMockitoInternalVerificationInOrderContextImpl_H_
#define _OrgMockitoInternalVerificationInOrderContextImpl_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/verification/api/InOrderContext.h"

@class OrgMockitoInternalUtilCollectionsIdentitySet;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalVerificationInOrderContextImpl : NSObject < OrgMockitoInternalVerificationApiInOrderContext > {
 @public
  OrgMockitoInternalUtilCollectionsIdentitySet *verified_;
}

#pragma mark Public

- (instancetype)init;

- (jboolean)isVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationInOrderContextImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationInOrderContextImpl, verified_, OrgMockitoInternalUtilCollectionsIdentitySet *)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationInOrderContextImpl_init(OrgMockitoInternalVerificationInOrderContextImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationInOrderContextImpl *new_OrgMockitoInternalVerificationInOrderContextImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationInOrderContextImpl)

#endif // _OrgMockitoInternalVerificationInOrderContextImpl_H_
