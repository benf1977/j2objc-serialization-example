//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Primitive.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Primitive_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Primitive_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Type.h"

@class OrgApacheHarmonySecurityAsn1BerOutputStream;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief This abstract class is the super class for all primitive ASN.1 types
 */
@interface OrgApacheHarmonySecurityAsn1ASN1Primitive : OrgApacheHarmonySecurityAsn1ASN1Type

#pragma mark Public

- (instancetype)initWithInt:(jint)tagNumber;

/*!
 @brief Tests provided identifier.
 @param identifier identifier to be verified
 @return true if identifier correspond to primitive identifier of this
 ASN.1 type, otherwise false
 */
- (jboolean)checkTagWithInt:(jint)identifier;

- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Primitive)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Primitive_initWithInt_(OrgApacheHarmonySecurityAsn1ASN1Primitive *self, jint tagNumber);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Primitive)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Primitive_H_
