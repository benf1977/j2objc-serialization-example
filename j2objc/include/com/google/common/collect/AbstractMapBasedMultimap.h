//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractMapBasedMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractMapBasedMultimap_RESTRICT
#define ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractMapBasedMultimap_RESTRICT
#if ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_INCLUDE
#define ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_INCLUDE
#define ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_INCLUDE
#define ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_INCLUDE 1
#endif
#if ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_INCLUDE
#define ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_INCLUDE 1
#endif
#if ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_INCLUDE
#define ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_INCLUDE
#define ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_

#define ComGoogleCommonCollectAbstractMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractMultimap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap : ComGoogleCommonCollectAbstractMultimap < JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilCollection>)entries;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilCollection>)removeAllWithId:(id)key;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilMap>)backingMap;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createCollection;

- (id<JavaUtilCollection>)createCollectionWithId:(id)key;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createUnmodifiableEmptyCollection;

- (id<JavaUtilIterator>)entryIterator;

- (void)setMapWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilCollection>)unmodifiableCollectionSubclassWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id<JavaUtilIterator>)valueIterator;

- (id<JavaUtilCollection>)wrapCollectionWithId:(id)key
                        withJavaUtilCollection:(id<JavaUtilCollection>)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_

#define JavaUtilAbstractCollection_RESTRICT 1
#define JavaUtilAbstractCollection_INCLUDE 1
#include "java/util/AbstractCollection.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection : JavaUtilAbstractCollection {
 @public
  id key_;
  id<JavaUtilCollection> delegate_;
  ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor_;
  id<JavaUtilCollection> ancestorDelegate_;
}

#pragma mark Public

- (jboolean)addWithId:(id)value;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                                withId:(id)key
                                                withJavaUtilCollection:(id<JavaUtilCollection>)delegate
  withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)ancestor;

- (void)addToMap;

- (ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)getAncestor;

- (id<JavaUtilCollection>)getDelegate;

- (id)getKey;

- (void)refreshIfEmpty;

- (void)removeIfEmpty;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, delegate_, id<JavaUtilCollection>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, ancestor_, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, ancestorDelegate_, id<JavaUtilCollection>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilCollection_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilCollection> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *new_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilCollection_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilCollection> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_

#define JavaUtilSortedSet_RESTRICT 1
#define JavaUtilSortedSet_INCLUDE 1
#include "java/util/SortedSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@class ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet : ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                                withId:(id)key
                                                 withJavaUtilSortedSet:(id<JavaUtilSortedSet>)delegate
  withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)ancestor;

- (id<JavaUtilSortedSet>)getSortedSetDelegate;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilSortedSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilSortedSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilSortedSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilSortedSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_

#define JavaUtilNavigableSet_RESTRICT 1
#define JavaUtilNavigableSet_INCLUDE 1
#include "java/util/NavigableSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@class ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet : ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)v;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)v;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)v;

- (id)lowerWithId:(id)v;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                                withId:(id)key
                                              withJavaUtilNavigableSet:(id<JavaUtilNavigableSet>)delegate
  withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)ancestor;

- (id<JavaUtilNavigableSet>)getSortedSetDelegate;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilNavigableSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilNavigableSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilNavigableSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilNavigableSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_KeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet : ComGoogleCommonCollectMaps_KeySet

#pragma mark Public

- (void)clear;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)key;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                       withJavaUtilMap:(id<JavaUtilMap>)subMap;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> subMap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> subMap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_

#define JavaUtilSortedSet_RESTRICT 1
#define JavaUtilSortedSet_INCLUDE 1
#include "java/util/SortedSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet : ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                 withJavaUtilSortedMap:(id<JavaUtilSortedMap>)subMap;

- (id<JavaUtilSortedMap>)sortedMap;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> subMap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> subMap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_

#define JavaUtilNavigableSet_RESTRICT 1
#define JavaUtilNavigableSet_INCLUDE 1
#include "java/util/NavigableSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet : ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)k;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)k;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)k;

- (id)lowerWithId:(id)k;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                                  withId:(id)toElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                              withJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)subMap;

- (id<JavaUtilNavigableMap>)sortedMap;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> subMap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> subMap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_ImprovedAbstractMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap : ComGoogleCommonCollectMaps_ImprovedAbstractMap {
 @public
  id<JavaUtilMap> submap_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (NSUInteger)hash;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)removeWithId:(id)key;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (id<JavaUtilSet>)createEntrySet;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                       withJavaUtilMap:(id<JavaUtilMap>)submap;

- (id<JavaUtilMap_Entry>)wrapEntryWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap, submap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> submap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap *new_ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> submap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_

#define JavaUtilSortedMap_RESTRICT 1
#define JavaUtilSortedMap_INCLUDE 1
#include "java/util/SortedMap.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap : ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap < JavaUtilSortedMap > {
 @public
  id<JavaUtilSortedSet> sortedKeySet_;
}

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id<JavaUtilSortedSet>)keySet;

- (id)lastKey;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                 withJavaUtilSortedMap:(id<JavaUtilSortedMap>)submap;

- (id<JavaUtilSortedSet>)createKeySet;

- (id<JavaUtilSortedMap>)sortedMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap, sortedKeySet_, id<JavaUtilSortedSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> submap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap *new_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> submap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap)

#endif

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_) && (ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_

#define JavaUtilNavigableMap_RESTRICT 1
#define JavaUtilNavigableMap_INCLUDE 1
#include "java/util/NavigableMap.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap : ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap < JavaUtilNavigableMap >

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)toKey;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromKey
                                  withId:(id)toKey;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromKey;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromKey
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                              withJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)submap;

- (id<JavaUtilNavigableSet>)createKeySet;

- (id<JavaUtilMap_Entry>)pollAsMapEntryWithJavaUtilIterator:(id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilNavigableMap>)sortedMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> submap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap *new_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> submap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractMapBasedMultimap_INCLUDE_ALL")
