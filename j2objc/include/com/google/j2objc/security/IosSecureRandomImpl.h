//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosSecureRandomImpl.java
//

#ifndef _ComGoogleJ2objcSecurityIosSecureRandomImpl_H_
#define _ComGoogleJ2objcSecurityIosSecureRandomImpl_H_

#include "J2ObjC_header.h"
#include "java/security/SecureRandomSpi.h"

@class IOSByteArray;

/*!
 @brief Secure random number provider, implemented using the iOS Security Framework.
 @author Tom Ball
 */
@interface ComGoogleJ2objcSecurityIosSecureRandomImpl : JavaSecuritySecureRandomSpi

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSByteArray *)engineGenerateSeedWithInt:(jint)numBytes;

- (void)engineNextBytesWithByteArray:(IOSByteArray *)bytes;

- (void)engineSetSeedWithByteArray:(IOSByteArray *)seed;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSecureRandomImpl)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosSecureRandomImpl_init(ComGoogleJ2objcSecurityIosSecureRandomImpl *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosSecureRandomImpl *new_ComGoogleJ2objcSecurityIosSecureRandomImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSecureRandomImpl)

#endif // _ComGoogleJ2objcSecurityIosSecureRandomImpl_H_
