//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/DataOutput.java
//

#ifndef _JavaIoDataOutput_H_
#define _JavaIoDataOutput_H_

#include "J2ObjC_header.h"

@class IOSByteArray;

/*!
 @brief Defines an interface for classes that are able to write big-endian typed data to some
 target.
 Typically, this data can be read in by a class which implements
 DataInput. Types that can be written include byte, 16-bit short, 32-bit int,
 32-bit float, 64-bit long, 64-bit double, byte strings, and <code>MUTF-8</code>
  encoded strings.
 */
@protocol JavaIoDataOutput < NSObject, JavaObject >

/*!
 @brief Writes the entire contents of the byte array <code>buffer</code> to this
 stream.
 @param buffer
 the buffer to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer;

/*!
 @brief Writes <code>count</code> bytes from the byte array <code>buffer</code> starting at
 offset <code>index</code>.
 @param buffer
 the buffer to write.
 @param offset
 the index of the first byte in <code>buffer</code> to write.
 @param count
 the number of bytes from the <code>buffer</code> to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

/*!
 @brief Writes the specified 8-bit byte.
 @param oneByte
 the byte to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeWithInt:(jint)oneByte;

/*!
 @brief Writes the specified boolean.
 @param val
 the boolean value to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeBooleanWithBoolean:(jboolean)val;

/*!
 @brief Writes the specified 8-bit byte.
 @param val
 the byte value to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeByteWithInt:(jint)val;

/*!
 @brief Writes the low order 8-bit bytes from the specified string.
 @param str
 the string containing the bytes to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeBytesWithNSString:(NSString *)str;

/*!
 @brief Writes the specified 16-bit character in big-endian order.
 Only the two least significant
 bytes of the integer <code>oneByte</code> are written.
 @param val
 the character to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeCharWithInt:(jint)val;

/*!
 @brief Writes the 16-bit characters contained in <code>str</code> in big-endian order.
 @param str
 the string that contains the characters to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeCharsWithNSString:(NSString *)str;

/*!
 @brief Writes the specified 64-bit double in big-endian order.
 The resulting output is the eight
 bytes returned by <code>Double.doubleToLongBits(double)</code>.
 @param val
 the double to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeDoubleWithDouble:(jdouble)val;

/*!
 @brief Writes the specified 32-bit float in big-endian order.
 The resulting output is the four bytes
 returned by <code>Float.floatToIntBits(float)</code>.
 @param val
 the float to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeFloatWithFloat:(jfloat)val;

/*!
 @brief Writes the specified 32-bit int in big-endian order.
 @param val
 the int to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeIntWithInt:(jint)val;

/*!
 @brief Writes the specified 64-bit long in big-endian order.
 @param val
 the long to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeLongWithLong:(jlong)val;

/*!
 @brief Writes the specified 16-bit short in big-endian order.
 Only the lower two bytes of <code>val</code>
  are written.
 @param val
 the short to write.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeShortWithInt:(jint)val;

/*!
 @brief Writes the specified string encoded in <code>modified UTF-8</code>.
 @param str
 the string to write encoded in <code>modified UTF-8</code>.
 @throws IOException
 if an I/O error occurs while writing.
 */
- (void)writeUTFWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataOutput)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataOutput)

#endif // _JavaIoDataOutput_H_
