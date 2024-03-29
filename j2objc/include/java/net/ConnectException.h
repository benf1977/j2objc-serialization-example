//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ConnectException.java
//

#ifndef _JavaNetConnectException_H_
#define _JavaNetConnectException_H_

#include "J2ObjC_header.h"
#include "java/net/SocketException.h"

@class JavaLangThrowable;

/*!
 @brief A <code>ConnectException</code> is thrown if a connection cannot be established to
 a remote host on a specific port.
 <p>Most applications <strong>should not</strong> catch this exception; it is
 more robust to catch the superclass <code>SocketException</code>.
 */
@interface JavaNetConnectException : JavaNetSocketException

#pragma mark Public

/*!
 @brief Constructs a new instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new instance with the given detail message and cause.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetConnectException)

FOUNDATION_EXPORT void JavaNetConnectException_init(JavaNetConnectException *self);

FOUNDATION_EXPORT JavaNetConnectException *new_JavaNetConnectException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetConnectException_initWithNSString_(JavaNetConnectException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetConnectException *new_JavaNetConnectException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetConnectException_initWithNSString_withJavaLangThrowable_(JavaNetConnectException *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetConnectException *new_JavaNetConnectException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetConnectException)

#endif // _JavaNetConnectException_H_
