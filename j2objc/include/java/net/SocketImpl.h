//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/SocketImpl.java
//

#ifndef _JavaNetSocketImpl_H_
#define _JavaNetSocketImpl_H_

#include "J2ObjC_header.h"
#include "java/net/SocketOptions.h"

@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetInetAddress;
@class JavaNetSocketAddress;

/*!
 @brief This class is the base of all streaming socket implementation classes.
 Streaming sockets are wrapped by two classes, <code>ServerSocket</code> and
 <code>Socket</code> at the server and client end of a connection. At the server,
 there are two types of sockets engaged in communication, the <code>ServerSocket</code>
  on a well known port (referred to as listener) used to
 establish a connection and the resulting <code>Socket</code> (referred to as
 host).
 */
@interface JavaNetSocketImpl : NSObject < JavaNetSocketOptions > {
 @public
  /*!
   @brief The remote address this socket is connected to.
   */
  JavaNetInetAddress *address_;
  /*!
   @brief The remote port this socket is connected to.
   */
  jint port_;
  /*!
   @brief The file descriptor of this socket.
   */
  JavaIoFileDescriptor *fd_;
  /*!
   @brief The local port this socket is connected to.
   */
  jint localport_;
}

#pragma mark Public

- (instancetype)init;

/*!
  used by java.nio
 */
- (JavaIoFileDescriptor *)getFD$;

/*!
 @brief Initialize the bind() state.
  used in java.nio.
 */
- (void)onBindWithJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                             withInt:(jint)localPort;

/*!
 @brief Initialize the close() state.
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
 @brief Returns a string containing a concise, human-readable description of the
 socket.
 @return the textual representation of this socket.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Waits for an incoming request and blocks until the connection is opened
 on the given socket.
 @param newSocket
 the socket to accept connections on.
 @throws IOException
 if an error occurs while accepting a new connection.
 */
- (void)acceptWithJavaNetSocketImpl:(JavaNetSocketImpl *)newSocket;

/*!
 @brief Returns the available number of bytes which are readable from this socket
 without blocking.
 @return the number of bytes that may be read without blocking.
 @throws IOException
 if an error occurs while reading the number of bytes.
 */
- (jint)available;

/*!
 @brief Binds this socket to the specified local host address and port number.
 @param address
 the local machine address to bind this socket to.
 @param port
 the port on the local machine to bind this socket to.
 @throws IOException
 if an error occurs while binding this socket.
 */
- (void)bindWithJavaNetInetAddress:(JavaNetInetAddress *)address
                           withInt:(jint)port;

/*!
 @brief Closes this socket.
 This makes later access invalid.
 @throws IOException
 if an error occurs while closing this socket.
 */
- (void)close;

/*!
 @brief Connects this socket to the specified remote host address and port
 number.
 @param address
 the remote host address this socket has to be connected to.
 @param port
 the remote port on which this socket has to be connected.
 @throws IOException
 if an error occurs while connecting to the remote host.
 */
- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)address
                              withInt:(jint)port;

/*!
 @brief Connects this socket to the remote host address and port number specified
 by the <code>SocketAddress</code> object with the given timeout.
 This method
 will block indefinitely if the timeout is set to zero.
 @param remoteAddr
 the remote host address and port number to connect to.
 @param timeout
 the timeout value in milliseconds.
 @throws IOException
 if an error occurs while connecting.
 */
- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr
                                withInt:(jint)timeout;

/*!
 @brief Connects this socket to the specified remote host and port number.
 @param host
 the remote host this socket has to be connected to.
 @param port
 the remote port on which this socket has to be connected.
 @throws IOException
 if an error occurs while connecting to the remote host.
 */
- (void)connectWithNSString:(NSString *)host
                    withInt:(jint)port;

/*!
 @brief Creates a new unconnected socket.
 The argument <code>isStreaming</code>
 defines whether the new socket is a streaming or a datagram socket.
 @param isStreaming
 defines whether the type of the new socket is streaming or
 datagram.
 @throws IOException
 if an error occurs while creating the socket.
 */
- (void)createWithBoolean:(jboolean)isStreaming;

/*!
 @brief Gets the file descriptor of this socket.
 @return the file descriptor of this socket.
 */
- (JavaIoFileDescriptor *)getFileDescriptor;

/*!
 @brief Gets the remote address this socket is connected to.
 @return the remote address of this socket.
 */
- (JavaNetInetAddress *)getInetAddress;

/*!
 @brief Gets the input stream of this socket.
 @return the input stream of this socket.
 @throws IOException
 if an error occurs while accessing the input stream.
 */
- (JavaIoInputStream *)getInputStream;

/*!
 @brief Gets the local port number of this socket.
 The field is initialized to
 <code>-1</code> and upon demand will go to the IP stack to get the bound
 value. See the class comment for the context of the local port.
 @return the local port number this socket is bound to.
 */
- (jint)getLocalPort;

/*!
 @brief Gets the output stream of this socket.
 @return the output stream of this socket.
 @throws IOException
 if an error occurs while accessing the output stream.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Gets the remote port number of this socket.
 This value is not meaningful
 when this instance is wrapped by a <code>ServerSocket</code>.
 @return the remote port this socket is connected to.
 */
- (jint)getPort;

/*!
 @brief Listens for connection requests on this streaming socket.
 Incoming
 connection requests are queued up to the limit specified by <code>backlog</code>
 . Additional requests are rejected. This method
 may only be invoked on stream sockets.
 @param backlog
 the maximum number of outstanding connection requests.
 @throws IOException
 if an error occurs while listening.
 */
- (void)listenWithInt:(jint)backlog;

/*!
 @brief Sends the single byte of urgent data on the socket.
 @param value
 the byte of urgent data.
 @throws IOException
 if an error occurs sending urgent data.
 */
- (void)sendUrgentDataWithInt:(jint)value;

/*!
 @brief Sets performance preference for connection time, latency and bandwidth.
 Does nothing by default.
 @param connectionTime
 the importance of connect time.
 @param latency
 the importance of latency.
 @param bandwidth
 the importance of bandwidth.
 */
- (void)setPerformancePreferencesWithInt:(jint)connectionTime
                                 withInt:(jint)latency
                                 withInt:(jint)bandwidth;

/*!
 @brief Closes the input channel of this socket.
 <p>This default implementation always throws an <code>IOException</code> to
 indicate that the subclass should have overridden this method.
 @throws IOException
 always because this method should be overridden.
 */
- (void)shutdownInput;

/*!
 @brief Closes the output channel of this socket.
 <p>This default implementation always throws an <code>IOException</code> to
 indicate that the subclass should have overridden this method.
 @throws IOException
 always because this method should be overridden.
 */
- (void)shutdownOutput;

/*!
 @brief Returns whether the socket supports urgent data or not.
 Subclasses should
 override this method.
 @return <code>false</code> because subclasses must override this method.
 */
- (jboolean)supportsUrgentData;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketImpl)

J2OBJC_FIELD_SETTER(JavaNetSocketImpl, address_, JavaNetInetAddress *)
J2OBJC_FIELD_SETTER(JavaNetSocketImpl, fd_, JavaIoFileDescriptor *)

FOUNDATION_EXPORT void JavaNetSocketImpl_init(JavaNetSocketImpl *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketImpl)

#endif // _JavaNetSocketImpl_H_
