//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/ArraySet.java
//

#ifndef _AndroidUtilArraySet_H_
#define _AndroidUtilArraySet_H_

#include "J2ObjC_header.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"

@class AndroidUtilMapCollections;
@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilIterator;

/*!
 @brief ArraySet is a generic set data structure that is designed to be more memory efficient than a
 traditional <code>java.util.HashSet</code>.
 The design is very similar to
 <code>ArrayMap</code>, with all of the caveats described there.  This implementation is
 separate from ArrayMap, however, so the Object array contains only one item for each
 entry in the set (instead of a pair for a mapping).
 <p>Note that this implementation is not intended to be appropriate for data structures
 that may contain large numbers of items.  It is generally slower than a traditional
 HashSet, since lookups require a binary search and adds and removes require inserting
 and deleting entries in the array.  For containers holding up to hundreds of items,
 the performance difference is not significant, less than 50%.</p>
 <p>Because this container is intended to better balance memory use, unlike most other
 standard Java containers it will shrink its array as items are removed from it.  Currently
 you have no control over this shrinking -- if you set a capacity and then remove an
 item, it may reduce the capacity to better match the current size.  In the future an
 explicit call to set the capacity should turn off this aggressive shrinking behavior.</p>
 */
@interface AndroidUtilArraySet : NSObject < JavaUtilCollection, JavaUtilSet > {
 @public
  IOSIntArray *mHashes_;
  IOSObjectArray *mArray_;
  jint mSize_;
  AndroidUtilMapCollections *mCollections_;
}

#pragma mark Public

/*!
 @brief Create a new empty ArraySet.
 The default capacity of an array map is 0, and
 will grow once items are added to it.
 */
- (instancetype)init;

/*!
 @brief Create a new ArraySet with the mappings from the given ArraySet.
 */
- (instancetype)initWithAndroidUtilArraySet:(AndroidUtilArraySet *)set;

/*!
 @brief Create a new ArraySet with a given initial capacity.
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Adds the specified object to this set.
 The set is not modified if it
 already contains the object.
 @param value the object to add.
 @return <code>true</code> if this set is modified, <code>false</code> otherwise.
 @throws ClassCastException
 when the class of the object is inappropriate for this set.
 */
- (jboolean)addWithId:(id)value;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Make the array map empty.
 All storage is released.
 */
- (void)clear;

/*!
 @brief Check whether a value exists in the set.
 @param key The value to search for.
 @return Returns true if the value exists, else false.
 */
- (jboolean)containsWithId:(id)key;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Ensure the array map can hold at least <var>minimumCapacity</var>
 items.
 */
- (void)ensureCapacityWithInt:(jint)minimumCapacity;

/*!
 @brief 
 <p>This implementation returns false if the object is not a set, or
 if the sets have different sizes.
 Otherwise, for each value in this
 set, it checks to make sure the value also exists in the other set.
 If any value doesn't exist, the method returns false; otherwise, it
 returns true.
 */
- (jboolean)isEqual:(id)object;

/*!
 
 */
- (NSUInteger)hash;

/*!
 @brief Return true if the array map contains no items.
 */
- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

/*!
 @brief Perform a <code>add(Object)</code> of all values in <var>array</var>
 @param array The array whose contents are to be retrieved.
 */
- (void)putAllWithAndroidUtilArraySet:(AndroidUtilArraySet *)array;

/*!
 @brief Removes the specified object from this set.
 @param object the object to remove.
 @return <code>true</code> if this set was modified, <code>false</code> otherwise.
 */
- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Remove the key/value mapping at the given index.
 @param index The desired index, must be between 0 and <code>size()</code>-1.
 @return Returns the value that was stored at this index.
 */
- (id)removeAtWithInt:(jint)index;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Return the number of items in this array map.
 */
- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

/*!
 @brief 
 <p>This implementation composes a string by iterating over its values.
 If
 this set contains itself as a value, the string "(this Set)"
 will appear in its place.
 */
- (NSString *)description;

/*!
 @brief Return the value at the given index in the array.
 @param index The desired index, must be between 0 and <code>size()</code>-1.
 @return Returns the value stored at the given index.
 */
- (id)valueAtWithInt:(jint)index;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilArraySet)

J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mHashes_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mArray_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mCollections_, AndroidUtilMapCollections *)

FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArraySet_mBaseCache_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mBaseCache_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(AndroidUtilArraySet, mBaseCache_, IOSObjectArray *)

FOUNDATION_EXPORT jint AndroidUtilArraySet_mBaseCacheSize_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mBaseCacheSize_, jint)
J2OBJC_STATIC_FIELD_REF_GETTER(AndroidUtilArraySet, mBaseCacheSize_, jint)
FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArraySet_mTwiceBaseCache_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mTwiceBaseCache_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(AndroidUtilArraySet, mTwiceBaseCache_, IOSObjectArray *)

FOUNDATION_EXPORT jint AndroidUtilArraySet_mTwiceBaseCacheSize_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mTwiceBaseCacheSize_, jint)
J2OBJC_STATIC_FIELD_REF_GETTER(AndroidUtilArraySet, mTwiceBaseCacheSize_, jint)
FOUNDATION_EXPORT void AndroidUtilArraySet_init(AndroidUtilArraySet *self);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilArraySet_initWithInt_(AndroidUtilArraySet *self, jint capacity);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *self, AndroidUtilArraySet *set);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *set) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilArraySet)

#endif // _AndroidUtilArraySet_H_
