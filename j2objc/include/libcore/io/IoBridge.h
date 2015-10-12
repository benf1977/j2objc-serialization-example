//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/IoBridge.java
//

#ifndef _LibcoreIoIoBridge_H_
#define _LibcoreIoIoBridge_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNioByteBuffer;

#define LibcoreIoIoBridge_JAVA_MCAST_JOIN_GROUP 19
#define LibcoreIoIoBridge_JAVA_MCAST_LEAVE_GROUP 20
#define LibcoreIoIoBridge_JAVA_MCAST_JOIN_SOURCE_GROUP 21
#define LibcoreIoIoBridge_JAVA_MCAST_LEAVE_SOURCE_GROUP 22
#define LibcoreIoIoBridge_JAVA_MCAST_BLOCK_SOURCE 23
#define LibcoreIoIoBridge_JAVA_MCAST_UNBLOCK_SOURCE 24
#define LibcoreIoIoBridge_JAVA_IP_MULTICAST_TTL 17

/*!
 @brief Implements java.io/java.net/java.nio semantics in terms of the underlying POSIX system calls.
 */
@interface LibcoreIoIoBridge : NSObject

#pragma mark Public

+ (jint)availableWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

+ (void)bindWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
              withJavaNetInetAddress:(JavaNetInetAddress *)address
                             withInt:(jint)port;

+ (void)closeSocketWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Connects socket 'fd' to 'inetAddress' on 'port', with no timeout.
 The lack of a timeout
 means this method won't throw SocketTimeoutException.
 */
+ (void)connectWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                 withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                                withInt:(jint)port;

/*!
 @brief Connects socket 'fd' to 'inetAddress' on 'port', with a the given 'timeoutMs'.
 Use timeoutMs == 0 for a blocking connect with no timeout.
 */
+ (void)connectWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                 withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                                withInt:(jint)port
                                withInt:(jint)timeoutMs;

+ (JavaNetInetAddress *)getSocketLocalAddressWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

+ (jint)getSocketLocalPortWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief java.net has its own socket options similar to the underlying Unix ones.
 We paper over the
 differences here.
 */
+ (id)getSocketOptionWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                      withInt:(jint)option;

+ (jboolean)isConnectedWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                         withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                                        withInt:(jint)port
                                        withInt:(jint)timeoutMs
                                        withInt:(jint)remainingTimeoutMs;

/*!
 @brief java.io only throws FileNotFoundException when opening files, regardless of what actually
 went wrong.
 Additionally, java.io is more restrictive than POSIX when it comes to opening
 directories: POSIX says read-only is okay, but java.io doesn't even allow that. We also
 have an Android-specific hack to alter the default permissions.
 */
+ (JavaIoFileDescriptor *)openWithNSString:(NSString *)path
                                   withInt:(jint)flags;

/*!
 @brief java.io thinks that a read at EOF is an error and should return -1, contrary to traditional
 Unix practice where you'd read until you got 0 bytes (and any future read would return -1).
 */
+ (jint)readWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                       withByteArray:(IOSByteArray *)bytes
                             withInt:(jint)byteOffset
                             withInt:(jint)byteCount;

+ (jint)recvfromWithBoolean:(jboolean)isRead
   withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
              withByteArray:(IOSByteArray *)bytes
                    withInt:(jint)byteOffset
                    withInt:(jint)byteCount
                    withInt:(jint)flags
  withJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet
                withBoolean:(jboolean)isConnected;

+ (jint)recvfromWithBoolean:(jboolean)isRead
   withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
      withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                    withInt:(jint)flags
  withJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet
                withBoolean:(jboolean)isConnected;

+ (jint)sendtoWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                         withByteArray:(IOSByteArray *)bytes
                               withInt:(jint)byteOffset
                               withInt:(jint)byteCount
                               withInt:(jint)flags
                withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                               withInt:(jint)port;

+ (jint)sendtoWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                 withJavaNioByteBuffer:(JavaNioByteBuffer *)buffer
                               withInt:(jint)flags
                withJavaNetInetAddress:(JavaNetInetAddress *)inetAddress
                               withInt:(jint)port;

/*!
 @brief java.net has its own socket options similar to the underlying Unix ones.
 We paper over the
 differences here.
 */
+ (void)setSocketOptionWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                        withInt:(jint)option
                                         withId:(id)value;

+ (JavaIoFileDescriptor *)socketWithBoolean:(jboolean)stream;

/*!
 @brief java.io always writes every byte it's asked to, or fails with an error.
 (That is, unlike
 Unix it never just writes as many bytes as happens to be convenient.)
 */
