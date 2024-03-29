//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/Validity.java
//

#ifndef _OrgApacheHarmonySecurityX509Validity_H_
#define _OrgApacheHarmonySecurityX509Validity_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaUtilDate;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;

/*!
 @author Alexander Y. Kleymenov
 @version $Revision$
 */

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with Validity structure which is the part of X.509 certificate
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

  Validity ::= SEQUENCE {
       notBefore      Time,
       notAfter       Time
  }
  
@endcode
 */
@interface OrgApacheHarmonySecurityX509Validity : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilDate:(JavaUtilDate *)notBefore
                    withJavaUtilDate:(JavaUtilDate *)notAfter;

/*!
 @brief Returns ASN.1 encoded form of this X.509 Validity value.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the value of notAfter field of the structure.
 */
- (JavaUtilDate *)getNotAfter;

/*!
 @brief Returns the value of notBefore field of the structure.
 */
- (JavaUtilDate *)getNotBefore;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509Validity)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Sequence *OrgApacheHarmonySecurityX509Validity_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509Validity, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Sequence *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509Validity_initWithJavaUtilDate_withJavaUtilDate_(OrgApacheHarmonySecurityX509Validity *self, JavaUtilDate *notBefore, JavaUtilDate *notAfter);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509Validity *new_OrgApacheHarmonySecurityX509Validity_initWithJavaUtilDate_withJavaUtilDate_(JavaUtilDate *notBefore, JavaUtilDate *notAfter) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509Validity)

#endif // _OrgApacheHarmonySecurityX509Validity_H_
