//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/test/suitebuilder/annotation/Suppress.java
//

#ifndef _AndroidTestSuitebuilderAnnotationSuppress_H_
#define _AndroidTestSuitebuilderAnnotationSuppress_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

/*!
 @brief Use this annotation on test classes or test methods that should not be included in a test
 suite.
 If the annotation appears on the class then no tests in that class will be included. If
 the annotation appears only on a test method then only that method will be excluded.
 */
@protocol AndroidTestSuitebuilderAnnotationSuppress < JavaLangAnnotationAnnotation >

@end

@interface AndroidTestSuitebuilderAnnotationSuppress : NSObject < AndroidTestSuitebuilderAnnotationSuppress >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTestSuitebuilderAnnotationSuppress)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTestSuitebuilderAnnotationSuppress)

#endif // _AndroidTestSuitebuilderAnnotationSuppress_H_
