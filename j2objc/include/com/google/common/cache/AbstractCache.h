//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/AbstractCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheAbstractCache_INCLUDE_ALL")
#if ComGoogleCommonCacheAbstractCache_RESTRICT
#define ComGoogleCommonCacheAbstractCache_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheAbstractCache_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheAbstractCache_RESTRICT
#if ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_INCLUDE
#define ComGoogleCommonCacheAbstractCache_StatsCounter_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCacheAbstractCache_) && (ComGoogleCommonCacheAbstractCache_INCLUDE_ALL || ComGoogleCommonCacheAbstractCache_INCLUDE)
#define _ComGoogleCommonCacheAbstractCache_

#define ComGoogleCommonCacheCache_RESTRICT 1
#define ComGoogleCommonCacheCache_INCLUDE 1
#include "com/google/common/cache/Cache.h"

@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCacheAbstractCache : NSObject < ComGoogleCommonCacheCache >

#pragma mark Public

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

- (void)cleanUp;

- (id)getWithId:(id)key
withJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)valueLoader;

- (ComGoogleCommonCollectImmutableMap *)getAllPresentWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)invalidateWithId:(id)key;

- (void)invalidateAll;

- (void)invalidateAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)putWithId:(id)key
           withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)size;

- (ComGoogleCommonCacheCacheStats *)stats;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheAbstractCache_init(ComGoogleCommonCacheAbstractCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache)

#endif

#if !defined (_ComGoogleCommonCacheAbstractCache_StatsCounter_) && (ComGoogleCommonCacheAbstractCache_INCLUDE_ALL || ComGoogleCommonCacheAbstractCache_StatsCounter_INCLUDE)
#define _ComGoogleCommonCacheAbstractCache_StatsCounter_

@class ComGoogleCommonCacheCacheStats;

@protocol ComGoogleCommonCacheAbstractCache_StatsCounter < NSObject, JavaObject >

- (void)recordHitsWithInt:(jint)count;

- (void)recordMissesWithInt:(jint)count;

- (void)recordLoadSuccessWithLong:(jlong)loadTime;

- (void)recordLoadExceptionWithLong:(jlong)loadTime;

- (void)recordEviction;

- (ComGoogleCommonCacheCacheStats *)snapshot;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache_StatsCounter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache_StatsCounter)

#endif

#if !defined (_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_) && (ComGoogleCommonCacheAbstractCache_INCLUDE_ALL || ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_INCLUDE)
#define _ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_

@class ComGoogleCommonCacheCacheStats;
@protocol ComGoogleCommonCacheAbstractCache_StatsCounter;

@interface ComGoogleCommonCacheAbstractCache_SimpleStatsCounter : NSObject < ComGoogleCommonCacheAbstractCache_StatsCounter >

#pragma mark Public

- (instancetype)init;

- (void)incrementByWithComGoogleCommonCacheAbstractCache_StatsCounter:(id<ComGoogleCommonCacheAbstractCache_StatsCounter>)other;

- (void)recordEviction;

- (void)recordHitsWithInt:(jint)count;

- (void)recordLoadExceptionWithLong:(jlong)loadTime;

- (void)recordLoadSuccessWithLong:(jlong)loadTime;

- (void)recordMissesWithInt:(jint)count;

- (ComGoogleCommonCacheCacheStats *)snapshot;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter)

FOUNDATION_EXPORT void ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_init(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter *self);

FOUNDATION_EXPORT ComGoogleCommonCacheAbstractCache_SimpleStatsCounter *new_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter)

#endif

#pragma pop_macro("ComGoogleCommonCacheAbstractCache_INCLUDE_ALL")
