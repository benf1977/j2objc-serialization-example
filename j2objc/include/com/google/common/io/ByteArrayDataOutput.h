//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/ByteArrayDataOutput.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoByteArrayDataOutput_INCLUDE_ALL")
#if ComGoogleCommonIoByteArrayDataOutput_RESTRICT
#define ComGoogleCommonIoByteArrayDataOutput_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoByteArrayDataOutput_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoByteArrayDataOutput_RESTRICT

#if !defined (_ComGoogleCommonIoByteArrayDataOutput_) && (ComGoogleCommonIoByteArrayDataOutput_INCLUDE_ALL || ComGoogleCommonIoByteArrayDataOutput_INCLUDE)
#define _ComGoogleCommonIoByteArrayDataOutput_

#define JavaIoDataOutput_RESTRICT 1
#define JavaIoDataOutput_INCLUDE 1
#include "java/io/DataOutput.h"

@class IOSByteArray;

@protocol ComGoogleCommonIoByteArrayDataOutput < JavaIoDataOutput, NSObject, JavaObject >

- (void)writeWithInt:(jint)b;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeBooleanWithBoolean:(jboolean)v;

- (void)writeByteWithInt:(jint)v;

- (void)writeShortWithInt:(jint)v;

- (void)writeCharWithInt:(jint)v;

- (void)writeIntWithInt:(jint)v;

- (void)writeLongWithLong:(jlong)v;

- (void)writeFloatWithFloat:(jfloat)v;

- (void)writeDoubleWithDouble:(jdouble)v;

- (void)writeCharsWithNSString:(NSString *)s;

- (void)writeUTFWithNSString:(NSString *)s;

- (void)writeBytesWithNSString:(NSString *)s;

- (IOSByteArray *)toByteArray;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteArrayDataOutput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteArrayDataOutput)

#endif

#pragma pop_macro("ComGoogleCommonIoByteArrayDataOutput_INCLUDE_ALL")
