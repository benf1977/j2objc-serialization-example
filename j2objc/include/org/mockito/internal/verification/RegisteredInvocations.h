//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/RegisteredInvocations.java
//

#ifndef _OrgMockitoInternalVerificationRegisteredInvocations_H_
#define _OrgMockitoInternalVerificationRegisteredInvocations_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalVerificationRegisteredInvocations : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (void)addWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (id<JavaUtilList>)getAll;

- (jboolean)isEmpty;

- (void)removeLast;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationRegisteredInvocations)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationRegisteredInvocations_init(OrgMockitoInternalVerificationRegisteredInvocations *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationRegisteredInvocations *new_OrgMockitoInternalVerificationRegisteredInvocations_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationRegisteredInvocations)

#endif // _OrgMockitoInternalVerificationRegisteredInvocations_H_
