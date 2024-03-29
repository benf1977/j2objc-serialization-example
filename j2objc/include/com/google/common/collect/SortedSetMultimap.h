//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/SortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSortedSetMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectSortedSetMultimap_RESTRICT
#define ComGoogleCommonCollectSortedSetMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSortedSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSortedSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectSortedSetMultimap_) && (ComGoogleCommonCollectSortedSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectSortedSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectSortedSetMultimap_

#define ComGoogleCommonCollectSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectSetMultimap_INCLUDE 1
#include "com/google/common/collect/SetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilSortedSet;

@protocol ComGoogleCommonCollectSortedSetMultimap < ComGoogleCommonCollectSetMultimap, NSObject, JavaObject >

- (id<JavaUtilSortedSet>)getWithId:(id)key;

- (id<JavaUtilSortedSet>)removeAllWithId:(id)key;

- (id<JavaUtilSortedSet>)replaceValuesWithId:(id)key
                        withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilMap>)asMap;

- (id<JavaUtilComparator>)valueComparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedSetMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedSetMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectSortedSetMultimap_INCLUDE_ALL")
