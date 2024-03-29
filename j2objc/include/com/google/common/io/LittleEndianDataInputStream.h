//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/LittleEndianDataInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL")
#if ComGoogleCommonIoLittleEndianDataInputStream_RESTRICT
#define ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLittleEndianDataInputStream_RESTRICT

#if !defined (_ComGoogleCommonIoLittleEndianDataInputStream_) && (ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL || ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE)
#define _ComGoogleCommonIoLittleEndianDataInputStream_

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "java/io/FilterInputStream.h"

#define JavaIoDataInput_RESTRICT 1
#define JavaIoDataInput_INCLUDE 1
#include "java/io/DataInput.h"

@class IOSByteArray;
@class JavaIoInputStream;

@interface ComGoogleCommonIoLittleEndianDataInputStream : JavaIoFilterInputStream < JavaIoDataInput >

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jboolean)readBoolean;

- (jbyte)readByte;

- (jchar)readChar;

- (jdouble)readDouble;

- (jfloat)readFloat;

- (void)readFullyWithByteArray:(IOSByteArray *)b;

- (void)readFullyWithByteArray:(IOSByteArray *)b
                       withInt:(jint)off
                       withInt:(jint)len;

- (jint)readInt;

- (NSString *)readLine;

- (jlong)readLong;

- (jshort)readShort;

- (jint)readUnsignedByte;

- (jint)readUnsignedShort;

- (NSString *)readUTF;

- (jint)skipBytesWithInt:(jint)n;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLittleEndianDataInputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoLittleEndianDataInputStream_initWithJavaIoInputStream_(ComGoogleCommonIoLittleEndianDataInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT ComGoogleCommonIoLittleEndianDataInputStream *new_ComGoogleCommonIoLittleEndianDataInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLittleEndianDataInputStream)

#endif

#pragma pop_macro("ComGoogleCommonIoLittleEndianDataInputStream_INCLUDE_ALL")
