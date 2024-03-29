//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/WritableByteChannel.java
//

#ifndef _JavaNioChannelsWritableByteChannel_H_
#define _JavaNioChannelsWritableByteChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/Channel.h"

@class JavaNioByteBuffer;

/*!
 @brief A <code>WritableByteChannel</code> is a type of <code>Channel</code> that can write
 bytes.
 <p>
 Write operations are synchronous on a <code>WritableByteChannel</code>, that is,
 if a write is already in progress on the channel then subsequent writes will
 block until the first write completes. It is undefined whether non-write
 operations will block.
 */
@protocol JavaNioChannelsWritableByteChannel < JavaNioChannelsChannel, NSObject, JavaObject >

/*!
 @brief Writes bytes from the given buffer to the channel.
 <p>
 The maximum number of bytes that will be written is the
 <code>remaining()</code> number of bytes in the buffer when the method
 invoked. The bytes will be written from the buffer starting at the
 buffer's <code>position</code>.
 <p>
 The call may block if other threads are also attempting to write on the
 same channel.
 <p>
 Upon completion, the buffer's <code>position()</code> is updated to the
 end of the bytes that were written. The buffer's <code>limit()</code>
 is unmodified.
 @param buffer
 the byte buffer containing the bytes to be written.
 @return the number of bytes actually written.
 @throws NonWritableChannelException
 if the channel was not opened for writing.
 @throws ClosedChannelException
 if the channel was already closed.
 @throws AsynchronousCloseException
 if another thread closes the channel during the write.
 @throws ClosedByInterruptException
 if another thread interrupt the calling thread during the
 write.
 @throws IOException
 another IO exception occurs, details are in the message.
 */
- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsWritableByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsWritableByteChannel)

#endif // _JavaNioChannelsWritableByteChannel_H_
