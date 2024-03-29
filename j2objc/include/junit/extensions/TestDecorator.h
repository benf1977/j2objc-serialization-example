//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/extensions/TestDecorator.java
//

#ifndef _JunitExtensionsTestDecorator_H_
#define _JunitExtensionsTestDecorator_H_

#include "J2ObjC_header.h"
#include "junit/framework/Assert.h"
#include "junit/framework/Test.h"

@class JunitFrameworkTestResult;

@interface JunitExtensionsTestDecorator : JunitFrameworkAssert < JunitFrameworkTest > {
 @public
  id<JunitFrameworkTest> fTest_;
}

#pragma mark Public

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)basicRunWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (jint)countTestCases;

- (id<JunitFrameworkTest>)getTest;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsTestDecorator)

J2OBJC_FIELD_SETTER(JunitExtensionsTestDecorator, fTest_, id<JunitFrameworkTest>)

FOUNDATION_EXPORT void JunitExtensionsTestDecorator_initWithJunitFrameworkTest_(JunitExtensionsTestDecorator *self, id<JunitFrameworkTest> test);

FOUNDATION_EXPORT JunitExtensionsTestDecorator *new_JunitExtensionsTestDecorator_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsTestDecorator)

#endif // _JunitExtensionsTestDecorator_H_
