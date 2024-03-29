//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/AbstractMapBasedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectAbstractMapBasedMultiset_) && (ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL || ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE)
#define _ComGoogleCommonCollectAbstractMapBasedMultiset_

#define ComGoogleCommonCollectAbstractMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMultiset.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable >

#pragma mark Public

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (void)clear;

- (jint)countWithId:(id)element;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilIterator>)iterator;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jint)size;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

#pragma mark Package-Private

- (jint)distinctElements;

- (id<JavaUtilIterator>)entryIterator;

- (void)setBackingMapWithJavaUtilMap:(id<JavaUtilMap>)backingMap;


@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultiset_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultiset *self, id<JavaUtilMap> backingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE_ALL")
