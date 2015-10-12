//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAKey.java
//

#ifndef _JavaSecurityInterfacesRSAKey_H_
#define _JavaSecurityInterfacesRSAKey_H_

#include "J2ObjC_header.h"

@class JavaMathBigInteger;

/*!
 @brief The base interface for PKCS#1 RSA public and private keys.
 */
@protocol JavaSecurityInterfacesRSAKey < NSObject, JavaObject >

/*!
 @brief Returns the modulus.
 @return the modulus.
 */
- (JavaMathBigInteger *)getModulus;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAKey)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAKey)

#endif // _JavaSecurityInterfacesRSAKey_H_