//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/Zip64.java
//

#ifndef _JavaUtilZipZip64_H_
#define _JavaUtilZipZip64_H_

#include "J2ObjC_header.h"

@class JavaIoByteArrayOutputStream;
@class JavaIoRandomAccessFile;
@class JavaUtilZipZipEntry;
@class JavaUtilZipZipFile_EocdRecord;

#define JavaUtilZipZip64_MAX_ZIP_ENTRY_AND_ARCHIVE_SIZE 4294967295LL

/*!
 */
@interface JavaUtilZipZip64 : NSObject

#pragma mark Public

/*!
 @brief Appends a zip64 extended info record to the extras contained in <code>ze</code>.
 If <code>ze</code>
 contains no extras, a new extras array is created.
 */
+ (void)insertZip64ExtendedInfoToExtrasWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

+ (JavaUtilZipZipFile_EocdRecord *)parseZip64EocdRecordWithJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)raf
                                                                         withLong:(jlong)eocdRecordOffset
                                                                          withInt:(jint)commentLength;

/*!
 @brief Parses the zip64 end of central directory record locator.
 The locator
 must be placed immediately before the end of central directory (eocd) record
 starting at <code>eocdOffset</code>.
 The position of the file cursor for <code>raf</code> after a call to this method
 is undefined an callers must reposition it after each call to this method.
 */
+ (jlong)parseZip64EocdRecordLocatorWithJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)raf
                                                      withLong:(jlong)eocdOffset;

/*!
 @brief Parse the zip64 extended info record from the extras present in <code>ze</code>.
 If <code>fromCentralDirectory</code> is true, we assume we're parsing a central directory
 record. We assume a local file header otherwise. The difference between the two is that
 a central directory entry is required to be complete, whereas a local file header isn't.
 This is due to the presence of an optional data descriptor after the file content.
 @return <code></code> true iff. a zip64 extended info record was found.
 */
+ (jboolean)parseZip64ExtendedInfoWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze
                                              withBoolean:(jboolean)fromCentralDirectory;

/*!
 @brief Copy the size, compressed size and local header offset fields from <code>ze</code> to
 inside <code>ze</code>'s extended info record.
 This is additional step is necessary when
 we could calculate the correct sizes only after writing out the entry. In this case,
 the local file header would not contain real sizes, and they would be present in the
 data descriptor and the central directory only.
 We choose the simplest strategy of always writing out the size, compressedSize and
 local header offset in all our Zip64 Extended info records.
 */
+ (void)refreshZip64ExtendedInfoWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

+ (void)writeZip64EocdRecordAndLocatorWithJavaIoByteArrayOutputStream:(JavaIoByteArrayOutputStream *)baos
                                                             withLong:(jlong)numEntries
                                                             withLong:(jlong)offset
                                                             withLong:(jlong)cDirSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZip64)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZip64, MAX_ZIP_ENTRY_AND_ARCHIVE_SIZE, jlong)

FOUNDATION_EXPORT jlong JavaUtilZipZip64_parseZip64EocdRecordLocatorWithJavaIoRandomAccessFile_withLong_(JavaIoRandomAccessFile *raf, jlong eocdOffset);

FOUNDATION_EXPORT JavaUtilZipZipFile_EocdRecord *JavaUtilZipZip64_parseZip64EocdRecordWithJavaIoRandomAccessFile_withLong_withInt_(JavaIoRandomAccessFile *raf, jlong eocdRecordOffset, jint commentLength);

FOUNDATION_EXPORT jboolean JavaUtilZipZip64_parseZip64ExtendedInfoWithJavaUtilZipZipEntry_withBoolean_(JavaUtilZipZipEntry *ze, jboolean fromCentralDirectory);

FOUNDATION_EXPORT void JavaUtilZipZip64_insertZip64ExtendedInfoToExtrasWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *ze);

FOUNDATION_EXPORT void JavaUtilZipZip64_refreshZip64ExtendedInfoWithJavaUtilZipZipEntry_(JavaUtilZipZipEntry *ze);

FOUNDATION_EXPORT void JavaUtilZipZip64_writeZip64EocdRecordAndLocatorWithJavaIoByteArrayOutputStream_withLong_withLong_withLong_(JavaIoByteArrayOutputStream *baos, jlong numEntries, jlong offset, jlong cDirSize);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZip64)

#endif // _JavaUtilZipZip64_H_
