//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/Nonnegative.java
//

#ifndef _JavaxAnnotationNonnegative_H_
#define _JavaxAnnotationNonnegative_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"
#include "javax/annotation/meta/TypeQualifierValidator.h"

@class JavaxAnnotationMetaWhenEnum;

@protocol JavaxAnnotationNonnegative < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;

@end

@interface JavaxAnnotationNonnegative : NSObject < JavaxAnnotationNonnegative > {
 @private
  JavaxAnnotationMetaWhenEnum *when_;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when__;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative)

@interface JavaxAnnotationNonnegative_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype)init;

- (JavaxAnnotationMetaWhenEnum *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationNonnegative>)annotation
                                                                           withId:(id)v;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative_Checker)

FOUNDATION_EXPORT void JavaxAnnotationNonnegative_Checker_init(JavaxAnnotationNonnegative_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationNonnegative_Checker *new_JavaxAnnotationNonnegative_Checker_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative_Checker)

#endif // _JavaxAnnotationNonnegative_H_
