//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/framework/TestFailure.java
//

#ifndef _JunitFrameworkTestFailure_H_
#define _JunitFrameworkTestFailure_H_

#include "J2ObjC_header.h"

@class JavaLangThrowable;
@protocol JunitFrameworkTest;

@interface JunitFrameworkTestFailure : NSObject {
 @public
  id<JunitFrameworkTest> fFailedTest_;
  JavaLangThrowable *fThrownException_;
}

#pragma mark Public

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)failedTest
                     withJavaLangThrowable:(JavaLangThrowable *)thrownException;

- (NSString *)exceptionMessage;

- (id<JunitFrameworkTest>)failedTest;

- (jboolean)isFailure;

- (JavaLangThrowable *)thrownException;

- (NSString *)description;

- (NSString *)trace;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestFailure)

J2OBJC_FIELD_SETTER(JunitFrameworkTestFailure, fFailedTest_, id<JunitFrameworkTest>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestFailure, fThrownException_, JavaLangThrowable *)

FOUNDATION_EXPORT void JunitFrameworkTestFailure_initWithJunitFrameworkTest_withJavaLangThrowable_(JunitFrameworkTestFailure *self, id<JunitFrameworkTest> failedTest, JavaLangThrowable *thrownException);

FOUNDATION_EXPORT JunitFrameworkTestFailure *new_JunitFrameworkTestFailure_initWithJunitFrameworkTest_withJavaLangThrowable_(id<JunitFrameworkTest> failedTest, JavaLangThrowable *thrownException) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestFailure)

#endif // _JunitFrameworkTestFailure_H_
