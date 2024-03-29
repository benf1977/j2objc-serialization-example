//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/MultiInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoMultiInputStream_INCLUDE_ALL")
#if ComGoogleCommonIoMultiInputStream_RESTRICT
#define ComGoogleCommonIoMultiInputStream_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoMultiInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoMultiInputStream_RESTRICT

#if !defined (_ComGoogleCommonIoMultiInputStream_) && (ComGoogleCommonIoMultiInputStream_INCLUDE_ALL || ComGoogleCommonIoMultiInputStream_INCLUDE)
#define _ComGoogleCommonIoMultiInputStream_

#define JavaIoInputStream_RESTRICT 1
#define JavaIoInputStream_INCLUDE 1
#include "java/io/InputStream.h"

@class IOSByteArray;
@protocol JavaUtilIterator;

@interface ComGoogleCommonIoMultiInputStream : JavaIoInputStream

#pragma mark Public

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)it;

- (jint)available;

- (void)close;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoMultiInputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoMultiInputStream_initWithJavaUtilIterator_(ComGoogleCommonIoMultiInputStream *self, id<JavaUtilIterator> it);

FOUNDATION_EXPORT ComGoogleCommonIoMultiInputStream *new_ComGoogleCommonIoMultiInputStream_initWithJavaUtilIterator_(id<JavaUtilIterator> it) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoMultiInputStream)

#endif

#pragma pop_macro("ComGoogleCommonIoMultiInputStream_INCLUDE_ALL")
