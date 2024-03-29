//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/jar/JarFile.java
//

#ifndef _JavaUtilJarJarFile_H_
#define _JavaUtilJarJarFile_H_

#include "J2ObjC_header.h"
#include "java/io/FilterInputStream.h"
#include "java/util/Enumeration.h"
#include "java/util/zip/ZipFile.h"

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoInputStream;
@class JavaUtilHashMap;
@class JavaUtilJarJarEntry;
@class JavaUtilJarJarVerifier;
@class JavaUtilJarJarVerifier_VerifierEntry;
@class JavaUtilJarManifest;
@class JavaUtilZipZipEntry;
@protocol JavaUtilEnumeration;

/*!
 @brief <code>JarFile</code> is used to read jar entries and their associated data from
 jar files.
 */
@interface JavaUtilJarJarFile : JavaUtilZipZipFile {
 @public
  JavaUtilJarJarVerifier *verifier_;
}

#pragma mark Public

/*!
 @brief Create a new <code>JarFile</code> using the contents of the specified file.
 @param file
 the JAR file as <code>File</code>.
 @throws IOException
 If the file cannot be read.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Create a new <code>JarFile</code> using the contents of the specified file.
 @param file
 the JAR file as <code>File</code>.
 @param verify
 if this JAR file is signed whether it must be verified.
 @throws IOException
 If the file cannot be read.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                       withBoolean:(jboolean)verify;

/*!
 @brief Create a new <code>JarFile</code> using the contents of file.
 @param file
 the JAR file as <code>File</code>.
 @param verify
 if this JAR filed is signed whether it must be verified.
 @param mode
 the mode to use, either <code>OPEN_READ</code> or
 <code>OPEN_DELETE</code>.
 @throws IOException
 If the file cannot be read.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                       withBoolean:(jboolean)verify
                           withInt:(jint)mode;

/*!
 @brief Create a new <code>JarFile</code> from the contents of the file specified by
 filename.
 @param filename
 the file name referring to the JAR file.
 @throws IOException
 if file name cannot be opened for reading.
 */
- (instancetype)initWithNSString:(NSString *)filename;

/*!
 @brief Create a new <code>JarFile</code> from the contents of the file specified by
 <code>filename</code>.
 @param filename
 the file name referring to the JAR file.
 @param verify
 if this JAR filed is signed whether it must be verified.
 @throws IOException
 If file cannot be opened or read.
 */
- (instancetype)initWithNSString:(NSString *)filename
                     withBoolean:(jboolean)verify;

/*!
 @brief Closes this <code>JarFile</code>.
 @throws IOException
 if an error occurs.
 */
- (void)close;

/*!
 @brief Return an enumeration containing the <code>JarEntrys</code> contained in this
 <code>JarFile</code>.
 @return the <code>Enumeration</code> containing the JAR entries.
 @throws IllegalStateException
 if this <code>JarFile</code> is closed.
 */
- (id<JavaUtilEnumeration>)entries;

/*!
 @brief Return the <code>JarEntry</code> specified by name or <code>null</code> if no such
 entry exists.
 @param name
 the name of the entry in the JAR file.
 @return the ZIP entry extracted.
 */
- (JavaUtilZipZipEntry *)getEntryWithNSString:(NSString *)name;

/*!
 @brief Return an <code>InputStream</code> for reading the decompressed contents of
 ZIP entry.
 @param ze
 the ZIP entry to be read.
 @return the input stream to read from.
 @throws IOException
 if an error occurred while creating the input stream.
 */
- (JavaIoInputStream *)getInputStreamWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

/*!
 @brief Return the <code>JarEntry</code> specified by its name or <code>null</code> if no
 such entry exists.
 @param name
 the name of the entry in the JAR file.
 @return the JAR entry defined by the name.
 */
- (JavaUtilJarJarEntry *)getJarEntryWithNSString:(NSString *)name;

/*!
 @brief Returns the <code>Manifest</code> object associated with this <code>JarFile</code>
 or <code>null</code> if no MANIFEST entry exists.
 @return the MANIFEST.
 @throws IOException
 if an error occurs reading the MANIFEST file.
 @throws IllegalStateException
 if the jar file is closed.
 */
- (JavaUtilJarManifest *)getManifest;

#pragma mark Package-Private

/*!
 @brief Called by the JarFile constructors, Reads the contents of the
 file's META-INF/ directory and picks out the MANIFEST.MF file and
 verifier signature files if they exist.
 @throws IOException
 if there is a problem reading the jar file entries.
 @return a map of entry names to their <code>byte[]</code> content.
 */
