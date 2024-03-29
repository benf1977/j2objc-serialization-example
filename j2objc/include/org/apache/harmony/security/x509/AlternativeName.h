//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/AlternativeName.java
//

#ifndef _OrgApacheHarmonySecurityX509AlternativeName_H_
#define _OrgApacheHarmonySecurityX509AlternativeName_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/x509/ExtensionValue.h"

@class IOSByteArray;
@class JavaLangStringBuilder;

#define OrgApacheHarmonySecurityX509AlternativeName_ISSUER false
#define OrgApacheHarmonySecurityX509AlternativeName_SUBJECT true

/*!
 @brief This class implements the values of Subject Alternative Name
 (OID is 2.5.29.17) and Issuer Alternative Name extensions
 (OID is 2.5.29.18).
 <br>
 For more information about these extensions see RFC 3280
 at http://www.ietf.org/rfc/rfc3280.txt
 */
@interface OrgApacheHarmonySecurityX509AlternativeName : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

/*!
 @brief Creates the extension object on the base of its encoded form.
 @param which specifies which alternative names are given
 (Subject's or Issuer's)
 */
- (instancetype)initWithBoolean:(jboolean)which
                  withByteArray:(IOSByteArray *)encoding;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

/*!
 @brief Returns ASN.1 encoded form of this X.509 AlternativeName value.
 */
- (IOSByteArray *)getEncoded;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityX509AlternativeName)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509AlternativeName, ISSUER, jboolean)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509AlternativeName, SUBJECT, jboolean)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509AlternativeName_initWithBoolean_withByteArray_(OrgApacheHarmonySecurityX509AlternativeName *self, jboolean which, IOSByteArray *encoding);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509AlternativeName *new_OrgApacheHarmonySecurityX509AlternativeName_initWithBoolean_withByteArray_(jboolean which, IOSByteArray *encoding) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509AlternativeName)

#endif // _OrgApacheHarmonySecurityX509AlternativeName_H_
