//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/UnmodifiableSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectUnmodifiableSortedMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectUnmodifiableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectUnmodifiableSortedMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectUnmodifiableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectUnmodifiableSortedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectUnmodifiableSortedMultiset_) && (ComGoogleCommonCollectUnmodifiableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectUnmodifiableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectUnmodifiableSortedMultiset_

#define ComGoogleCommonCollectMultisets_RESTRICT 1
#define ComGoogleCommonCollectMultisets_UnmodifiableMultiset_INCLUDE 1
#include "com/google/common/collect/Multisets.h"

#define ComGoogleCommonCollectSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectSortedMultiset_INCLUDE 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectUnmodifiableSortedMultiset : ComGoogleCommonCollectMultisets_UnmodifiableMultiset < ComGoogleCommonCollectSortedMultiset >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)upperBound
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)lowerBound
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerBoundType
                                                       withId:(id)upperBound
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperBoundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)lowerBound
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

#pragma mark Protected

- (id<ComGoogleCommonCollectSortedMultiset>)delegate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)delegate;

- (id<JavaUtilNavigableSet>)createElementSet;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectUnmodifiableSortedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectUnmodifiableSortedMultiset_initWithComGoogleCommonCollectSortedMultiset_(ComGoogleCommonCollectUnmodifiableSortedMultiset *self, id<ComGoogleCommonCollectSortedMultiset> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableSortedMultiset *new_ComGoogleCommonCollectUnmodifiableSortedMultiset_initWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> delegate) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUnmodifiableSortedMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectUnmodifiableSortedMultiset_INCLUDE_ALL")
