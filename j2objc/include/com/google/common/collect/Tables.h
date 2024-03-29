//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/Tables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectTables_INCLUDE_ALL")
#if ComGoogleCommonCollectTables_RESTRICT
#define ComGoogleCommonCollectTables_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectTables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTables_RESTRICT
#if ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_INCLUDE
#define ComGoogleCommonCollectTables_UnmodifiableTable_INCLUDE 1
#endif
#if ComGoogleCommonCollectTables_ImmutableCell_INCLUDE
#define ComGoogleCommonCollectTables_AbstractCell_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectTables_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_INCLUDE)
#define _ComGoogleCommonCollectTables_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCollectRowSortedTable;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectTables : NSObject

#pragma mark Public

+ (id<ComGoogleCommonCollectTable_Cell>)immutableCellWithId:(id)rowKey
                                                     withId:(id)columnKey
                                                     withId:(id)value;

+ (id<ComGoogleCommonCollectTable>)newCustomTableWithJavaUtilMap:(id<JavaUtilMap>)backingMap
                                 withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectTable>)transformValuesWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)fromTable
                                                  withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonCollectTable>)transposeWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

+ (id<ComGoogleCommonCollectRowSortedTable>)unmodifiableRowSortedTableWithComGoogleCommonCollectRowSortedTable:(id<ComGoogleCommonCollectRowSortedTable>)table;

+ (id<ComGoogleCommonCollectTable>)unmodifiableTableWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

#pragma mark Package-Private

+ (jboolean)equalsImplWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table
                                               withId:(id)obj;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectTables)

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable_Cell> ComGoogleCommonCollectTables_immutableCellWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_transposeWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_newCustomTableWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_transformValuesWithComGoogleCommonCollectTable_withComGoogleCommonBaseFunction_(id<ComGoogleCommonCollectTable> fromTable, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_unmodifiableTableWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectRowSortedTable> ComGoogleCommonCollectTables_unmodifiableRowSortedTableWithComGoogleCommonCollectRowSortedTable_(id<ComGoogleCommonCollectRowSortedTable> table);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectTables_equalsImplWithComGoogleCommonCollectTable_withId_(id<ComGoogleCommonCollectTable> table, id obj);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables)

#endif

#if !defined (_ComGoogleCommonCollectTables_AbstractCell_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_AbstractCell_INCLUDE)
#define _ComGoogleCommonCollectTables_AbstractCell_

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_Cell_INCLUDE 1
#include "com/google/common/collect/Table.h"

@interface ComGoogleCommonCollectTables_AbstractCell : NSObject < ComGoogleCommonCollectTable_Cell >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_AbstractCell)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_AbstractCell_init(ComGoogleCommonCollectTables_AbstractCell *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_AbstractCell)

#endif

#if !defined (_ComGoogleCommonCollectTables_ImmutableCell_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_ImmutableCell_INCLUDE)
#define _ComGoogleCommonCollectTables_ImmutableCell_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectTables_ImmutableCell : ComGoogleCommonCollectTables_AbstractCell < JavaIoSerializable >

#pragma mark Public

- (id)getColumnKey;

- (id)getRowKey;

- (id)getValue;

#pragma mark Package-Private

- (instancetype)initWithId:(id)rowKey
                    withId:(id)columnKey
                    withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_ImmutableCell)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_ImmutableCell_initWithId_withId_withId_(ComGoogleCommonCollectTables_ImmutableCell *self, id rowKey, id columnKey, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectTables_ImmutableCell *new_ComGoogleCommonCollectTables_ImmutableCell_initWithId_withId_withId_(id rowKey, id columnKey, id value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_ImmutableCell)

#endif

#if !defined (_ComGoogleCommonCollectTables_UnmodifiableTable_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_UnmodifiableTable_INCLUDE)
#define _ComGoogleCommonCollectTables_UnmodifiableTable_

#define ComGoogleCommonCollectForwardingTable_RESTRICT 1
#define ComGoogleCommonCollectForwardingTable_INCLUDE 1
#include "com/google/common/collect/ForwardingTable.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectTables_UnmodifiableTable : ComGoogleCommonCollectForwardingTable < JavaIoSerializable > {
 @public
  id<ComGoogleCommonCollectTable> delegate_;
}

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (id<ComGoogleCommonCollectTable>)delegate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_UnmodifiableTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_UnmodifiableTable, delegate_, id<ComGoogleCommonCollectTable>)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_UnmodifiableTable_initWithComGoogleCommonCollectTable_(ComGoogleCommonCollectTables_UnmodifiableTable *self, id<ComGoogleCommonCollectTable> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectTables_UnmodifiableTable *new_ComGoogleCommonCollectTables_UnmodifiableTable_initWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> delegate) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_UnmodifiableTable)

#endif

#if !defined (_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_INCLUDE)
#define _ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_

#define ComGoogleCommonCollectRowSortedTable_RESTRICT 1
#define ComGoogleCommonCollectRowSortedTable_INCLUDE 1
#include "com/google/common/collect/RowSortedTable.h"

@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectTables_UnmodifiableRowSortedMap : ComGoogleCommonCollectTables_UnmodifiableTable < ComGoogleCommonCollectRowSortedTable >

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectRowSortedTable:(id<ComGoogleCommonCollectRowSortedTable>)delegate;

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

#pragma mark Protected

- (id<ComGoogleCommonCollectRowSortedTable>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_initWithComGoogleCommonCollectRowSortedTable_(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap *self, id<ComGoogleCommonCollectRowSortedTable> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectTables_UnmodifiableRowSortedMap *new_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_initWithComGoogleCommonCollectRowSortedTable_(id<ComGoogleCommonCollectRowSortedTable> delegate) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectTables_INCLUDE_ALL")
