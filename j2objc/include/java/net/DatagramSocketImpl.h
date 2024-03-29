//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/DatagramSocketImpl.java
//

#ifndef _JavaNetDatagramSocketImpl_H_
#define _JavaNetDatagramSocketImpl_H_

#include "J2ObjC_header.h"
#include "java/net/SocketOptions.h"

@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

/*!
 @brief The abstract superclass for datagram and multicast socket implementations.
 */
@interface JavaNetDatagramSocketImpl : NSObject < JavaNetSocketOptions > {
 @public
  /*!
   @brief File descriptor that is used to address this socket.
   */
  JavaIoFileDescriptor *fd_;
  /*!
   @brief The number of the local port to which this socket is bound.
   */
  jint localPort_;
}

#pragma mark Public

/*!
 @brief Constructs an unbound datagram socket implementation.
 */
- (instancetype)init;

#pragma mark Protected

/*!
 @brief Binds the datagram socket to the given localhost/port.
 Sockets must be
 bound prior to attempting to send or receive data.
 @param port
 the port on the localhost to bind.
 @param addr
 the address on the multihomed localhost to bind.
 @throws SocketException
 if an error occurs while binding, for example, if the port
 has been already bound.
 */
- (void)bindWithInt:(jint)port
withJavaNetInetAddress:(JavaNetInetAddress *)addr;

/*!
 @brief Closes this socket.
 */
- (void)close;

/*!
 @brief Connects this socket to the specified remote address and port.
 @param inetAddr
 the address of the target host which has to be connected.
 @param port
 the port on the target host which has to be connected.
 @throws SocketException
 if the datagram socket cannot be connected to the
 specified remote address and port.
 */
- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)inetAddr
                              withInt:(jint)port;

/*!
 @brief This method allocates the socket descriptor in the underlying operating
 system.
 @throws SocketException
 if an error occurs while creating the socket.
 */
- (void)create;

/*!
 @brief Disconnects this socket from the remote host.
 */
- (void)disconnect;

/*!
 @brief Gets the <code>FileDescriptor</code> of this datagram socket, which is invalid
 if the socket is closed or not bound.
 @return the current file descriptor of this socket.
 */
- (JavaIoFileDescriptor *)getFileDescriptor;

/*!
 @brief Returns the local port to which this socket is bound.
 */
- (jint)getLocalPort;

/*!
 @brief Gets the time-to-live (TTL) for multicast packets sent on this socket.
 The TTL option defines how many routers a packet may be pass before it is
 discarded.
 @return the time-to-live option as an integer value.
 @throws IOException
 if an error occurs while getting the time-to-live option
 value.
 */
- (jint)getTimeToLive;

/*!
 @brief Gets the time-to-live (TTL) for multicast packets sent on this socket.
 @return the time-to-live option as a byte value.
 @throws IOException
 if an error occurs while getting the time-to-live option
 value.
 */
- (jbyte)getTTL;

/*!
 @brief Adds this socket to the multicast group <code>addr</code>.
 A socket must join
 a group before being able to receive data. Further, a socket may be a
 member of multiple groups but may join any group only once.
 @param addr
 the multicast group to which this socket has to be joined.
 @throws IOException
 if an error occurs while joining the specified multicast
 group.
 */
- (void)joinWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

/*!
 @brief Adds this socket to the multicast group <code>addr</code>.
 A socket must join
 a group before being able to receive data. Further, a socket may be a
 member of multiple groups but may join any group only once.
 @param addr
 the multicast group to which this socket has to be joined.
 @param netInterface
 the local network interface which will receive the multicast
 datagram packets.
 @throws IOException
 if an error occurs while joining the specified multicast
 group.
 */
- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

/*!
 @brief Removes this socket from the multicast group <code>addr</code>.
 @param addr
 the multicast group to be left.
 @throws IOException
 if an error occurs while leaving the group or no multicast
 address was assigned.
 */
- (void)leaveWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

/*!
 @brief Removes this socket from the multicast group <code>addr</code>.
 @param addr
 the multicast group to be left.
 @param netInterface
 the local network interface on which this socket has to be
 removed.
 @throws IOException
 if an error occurs while leaving the group.
 */
- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

/*!
 @brief Initialize the bind() state.
  used in java.nio.
 */
- (void)onBindWithJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                             withInt:(jint)localPort;

/*!
 @brief Initialize the closed state.
  used in java.nio.
 */
- (void)onClose;

/*!
 @brief Initialize the connect() state.
  used in java.nio.
 */
- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort;

/*!
 @brief Initialize the disconnected state.
  used in java.nio.
 */
- (void)onDisconnect;

/*!
 @brief Peeks at the incoming packet to this socket and returns the address of
 the <code>sender</code>.
 The method will block until a packet is received or
 timeout expires.
 @param sender
 the origin address of a packet.
 @return the address of <code>sender</code> as an integer value.
 @throws IOException
 if an error or a timeout occurs while reading the address.
 */
- (jint)peekWithJavaNetInetAddress:(JavaNetInetAddress *)sender;

/*!
 @brief Receives data into the supplied datagram packet by peeking.
 The data is
 not removed from socket buffer and can be received again by another
 <code>peekData()</code> or <code>receive()</code> call. This call blocks until
 either data has been received or, if a timeout is set, the timeout has
 been expired.
 @param pack
 the datagram packet used to store the data.
 @return the port the packet was received from.
 @throws IOException
 if an error occurs while peeking at the data.
 */
- (jint)peekDataWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

/*!
 @brief Receives data and stores it in the supplied datagram packet <code>pack</code>.
 This call will block until either data has been received or, if a timeout
 is set, the timeout has expired. If the timeout expires an <code>InterruptedIOException</code>
  is thrown.
 @param pack
 the datagram packet container to fill in the received data.
 @throws IOException
 if an error or timeout occurs while receiving data.
 */
- (void)receiveWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

/*!
 @brief Sends the given datagram packet <code>pack</code>.
 The packet contains the
 data and the address and port information of the target host as well.
 @param pack
 the datagram packet to be sent.
 @throws IOException
 if an error occurs while sending the packet.
 */
- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

/*!
 @brief Sets the time-to-live (TTL) option for multicast packets sent on this
 socket.
 @param ttl
 the time-to-live option value. Valid values are 0 &lt; ttl
 &lt;= 255.
 @throws IOException
 if an error occurs while setting the option.
 */
- (void)setTimeToLiveWithInt:(jint)ttl;

/*!
 @brief Sets the time-to-live (TTL) option for multicast packets sent on this
 socket.
 @param ttl
 the time-to-live option value. Valid values are 0 &lt; ttl
 &lt;= 255.
 @throws IOException
 if an error occurs while setting the option.
 */
- (void)setTTLWithByte:(jbyte)ttl;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetDatagramSocketImpl)

J2OBJC_FIELD_SETTER(JavaNetDatagramSocketImpl, fd_, JavaIoFileDescriptor *)

FOUNDATION_EXPORT void JavaNetDatagramSocketImpl_init(JavaNetDatagramSocketImpl *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetDatagramSocketImpl)

#endif // _JavaNetDatagramSocketImpl_H_
