//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableAsList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableAsList_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableAsList_RESTRICT
#define ComGoogleCommonCollectImmutableAsList_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableAsList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableAsList_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableAsList_) && (ComGoogleCommonCollectImmutableAsList_INCLUDE_ALL || ComGoogleCommonCollectImmutableAsList_INCLUDE)
#define _ComGoogleCommonCollectImmutableAsList_

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectImmutableCollection;

@interface ComGoogleCommonCollectImmutableAsList : ComGoogleCommonCollectImmutableList

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (jboolean)isEmpty;

- (jint)size;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (jboolean)isPartialView;

- (id)writeReplace;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableAsList)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableAsList_init(ComGoogleCommonCollectImmutableAsList *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableAsList)

#endif

#if !defined (_ComGoogleCommonCollectImmutableAsList_SerializedForm_) && (ComGoogleCommonCollectImmutableAsList_INCLUDE_ALL || ComGoogleCommonCollectImmutableAsList_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableAsList_SerializedForm_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;

@interface ComGoogleCommonCollectImmutableAsList_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableCollection *collection_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)collection;

- (id)readResolve;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableAsList_SerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableAsList_SerializedForm, collection_, ComGoogleCommonCollectImmutableCollection *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableAsList_SerializedForm *self, ComGoogleCommonCollectImmutableCollection *collection);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableAsList_SerializedForm *new_ComGoogleCommonCollectImmutableAsList_SerializedForm_initWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableCollection *collection) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableAsList_SerializedForm)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableAsList_INCLUDE_ALL")
