//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/CertificateIssuer.java
//

#ifndef _OrgApacheHarmonySecurityX509CertificateIssuer_H_
#define _OrgApacheHarmonySecurityX509CertificateIssuer_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/x509/ExtensionValue.h"

@class IOSByteArray;
@class JavaLangStringBuilder;
@class JavaxSecurityAuthX500X500Principal;
@class OrgApacheHarmonySecurityAsn1ASN1Type;

/*!
 @brief CRL Entry's Certificate Issuer Extension (OID = 2.5.29.29).
 It is a CRL entry extension and contains the GeneralNames describing
 the issuer of revoked certificate. Its ASN.1 notation is as follows:
 @code

   id-ce-certificateIssuer   OBJECT IDENTIFIER ::= { id-ce 29 }
   certificateIssuer ::=     GeneralNames
  
@endcode
 (as specified in RFC 3280)
 In java implementation it is presumed that GeneralNames consist of
 one element and its type is directoryName.
 */
@interface OrgApacheHarmonySecurityX509CertificateIssuer : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

/*!
 @brief Creates an object on the base of its encoded form.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encoding;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

- (JavaxSecurityAuthX500X500Principal *)getIssuer;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509CertificateIssuer)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Type *OrgApacheHarmonySecurityX509CertificateIssuer_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509CertificateIssuer, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509CertificateIssuer_initWithByteArray_(OrgApacheHarmonySecurityX509CertificateIssuer *self, IOSByteArray *encoding);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509CertificateIssuer *new_OrgApacheHarmonySecurityX509CertificateIssuer_initWithByteArray_(IOSByteArray *encoding) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509CertificateIssuer)

#endif // _OrgApacheHarmonySecurityX509CertificateIssuer_H_
