//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/CacheBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL")
#if ComGoogleCommonCacheCacheBuilder_RESTRICT
#define ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheCacheBuilder_RESTRICT

#if !defined (_ComGoogleCommonCacheCacheBuilder_) && (ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilder_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilder_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheCacheLoader;
@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCacheCache;
@protocol ComGoogleCommonCacheLoadingCache;
@protocol ComGoogleCommonCacheRemovalListener;
@protocol ComGoogleCommonCacheWeigher;

#define ComGoogleCommonCacheCacheBuilder_UNSET_INT -1

@interface ComGoogleCommonCacheCacheBuilder : NSObject {
 @public
  jboolean strictParsing_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  jlong maximumSize_;
  jlong maximumWeight_;
  id<ComGoogleCommonCacheWeigher> weigher_;
  ComGoogleCommonCacheLocalCache_StrengthEnum *keyStrength_;
  ComGoogleCommonCacheLocalCache_StrengthEnum *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  jlong refreshNanos_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
  ComGoogleCommonBaseEquivalence *valueEquivalence_;
  id<ComGoogleCommonCacheRemovalListener> removalListener_;
  ComGoogleCommonBaseTicker *ticker_;
  id<ComGoogleCommonBaseSupplier> statsCounterSupplier_;
}

#pragma mark Public

- (id<ComGoogleCommonCacheCache>)build;

- (id<ComGoogleCommonCacheLoadingCache>)buildWithComGoogleCommonCacheCacheLoader:(ComGoogleCommonCacheCacheLoader *)loader;

- (ComGoogleCommonCacheCacheBuilder *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCacheCacheBuilder *)expireAfterAccessWithLong:(jlong)duration
                             withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (ComGoogleCommonCacheCacheBuilder *)expireAfterWriteWithLong:(jlong)duration
                            withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (ComGoogleCommonCacheCacheBuilder *)fromWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec;

+ (ComGoogleCommonCacheCacheBuilder *)fromWithNSString:(NSString *)spec;

- (ComGoogleCommonCacheCacheBuilder *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCacheCacheBuilder *)maximumSizeWithLong:(jlong)size;

- (ComGoogleCommonCacheCacheBuilder *)maximumWeightWithLong:(jlong)weight;

+ (ComGoogleCommonCacheCacheBuilder *)newBuilder OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCacheCacheBuilder *)recordStats;

- (ComGoogleCommonCacheCacheBuilder *)refreshAfterWriteWithLong:(jlong)duration
                             withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (ComGoogleCommonCacheCacheBuilder *)removalListenerWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener>)listener;

- (ComGoogleCommonCacheCacheBuilder *)softValues;

- (ComGoogleCommonCacheCacheBuilder *)tickerWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

- (NSString *)description;

- (ComGoogleCommonCacheCacheBuilder *)weakKeys;

- (ComGoogleCommonCacheCacheBuilder *)weakValues;

- (ComGoogleCommonCacheCacheBuilder *)weigherWithComGoogleCommonCacheWeigher:(id<ComGoogleCommonCacheWeigher>)weigher;

#pragma mark Package-Private

- (instancetype)init;

- (jint)getConcurrencyLevel;

- (jlong)getExpireAfterAccessNanos;

- (jlong)getExpireAfterWriteNanos;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCacheLocalCache_StrengthEnum *)getKeyStrength;

- (jlong)getMaximumWeight;

- (jlong)getRefreshNanos;

- (id<ComGoogleCommonCacheRemovalListener>)getRemovalListener;

- (id<ComGoogleCommonBaseSupplier>)getStatsCounterSupplier;

- (ComGoogleCommonBaseTicker *)getTickerWithBoolean:(jboolean)recordsTime;

- (ComGoogleCommonBaseEquivalence *)getValueEquivalence;

- (ComGoogleCommonCacheLocalCache_StrengthEnum *)getValueStrength;

- (id<ComGoogleCommonCacheWeigher>)getWeigher;

- (jboolean)isRecordingStats;

