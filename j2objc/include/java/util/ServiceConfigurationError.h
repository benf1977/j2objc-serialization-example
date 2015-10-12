//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ServiceConfigurationError.java
//

#ifndef _JavaUtilServiceConfigurationError_H_
#define _JavaUtilServiceConfigurationError_H_

#include "J2ObjC_header.h"
#include "java/lang/Error.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when a service provider can't be loaded by <code>ServiceLoader</code>.
 @since 1.6
 */
@interface JavaUtilServiceConfigurationError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new error with the given detail message.
 @param message the detail message, or null
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new error with the given detail message and cause.
 @param message the detail message, or null
 @param cause the cause, null
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilServiceConfigurationError)

FOUNDATION_EXPORT void JavaUtilServiceConfigurationError_initWithNSString_(JavaUtilServiceConfigurationError *self, NSString *message);

FOUNDATION_EXPORT JavaUtilServiceConfigurationError *new_JavaUtilServiceConfigurationError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilServiceConfigurationError_initWithNSString_withJavaLangThrowable_(JavaUtilServiceConfigurationError *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaUtilServiceConfigurationError *new_JavaUtilServiceConfigurationError_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilServiceConfigurationError)

#endif // _JavaUtilServiceConfigurationError_H_
