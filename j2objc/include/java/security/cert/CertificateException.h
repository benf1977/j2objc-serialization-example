//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateException.java
//

#ifndef _JavaSecurityCertCertificateException_H_
#define _JavaSecurityCertCertificateException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief The base class for all <code>Certificate</code> related exceptions.
 */
@interface JavaSecurityCertCertificateException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified message.
 @param msg
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified message and
 cause.
 @param message
 the detail message for the exception.
 @param cause
 the cause.
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified cause.
 @param cause
 the cause
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateException)

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSString_(JavaSecurityCertCertificateException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_init(JavaSecurityCertCertificateException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSString_withJavaLangThrowable_(JavaSecurityCertCertificateException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithJavaLangThrowable_(JavaSecurityCertCertificateException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateException)

#endif // _JavaSecurityCertCertificateException_H_
