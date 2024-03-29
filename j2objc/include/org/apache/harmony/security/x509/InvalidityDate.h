//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/InvalidityDate.java
//

#ifndef _OrgApacheHarmonySecurityX509InvalidityDate_H_
#define _OrgApacheHarmonySecurityX509InvalidityDate_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/x509/ExtensionValue.h"

@class IOSByteArray;
@class JavaLangStringBuilder;
@class JavaUtilDate;
@class OrgApacheHarmonySecurityAsn1ASN1Type;

/*!
 @brief CRL Entry's Invalidity Date Extension (OID = 2.5.29.24).
 @code

   id-ce-invalidityDate OBJECT IDENTIFIER ::= { id-ce 24 }
   invalidityDate ::=  GeneralizedTime
  
@endcode
 (as specified in RFC 3280 http://www.ietf.org/rfc/rfc3280.txt)
 */
@interface OrgApacheHarmonySecurityX509InvalidityDate : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

/*!
 @brief Constructs the object on the base of its encoded form.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encoding;

/*!
 @brief Constructs the object from a date instance.
 */
- (instancetype)initWithJavaUtilDate:(JavaUtilDate *)date;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

/*!
 @brief Returns the invalidity date.
 */
- (JavaUtilDate *)getDate;

/*!
 @brief Returns ASN.1 encoded form of this X.509 InvalidityDate value.
 */
- (IOSByteArray *)getEncoded;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509InvalidityDate)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Type *OrgApacheHarmonySecurityX509InvalidityDate_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509InvalidityDate, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509InvalidityDate_initWithByteArray_(OrgApacheHarmonySecurityX509InvalidityDate *self, IOSByteArray *encoding);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509InvalidityDate *new_OrgApacheHarmonySecurityX509InvalidityDate_initWithByteArray_(IOSByteArray *encoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509InvalidityDate_initWithJavaUtilDate_(OrgApacheHarmonySecurityX509InvalidityDate *self, JavaUtilDate *date);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509InvalidityDate *new_OrgApacheHarmonySecurityX509InvalidityDate_initWithJavaUtilDate_(JavaUtilDate *date) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509InvalidityDate)

#endif // _OrgApacheHarmonySecurityX509InvalidityDate_H_
