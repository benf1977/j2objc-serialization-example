//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/SortedMultisets.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL")
#if ComGoogleCommonCollectSortedMultisets_RESTRICT
#define ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSortedMultisets_RESTRICT
#if ComGoogleCommonCollectSortedMultisets_NavigableElementSet_INCLUDE
#define ComGoogleCommonCollectSortedMultisets_ElementSet_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectSortedMultisets_) && (ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL || ComGoogleCommonCollectSortedMultisets_INCLUDE)
#define _ComGoogleCommonCollectSortedMultisets_

@interface ComGoogleCommonCollectSortedMultisets : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedMultisets)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedMultisets)

#endif

#if !defined (_ComGoogleCommonCollectSortedMultisets_ElementSet_) && (ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL || ComGoogleCommonCollectSortedMultisets_ElementSet_INCLUDE)
#define _ComGoogleCommonCollectSortedMultisets_ElementSet_

#define ComGoogleCommonCollectMultisets_RESTRICT 1
#define ComGoogleCommonCollectMultisets_ElementSet_INCLUDE 1
#include "com/google/common/collect/Multisets.h"

#define JavaUtilSortedSet_RESTRICT 1
#define JavaUtilSortedSet_INCLUDE 1
#include "java/util/SortedSet.h"

@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectSortedMultisets_ElementSet : ComGoogleCommonCollectMultisets_ElementSet < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)multiset;

- (id<ComGoogleCommonCollectSortedMultiset>)multiset;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedMultisets_ElementSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectSortedMultisets_ElementSet_initWithComGoogleCommonCollectSortedMultiset_(ComGoogleCommonCollectSortedMultisets_ElementSet *self, id<ComGoogleCommonCollectSortedMultiset> multiset);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedMultisets_ElementSet *new_ComGoogleCommonCollectSortedMultisets_ElementSet_initWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> multiset) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedMultisets_ElementSet)

#endif

#if !defined (_ComGoogleCommonCollectSortedMultisets_NavigableElementSet_) && (ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL || ComGoogleCommonCollectSortedMultisets_NavigableElementSet_INCLUDE)
#define _ComGoogleCommonCollectSortedMultisets_NavigableElementSet_

#define JavaUtilNavigableSet_RESTRICT 1
#define JavaUtilNavigableSet_INCLUDE 1
#include "java/util/NavigableSet.h"

@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectSortedMultisets_NavigableElementSet : ComGoogleCommonCollectSortedMultisets_ElementSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)e;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)e;

- (id)lowerWithId:(id)e;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)multiset;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedMultisets_NavigableElementSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectSortedMultisets_NavigableElementSet_initWithComGoogleCommonCollectSortedMultiset_(ComGoogleCommonCollectSortedMultisets_NavigableElementSet *self, id<ComGoogleCommonCollectSortedMultiset> multiset);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedMultisets_NavigableElementSet *new_ComGoogleCommonCollectSortedMultisets_NavigableElementSet_initWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> multiset) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedMultisets_NavigableElementSet)

#endif

#pragma pop_macro("ComGoogleCommonCollectSortedMultisets_INCLUDE_ALL")
