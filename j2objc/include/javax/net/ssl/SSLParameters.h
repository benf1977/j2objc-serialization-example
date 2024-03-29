//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLParameters.java
//

#ifndef _JavaxNetSslSSLParameters_H_
#define _JavaxNetSslSSLParameters_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;

/*!
 @brief SSL handshake parameters that include protocols, cipher suites, and
 client authentication requirements.
 @since 1.6
 */
@interface JavaxNetSslSSLParameters : NSObject

#pragma mark Public

/*!
 @brief The default SSLParameters constructor.
 Cipher suites and
 protocols are initialized to null and client authentication
 options are initialized to false.
 */
- (instancetype)init;

/*!
 @brief A SSLParameters constructor that allows the values for the
 initial cipher suites array to be provided.
 Other values
 default as specified in <code>SSLParameters()</code>.
 @param cipherSuites An array of cipherSuites that is cloned for
 use within the SSLParameters, or null.
 */
- (instancetype)initWithNSStringArray:(IOSObjectArray *)cipherSuites;

/*!
 @brief A SSLParameters constructor that allows the values for initial
 cipher suites and protocols arrays to be provided.
 Other values
 default as specified in <code>SSLParameters()</code>.
 @param cipherSuites An array of cipher names that is cloned for
 use within the SSLParameters, or null.
 @param protocols An array of protocol names that is cloned for
 use within the SSLParameters, or null.
 */
- (instancetype)initWithNSStringArray:(IOSObjectArray *)cipherSuites
                    withNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Returns a copy of the cipher suites, or null if none have been
 specified.
 */
- (IOSObjectArray *)getCipherSuites;

/*!
 @brief Returns true if a server requires authentication from a client
 during handshaking.
 If this returns true, <code>getWantClientAuth</code>
  will return false.
 */
- (jboolean)getNeedClientAuth;

/*!
 @brief Returns a copy of the protocols, or null if none have been
 specified.
 */
- (IOSObjectArray *)getProtocols;

/*!
 @brief Returns true if a server optionally wants to authenticate a
 client during handshaking.
 If this returns true, <code>getNeedClientAuth</code>
  will return false.
 */
- (jboolean)getWantClientAuth;

/*!
 @brief Sets the cipher suites to a copy of the input, or null
 */
- (void)setCipherSuitesWithNSStringArray:(IOSObjectArray *)cipherSuites;

/*!
 @brief Sets whether or not to a server needs client authentication.
 After calling this, #getWantClientAuth() will return false.
 */
- (void)setNeedClientAuthWithBoolean:(jboolean)needClientAuth;

/*!
 @brief Sets the protocols to a copy of the input, or null
 */
- (void)setProtocolsWithNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Sets whether or not to a server wants client authentication.
 After calling this, #getNeedClientAuth() will return false.
 */
- (void)setWantClientAuthWithBoolean:(jboolean)wantClientAuth;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLParameters)

FOUNDATION_EXPORT void JavaxNetSslSSLParameters_init(JavaxNetSslSSLParameters *self);

FOUNDATION_EXPORT JavaxNetSslSSLParameters *new_JavaxNetSslSSLParameters_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxNetSslSSLParameters_initWithNSStringArray_(JavaxNetSslSSLParameters *self, IOSObjectArray *cipherSuites);

FOUNDATION_EXPORT JavaxNetSslSSLParameters *new_JavaxNetSslSSLParameters_initWithNSStringArray_(IOSObjectArray *cipherSuites) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxNetSslSSLParameters_initWithNSStringArray_withNSStringArray_(JavaxNetSslSSLParameters *self, IOSObjectArray *cipherSuites, IOSObjectArray *protocols);

FOUNDATION_EXPORT JavaxNetSslSSLParameters *new_JavaxNetSslSSLParameters_initWithNSStringArray_withNSStringArray_(IOSObjectArray *cipherSuites, IOSObjectArray *protocols) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLParameters)

#endif // _JavaxNetSslSSLParameters_H_
