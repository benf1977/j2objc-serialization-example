//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/Untainted.java
//

#ifndef _JavaxAnnotationUntainted_H_
#define _JavaxAnnotationUntainted_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@class JavaxAnnotationMetaWhenEnum;

@protocol JavaxAnnotationUntainted < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;

@end

@interface JavaxAnnotationUntainted : NSObject < JavaxAnnotationUntainted > {
 @private
  JavaxAnnotationMetaWhenEnum *when_;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when__;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationUntainted)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationUntainted)

#endif // _JavaxAnnotationUntainted_H_
