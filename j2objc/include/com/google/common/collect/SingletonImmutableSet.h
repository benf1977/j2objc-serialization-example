//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/SingletonImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL")
#if ComGoogleCommonCollectSingletonImmutableSet_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableSet_RESTRICT

#if !defined (_ComGoogleCommonCollectSingletonImmutableSet_) && (ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableSet_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableSet_

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectSingletonImmutableSet : ComGoogleCommonCollectImmutableSet {
 @public
  id element_;
}

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithId:(id)element;

- (instancetype)initWithId:(id)element
                   withInt:(jint)hashCode;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableSet, element_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableSet_initWithId_(ComGoogleCommonCollectSingletonImmutableSet *self, id element);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableSet *new_ComGoogleCommonCollectSingletonImmutableSet_initWithId_(id element) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableSet_initWithId_withInt_(ComGoogleCommonCollectSingletonImmutableSet *self, id element, jint hashCode);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableSet *new_ComGoogleCommonCollectSingletonImmutableSet_initWithId_withInt_(id element, jint hashCode) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableSet)

#endif

#pragma pop_macro("ComGoogleCommonCollectSingletonImmutableSet_INCLUDE_ALL")
