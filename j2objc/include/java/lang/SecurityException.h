//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/SecurityException.java
//

#ifndef _JavaLangSecurityException_H_
#define _JavaLangSecurityException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when a security manager check fails.
 */
@interface JavaLangSecurityException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>SecurityException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>SecurityException</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>SecurityException</code> with the current stack trace,
 the specified detail message and the specified cause.
 @param message
 the detail message for this exception.
 @param cause
 the optional cause of this exception, may be <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new <code>SecurityException</code> with the current stack trace
 and the specified cause.
 @param cause
 the optional cause of this exception, may be <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangSecurityException)

FOUNDATION_EXPORT void JavaLangSecurityException_init(JavaLangSecurityException *self);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangSecurityException_initWithNSString_(JavaLangSecurityException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangSecurityException_initWithNSString_withJavaLangThrowable_(JavaLangSecurityException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangSecurityException_initWithJavaLangThrowable_(JavaLangSecurityException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangSecurityException *new_JavaLangSecurityException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSecurityException)

#endif // _JavaLangSecurityException_H_
