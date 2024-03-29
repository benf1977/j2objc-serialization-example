//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Enumerated.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Enumerated_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Enumerated_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Primitive.h"

@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class represents ASN.1 Enumerated type.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1Enumerated : OrgApacheHarmonySecurityAsn1ASN1Primitive

#pragma mark Public

/*!
 @brief Constructs ASN.1 Enumerated type
 The constructor is provided for inheritance purposes
 when there is a need to create a custom ASN.1 Enumerated type.
 To get a default implementation it is recommended to use
 getInstance() method.
 */
- (instancetype)init;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Extracts array of bytes from BER input stream.
 @return array of bytes
 */
- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

/*!
 @brief Returns ASN.1 Enumerated type default implementation
 The default implementation works with encoding
 that is represented as byte array.
 @return ASN.1 Enumerated type default implementation
 */
+ (OrgApacheHarmonySecurityAsn1ASN1Enumerated *)getInstance;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Enumerated)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Enumerated_init(OrgApacheHarmonySecurityAsn1ASN1Enumerated *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Enumerated *new_OrgApacheHarmonySecurityAsn1ASN1Enumerated_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Enumerated *OrgApacheHarmonySecurityAsn1ASN1Enumerated_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Enumerated)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Enumerated_H_
