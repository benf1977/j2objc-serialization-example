//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/IssuingDistributionPoint.java
//

#ifndef _OrgApacheHarmonySecurityX509IssuingDistributionPoint_H_
#define _OrgApacheHarmonySecurityX509IssuingDistributionPoint_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/x509/ExtensionValue.h"

@class IOSByteArray;
@class JavaLangStringBuilder;
@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityX509DistributionPointName;
@class OrgApacheHarmonySecurityX509ReasonFlags;

/*!
 @brief CRL's Issuing Distribution Point Extension (OID = 2.5.29.28).
 @code

   id-ce-issuingDistributionPoint OBJECT IDENTIFIER ::= { id-ce 28 }
   issuingDistributionPoint ::= SEQUENCE {
      distributionPoint          [0] DistributionPointName OPTIONAL,
      onlyContainsUserCerts      [1] BOOLEAN DEFAULT FALSE,
      onlyContainsCACerts        [2] BOOLEAN DEFAULT FALSE,
      onlySomeReasons            [3] ReasonFlags OPTIONAL,
      indirectCRL                [4] BOOLEAN DEFAULT FALSE,
      onlyContainsAttributeCerts [5] BOOLEAN DEFAULT FALSE
   }
  
@endcode
 (as specified in RFC 3280 http://www.ietf.org/rfc/rfc3280.txt)
 */
@interface OrgApacheHarmonySecurityX509IssuingDistributionPoint : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

/*!
 @brief Constructs the object on the base of its distributionPoint and
 onlySomeReasons fields values.
 */
- (instancetype)initWithOrgApacheHarmonySecurityX509DistributionPointName:(OrgApacheHarmonySecurityX509DistributionPointName *)distributionPoint
                              withOrgApacheHarmonySecurityX509ReasonFlags:(OrgApacheHarmonySecurityX509ReasonFlags *)onlySomeReasons;

/*!
 @brief Creates the extension object on the base of its encoded form.
 */
+ (OrgApacheHarmonySecurityX509IssuingDistributionPoint *)decodeWithByteArray:(IOSByteArray *)encoding;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

- (IOSByteArray *)getEncoded;

/*!
 @brief Sets the value of indirectCRL field of the structure.
 */
- (void)setIndirectCRLWithBoolean:(jboolean)indirectCRL;

/*!
 @brief Sets the value of onlyContainsAttributeCerts field of the structure.
 */
- (void)setOnlyContainsAttributeCertsWithBoolean:(jboolean)onlyContainsAttributeCerts;

/*!
 @brief Sets the value of onlyContainsCACerts field of the structure.
 */
- (void)setOnlyContainsCACertsWithBoolean:(jboolean)onlyContainsCACerts;

/*!
 @brief Sets the value of onlyContainsUserCerts field of the structure.
 */
- (void)setOnlyContainsUserCertsWithBoolean:(jboolean)onlyContainsUserCerts;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509IssuingDistributionPoint)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Type *OrgApacheHarmonySecurityX509IssuingDistributionPoint_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509IssuingDistributionPoint, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509IssuingDistributionPoint_initWithOrgApacheHarmonySecurityX509DistributionPointName_withOrgApacheHarmonySecurityX509ReasonFlags_(OrgApacheHarmonySecurityX509IssuingDistributionPoint *self, OrgApacheHarmonySecurityX509DistributionPointName *distributionPoint, OrgApacheHarmonySecurityX509ReasonFlags *onlySomeReasons);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509IssuingDistributionPoint *new_OrgApacheHarmonySecurityX509IssuingDistributionPoint_initWithOrgApacheHarmonySecurityX509DistributionPointName_withOrgApacheHarmonySecurityX509ReasonFlags_(OrgApacheHarmonySecurityX509DistributionPointName *distributionPoint, OrgApacheHarmonySecurityX509ReasonFlags *onlySomeReasons) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509IssuingDistributionPoint *OrgApacheHarmonySecurityX509IssuingDistributionPoint_decodeWithByteArray_(IOSByteArray *encoding);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509IssuingDistributionPoint)

#endif // _OrgApacheHarmonySecurityX509IssuingDistributionPoint_H_
