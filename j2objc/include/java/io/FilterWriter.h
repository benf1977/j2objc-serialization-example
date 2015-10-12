//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FilterWriter.java
//

#ifndef _JavaIoFilterWriter_H_
#define _JavaIoFilterWriter_H_

#include "J2ObjC_header.h"
#include "java/io/Writer.h"

@class IOSCharArray;

/*!
 @brief Wraps an existing <code>Writer</code> and performs some transformation on the
 output data while it is being written.
 Transformations can be anything from a
 simple byte-wise filtering output data to an on-the-fly compression or
 decompression of the underlying writer. Writers that wrap another writer and
 provide some additional functionality on top of it usually inherit from this
 class.
 */
@interface JavaIoFilterWriter : JavaIoWriter {
 @public
  /*!
   @brief The Writer being filtered.
   */
  JavaIoWriter *out_;
}

#pragma mark Public

/*!
 @brief Closes this writer.
 This implementation closes the target writer.
 @throws IOException
 if an error occurs attempting to close this writer.
 */
- (void)close;

/*!
 @brief Flushes this writer to ensure all pending data is sent out to the target
 writer.
 This implementation flushes the target writer.
 @throws IOException
 if an error occurs attempting to flush this writer.
 */
- (void)flush;

/*!
 @brief Writes <code>count</code> characters from the char array <code>buffer</code>
 starting at position <code>offset</code> to the target writer.
 @param buffer
 the buffer to write.
 @param offset
 the index of the first character in <code>buffer</code> to write.
 @param count
 the number of characters in <code>buffer</code> to write.
 @throws IOException
 if an error occurs while writing to this writer.
 */
- (void)writeWithCharArray:(IOSCharArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes the specified character <code>oneChar</code> to the target writer.
 Only the
 two least significant bytes of the integer <code>oneChar</code> are written.
 @param oneChar
 the char to write to the target writer.
 @throws IOException
 if an error occurs while writing to this writer.
 */
- (void)writeWithInt:(jint)oneChar;

/*!
 @brief Writes <code>count</code> characters from the string <code>str</code> starting at
 position <code>index</code> to this writer.
 This implementation writes
 <code>str</code> to the target writer.
 @param str
 the string to be written.
 @param offset
 the index of the first character in <code>str</code> to write.
 @param count
 the number of chars in <code>str</code> to write.
 @throws IOException
 if an error occurs while writing to this writer.
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

#pragma mark Protected

/*!
 @brief Constructs a new FilterWriter on the Writer <code>out</code>.
 All writes are
 now filtered through this writer.
 @param outArg
 the target Writer to filter writes on.
 */
- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilterWriter)

J2OBJC_FIELD_SETTER(JavaIoFilterWriter, out_, JavaIoWriter *)

FOUNDATION_EXPORT void JavaIoFilterWriter_initWithJavaIoWriter_(JavaIoFilterWriter *self, JavaIoWriter *outArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilterWriter)

#endif // _JavaIoFilterWriter_H_
