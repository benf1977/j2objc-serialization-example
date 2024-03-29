//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/GeneralSecurityException.java
//

#ifndef _JavaSecurityGeneralSecurityException_H_
#define _JavaSecurityGeneralSecurityException_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief <code>GeneralSecurityException</code> is a general security exception and the
 superclass for all security specific exceptions.
 */
@interface JavaSecurityGeneralSecurityException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code> with the
 given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code> with the
 given message and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code> with the
 cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGeneralSecurityException)

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSString_(JavaSecurityGeneralSecurityException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_init(JavaSecurityGeneralSecurityException *self);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSString_withJavaLangThrowable_(JavaSecurityGeneralSecurityException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithJavaLangThrowable_(JavaSecurityGeneralSecurityException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGeneralSecurityException)

#endif // _JavaSecurityGeneralSecurityException_H_
