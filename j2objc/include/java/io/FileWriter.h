//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileWriter.java
//

#ifndef _JavaIoFileWriter_H_
#define _JavaIoFileWriter_H_

#include "J2ObjC_header.h"
#include "java/io/OutputStreamWriter.h"

@class JavaIoFile;
@class JavaIoFileDescriptor;

/*!
 @brief A specialized <code>Writer</code> that writes to a file in the file system.
 All write requests made by calling methods in this class are directly
 forwarded to the equivalent function of the underlying operating system.
 Since this may induce some performance penalty, in particular if many small
 write requests are made, a FileWriter is often wrapped by a
 BufferedWriter.
 */
@interface JavaIoFileWriter : JavaIoOutputStreamWriter

#pragma mark Public

/*!
 @brief Creates a FileWriter using the File <code>file</code>.
 @param file
 the non-null File to write bytes to.
 @throws IOException
 if <code>file</code> cannot be opened for writing.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Creates a FileWriter using the File <code>file</code>.
 The parameter
 <code>append</code> determines whether or not the file is opened and appended
 to or just opened and overwritten.
 @param file
 the non-null File to write bytes to.
 @param append
 indicates whether or not to append to an existing file.
 @throws IOException
 if the <code>file</code> cannot be opened for writing.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                       withBoolean:(jboolean)append;

/*!
 @brief Creates a FileWriter using the existing FileDescriptor <code>fd</code>.
 @param fd
 the non-null FileDescriptor to write bytes to.
 */
- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Creates a FileWriter using the platform dependent <code>filename</code>.
 @param filename
 the non-null name of the file to write bytes to.
 @throws IOException
 if the file cannot be opened for writing.
 */
- (instancetype)initWithNSString:(NSString *)filename;

/*!
 @brief Creates a FileWriter using the platform dependent <code>filename</code>.
 The
 parameter <code>append</code> determines whether or not the file is opened and
 appended to or just opened and overwritten.
 @param filename
 the non-null name of the file to write bytes to.
 @param append
 indicates whether or not to append to an existing file.
 @throws IOException
 if the <code>file</code> cannot be opened for writing.
 */
- (instancetype)initWithNSString:(NSString *)filename
                     withBoolean:(jboolean)append;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileWriter)

FOUNDATION_EXPORT void JavaIoFileWriter_initWithJavaIoFile_(JavaIoFileWriter *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoFileWriter *new_JavaIoFileWriter_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoFileWriter_initWithJavaIoFile_withBoolean_(JavaIoFileWriter *self, JavaIoFile *file, jboolean append);

FOUNDATION_EXPORT JavaIoFileWriter *new_JavaIoFileWriter_initWithJavaIoFile_withBoolean_(JavaIoFile *file, jboolean append) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoFileWriter_initWithJavaIoFileDescriptor_(JavaIoFileWriter *self, JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT JavaIoFileWriter *new_JavaIoFileWriter_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoFileWriter_initWithNSString_(JavaIoFileWriter *self, NSString *filename);

FOUNDATION_EXPORT JavaIoFileWriter *new_JavaIoFileWriter_initWithNSString_(NSString *filename) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoFileWriter_initWithNSString_withBoolean_(JavaIoFileWriter *self, NSString *filename, jboolean append);

FOUNDATION_EXPORT JavaIoFileWriter *new_JavaIoFileWriter_initWithNSString_withBoolean_(NSString *filename, jboolean append) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileWriter)

#endif // _JavaIoFileWriter_H_
