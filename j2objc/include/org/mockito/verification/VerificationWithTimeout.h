//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/verification/VerificationWithTimeout.java
//

#ifndef _OrgMockitoVerificationVerificationWithTimeout_H_
#define _OrgMockitoVerificationVerificationWithTimeout_H_

#include "J2ObjC_header.h"
#include "org/mockito/verification/VerificationMode.h"

@protocol OrgMockitoVerificationVerificationWithTimeout < OrgMockitoVerificationVerificationMode, NSObject, JavaObject >

- (id<OrgMockitoVerificationVerificationMode>)timesWithInt:(jint)wantedNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)never;

- (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

- (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)atMostWithInt:(jint)maxNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)only;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationVerificationWithTimeout)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationVerificationWithTimeout)

#endif // _OrgMockitoVerificationVerificationWithTimeout_H_
