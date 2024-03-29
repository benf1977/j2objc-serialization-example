//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/InvalidAlgorithmParameterException.java
//

#ifndef _JavaSecurityInvalidAlgorithmParameterException_H_
#define _JavaSecurityInvalidAlgorithmParameterException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief <code>InvalidAlgorithmParameterException</code> indicates the occurrence of
 invalid algorithm parameters.
 */
@interface JavaSecurityInvalidAlgorithmParameterException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code>
 with the given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code> with the
 given message and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code>
 with the cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInvalidAlgorithmParameterException)

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_initWithNSString_(JavaSecurityInvalidAlgorithmParameterException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_init(JavaSecurityInvalidAlgorithmParameterException *self);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_initWithNSString_withJavaLangThrowable_(JavaSecurityInvalidAlgorithmParameterException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_initWithJavaLangThrowable_(JavaSecurityInvalidAlgorithmParameterException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInvalidAlgorithmParameterException)

#endif // _JavaSecurityInvalidAlgorithmParameterException_H_
