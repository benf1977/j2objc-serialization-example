//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingCollection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingCollection_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingCollection_RESTRICT
#define ComGoogleCommonCollectForwardingCollection_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingCollection_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingCollection_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingCollection_) && (ComGoogleCommonCollectForwardingCollection_INCLUDE_ALL || ComGoogleCommonCollectForwardingCollection_INCLUDE)
#define _ComGoogleCommonCollectForwardingCollection_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilCollection_RESTRICT 1
#define JavaUtilCollection_INCLUDE 1
#include "java/util/Collection.h"

@class IOSObjectArray;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectForwardingCollection : ComGoogleCommonCollectForwardingObject < JavaUtilCollection >

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilCollection>)delegate;

- (jboolean)standardAddAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)standardClear;

- (jboolean)standardContainsWithId:(id)object;

- (jboolean)standardContainsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)standardIsEmpty;

- (jboolean)standardRemoveWithId:(id)object;

- (jboolean)standardRemoveAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)standardRetainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (IOSObjectArray *)standardToArray;

- (IOSObjectArray *)standardToArrayWithNSObjectArray:(IOSObjectArray *)array;

- (NSString *)standardToString;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingCollection)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingCollection_init(ComGoogleCommonCollectForwardingCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingCollection)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingCollection_INCLUDE_ALL")
