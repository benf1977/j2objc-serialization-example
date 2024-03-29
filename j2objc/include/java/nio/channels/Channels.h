//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/Channels.java
//

#ifndef _JavaNioChannelsChannels_H_
#define _JavaNioChannelsChannels_H_

#include "J2ObjC_header.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaNioCharsetCharsetDecoder;
@class JavaNioCharsetCharsetEncoder;
@protocol JavaNioChannelsChannel;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaNioChannelsWritableByteChannel;

/*!
 @brief This class provides several utilities to get I/O streams from channels.
 */
@interface JavaNioChannelsChannels : NSObject

#pragma mark Public

/*!
 @brief Returns a readable channel on the given input stream.
 The resulting
 channel has the following properties:
 <ul>
 <li>If the channel is closed, then the underlying stream is closed as
 well.</li>
 <li>It is not buffered.</li>
 </ul>
 @param inputStream
 the stream to be wrapped by a byte channel.
 @return a byte channel that reads bytes from the input stream.
 */
+ (id<JavaNioChannelsReadableByteChannel>)newChannelWithJavaIoInputStream:(JavaIoInputStream *)inputStream OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a writable channel on the given output stream.
 The resulting channel has following properties:
 <ul>
 <li>If the channel is closed, then the underlying stream is closed as
 well.</li>
 <li>It is not buffered.</li>
 </ul>
 @param outputStream
 the stream to be wrapped by a byte channel.
 @return a byte channel that writes bytes to the output stream.
 */
+ (id<JavaNioChannelsWritableByteChannel>)newChannelWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an input stream on the given channel.
 The resulting stream has
 the following properties:
 <ul>
 <li>If the stream is closed, then the underlying channel is closed as
 well.</li>
 <li>It is thread safe.</li>
 <li>It throws an <code>IllegalBlockingModeException</code> if the channel is
 in non-blocking mode and <code>read</code> is called.</li>
 <li>Neither <code>mark</code> nor <code>reset</code> is supported.</li>
 <li>It is not buffered.</li>
 </ul>
 @param channel
 the channel to be wrapped by an InputStream.
 @return an InputStream that takes bytes from the given byte channel.
 */
+ (JavaIoInputStream *)newInputStreamWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an output stream on the given channel.
 The resulting stream has
 the following properties:
 <ul>
 <li>If the stream is closed, then the underlying channel is closed as
 well.</li>
 <li>It is thread safe.</li>
 <li>It throws an <code>IllegalBlockingModeException</code> if the channel is
 in non-blocking mode and <code>write</code> is called.</li>
 <li>It is not buffered.</li>
 </ul>
 @param channel
 the channel to be wrapped by an OutputStream.
 @return an OutputStream that puts bytes onto the given byte channel.
 */
+ (JavaIoOutputStream *)newOutputStreamWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a reader that decodes bytes from a channel.
 @param channel
 the Channel to be read.
 @param decoder
 the Charset decoder to be used.
 @param minBufferCapacity
 The minimum size of the byte buffer, -1 means to use the
 default size.
 @return the reader.
 */
+ (JavaIoReader *)newReaderWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel
                                 withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)decoder
                                                          withInt:(jint)minBufferCapacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a reader that decodes bytes from a channel.
 This method creates a
 reader with a buffer of default size.
 @param channel
 the Channel to be read.
 @param charsetName
 the name of the charset.
 @return the reader.
 @throws java.nio.charset.UnsupportedCharsetException
 if the given charset name is not supported.
 */
+ (JavaIoReader *)newReaderWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel
                                                     withNSString:(NSString *)charsetName OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a writer that encodes characters with the specified
 <code>encoder</code> and sends the bytes to the specified channel.
 @param channel
 the Channel to write to.
 @param encoder
 the CharsetEncoder to be used.
 @param minBufferCapacity
 the minimum size of the byte buffer, -1 means to use the
 default size.
 @return the writer.
 */
+ (JavaIoWriter *)newWriterWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel
                                 withJavaNioCharsetCharsetEncoder:(JavaNioCharsetCharsetEncoder *)encoder
                                                          withInt:(jint)minBufferCapacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a writer that encodes characters with the specified
 <code>encoder</code> and sends the bytes to the specified channel.
 This method
 creates a writer with a buffer of default size.
 @param channel
 the Channel to be written to.
 @param charsetName
 the name of the charset.
 @return the writer.
 @throws java.nio.charset.UnsupportedCharsetException
 if the given charset name is not supported.
 */
+ (JavaIoWriter *)newWriterWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel
                                                     withNSString:(NSString *)charsetName OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

+ (void)checkBlockingWithJavaNioChannelsChannel:(id<JavaNioChannelsChannel>)channel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels)

FOUNDATION_EXPORT JavaIoInputStream *JavaNioChannelsChannels_newInputStreamWithJavaNioChannelsReadableByteChannel_(id<JavaNioChannelsReadableByteChannel> channel);

FOUNDATION_EXPORT JavaIoOutputStream *JavaNioChannelsChannels_newOutputStreamWithJavaNioChannelsWritableByteChannel_(id<JavaNioChannelsWritableByteChannel> channel);

FOUNDATION_EXPORT id<JavaNioChannelsReadableByteChannel> JavaNioChannelsChannels_newChannelWithJavaIoInputStream_(JavaIoInputStream *inputStream);

FOUNDATION_EXPORT id<JavaNioChannelsWritableByteChannel> JavaNioChannelsChannels_newChannelWithJavaIoOutputStream_(JavaIoOutputStream *outputStream);

FOUNDATION_EXPORT JavaIoReader *JavaNioChannelsChannels_newReaderWithJavaNioChannelsReadableByteChannel_withJavaNioCharsetCharsetDecoder_withInt_(id<JavaNioChannelsReadableByteChannel> channel, JavaNioCharsetCharsetDecoder *decoder, jint minBufferCapacity);

FOUNDATION_EXPORT JavaIoReader *JavaNioChannelsChannels_newReaderWithJavaNioChannelsReadableByteChannel_withNSString_(id<JavaNioChannelsReadableByteChannel> channel, NSString *charsetName);

FOUNDATION_EXPORT JavaIoWriter *JavaNioChannelsChannels_newWriterWithJavaNioChannelsWritableByteChannel_withJavaNioCharsetCharsetEncoder_withInt_(id<JavaNioChannelsWritableByteChannel> channel, JavaNioCharsetCharsetEncoder *encoder, jint minBufferCapacity);

FOUNDATION_EXPORT JavaIoWriter *JavaNioChannelsChannels_newWriterWithJavaNioChannelsWritableByteChannel_withNSString_(id<JavaNioChannelsWritableByteChannel> channel, NSString *charsetName);

FOUNDATION_EXPORT void JavaNioChannelsChannels_checkBlockingWithJavaNioChannelsChannel_(id<JavaNioChannelsChannel> channel);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels)

#endif // _JavaNioChannelsChannels_H_
