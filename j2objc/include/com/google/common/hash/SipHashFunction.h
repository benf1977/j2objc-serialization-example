//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/SipHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashSipHashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashSipHashFunction_RESTRICT
#define ComGoogleCommonHashSipHashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashSipHashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashSipHashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashSipHashFunction_) && (ComGoogleCommonHashSipHashFunction_INCLUDE_ALL || ComGoogleCommonHashSipHashFunction_INCLUDE)
#define _ComGoogleCommonHashSipHashFunction_

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashSipHashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)c
                    withInt:(jint)d
                   withLong:(jlong)k0
                   withLong:(jlong)k1;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashSipHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashSipHashFunction_initWithInt_withInt_withLong_withLong_(ComGoogleCommonHashSipHashFunction *self, jint c, jint d, jlong k0, jlong k1);

FOUNDATION_EXPORT ComGoogleCommonHashSipHashFunction *new_ComGoogleCommonHashSipHashFunction_initWithInt_withInt_withLong_withLong_(jint c, jint d, jlong k0, jlong k1) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashSipHashFunction)

#endif

#pragma pop_macro("ComGoogleCommonHashSipHashFunction_INCLUDE_ALL")
