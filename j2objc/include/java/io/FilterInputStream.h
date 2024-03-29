//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FilterInputStream.java
//

#ifndef _JavaIoFilterInputStream_H_
#define _JavaIoFilterInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief Wraps an existing <code>InputStream</code> and performs some transformation on
 the input data while it is being read.
 Transformations can be anything from a
 simple byte-wise filtering input data to an on-the-fly compression or
 decompression of the underlying stream. Input streams that wrap another input
 stream and provide some additional functionality on top of it usually inherit
 from this class.
 */
@interface JavaIoFilterInputStream : JavaIoInputStream {
 @public
  /*!
   @brief The source input stream that is filtered.
   */
  volatile_id in_;
}

#pragma mark Public

- (jint)available;

/*!
 @brief Closes this stream.
 This implementation closes the filtered stream.
 @throws IOException
 if an error occurs while closing this stream.
 */
- (void)close;

/*!
 @brief Sets a mark position in this stream.
 The parameter <code>readlimit</code>
 indicates how many bytes can be read before the mark is invalidated.
 Sending <code>reset()</code> will reposition this stream back to the marked
 position, provided that <code>readlimit</code> has not been surpassed.
 <p>
 This implementation sets a mark in the filtered stream.
 @param readlimit
 the number of bytes that can be read from this stream before
 the mark is invalidated.
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Indicates whether this stream supports <code>mark()</code> and <code>reset()</code>.
 This implementation returns whether or not the filtered stream supports
 marking.
 @return <code>true</code> if <code>mark()</code> and <code>reset()</code> are supported,
 <code>false</code> otherwise.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single byte from the filtered stream and returns it as an integer
 in the range from 0 to 255.
 Returns -1 if the end of this stream has been
 reached.
 @return the byte read or -1 if the end of the filtered stream has been
 reached.
 @throws IOException
 if the stream is closed or another IOException occurs.
 */
- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Resets this stream to the last marked location.
 This implementation
 resets the target stream.
 @throws IOException
 if this stream is already closed, no mark has been set or the
 mark is no longer valid because more than <code>readlimit</code>
 bytes have been read since setting the mark.
 */
- (void)reset;

/*!
 @brief Skips <code>byteCount</code> bytes in this stream.
 Subsequent
 calls to <code>read</code> will not return these bytes unless <code>reset</code> is
 used. This implementation skips <code>byteCount</code> bytes in the
 filtered stream.
 @return the number of bytes actually skipped.
 @throws IOException
 if this stream is closed or another IOException occurs.
 */
- (jlong)skipWithLong:(jlong)byteCount;

#pragma mark Protected

/*!
 @brief Constructs a new <code>FilterInputStream</code> with the specified input
 stream as source.
 <p><strong>Warning:</strong> passing a null source creates an invalid
 <code>FilterInputStream</code>, that fails on every method that is not
 overridden. Subclasses should check for null in their constructors.
 @param inArg the input stream to filter reads on.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilterInputStream)

J2OBJC_VOLATILE_FIELD_SETTER(JavaIoFilterInputStream, in_, JavaIoInputStream *)

FOUNDATION_EXPORT void JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoFilterInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoFilterInputStream *new_JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilterInputStream)

#endif // _JavaIoFilterInputStream_H_
