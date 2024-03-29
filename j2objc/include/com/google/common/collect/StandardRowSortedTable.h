//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/StandardRowSortedTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL")
#if ComGoogleCommonCollectStandardRowSortedTable_RESTRICT
#define ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectStandardRowSortedTable_RESTRICT

#if !defined (_ComGoogleCommonCollectStandardRowSortedTable_) && (ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL || ComGoogleCommonCollectStandardRowSortedTable_INCLUDE)
#define _ComGoogleCommonCollectStandardRowSortedTable_

#define ComGoogleCommonCollectStandardTable_RESTRICT 1
#define ComGoogleCommonCollectStandardTable_INCLUDE 1
#include "com/google/common/collect/StandardTable.h"

#define ComGoogleCommonCollectRowSortedTable_RESTRICT 1
#define ComGoogleCommonCollectRowSortedTable_INCLUDE 1
#include "com/google/common/collect/RowSortedTable.h"

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectStandardRowSortedTable : ComGoogleCommonCollectStandardTable < ComGoogleCommonCollectRowSortedTable >

#pragma mark Public

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)backingMap
          withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory;

- (id<JavaUtilSortedMap>)createRowMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardRowSortedTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectStandardRowSortedTable_initWithJavaUtilSortedMap_withComGoogleCommonBaseSupplier_(ComGoogleCommonCollectStandardRowSortedTable *self, id<JavaUtilSortedMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT ComGoogleCommonCollectStandardRowSortedTable *new_ComGoogleCommonCollectStandardRowSortedTable_initWithJavaUtilSortedMap_withComGoogleCommonBaseSupplier_(id<JavaUtilSortedMap> backingMap, id<ComGoogleCommonBaseSupplier> factory) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardRowSortedTable)

#endif

#pragma pop_macro("ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL")