+ (void)writeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                        withByteArray:(IOSByteArray *)bytes
                              withInt:(jint)byteOffset
                              withInt:(jint)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoIoBridge)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_MCAST_JOIN_GROUP, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_MCAST_LEAVE_GROUP, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_MCAST_JOIN_SOURCE_GROUP, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_MCAST_LEAVE_SOURCE_GROUP, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_MCAST_BLOCK_SOURCE, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_MCAST_UNBLOCK_SOURCE, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIoIoBridge, JAVA_IP_MULTICAST_TTL, jint)

FOUNDATION_EXPORT jint LibcoreIoIoBridge_availableWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void LibcoreIoIoBridge_bindWithJavaIoFileDescriptor_withJavaNetInetAddress_withInt_(JavaIoFileDescriptor *fd, JavaNetInetAddress *address, jint port);

FOUNDATION_EXPORT void LibcoreIoIoBridge_connectWithJavaIoFileDescriptor_withJavaNetInetAddress_withInt_(JavaIoFileDescriptor *fd, JavaNetInetAddress *inetAddress, jint port);

FOUNDATION_EXPORT void LibcoreIoIoBridge_connectWithJavaIoFileDescriptor_withJavaNetInetAddress_withInt_withInt_(JavaIoFileDescriptor *fd, JavaNetInetAddress *inetAddress, jint port, jint timeoutMs);

FOUNDATION_EXPORT void LibcoreIoIoBridge_closeSocketWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT jboolean LibcoreIoIoBridge_isConnectedWithJavaIoFileDescriptor_withJavaNetInetAddress_withInt_withInt_withInt_(JavaIoFileDescriptor *fd, JavaNetInetAddress *inetAddress, jint port, jint timeoutMs, jint remainingTimeoutMs);

FOUNDATION_EXPORT id LibcoreIoIoBridge_getSocketOptionWithJavaIoFileDescriptor_withInt_(JavaIoFileDescriptor *fd, jint option);

FOUNDATION_EXPORT void LibcoreIoIoBridge_setSocketOptionWithJavaIoFileDescriptor_withInt_withId_(JavaIoFileDescriptor *fd, jint option, id value);

FOUNDATION_EXPORT JavaIoFileDescriptor *LibcoreIoIoBridge_openWithNSString_withInt_(NSString *path, jint flags);

FOUNDATION_EXPORT jint LibcoreIoIoBridge_readWithJavaIoFileDescriptor_withByteArray_withInt_withInt_(JavaIoFileDescriptor *fd, IOSByteArray *bytes, jint byteOffset, jint byteCount);

FOUNDATION_EXPORT void LibcoreIoIoBridge_writeWithJavaIoFileDescriptor_withByteArray_withInt_withInt_(JavaIoFileDescriptor *fd, IOSByteArray *bytes, jint byteOffset, jint byteCount);

FOUNDATION_EXPORT jint LibcoreIoIoBridge_sendtoWithJavaIoFileDescriptor_withByteArray_withInt_withInt_withInt_withJavaNetInetAddress_withInt_(JavaIoFileDescriptor *fd, IOSByteArray *bytes, jint byteOffset, jint byteCount, jint flags, JavaNetInetAddress *inetAddress, jint port);

FOUNDATION_EXPORT jint LibcoreIoIoBridge_sendtoWithJavaIoFileDescriptor_withJavaNioByteBuffer_withInt_withJavaNetInetAddress_withInt_(JavaIoFileDescriptor *fd, JavaNioByteBuffer *buffer, jint flags, JavaNetInetAddress *inetAddress, jint port);

FOUNDATION_EXPORT jint LibcoreIoIoBridge_recvfromWithBoolean_withJavaIoFileDescriptor_withByteArray_withInt_withInt_withInt_withJavaNetDatagramPacket_withBoolean_(jboolean isRead, JavaIoFileDescriptor *fd, IOSByteArray *bytes, jint byteOffset, jint byteCount, jint flags, JavaNetDatagramPacket *packet, jboolean isConnected);

FOUNDATION_EXPORT jint LibcoreIoIoBridge_recvfromWithBoolean_withJavaIoFileDescriptor_withJavaNioByteBuffer_withInt_withJavaNetDatagramPacket_withBoolean_(jboolean isRead, JavaIoFileDescriptor *fd, JavaNioByteBuffer *buffer, jint flags, JavaNetDatagramPacket *packet, jboolean isConnected);

FOUNDATION_EXPORT JavaIoFileDescriptor *LibcoreIoIoBridge_socketWithBoolean_(jboolean stream);

FOUNDATION_EXPORT JavaNetInetAddress *LibcoreIoIoBridge_getSocketLocalAddressWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT jint LibcoreIoIoBridge_getSocketLocalPortWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoIoBridge)

#endif // _LibcoreIoIoBridge_H_
