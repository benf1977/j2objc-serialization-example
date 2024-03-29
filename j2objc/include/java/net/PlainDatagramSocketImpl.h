//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PlainDatagramSocketImpl.java
//

#ifndef _JavaNetPlainDatagramSocketImpl_H_
#define _JavaNetPlainDatagramSocketImpl_H_

#include "J2ObjC_header.h"
#include "java/net/DatagramSocketImpl.h"

@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

/*!
  used in java.nio.
 */
@interface JavaNetPlainDatagramSocketImpl : JavaNetDatagramSocketImpl

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                     withInt:(jint)localPort;

- (void)bindWithInt:(jint)port
withJavaNetInetAddress:(JavaNetInetAddress *)address;

- (void)close;

- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)inetAddr
                              withInt:(jint)port;

- (void)create;

- (void)disconnect;

- (id)getOptionWithInt:(jint)option;

- (jint)getTimeToLive;

- (jbyte)getTTL;

- (void)joinWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)leaveWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (jint)peekDataWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

- (void)receiveWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet;

- (void)setOptionWithInt:(jint)option
                  withId:(id)value;

- (void)setTimeToLiveWithInt:(jint)ttl;

- (void)setTTLWithByte:(jbyte)ttl;

#pragma mark Protected

- (void)dealloc;

- (jint)peekWithJavaNetInetAddress:(JavaNetInetAddress *)sender;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPlainDatagramSocketImpl)

FOUNDATION_EXPORT void JavaNetPlainDatagramSocketImpl_initWithJavaIoFileDescriptor_withInt_(JavaNetPlainDatagramSocketImpl *self, JavaIoFileDescriptor *fd, jint localPort);

FOUNDATION_EXPORT JavaNetPlainDatagramSocketImpl *new_JavaNetPlainDatagramSocketImpl_initWithJavaIoFileDescriptor_withInt_(JavaIoFileDescriptor *fd, jint localPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetPlainDatagramSocketImpl_init(JavaNetPlainDatagramSocketImpl *self);

FOUNDATION_EXPORT JavaNetPlainDatagramSocketImpl *new_JavaNetPlainDatagramSocketImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPlainDatagramSocketImpl)

#endif // _JavaNetPlainDatagramSocketImpl_H_
