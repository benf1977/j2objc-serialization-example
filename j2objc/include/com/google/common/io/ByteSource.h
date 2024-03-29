//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/ByteSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoByteSource_INCLUDE_ALL")
#if ComGoogleCommonIoByteSource_RESTRICT
#define ComGoogleCommonIoByteSource_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoByteSource_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoByteSource_RESTRICT

#if !defined (_ComGoogleCommonIoByteSource_) && (ComGoogleCommonIoByteSource_INCLUDE_ALL || ComGoogleCommonIoByteSource_INCLUDE)
#define _ComGoogleCommonIoByteSource_

@class ComGoogleCommonHashHashCode;
@class ComGoogleCommonIoByteSink;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashHashFunction;
@protocol ComGoogleCommonIoByteProcessor;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonIoByteSource : NSObject

#pragma mark Public

- (ComGoogleCommonIoCharSource *)asCharSourceWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (ComGoogleCommonIoByteSource *)concatWithComGoogleCommonIoByteSourceArray:(IOSObjectArray *)sources;

+ (ComGoogleCommonIoByteSource *)concatWithJavaLangIterable:(id<JavaLangIterable>)sources;

+ (ComGoogleCommonIoByteSource *)concatWithJavaUtilIterator:(id<JavaUtilIterator>)sources;

- (jboolean)contentEqualsWithComGoogleCommonIoByteSource:(ComGoogleCommonIoByteSource *)other;

- (jlong)copyToWithComGoogleCommonIoByteSink:(ComGoogleCommonIoByteSink *)sink OBJC_METHOD_FAMILY_NONE;

- (jlong)copyToWithJavaIoOutputStream:(JavaIoOutputStream *)output OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonIoByteSource *)empty;

- (ComGoogleCommonHashHashCode *)hash__WithComGoogleCommonHashHashFunction:(id<ComGoogleCommonHashHashFunction>)hashFunction;

- (jboolean)isEmpty;

- (JavaIoInputStream *)openBufferedStream;

- (JavaIoInputStream *)openStream;

- (IOSByteArray *)read;

- (id)readWithComGoogleCommonIoByteProcessor:(id<ComGoogleCommonIoByteProcessor>)processor;

- (jlong)size;

- (ComGoogleCommonIoByteSource *)sliceWithLong:(jlong)offset
                                      withLong:(jlong)length;

+ (ComGoogleCommonIoByteSource *)wrapWithByteArray:(IOSByteArray *)b;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoByteSource)

FOUNDATION_EXPORT void ComGoogleCommonIoByteSource_init(ComGoogleCommonIoByteSource *self);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_concatWithJavaLangIterable_(id<JavaLangIterable> sources);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_concatWithJavaUtilIterator_(id<JavaUtilIterator> sources);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_concatWithComGoogleCommonIoByteSourceArray_(IOSObjectArray *sources);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_wrapWithByteArray_(IOSByteArray *b);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoByteSource_empty();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSource)

#endif

#pragma pop_macro("ComGoogleCommonIoByteSource_INCLUDE_ALL")
