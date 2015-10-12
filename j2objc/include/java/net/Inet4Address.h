//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Inet4Address.java
//

#ifndef _JavaNetInet4Address_H_
#define _JavaNetInet4Address_H_

#include "J2ObjC_header.h"
#include "java/net/InetAddress.h"

@class IOSByteArray;

/*!
 @brief An IPv4 address.
 See <code>InetAddress</code>.
 */
@interface JavaNetInet4Address : JavaNetInetAddress

#pragma mark Public

- (jboolean)isAnyLocalAddress;

- (jboolean)isLinkLocalAddress;

- (jboolean)isLoopbackAddress;

- (jboolean)isMCGlobal;

- (jboolean)isMCLinkLocal;

- (jboolean)isMCNodeLocal;

- (jboolean)isMCOrgLocal;

- (jboolean)isMCSiteLocal;

- (jboolean)isMulticastAddress;

- (jboolean)isSiteLocalAddress;

#pragma mark Package-Private

- (instancetype)initWithByteArray:(IOSByteArray *)ipaddress
                     withNSString:(NSString *)hostName;

@end

J2OBJC_STATIC_INIT(JavaNetInet4Address)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ANY_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, ANY_, JavaNetInetAddress *)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ALL_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, ALL_, JavaNetInetAddress *)

FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_LOOPBACK_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetInet4Address, LOOPBACK_, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNetInet4Address_initWithByteArray_withNSString_(JavaNetInet4Address *self, IOSByteArray *ipaddress, NSString *hostName);

FOUNDATION_EXPORT JavaNetInet4Address *new_JavaNetInet4Address_initWithByteArray_withNSString_(IOSByteArray *ipaddress, NSString *hostName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet4Address)

#endif // _JavaNetInet4Address_H_