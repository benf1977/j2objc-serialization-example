//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/UnusedStubsFinder.java
//

#ifndef _OrgMockitoInternalInvocationUnusedStubsFinder_H_
#define _OrgMockitoInternalInvocationUnusedStubsFinder_H_

#include "J2ObjC_header.h"

@protocol JavaUtilList;

@interface OrgMockitoInternalInvocationUnusedStubsFinder : NSObject

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)findWithJavaUtilList:(id<JavaUtilList>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationUnusedStubsFinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationUnusedStubsFinder_init(OrgMockitoInternalInvocationUnusedStubsFinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationUnusedStubsFinder *new_OrgMockitoInternalInvocationUnusedStubsFinder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationUnusedStubsFinder)

#endif // _OrgMockitoInternalInvocationUnusedStubsFinder_H_
