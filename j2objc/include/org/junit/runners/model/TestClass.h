//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runners/model/TestClass.java
//

#ifndef _OrgJunitRunnersModelTestClass_H_
#define _OrgJunitRunnersModelTestClass_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@protocol JavaUtilList;

@interface OrgJunitRunnersModelTestClass : NSObject

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (id<JavaUtilList>)getAnnotatedFieldsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedFieldValuesWithId:(id)test
                                     withIOSClass:(IOSClass *)annotationClass
                                     withIOSClass:(IOSClass *)valueClass;

- (id<JavaUtilList>)getAnnotatedMethodsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedMethodValuesWithId:(id)test
                                      withIOSClass:(IOSClass *)annotationClass
                                      withIOSClass:(IOSClass *)valueClass;

- (IOSObjectArray *)getAnnotations;

- (IOSClass *)getJavaClass;

- (NSString *)getName;

- (JavaLangReflectConstructor *)getOnlyConstructor;

- (jboolean)isANonStaticInnerClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelTestClass)

FOUNDATION_EXPORT void OrgJunitRunnersModelTestClass_initWithIOSClass_(OrgJunitRunnersModelTestClass *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitRunnersModelTestClass *new_OrgJunitRunnersModelTestClass_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelTestClass)

#endif // _OrgJunitRunnersModelTestClass_H_
