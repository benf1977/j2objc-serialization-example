//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPathValidator.java
//

#ifndef _JavaSecurityCertCertPathValidator_H_
#define _JavaSecurityCertCertPathValidator_H_

#include "J2ObjC_header.h"

@class JavaSecurityCertCertPath;
@class JavaSecurityCertCertPathValidatorSpi;
@class JavaSecurityProvider;
@protocol JavaSecurityCertCertPathParameters;
@protocol JavaSecurityCertCertPathValidatorResult;

/*!
 @brief This class provides the functionality for validating certification paths
 (certificate chains) establishing a trust chain from a certificate to a trust
 anchor.
 */
@interface JavaSecurityCertCertPathValidator : NSObject

#pragma mark Public

/*!
 @brief Returns the certification path algorithm name.
 @return the certification path algorithm name.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the default <code>CertPathValidator</code> type from the <i>Security
 Properties</i>.
 @return the default <code>CertPathValidator</code> type from the <i>Security
 Properties</i>, or the string <code>"PKIX"</code> if it cannot be
 determined.
 */
+ (NSString *)getDefaultType;

/*!
 @brief Returns a new certification path validator for the specified algorithm.
 @param algorithm
 the algorithm name.
 @return a certification path validator for the requested algorithm.
 @throws NoSuchAlgorithmException
 if no installed provider provides the specified algorithm.
 @throws NullPointerException
 if algorithm is <code>null</code>.
 */
+ (JavaSecurityCertCertPathValidator *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a new certification path validator for the specified algorithm
 from the specified provider.
 The <code>provider</code> supplied does not
 have to be registered.
 @param algorithm
 the algorithm name.
 @param provider
 the security provider name.
 @return a certification path validator for the requested algorithm.
 @throws NoSuchAlgorithmException
 if the specified provider cannot provide the requested
 algorithm.
 @throws IllegalArgumentException if <code>provider == null</code>
 @throws NullPointerException
 if algorithm is <code>null</code>.
 */
+ (JavaSecurityCertCertPathValidator *)getInstanceWithNSString:(NSString *)algorithm
                                      withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a new certification path validator for the specified algorithm
 from the specified provider.
 @param algorithm
 the algorithm name.
 @param provider
 the security provider name.
 @return a certification path validator for the requested algorithm.
 @throws NoSuchAlgorithmException
 if the specified security provider cannot provide the
 requested algorithm.
 @throws NoSuchProviderException
 if no provider with the specified name can be found.
 @throws NullPointerException
 if algorithm is <code>null</code>.
 @throws IllegalArgumentException if <code>provider == null || provider.isEmpty()</code>
 */
+ (JavaSecurityCertCertPathValidator *)getInstanceWithNSString:(NSString *)algorithm
                                                  withNSString:(NSString *)provider;

/*!
 @brief Returns the security provider.
 @return the provider.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Validates the <code>CertPath</code> with the algorithm of this <code>CertPathValidator</code>
  using the specified algorithm parameters.
 @param certPath
 the certification path to be validated.
 @param params
 the certification path validator algorithm parameters.
 @return the validation result.
 @throws CertPathValidatorException
 if the validation fails, or the algorithm of the specified
 certification path cannot be validated using the algorithm of
 this instance.
 @throws InvalidAlgorithmParameterException
 if the specified algorithm parameters cannot be used with
 this algorithm.
 */
- (id<JavaSecurityCertCertPathValidatorResult>)validateWithJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)certPath
                                             withJavaSecurityCertCertPathParameters:(id<JavaSecurityCertCertPathParameters>)params;

#pragma mark Protected

/*!
 @brief Creates a new <code>CertPathValidator</code> instance.
 @param validatorSpi
 the implementation delegate.
 @param provider
 the security provider.
 @param algorithm
 the name of the algorithm.
 */
- (instancetype)initWithJavaSecurityCertCertPathValidatorSpi:(JavaSecurityCertCertPathValidatorSpi *)validatorSpi
                                    withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                withNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityCertCertPathValidator)

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidator_initWithJavaSecurityCertCertPathValidatorSpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertPathValidator *self, JavaSecurityCertCertPathValidatorSpi *validatorSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidator *new_JavaSecurityCertCertPathValidator_initWithJavaSecurityCertCertPathValidatorSpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertPathValidatorSpi *validatorSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathValidator *JavaSecurityCertCertPathValidator_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidator *JavaSecurityCertCertPathValidator_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidator *JavaSecurityCertCertPathValidator_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT NSString *JavaSecurityCertCertPathValidator_getDefaultType();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathValidator)

#endif // _JavaSecurityCertCertPathValidator_H_
