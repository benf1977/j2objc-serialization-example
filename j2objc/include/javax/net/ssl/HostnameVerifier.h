//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/HostnameVerifier.java
//

#ifndef _JavaxNetSslHostnameVerifier_H_
#define _JavaxNetSslHostnameVerifier_H_

#include "J2ObjC_header.h"

@protocol JavaxNetSslSSLSession;

/*!
 @brief The interface to be used to provide hostname verification functionality.
 <p>
 This is an extended verification option that implementers can provide. It is to be used
 during a handshake if the URL's hostname does not match the peer's
 identification hostname.
 */
@protocol JavaxNetSslHostnameVerifier < NSObject, JavaObject >

/*!
 @brief Verifies that the specified hostname is allowed within the specified SSL
 session.
 @param hostname
 the hostname.
 @param session
 the SSL session of the connection.
 @return <code>true</code> if the specified hostname is allowed, otherwise
 <code>false</code>.
 */
- (jboolean)verifyWithNSString:(NSString *)hostname
     withJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)session;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslHostnameVerifier)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHostnameVerifier)

#endif // _JavaxNetSslHostnameVerifier_H_
