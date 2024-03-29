//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/ECPrivateKey.java
//

#ifndef _JavaSecurityInterfacesECPrivateKey_H_
#define _JavaSecurityInterfacesECPrivateKey_H_

#include "J2ObjC_header.h"
#include "java/security/PrivateKey.h"
#include "java/security/interfaces/ECKey.h"

@class JavaMathBigInteger;

#define JavaSecurityInterfacesECPrivateKey_serialVersionUID -7896394956925609184LL

/*!
 @brief The interface for an Elliptic Curve (EC) private key.
 */
@protocol JavaSecurityInterfacesECPrivateKey < JavaSecurityPrivateKey, JavaSecurityInterfacesECKey, NSObject, JavaObject >

/*!
 @brief Returns the private value <code>S</code>.
 @return the private value <code>S</code>.
 */
- (JavaMathBigInteger *)getS;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesECPrivateKey)

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInterfacesECPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesECPrivateKey)

#endif // _JavaSecurityInterfacesECPrivateKey_H_
