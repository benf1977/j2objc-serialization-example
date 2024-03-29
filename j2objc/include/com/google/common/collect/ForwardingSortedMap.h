//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingSortedMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingSortedMap_RESTRICT
#define ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingSortedMap_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingSortedMap_) && (ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingSortedMap_INCLUDE)
#define _ComGoogleCommonCollectForwardingSortedMap_

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

#define JavaUtilSortedMap_RESTRICT 1
#define JavaUtilSortedMap_INCLUDE 1
#include "java/util/SortedMap.h"

@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectForwardingSortedMap : ComGoogleCommonCollectForwardingMap < JavaUtilSortedMap >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id)lastKey;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilSortedMap>)delegate;

- (jboolean)standardContainsKeyWithId:(id)key;

- (id<JavaUtilSortedMap>)standardSubMapWithId:(id)fromKey
                                       withId:(id)toKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedMap_init(ComGoogleCommonCollectForwardingSortedMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedMap)

#endif

#if !defined (_ComGoogleCommonCollectForwardingSortedMap_StandardKeySet_) && (ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingSortedMap_StandardKeySet_INCLUDE)
#define _ComGoogleCommonCollectForwardingSortedMap_StandardKeySet_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_SortedKeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectForwardingSortedMap;

@interface ComGoogleCommonCollectForwardingSortedMap_StandardKeySet : ComGoogleCommonCollectMaps_SortedKeySet

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingSortedMap:(ComGoogleCommonCollectForwardingSortedMap *)outer$;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedMap_StandardKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedMap_StandardKeySet_initWithComGoogleCommonCollectForwardingSortedMap_(ComGoogleCommonCollectForwardingSortedMap_StandardKeySet *self, ComGoogleCommonCollectForwardingSortedMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingSortedMap_StandardKeySet *new_ComGoogleCommonCollectForwardingSortedMap_StandardKeySet_initWithComGoogleCommonCollectForwardingSortedMap_(ComGoogleCommonCollectForwardingSortedMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedMap_StandardKeySet)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingSortedMap_INCLUDE_ALL")
