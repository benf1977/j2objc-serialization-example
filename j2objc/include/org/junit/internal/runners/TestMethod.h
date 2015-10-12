//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/TestMethod.java
//

#ifndef _OrgJunitInternalRunnersTestMethod_H_
#define _OrgJunitInternalRunnersTestMethod_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class JavaLangReflectMethod;
@class JavaLangThrowable;
@class OrgJunitInternalRunnersTestClass;
@protocol JavaUtilList;

@interface OrgJunitInternalRunnersTestMethod : NSObject

#pragma mark Public

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method
         withOrgJunitInternalRunnersTestClass:(OrgJunitInternalRunnersTestClass *)testClass;

- (jlong)getTimeout;

- (void)invokeWithId:(id)test;

- (jboolean)isIgnored;

#pragma mark Protected

- (IOSClass *)getExpectedException;

#pragma mark Package-Private

- (jboolean)expectsException;

- (id<JavaUtilList>)getAfters;

- (id<JavaUtilList>)getBefores;

- (jboolean)isUnexpectedWithJavaLangThrowable:(JavaLangThrowable *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersTestMethod)

FOUNDATION_EXPORT void OrgJunitInternalRunnersTestMethod_initWithJavaLangReflectMethod_withOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersTestMethod *self, JavaLangReflectMethod *method, OrgJunitInternalRunnersTestClass *testClass);

FOUNDATION_EXPORT OrgJunitInternalRunnersTestMethod *new_OrgJunitInternalRunnersTestMethod_initWithJavaLangReflectMethod_withOrgJunitInternalRunnersTestClass_(JavaLangReflectMethod *method, OrgJunitInternalRunnersTestClass *testClass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersTestMethod)

#endif // _OrgJunitInternalRunnersTestMethod_H_
