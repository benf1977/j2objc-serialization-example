//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/Pipe.java
//

#ifndef _JavaNioChannelsPipe_H_
#define _JavaNioChannelsPipe_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/GatheringByteChannel.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/channels/ScatteringByteChannel.h"
#include "java/nio/channels/WritableByteChannel.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

@class JavaNioChannelsPipe_SinkChannel;
@class JavaNioChannelsPipe_SourceChannel;
@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief A pipe contains two channels, forming a unidirectional pipe.
 One is the writable sink channel,
 and the other is the readable source channel. When bytes are written into the writable
 channel they can be read from the readable channel. Bytes are read in the order in which they
 were written.
 */
@interface JavaNioChannelsPipe : NSObject

#pragma mark Public

/*!
 @brief Returns a new pipe from the default .
 @throws IOException
 if an I/O error occurs.
 */
+ (JavaNioChannelsPipe *)open;

/*!
 @brief Returns the sink channel of the pipe.
 @return a writable sink channel of the pipe.
 */
- (JavaNioChannelsPipe_SinkChannel *)sink;

/*!
 @brief Returns the source channel of the pipe.
 @return a readable source channel of the pipe.
 */
- (JavaNioChannelsPipe_SourceChannel *)source;

#pragma mark Protected

/*!
 @brief The protected default constructor.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsPipe)

FOUNDATION_EXPORT JavaNioChannelsPipe *JavaNioChannelsPipe_open();

FOUNDATION_EXPORT void JavaNioChannelsPipe_init(JavaNioChannelsPipe *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsPipe)

/*!
 @brief Writable sink channel used to write to a pipe.
 */
@interface JavaNioChannelsPipe_SinkChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsWritableByteChannel, JavaNioChannelsGatheringByteChannel >

#pragma mark Public

/*!
 @brief Indicates that this channel only supports writing.
 @return a static value of OP_WRITE.
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Constructs a new <code>SinkChannel</code>.
 @param provider
 the provider of the channel.
 */
- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsPipe_SinkChannel)

FOUNDATION_EXPORT void JavaNioChannelsPipe_SinkChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsPipe_SinkChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsPipe_SinkChannel)

/*!
 @brief Readable source channel used to read from a pipe.
 */
@interface JavaNioChannelsPipe_SourceChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsReadableByteChannel, JavaNioChannelsScatteringByteChannel >

#pragma mark Public

/*!
 @brief Indicates that this channel only supports reading.
 @return a static value of OP_READ.
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Constructs a new <code>SourceChannel</code>.
 @param provider
 the provider of the channel.
 */
- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsPipe_SourceChannel)

FOUNDATION_EXPORT void JavaNioChannelsPipe_SourceChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsPipe_SourceChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsPipe_SourceChannel)

#endif // _JavaNioChannelsPipe_H_
