//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSessionContext.java
//

#ifndef _JavaxNetSslSSLSessionContext_H_
#define _JavaxNetSslSSLSessionContext_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@protocol JavaUtilEnumeration;
@protocol JavaxNetSslSSLSession;

/*!
 @brief A collection of <code>SSLSession</code>s.
 */
@protocol JavaxNetSslSSLSessionContext < NSObject, JavaObject >

/*!
 @brief Returns an iterable of all session identifiers in this session context.
 @return an iterable of all session identifiers in this session context.
 */
- (id<JavaUtilEnumeration>)getIds;

/*!
 @brief Returns the session for the specified session identifier.
 @param sessionId
 the session identifier of the session to look up.
 @return the session for the specified session identifier, or <code>null</code>
 if the specified session identifier does not refer to a session
 in this context.
 */
- (id<JavaxNetSslSSLSession>)getSessionWithByteArray:(IOSByteArray *)sessionId;

/*!
 @brief Returns the size of the session cache for this session context.
 @return the size of the session cache for this session context, or
 <code>zero</code> if unlimited.
 */
- (jint)getSessionCacheSize;

/*!
 @brief Returns the timeout for sessions in this session context.
 Sessions
 exceeding the timeout are invalidated.
 @return the timeout in seconds, or <code>zero</code> if unlimited.
 */
- (jint)getSessionTimeout;

/*!
 @brief Sets the size of the session cache for this session context.
 @param size
 the size of the session cache, or <code>zero</code> for unlimited
 cache size.
 @throws IllegalArgumentException
 if <code>size</code> is negative.
 */
- (void)setSessionCacheSizeWithInt:(jint)size;

/*!
 @brief Sets the timeout for sessions in this context.
 Sessions exceeding the
 timeout are invalidated.
 @param seconds
 the timeout in seconds, or <code>zero</code> if unlimited.
 @throws IllegalArgumentException
 if <code>seconds</code> is negative.
 */
- (void)setSessionTimeoutWithInt:(jint)seconds;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionContext)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionContext)

#endif // _JavaxNetSslSSLSessionContext_H_