+ (JavaUtilHashMap *)readMetaEntriesWithJavaUtilZipZipFile:(JavaUtilZipZipFile *)zipFile
                                               withBoolean:(jboolean)verificationRequired;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarFile)

J2OBJC_FIELD_SETTER(JavaUtilJarJarFile, verifier_, JavaUtilJarJarVerifier *)

FOUNDATION_EXPORT NSString *JavaUtilJarJarFile_MANIFEST_NAME_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilJarJarFile, MANIFEST_NAME_, NSString *)

FOUNDATION_EXPORT NSString *JavaUtilJarJarFile_META_DIR_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilJarJarFile, META_DIR_, NSString *)

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithJavaIoFile_(JavaUtilJarJarFile *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_(JavaUtilJarJarFile *self, JavaIoFile *file, jboolean verify);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_(JavaIoFile *file, jboolean verify) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_withInt_(JavaUtilJarJarFile *self, JavaIoFile *file, jboolean verify, jint mode);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithJavaIoFile_withBoolean_withInt_(JavaIoFile *file, jboolean verify, jint mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithNSString_(JavaUtilJarJarFile *self, NSString *filename);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithNSString_(NSString *filename) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilJarJarFile_initWithNSString_withBoolean_(JavaUtilJarJarFile *self, NSString *filename, jboolean verify);

FOUNDATION_EXPORT JavaUtilJarJarFile *new_JavaUtilJarJarFile_initWithNSString_withBoolean_(NSString *filename, jboolean verify) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashMap *JavaUtilJarJarFile_readMetaEntriesWithJavaUtilZipZipFile_withBoolean_(JavaUtilZipZipFile *zipFile, jboolean verificationRequired);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarFile)

@interface JavaUtilJarJarFile_JarFileInputStream : JavaIoFilterInputStream

#pragma mark Public

- (jint)available;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jlong)skipWithLong:(jlong)byteCount;

#pragma mark Package-Private

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                                 withLong:(jlong)size
 withJavaUtilJarJarVerifier_VerifierEntry:(JavaUtilJarJarVerifier_VerifierEntry *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarFile_JarFileInputStream)

FOUNDATION_EXPORT void JavaUtilJarJarFile_JarFileInputStream_initWithJavaIoInputStream_withLong_withJavaUtilJarJarVerifier_VerifierEntry_(JavaUtilJarJarFile_JarFileInputStream *self, JavaIoInputStream *is, jlong size, JavaUtilJarJarVerifier_VerifierEntry *e);

FOUNDATION_EXPORT JavaUtilJarJarFile_JarFileInputStream *new_JavaUtilJarJarFile_JarFileInputStream_initWithJavaIoInputStream_withLong_withJavaUtilJarJarVerifier_VerifierEntry_(JavaIoInputStream *is, jlong size, JavaUtilJarJarVerifier_VerifierEntry *e) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarFile_JarFileInputStream)

@interface JavaUtilJarJarFile_JarFileEnumerator : NSObject < JavaUtilEnumeration > {
 @public
  id<JavaUtilEnumeration> ze_;
  JavaUtilJarJarFile *jf_;
}

#pragma mark Public

- (jboolean)hasMoreElements;

- (JavaUtilJarJarEntry *)nextElement;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)zenum
                     withJavaUtilJarJarFile:(JavaUtilJarJarFile *)jf;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarFile_JarFileEnumerator)

J2OBJC_FIELD_SETTER(JavaUtilJarJarFile_JarFileEnumerator, ze_, id<JavaUtilEnumeration>)
J2OBJC_FIELD_SETTER(JavaUtilJarJarFile_JarFileEnumerator, jf_, JavaUtilJarJarFile *)

FOUNDATION_EXPORT void JavaUtilJarJarFile_JarFileEnumerator_initWithJavaUtilEnumeration_withJavaUtilJarJarFile_(JavaUtilJarJarFile_JarFileEnumerator *self, id<JavaUtilEnumeration> zenum, JavaUtilJarJarFile *jf);

FOUNDATION_EXPORT JavaUtilJarJarFile_JarFileEnumerator *new_JavaUtilJarJarFile_JarFileEnumerator_initWithJavaUtilEnumeration_withJavaUtilJarJarFile_(id<JavaUtilEnumeration> zenum, JavaUtilJarJarFile *jf) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarFile_JarFileEnumerator)

#endif // _JavaUtilJarJarFile_H_
