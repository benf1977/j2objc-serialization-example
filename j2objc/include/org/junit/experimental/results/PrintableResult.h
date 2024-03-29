//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/results/PrintableResult.java
//

#ifndef _OrgJunitExperimentalResultsPrintableResult_H_
#define _OrgJunitExperimentalResultsPrintableResult_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class OrgJunitRunnerRequest;
@protocol JavaUtilList;

@interface OrgJunitExperimentalResultsPrintableResult : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)failures;

- (jint)failureCount;

+ (OrgJunitExperimentalResultsPrintableResult *)testResultWithIOSClass:(IOSClass *)type;

+ (OrgJunitExperimentalResultsPrintableResult *)testResultWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalResultsPrintableResult)

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *OrgJunitExperimentalResultsPrintableResult_testResultWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *OrgJunitExperimentalResultsPrintableResult_testResultWithOrgJunitRunnerRequest_(OrgJunitRunnerRequest *request);

FOUNDATION_EXPORT void OrgJunitExperimentalResultsPrintableResult_initWithJavaUtilList_(OrgJunitExperimentalResultsPrintableResult *self, id<JavaUtilList> failures);

FOUNDATION_EXPORT OrgJunitExperimentalResultsPrintableResult *new_OrgJunitExperimentalResultsPrintableResult_initWithJavaUtilList_(id<JavaUtilList> failures) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalResultsPrintableResult)

#endif // _OrgJunitExperimentalResultsPrintableResult_H_
