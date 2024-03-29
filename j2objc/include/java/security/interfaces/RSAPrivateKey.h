//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAPrivateKey.java
//

#ifndef _JavaSecurityInterfacesRSAPrivateKey_H_
#define _JavaSecurityInterfacesRSAPrivateKey_H_

#include "J2ObjC_header.h"
#include "java/security/PrivateKey.h"
#include "java/security/interfaces/RSAKey.h"

@class JavaMathBigInteger;

#define JavaSecurityInterfacesRSAPrivateKey_serialVersionUID 5187144804936595022LL

/*!
 @brief The interface for an PKCS#1 RSA private key.
 */
@protocol JavaSecurityInterfacesRSAPrivateKey < JavaSecurityPrivateKey, JavaSecurityInterfacesRSAKey, NSObject, JavaObject >

/*!
 @brief Returns the private exponent <code>d</code>.
 @return the private exponent <code>d</code>.
 */
- (JavaMathBigInteger *)getPrivateExponent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPrivateKey)

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInterfacesRSAPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPrivateKey)

#endif // _JavaSecurityInterfacesRSAPrivateKey_H_
