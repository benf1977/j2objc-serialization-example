//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractSetMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractSetMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractSetMultimap_) && (ComGoogleCommonCollectAbstractSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractSetMultimap_

#define ComGoogleCommonCollectAbstractMapBasedMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultimap.h"

#define ComGoogleCommonCollectSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectSetMultimap_INCLUDE 1
#include "com/google/common/collect/SetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractSetMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (id<JavaUtilSet>)entries;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilSet>)getWithId:(id)key;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilSet>)createCollection;

- (id<JavaUtilSet>)createUnmodifiableEmptyCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSetMultimap_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractSetMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSetMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractSetMultimap_INCLUDE_ALL")
