//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Any.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Any_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Any_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Type.h"

@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This class represents ASN.1 ANY type.
 */
@interface OrgApacheHarmonySecurityAsn1ASN1Any : OrgApacheHarmonySecurityAsn1ASN1Type

#pragma mark Public

/*!
 @brief Constructs ASN.1 ANY type
 The constructor is provided for inheritance purposes
 when there is a need to create a custom ASN.1 ANY type.
 To get a default implementation it is recommended to use
 getInstance() method.
 */
- (instancetype)init;

/*!
 @brief Tests provided identifier.
 @param identifier - identifier to be verified
 @return - true
 */
- (jboolean)checkTagWithInt:(jint)identifier;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Extracts array of bytes that represents full encoding from BER input
 stream.
 @param inArg BER input stream
 @return array of bytes
 */
- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (jint)getEncodedLengthWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

/*!
 @brief Returns ASN.1 ANY type default implementation
 The default implementation works with full encoding
 that is represented as raw byte array.
 @return ASN.1 ANY type default implementation
 */
+ (OrgApacheHarmonySecurityAsn1ASN1Any *)getInstance;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Any)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Any_init(OrgApacheHarmonySecurityAsn1ASN1Any *self);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Any *new_OrgApacheHarmonySecurityAsn1ASN1Any_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Any *OrgApacheHarmonySecurityAsn1ASN1Any_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Any)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Any_H_
