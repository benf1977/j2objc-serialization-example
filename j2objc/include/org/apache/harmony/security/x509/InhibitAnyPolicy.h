//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/InhibitAnyPolicy.java
//

#ifndef _OrgApacheHarmonySecurityX509InhibitAnyPolicy_H_
#define _OrgApacheHarmonySecurityX509InhibitAnyPolicy_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/x509/ExtensionValue.h"

@class IOSByteArray;
@class JavaLangStringBuilder;

/*!
 @brief InhibitAnyPolicy Certificate Extension (OID = 2.5.29.54)
 Its ASN.1 notation is as follows:
 @code

  id-ce-inhibitAnyPolicy OBJECT IDENTIFIER ::=  { id-ce 54 }
  InhibitAnyPolicy ::= SkipCerts
  SkipCerts ::= INTEGER (0..MAX)
  
@endcode
 (as specified in RFC 3280 http://www.ietf.org/rfc/rfc3280.txt).
 */
@interface OrgApacheHarmonySecurityX509InhibitAnyPolicy : OrgApacheHarmonySecurityX509ExtensionValue

#pragma mark Public

/*!
 @brief Creates an object on the base of its encoded form.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encoding;

- (void)dumpValueWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                              withNSString:(NSString *)prefix;

/*!
 @brief Returns ASN.1 encoded form of the object.
 */
- (IOSByteArray *)getEncoded;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityX509InhibitAnyPolicy)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509InhibitAnyPolicy_initWithByteArray_(OrgApacheHarmonySecurityX509InhibitAnyPolicy *self, IOSByteArray *encoding);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509InhibitAnyPolicy *new_OrgApacheHarmonySecurityX509InhibitAnyPolicy_initWithByteArray_(IOSByteArray *encoding) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509InhibitAnyPolicy)

#endif // _OrgApacheHarmonySecurityX509InhibitAnyPolicy_H_