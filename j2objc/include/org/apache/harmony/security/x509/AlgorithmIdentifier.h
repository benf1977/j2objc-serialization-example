//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/AlgorithmIdentifier.java
//

#ifndef _OrgApacheHarmonySecurityX509AlgorithmIdentifier_H_
#define _OrgApacheHarmonySecurityX509AlgorithmIdentifier_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaLangStringBuilder;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;

/*!
 @author Alexander Y. Kleymenov
 @version $Revision$
 */

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with the Algorithm Identifier which is a part of X.509 certificate
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

  AlgorithmIdentifier ::= SEQUENCE {
      algorithm OBJECT IDENTIFIER,
      parameters ANY DEFINED BY algorithm OPTIONAL
  }
  
@endcode
 */
@interface OrgApacheHarmonySecurityX509AlgorithmIdentifier : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)algorithm;

- (instancetype)initWithNSString:(NSString *)algorithm
                   withByteArray:(IOSByteArray *)parameters;

/*!
 @brief For testing when algorithmName is not known, but algorithm OID is.
 */
- (instancetype)initWithNSString:(NSString *)algorithm
                    withNSString:(NSString *)algorithmName;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

- (jboolean)isEqual:(id)ai;

/*!
 @brief Returns the value of algorithm field of the structure.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the name of the algorithm corresponding to
 its OID.
 If there is no the such correspondence,
 algorithm OID is returned.
 */
- (NSString *)getAlgorithmName;

/*!
 @brief Returns ASN.1 encoded form of this X.509 AlgorithmIdentifier value.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the value of parameters field of the structure.
 */
- (IOSByteArray *)getParameters;

- (NSUInteger)hash;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509AlgorithmIdentifier)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Sequence *OrgApacheHarmonySecurityX509AlgorithmIdentifier_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509AlgorithmIdentifier, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Sequence *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509AlgorithmIdentifier_initWithNSString_(OrgApacheHarmonySecurityX509AlgorithmIdentifier *self, NSString *algorithm);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509AlgorithmIdentifier *new_OrgApacheHarmonySecurityX509AlgorithmIdentifier_initWithNSString_(NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509AlgorithmIdentifier_initWithNSString_withByteArray_(OrgApacheHarmonySecurityX509AlgorithmIdentifier *self, NSString *algorithm, IOSByteArray *parameters);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509AlgorithmIdentifier *new_OrgApacheHarmonySecurityX509AlgorithmIdentifier_initWithNSString_withByteArray_(NSString *algorithm, IOSByteArray *parameters) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509AlgorithmIdentifier_initWithNSString_withNSString_(OrgApacheHarmonySecurityX509AlgorithmIdentifier *self, NSString *algorithm, NSString *algorithmName);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509AlgorithmIdentifier *new_OrgApacheHarmonySecurityX509AlgorithmIdentifier_initWithNSString_withNSString_(NSString *algorithm, NSString *algorithmName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509AlgorithmIdentifier)

#endif // _OrgApacheHarmonySecurityX509AlgorithmIdentifier_H_
