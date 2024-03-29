//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/TreeBasedTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL")
#if ComGoogleCommonCollectTreeBasedTable_RESTRICT
#define ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeBasedTable_RESTRICT

#if !defined (_ComGoogleCommonCollectTreeBasedTable_) && (ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL || ComGoogleCommonCollectTreeBasedTable_INCLUDE)
#define _ComGoogleCommonCollectTreeBasedTable_

#define ComGoogleCommonCollectStandardRowSortedTable_RESTRICT 1
#define ComGoogleCommonCollectStandardRowSortedTable_INCLUDE 1
#include "com/google/common/collect/StandardRowSortedTable.h"

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectTreeBasedTable : ComGoogleCommonCollectStandardRowSortedTable

#pragma mark Public

- (id<JavaUtilComparator>)columnComparator;

+ (ComGoogleCommonCollectTreeBasedTable *)create;

+ (ComGoogleCommonCollectTreeBasedTable *)createWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                                                withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

+ (ComGoogleCommonCollectTreeBasedTable *)createWithComGoogleCommonCollectTreeBasedTable:(ComGoogleCommonCollectTreeBasedTable *)table;

- (id<JavaUtilSortedMap>)rowWithId:(id)rowKey;

- (id<JavaUtilComparator>)rowComparator;

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                    withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

- (id<JavaUtilIterator>)createColumnKeyIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeBasedTable)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_create();

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_createWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_createWithComGoogleCommonCollectTreeBasedTable_(ComGoogleCommonCollectTreeBasedTable *table);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeBasedTable_initWithJavaUtilComparator_withJavaUtilComparator_(ComGoogleCommonCollectTreeBasedTable *self, id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *new_ComGoogleCommonCollectTreeBasedTable_initWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeBasedTable)

#endif

#pragma pop_macro("ComGoogleCommonCollectTreeBasedTable_INCLUDE_ALL")
