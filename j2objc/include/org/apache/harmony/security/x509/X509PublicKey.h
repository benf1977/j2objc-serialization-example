//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/X509PublicKey.java
//

#ifndef _OrgApacheHarmonySecurityX509X509PublicKey_H_
#define _OrgApacheHarmonySecurityX509X509PublicKey_H_

#include "J2ObjC_header.h"
#include "java/security/PublicKey.h"

@class IOSByteArray;

@interface OrgApacheHarmonySecurityX509X509PublicKey : NSObject < JavaSecurityPublicKey >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)algorithm
                   withByteArray:(IOSByteArray *)encoded
                   withByteArray:(IOSByteArray *)keyBytes;

- (NSString *)getAlgorithm;

- (IOSByteArray *)getEncoded;

- (NSString *)getFormat;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityX509X509PublicKey)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509X509PublicKey_initWithNSString_withByteArray_withByteArray_(OrgApacheHarmonySecurityX509X509PublicKey *self, NSString *algorithm, IOSByteArray *encoded, IOSByteArray *keyBytes);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509X509PublicKey *new_OrgApacheHarmonySecurityX509X509PublicKey_initWithNSString_withByteArray_withByteArray_(NSString *algorithm, IOSByteArray *encoded, IOSByteArray *keyBytes) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509X509PublicKey)

#endif // _OrgApacheHarmonySecurityX509X509PublicKey_H_