- (ComGoogleCommonCacheCacheBuilder *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (ComGoogleCommonCacheCacheBuilder *)lenientParsing;

- (ComGoogleCommonCacheCacheBuilder *)setKeyStrengthWithComGoogleCommonCacheLocalCache_StrengthEnum:(ComGoogleCommonCacheLocalCache_StrengthEnum *)strength;

- (ComGoogleCommonCacheCacheBuilder *)setValueStrengthWithComGoogleCommonCacheLocalCache_StrengthEnum:(ComGoogleCommonCacheLocalCache_StrengthEnum *)strength;

- (ComGoogleCommonCacheCacheBuilder *)valueEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, weigher_, id<ComGoogleCommonCacheWeigher>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyStrength_, ComGoogleCommonCacheLocalCache_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueStrength_, ComGoogleCommonCacheLocalCache_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, removalListener_, id<ComGoogleCommonCacheRemovalListener>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, ticker_, ComGoogleCommonBaseTicker *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, statsCounterSupplier_, id<ComGoogleCommonBaseSupplier>)

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_NULL_STATS_COUNTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilder, NULL_STATS_COUNTER_, id<ComGoogleCommonBaseSupplier>)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_EMPTY_STATS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilder, EMPTY_STATS_, ComGoogleCommonCacheCacheStats *)

FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_CACHE_STATS_COUNTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilder, CACHE_STATS_COUNTER_, id<ComGoogleCommonBaseSupplier>)

FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_NULL_TICKER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilder, NULL_TICKER_, ComGoogleCommonBaseTicker *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheCacheBuilder, UNSET_INT, jint)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilder_init(ComGoogleCommonCacheCacheBuilder *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *new_ComGoogleCommonCacheCacheBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_newBuilder();

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithComGoogleCommonCacheCacheBuilderSpec_(ComGoogleCommonCacheCacheBuilderSpec *spec);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithNSString_(NSString *spec);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilder_NullListenerEnum_) && (ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilder_NullListenerEnum_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilder_NullListenerEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonCacheRemovalListener_RESTRICT 1
#define ComGoogleCommonCacheRemovalListener_INCLUDE 1
#include "com/google/common/cache/RemovalListener.h"

@class ComGoogleCommonCacheRemovalNotification;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheCacheBuilder_NullListener) {
  ComGoogleCommonCacheCacheBuilder_NullListener_INSTANCE = 0,
};

@interface ComGoogleCommonCacheCacheBuilder_NullListenerEnum : JavaLangEnum < NSCopying, ComGoogleCommonCacheRemovalListener >

#pragma mark Public

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_NullListenerEnum_values();

+ (ComGoogleCommonCacheCacheBuilder_NullListenerEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListenerEnum *ComGoogleCommonCacheCacheBuilder_NullListenerEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_NullListenerEnum)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListenerEnum *ComGoogleCommonCacheCacheBuilder_NullListenerEnum_values_[];

#define ComGoogleCommonCacheCacheBuilder_NullListenerEnum_INSTANCE ComGoogleCommonCacheCacheBuilder_NullListenerEnum_values_[ComGoogleCommonCacheCacheBuilder_NullListener_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheCacheBuilder_NullListenerEnum, INSTANCE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_NullListenerEnum)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_) && (ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonCacheWeigher_RESTRICT 1
#define ComGoogleCommonCacheWeigher_INCLUDE 1
#include "com/google/common/cache/Weigher.h"

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheCacheBuilder_OneWeigher) {
  ComGoogleCommonCacheCacheBuilder_OneWeigher_INSTANCE = 0,
};

@interface ComGoogleCommonCacheCacheBuilder_OneWeigherEnum : JavaLangEnum < NSCopying, ComGoogleCommonCacheWeigher >

#pragma mark Public

- (jint)weighWithId:(id)key
             withId:(id)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_values();

+ (ComGoogleCommonCacheCacheBuilder_OneWeigherEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigherEnum *ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_OneWeigherEnum)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigherEnum *ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_values_[];

#define ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_INSTANCE ComGoogleCommonCacheCacheBuilder_OneWeigherEnum_values_[ComGoogleCommonCacheCacheBuilder_OneWeigher_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCacheCacheBuilder_OneWeigherEnum, INSTANCE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_OneWeigherEnum)

#endif

#pragma pop_macro("ComGoogleCommonCacheCacheBuilder_INCLUDE_ALL")