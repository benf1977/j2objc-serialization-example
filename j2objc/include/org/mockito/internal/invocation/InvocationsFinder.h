//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationsFinder.java
//

#ifndef _OrgMockitoInternalInvocationInvocationsFinder_H_
#define _OrgMockitoInternalInvocationInvocationsFinder_H_

#include "J2ObjC_header.h"

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalInvocationInvocationsFinder : NSObject

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)findAllMatchingUnverifiedChunksWithJavaUtilList:(id<JavaUtilList>)invocations
                  withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (id<OrgMockitoInvocationInvocation>)findFirstMatchingUnverifiedInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                                          withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                        withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations;

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedInOrderWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context
                                                                                                   withJavaUtilList:(id<JavaUtilList>)orderedInvocations;

- (id<JavaUtilList>)findInvocationsWithJavaUtilList:(id<JavaUtilList>)invocations
  withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)findMatchingChunkWithJavaUtilList:(id<JavaUtilList>)invocations
    withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                              withInt:(jint)wantedCount
  withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findPreviousVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)invocations
                              withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findSimilarInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                          withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<OrgMockitoInvocationLocation>)getLastLocationWithJavaUtilList:(id<JavaUtilList>)invocations;

#pragma mark Package-Private

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations
                                                                   withId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationsFinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationsFinder_init(OrgMockitoInternalInvocationInvocationsFinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationsFinder *new_OrgMockitoInternalInvocationInvocationsFinder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationsFinder)

#endif // _OrgMockitoInternalInvocationInvocationsFinder_H_
