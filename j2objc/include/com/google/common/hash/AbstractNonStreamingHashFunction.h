//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/AbstractNonStreamingHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashAbstractNonStreamingHashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashAbstractNonStreamingHashFunction_RESTRICT
#define ComGoogleCommonHashAbstractNonStreamingHashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashAbstractNonStreamingHashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashAbstractNonStreamingHashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashAbstractNonStreamingHashFunction_) && (ComGoogleCommonHashAbstractNonStreamingHashFunction_INCLUDE_ALL || ComGoogleCommonHashAbstractNonStreamingHashFunction_INCLUDE)
#define _ComGoogleCommonHashAbstractNonStreamingHashFunction_

#define ComGoogleCommonHashHashFunction_RESTRICT 1
#define ComGoogleCommonHashHashFunction_INCLUDE 1
#include "com/google/common/hash/HashFunction.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonHashAbstractNonStreamingHashFunction : NSObject < ComGoogleCommonHashHashFunction >

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashObjectWithId:(id)instance
                    withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)input
                                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractNonStreamingHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractNonStreamingHashFunction_init(ComGoogleCommonHashAbstractNonStreamingHashFunction *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractNonStreamingHashFunction)

#endif

#pragma pop_macro("ComGoogleCommonHashAbstractNonStreamingHashFunction_INCLUDE_ALL")
