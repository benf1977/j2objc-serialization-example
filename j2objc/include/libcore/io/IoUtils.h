//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/IoUtils.java
//

#ifndef _LibcoreIoIoUtils_H_
#define _LibcoreIoIoUtils_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNetSocket;
@protocol JavaLangAutoCloseable;

@interface LibcoreIoIoUtils : NSObject

#pragma mark Public

/*!
 @brief Checks whether <code>path</code> can be opened read-only.
 Similar to File.exists, but doesn't
 require read permission on the parent, so it'll work in more cases, and allow you to
 remove read permission from more directories.
 */
+ (jboolean)canOpenReadOnlyWithNSString:(NSString *)path;

/*!
 @brief Calls close(2) on 'fd'.
 Also resets the internal int to -1. Does nothing if 'fd' is null
 or invalid.
 */
+ (void)closeWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Closes 'closeable', ignoring any checked exceptions.
 Does nothing if 'closeable' is null.
 */
+ (void)closeQuietlyWithJavaLangAutoCloseable:(id<JavaLangAutoCloseable>)closeable;

/*!
 @brief Closes 'fd', ignoring any exceptions.
 Does nothing if 'fd' is null or invalid.
 */
+ (void)closeQuietlyWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Closes 'socket', ignoring any exceptions.
 Does nothing if 'socket' is null.
 */
+ (void)closeQuietlyWithJavaNetSocket:(JavaNetSocket *)socket;

/*!
 @brief Recursively delete everything in <code>dir</code>.
 */
+ (void)deleteContentsWithJavaIoFile:(JavaIoFile *)dir;

/*!
 @brief Returns the contents of 'path' as a byte array.
 */
+ (IOSByteArray *)readFileAsByteArrayWithNSString:(NSString *)path;

/*!
 @brief Returns the contents of 'path' as a string.
 The contents are assumed to be UTF-8.
 */
+ (NSString *)readFileAsStringWithNSString:(NSString *)path;

/*!
 @brief Sets 'fd' to be blocking or non-blocking, according to the state of 'blocking'.
 */
+ (void)setBlockingWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                withBoolean:(jboolean)blocking;

+ (void)throwInterruptedIoException;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoIoUtils)

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeQuietlyWithJavaLangAutoCloseable_(id<JavaLangAutoCloseable> closeable);

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeQuietlyWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void LibcoreIoIoUtils_closeQuietlyWithJavaNetSocket_(JavaNetSocket *socket);

FOUNDATION_EXPORT void LibcoreIoIoUtils_setBlockingWithJavaIoFileDescriptor_withBoolean_(JavaIoFileDescriptor *fd, jboolean blocking);

FOUNDATION_EXPORT IOSByteArray *LibcoreIoIoUtils_readFileAsByteArrayWithNSString_(NSString *path);

FOUNDATION_EXPORT NSString *LibcoreIoIoUtils_readFileAsStringWithNSString_(NSString *path);

FOUNDATION_EXPORT void LibcoreIoIoUtils_deleteContentsWithJavaIoFile_(JavaIoFile *dir);

FOUNDATION_EXPORT jboolean LibcoreIoIoUtils_canOpenReadOnlyWithNSString_(NSString *path);

FOUNDATION_EXPORT void LibcoreIoIoUtils_throwInterruptedIoException();

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoIoUtils)

#endif // _LibcoreIoIoUtils_H_
