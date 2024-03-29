//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/CertificateEncodingException.java
//

#ifndef _JavaxSecurityCertCertificateEncodingException_H_
#define _JavaxSecurityCertCertificateEncodingException_H_

#include "J2ObjC_header.h"
#include "javax/security/cert/CertificateException.h"

/*!
 @brief The exception that is thrown when an error occurs while a <code>Certificate</code>
 is being encoded.
 <p>
 Note: This package is provided only for compatibility reasons. It contains a
 simplified version of the java.security.cert package that was previously used
 by JSSE (Java SSL package). All applications that do not have to be
 compatible with older versions of JSSE (that is before Java SDK 1.5) should
 only use java.security.cert.
 */
@interface JavaxSecurityCertCertificateEncodingException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateEncodingException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateEncodingException</code> with the specified
 message.
 @param msg
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateEncodingException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateEncodingException_initWithNSString_(JavaxSecurityCertCertificateEncodingException *self, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityCertCertificateEncodingException *new_JavaxSecurityCertCertificateEncodingException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityCertCertificateEncodingException_init(JavaxSecurityCertCertificateEncodingException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateEncodingException *new_JavaxSecurityCertCertificateEncodingException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateEncodingException)

#endif // _JavaxSecurityCertCertificateEncodingException_H_
