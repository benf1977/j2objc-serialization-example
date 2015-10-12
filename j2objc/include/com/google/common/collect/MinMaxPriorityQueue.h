//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/MinMaxPriorityQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL")
#if ComGoogleCommonCollectMinMaxPriorityQueue_RESTRICT
#define ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMinMaxPriorityQueue_RESTRICT

#if !defined (_ComGoogleCommonCollectMinMaxPriorityQueue_) && (ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL || ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE)
#define _ComGoogleCommonCollectMinMaxPriorityQueue_

#define JavaUtilAbstractQueue_RESTRICT 1
#define JavaUtilAbstractQueue_INCLUDE 1
#include "java/util/AbstractQueue.h"

@class ComGoogleCommonCollectMinMaxPriorityQueue_Builder;
@class ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectMinMaxPriorityQueue : JavaUtilAbstractQueue {
 @public
  jint maximumSize_;
}

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)newElements;

- (void)clear;

- (id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectMinMaxPriorityQueue *)create;

+ (ComGoogleCommonCollectMinMaxPriorityQueue *)createWithJavaLangIterable:(id<JavaLangIterable>)initialContents;

+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)expectedSizeWithInt:(jint)expectedSize;

- (id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)maximumSizeWithInt:(jint)maximumSize;

- (jboolean)offerWithId:(id)element;

+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id)peek;

- (id)peekFirst;

- (id)peekLast;

- (id)poll;

- (id)pollFirst;

- (id)pollLast;

- (id)removeFirst;

- (id)removeLast;

- (jint)size;

- (IOSObjectArray *)toArray;

#pragma mark Package-Private

- (jint)capacity;

- (id)elementDataWithInt:(jint)index;

+ (jint)initialQueueSizeWithInt:(jint)configuredExpectedSize
                        withInt:(jint)maximumSize
           withJavaLangIterable:(id<JavaLangIterable>)initialContents OBJC_METHOD_FAMILY_NONE;

+ (jboolean)isEvenLevelWithInt:(jint)index;

- (jboolean)isIntact;

- (ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *)removeAtWithInt:(jint)index;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue)

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue *ComGoogleCommonCollectMinMaxPriorityQueue_create();

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue *ComGoogleCommonCollectMinMaxPriorityQueue_createWithJavaLangIterable_(id<JavaLangIterable> initialContents);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_expectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_maximumSizeWithInt_(jint maximumSize);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMinMaxPriorityQueue_isEvenLevelWithInt_(jint index);

FOUNDATION_EXPORT jint ComGoogleCommonCollectMinMaxPriorityQueue_initialQueueSizeWithInt_withInt_withJavaLangIterable_(jint configuredExpectedSize, jint maximumSize, id<JavaLangIterable> initialContents);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue)

#endif

#if !defined (_ComGoogleCommonCollectMinMaxPriorityQueue_Builder_) && (ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL || ComGoogleCommonCollectMinMaxPriorityQueue_Builder_INCLUDE)
#define _ComGoogleCommonCollectMinMaxPriorityQueue_Builder_

@class ComGoogleCommonCollectMinMaxPriorityQueue;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectMinMaxPriorityQueue_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonCollectMinMaxPriorityQueue *)create;

- (ComGoogleCommonCollectMinMaxPriorityQueue *)createWithJavaLangIterable:(id<JavaLangIterable>)initialContents;

- (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)expectedSizeWithInt:(jint)expectedSize;

- (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)maximumSizeWithInt:(jint)maximumSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue_Builder)

#endif

#if !defined (_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_) && (ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL || ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_INCLUDE)
#define _ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_

@interface ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc : NSObject {
 @public
  id toTrickle_;
  id replaced_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)toTrickle
                    withId:(id)replaced;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc, toTrickle_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc, replaced_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *self, id toTrickle, id replaced);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *new_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(id toTrickle, id replaced) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc)

#endif

#pragma pop_macro("ComGoogleCommonCollectMinMaxPriorityQueue_INCLUDE_ALL")
