//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/InvalidKeySpecException.java
//

#ifndef _JavaSecuritySpecInvalidKeySpecException_H_
#define _JavaSecuritySpecInvalidKeySpecException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief The exception that is thrown when an invalid key specification is
 encountered.
 */
@interface JavaSecuritySpecInvalidKeySpecException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>InvalidKeySpecException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>InvalidKeySpecException</code> with the specified message.
 @param msg
 the detail message of this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>InvalidKeySpecException</code> with the specified message
 and cause.
 @param message
 the detail message of this exception.
 @param cause
 the cause of this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a new <code>InvalidKeySpecException</code> with the specified cause.
 @param cause
 the cause of this exception.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecInvalidKeySpecException)

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_initWithNSString_(JavaSecuritySpecInvalidKeySpecException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_init(JavaSecuritySpecInvalidKeySpecException *self);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_initWithNSString_withJavaLangThrowable_(JavaSecuritySpecInvalidKeySpecException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_initWithJavaLangThrowable_(JavaSecuritySpecInvalidKeySpecException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecInvalidKeySpecException)

#endif // _JavaSecuritySpecInvalidKeySpecException_H_
