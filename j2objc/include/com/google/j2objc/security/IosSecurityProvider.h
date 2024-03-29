//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosSecurityProvider.java
//

#ifndef _ComGoogleJ2objcSecurityIosSecurityProvider_H_
#define _ComGoogleJ2objcSecurityIosSecurityProvider_H_

#include "J2ObjC_header.h"
#include "java/security/Provider.h"

/*!
 @brief Security provider that maps to iOS security algorithms.
 Provider keys
 are from org.conscrypt.OpenSSLProvider, Android's primary provider.
 @author Tom Ball
 */
@interface ComGoogleJ2objcSecurityIosSecurityProvider : JavaSecurityProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleJ2objcSecurityIosSecurityProvider)

FOUNDATION_EXPORT NSString *ComGoogleJ2objcSecurityIosSecurityProvider_PROVIDER_NAME_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleJ2objcSecurityIosSecurityProvider, PROVIDER_NAME_, NSString *)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSecurityProvider_init(ComGoogleJ2objcSecurityIosSecurityProvider *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosSecurityProvider *new_ComGoogleJ2objcSecurityIosSecurityProvider_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSecurityProvider)

#endif // _ComGoogleJ2objcSecurityIosSecurityProvider_H_
