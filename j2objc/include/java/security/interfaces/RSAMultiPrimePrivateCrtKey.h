//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAMultiPrimePrivateCrtKey.java
//

#ifndef _JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_H_
#define _JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_H_

#include "J2ObjC_header.h"
#include "java/security/interfaces/RSAPrivateKey.h"

@class IOSObjectArray;
@class JavaMathBigInteger;

#define JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_serialVersionUID 618058533534628008LL

/*!
 @brief The interface for a Multi-Prime RSA private key.
 Specified by <a
 href="http://www.rsa.com/rsalabs/node.asp?id=2125">PKCS #1 v2.0 Amendment 1:
 Multi-Prime RSA</a>.
 */
@protocol JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey < JavaSecurityInterfacesRSAPrivateKey, NSObject, JavaObject >

/*!
 @brief Returns the CRT coefficient, <code>q^-1 mod p</code>.
 @return the CRT coefficient.
 */
- (JavaMathBigInteger *)getCrtCoefficient;

/*!
 @brief Returns the information for the additional primes.
 @return the information for the additional primes, or <code>null</code> if
 there are only the two primes (<code>p, q</code>),
 */
- (IOSObjectArray *)getOtherPrimeInfo;

/*!
 @brief Returns the prime factor <code>p</code> of <code>n</code>.
 @return the prime factor <code>p</code> of <code>n</code>.
 */
- (JavaMathBigInteger *)getPrimeP;

/*!
 @brief Returns the prime factor <code>q</code> of <code>n</code>.
 @return the prime factor <code>q</code> of <code>n</code>.
 */
- (JavaMathBigInteger *)getPrimeQ;

/*!
 @brief Returns the CRT exponent of the prime <code>p</code>.
 @return the CRT exponent of the prime <code>p</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentP;

/*!
 @brief Returns the CRT exponent of the prime <code>q</code>.
 @return the CRT exponent of the prime <code>q</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentQ;

/*!
 @brief Returns the public exponent <code>e</code>.
 @return the public exponent <code>e</code>.
 */
- (JavaMathBigInteger *)getPublicExponent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey)

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey)

#endif // _JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_H_
