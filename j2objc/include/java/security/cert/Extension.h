//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/Extension.java
//

#ifndef _JavaSecurityCertExtension_H_
#define _JavaSecurityCertExtension_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief The Extension part of an X.509 certificate (as specified in <a
 href="http://www.ietf.org/rfc/rfc3280.txt">RFC 3280 &mdash; Internet X.509
 Public Key Infrastructure: Certificate and Certificate Revocation List (CRL)
 Profile</p>):
 @code

  Extension  ::=  SEQUENCE  {
       extnID      OBJECT IDENTIFIER,
       critical    BOOLEAN DEFAULT FALSE,
       extnValue   OCTET STRING
  }
  
@endcode
 @since 1.7
 */
@protocol JavaSecurityCertExtension < NSObject, JavaObject >

/*!
 @brief Returns the OID (Object Identifier) for this extension encoded as a
 string (e.g., "2.5.29.15").
 */
- (NSString *)getId;

/*!
 @brief Returns <code>true</code> if this extension is critical.
 If this is true and
 an implementation does not understand this extension, it must reject it.
 See RFC 3280 section 4.2 for more information.
 */
- (jboolean)isCritical;

/*!
 @brief The DER-encoded value of this extension.
 */
- (IOSByteArray *)getValue;

/*!
 @brief Writes the DER-encoded extension to <code>out</code>.
 @throws IOException when there is an encoding error or error writing to
 <code>out</code>
 */
- (void)encodeWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertExtension)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertExtension)

#endif // _JavaSecurityCertExtension_H_
