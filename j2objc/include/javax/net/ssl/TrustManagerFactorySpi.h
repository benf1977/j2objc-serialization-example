//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/TrustManagerFactorySpi.java
//

#ifndef _JavaxNetSslTrustManagerFactorySpi_H_
#define _JavaxNetSslTrustManagerFactorySpi_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaSecurityKeyStore;
@protocol JavaxNetSslManagerFactoryParameters;

/*!
 @brief The <i>Service Provider Interface</i> (SPI) for the
 <code>TrustManagerFactory</code> class.
 */
@interface JavaxNetSslTrustManagerFactorySpi : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>TrustManagerFactorySpi</code> instance.
 */
- (instancetype)init;

#pragma mark Protected

/*!
 @brief Returns the list of <code>TrustManager</code>s with one entry for each type
 of trust material.
 @return the list of <code>TrustManager</code>s
 */
- (IOSObjectArray *)engineGetTrustManagers;

/*!
 @brief Initializes this factory instance with the specified keystore as source
 of certificate authorities and trust material.
 @param ks
 the keystore or <code>null</code>.
 @throws KeyStoreException
 if the initialization fails.
 */
- (void)engineInitWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks;

/*!
 @brief Initializes this factory instance with the specified provider-specific
 parameters for a source of trust material.
 @param spec
 the provider-specific parameters.
 @throws InvalidAlgorithmParameterException
 if the initialization fails.
 */
- (void)engineInitWithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslTrustManagerFactorySpi)

FOUNDATION_EXPORT void JavaxNetSslTrustManagerFactorySpi_init(JavaxNetSslTrustManagerFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslTrustManagerFactorySpi)

#endif // _JavaxNetSslTrustManagerFactorySpi_H_
