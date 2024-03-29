//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationWithTimeoutImpl.java
//

#ifndef _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_
#define _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_

#include "J2ObjC_header.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalVerificationVerificationWithTimeoutImpl : NSObject {
 @public
  id<OrgMockitoVerificationVerificationMode> delegate_;
  jint timeout_;
  jint treshhold_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)treshhold
                    withInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

- (id<OrgMockitoVerificationVerificationMode>)getDelegate;

- (jint)getTimeout;

- (jint)getTreshhold;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

#pragma mark Package-Private

- (void)sleepWithInt:(jint)sleep;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationWithTimeoutImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl, delegate_, id<OrgMockitoVerificationVerificationMode>)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationVerificationWithTimeoutImpl_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(OrgMockitoInternalVerificationVerificationWithTimeoutImpl *self, jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationWithTimeoutImpl *new_OrgMockitoInternalVerificationVerificationWithTimeoutImpl_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl)

#endif // _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_
