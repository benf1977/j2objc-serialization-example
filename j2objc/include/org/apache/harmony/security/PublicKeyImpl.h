//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/PublicKeyImpl.java
//

#ifndef _OrgApacheHarmonySecurityPublicKeyImpl_H_
#define _OrgApacheHarmonySecurityPublicKeyImpl_H_

#include "J2ObjC_header.h"
#include "java/security/PublicKey.h"

@class IOSByteArray;

/*!
 @brief PublicKeyImpl
 */
@interface OrgApacheHarmonySecurityPublicKeyImpl : NSObject < JavaSecurityPublicKey >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)algorithm;

- (NSString *)getAlgorithm;

- (IOSByteArray *)getEncoded;

- (NSString *)getFormat;

- (void)setAlgorithmWithNSString:(NSString *)algorithm;

- (void)setEncodingWithByteArray:(IOSByteArray *)encoding;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityPublicKeyImpl)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityPublicKeyImpl_initWithNSString_(OrgApacheHarmonySecurityPublicKeyImpl *self, NSString *algorithm);

FOUNDATION_EXPORT OrgApacheHarmonySecurityPublicKeyImpl *new_OrgApacheHarmonySecurityPublicKeyImpl_initWithNSString_(NSString *algorithm) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityPublicKeyImpl)

#endif // _OrgApacheHarmonySecurityPublicKeyImpl_H_
