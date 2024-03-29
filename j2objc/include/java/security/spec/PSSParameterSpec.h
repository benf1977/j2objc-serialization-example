//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/PSSParameterSpec.java
//

#ifndef _JavaSecuritySpecPSSParameterSpec_H_
#define _JavaSecuritySpecPSSParameterSpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/AlgorithmParameterSpec.h"

/*!
 @brief The parameter specification for the RSA-PSS Signature scheme.
 <p>
 Defined in the <a
 href="http://www.rsa.com/rsalabs/pubs/PKCS/html/pkcs-1.html">PKCS #1 v2.1</a>
 standard.
 */
@interface JavaSecuritySpecPSSParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Creates a new <code>PSSParameterSpec</code> with the specified salt length
 and the default values.
 @param saltLen
 the salt length (in bits).
 @throws IllegalArgumentException
 if <code>saltLen</code> is negative.
 */
- (instancetype)initWithInt:(jint)saltLen;

/*!
 @brief Creates a new <code>PSSParameterSpec</code> with the specified message digest
 name, mask generation function name, mask generation function parameters,
 salt length, and trailer field value.
 @param mdName
 the name of the message digest algorithm.
 @param mgfName
 the name of the mask generation function algorithm.
 @param mgfSpec
 the parameter for the mask generation function algorithm.
 @param saltLen
 the salt length (in bits).
 @param trailerField
 the trailer field value.
 @throws IllegalArgumentException
 if <code>saltLen</code> or <code>trailerField</code> is negative.
 */
- (instancetype)initWithNSString:(NSString *)mdName
                    withNSString:(NSString *)mgfName
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)mgfSpec
                         withInt:(jint)saltLen
                         withInt:(jint)trailerField;

/*!
 @brief Returns the name of the message digest algorithm.
 @return the name of the message digest algorithm.
 */
- (NSString *)getDigestAlgorithm;

/*!
 @brief Returns the name of the mask generation function algorithm.
 @return the name of the mask generation function algorithm.
 */
- (NSString *)getMGFAlgorithm;

/*!
 @brief Returns the parameter for the mask generation function algorithm.
 @return the parameter for the mask generation function algorithm, or
 <code>null</code> if none specified.
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)getMGFParameters;

/*!
 @brief Returns the length of the salt (in bits).
 @return the length of the salt (in bits).
 */
- (jint)getSaltLength;

/*!
 @brief Returns the trailer field value.
 @return the trailer field value.
 */
- (jint)getTrailerField;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecPSSParameterSpec)

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *JavaSecuritySpecPSSParameterSpec_DEFAULT_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecPSSParameterSpec, DEFAULT_, JavaSecuritySpecPSSParameterSpec *)

FOUNDATION_EXPORT void JavaSecuritySpecPSSParameterSpec_initWithInt_(JavaSecuritySpecPSSParameterSpec *self, jint saltLen);

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *new_JavaSecuritySpecPSSParameterSpec_initWithInt_(jint saltLen) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(JavaSecuritySpecPSSParameterSpec *self, NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField);

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *new_JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecPSSParameterSpec)

#endif // _JavaSecuritySpecPSSParameterSpec_H_
