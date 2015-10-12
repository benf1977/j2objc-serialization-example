//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/RegularImmutableSortedMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableSortedMap_RESTRICT
#define ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableSortedMap_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMap_) && (ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMap_

#define ComGoogleCommonCollectImmutableSortedMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMap_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRegularImmutableSortedSet;

@interface ComGoogleCommonCollectRegularImmutableSortedMap : ComGoogleCommonCollectImmutableSortedMap

#pragma mark Public

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSortedMap *)headMapWithId:(id)toKey
                                                withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)keySet;

- (ComGoogleCommonCollectImmutableSortedMap *)tailMapWithId:(id)fromKey
                                                withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)keySet
                                withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)valueList;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)keySet
                                withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)valueList
                           withComGoogleCommonCollectImmutableSortedMap:(ComGoogleCommonCollectImmutableSortedMap *)descendingMap;

- (ComGoogleCommonCollectImmutableSortedMap *)createDescendingMap;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableSortedMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectRegularImmutableSortedMap *self, ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMap *new_ComGoogleCommonCollectRegularImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSortedMap_(ComGoogleCommonCollectRegularImmutableSortedMap *self, ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList, ComGoogleCommonCollectImmutableSortedMap *descendingMap);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMap *new_ComGoogleCommonCollectRegularImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSortedMap_(ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList, ComGoogleCommonCollectImmutableSortedMap *descendingMap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableSortedMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectRegularImmutableSortedMap_INCLUDE_ALL")
