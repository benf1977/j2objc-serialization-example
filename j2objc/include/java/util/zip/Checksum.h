//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/Checksum.java
//

#ifndef _JavaUtilZipChecksum_H_
#define _JavaUtilZipChecksum_H_

#include "J2ObjC_header.h"

@class IOSByteArray;

/*!
 @brief The interface common to checksum classes such as <code>Adler32</code> and <code>CRC32</code>.
 */
@protocol JavaUtilZipChecksum < NSObject, JavaObject >

/*!
 @brief Returns the current calculated checksum value.
 @return the checksum.
 */
- (jlong)getValue;

/*!
 @brief Resets the checksum value applied before beginning calculations on a new
 stream of data.
 */
- (void)reset;

/*!
 @brief Updates the checksum with the given bytes.
 @param buf
 the byte array from which to read the bytes.
 @param off
 the initial position in <code>buf</code> to read the bytes from.
 @param nbytes
 the number of bytes to read from <code>buf</code>.
 */
- (void)updateWithByteArray:(IOSByteArray *)buf
                    withInt:(jint)off
                    withInt:(jint)nbytes;

/*!
 @brief Updates the checksum value with the given byte.
 @param val
 the byte to update the checksum with.
 */
- (void)updateWithInt:(jint)val;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipChecksum)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipChecksum)

#endif // _JavaUtilZipChecksum_H_
