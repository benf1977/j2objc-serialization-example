//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ArrayList.java
//

#ifndef _JavaUtilArrayList_H_
#define _JavaUtilArrayList_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractList.h"
#include "java/util/RandomAccess.h"

@class IOSObjectArray;
@class JavaLangIndexOutOfBoundsException;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief ArrayList is an implementation of <code>List</code>, backed by an array.
 All optional operations including adding, removing, and replacing elements are supported.
 <p>All elements are permitted, including null.
 <p>This class is a good choice as your default <code>List</code> implementation.
 <code>Vector</code> synchronizes all operations, but not necessarily in a way that's
 meaningful to your application: synchronizing each call to <code>get</code>, for example, is not
 equivalent to synchronizing the list and iterating over it (which is probably what you intended).
 <code>java.util.concurrent.CopyOnWriteArrayList</code> is intended for the special case of very high
 concurrency, frequent traversals, and very rare mutations.
 @since 1.2
 */
@interface JavaUtilArrayList : JavaUtilAbstractList < NSCopying, JavaIoSerializable, JavaUtilRandomAccess > {
 @public
  /*!
   @brief The number of elements in this list.
   */
  jint size_;
  /*!
   @brief The elements in this list, followed by nulls.
   */
  IOSObjectArray *array_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>ArrayList</code> instance with zero initial capacity.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>ArrayList</code> containing the elements of
 the specified collection.
 @param collection
 the collection of elements to add.
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Constructs a new instance of <code>ArrayList</code> with the specified
 initial capacity.
 @param capacity
 the initial capacity of this <code>ArrayList</code>.
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Adds the specified object at the end of this <code>ArrayList</code>.
 @param object
 the object to add.
 @return always true
 */
- (jboolean)addWithId:(id)object;

/*!
 @brief Inserts the specified object into this <code>ArrayList</code> at the specified
 location.
 The object is inserted before any previous element at the
 specified location. If the location is equal to the size of this
 <code>ArrayList</code>, the object is added at the end.
 @param index
 the index at which to insert the object.
 @param object
 the object to add.
 @throws IndexOutOfBoundsException
 when <code>location < 0 || location > size()</code>
 */
- (void)addWithInt:(jint)index
            withId:(id)object;

/*!
 @brief Adds the objects in the specified collection to this <code>ArrayList</code>.
 @param collection
 the collection of objects.
 @return <code>true</code> if this <code>ArrayList</code> is modified, <code>false</code>
 otherwise.
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Inserts the objects in the specified collection at the specified location
 in this List.
 The objects are added in the order they are returned from
 the collection's iterator.
 @param index
 the index at which to insert.
 @param collection
 the collection of objects.
 @return <code>true</code> if this <code>ArrayList</code> is modified, <code>false</code>
 otherwise.
 @throws IndexOutOfBoundsException
 when <code>location < 0 || location > size()</code>
 */
- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all elements from this <code>ArrayList</code>, leaving it empty.
 */
- (void)clear;

/*!
 @brief Returns a new <code>ArrayList</code> with the same elements, the same size and
 the same capacity as this <code>ArrayList</code>.
 @return a shallow copy of this <code>ArrayList</code>
 */
- (id)clone;

/*!
 @brief Searches this <code>ArrayList</code> for the specified object.
 @param object
 the object to search for.
 @return <code>true</code> if <code>object</code> is an element of this
 <code>ArrayList</code>, <code>false</code> otherwise
 */
- (jboolean)containsWithId:(id)object;

/*!
 @brief Ensures that after this operation the <code>ArrayList</code> can hold the
 specified number of elements without further growing.
 @param minimumCapacity
 the minimum capacity asked for.
 */
- (void)ensureCapacityWithInt:(jint)minimumCapacity;

- (jboolean)isEqual:(id)o;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)object;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jint)lastIndexOfWithId:(id)object;

/*!
 @brief Removes the object at the specified location from this list.
 @param index
 the index of the object to remove.
 @return the removed object.
 @throws IndexOutOfBoundsException
 when <code>location < 0 || location >= size()</code>
 */
- (id)removeWithInt:(jint)index;

- (jboolean)removeWithId:(id)object;

/*!
 @brief Replaces the element at the specified location in this <code>ArrayList</code>
 with the specified object.
 @param index
 the index at which to put the specified object.
 @param object
 the object to add.
 @return the previous element at the index.
 @throws IndexOutOfBoundsException
 when <code>location < 0 || location >= size()</code>
 */
- (id)setWithInt:(jint)index
          withId:(id)object;

/*!
 @brief Returns the number of elements in this <code>ArrayList</code>.
 @return the number of elements in this <code>ArrayList</code>.
 */
- (jint)size;

/*!
 @brief Returns a new array containing all elements contained in this
 <code>ArrayList</code>.
 @return an array of the elements from this <code>ArrayList</code>
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all elements contained in this
 <code>ArrayList</code>.
 If the specified array is large enough to hold the
 elements, the specified array is used, otherwise an array of the same
 type is created. If the specified array is used and is larger than this
 <code>ArrayList</code>, the array element following the collection elements
 is set to null.
 @param contents
 the array.
 @return an array of the elements from this <code>ArrayList</code>.
 @throws ArrayStoreException
 when the type of an element in this <code>ArrayList</code> cannot
 be stored in the type of the specified array.
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

/*!
 @brief Sets the capacity of this <code>ArrayList</code> to be the same as the current
 size.
 */
- (void)trimToSize;

#pragma mark Protected

- (void)removeRangeWithInt:(jint)fromIndex
                   withInt:(jint)toIndex;

#pragma mark Package-Private

/*!
 @brief This method was extracted to encourage VM to inline callers.
 TODO: when we have a VM that can actually inline, move the test in here too!
 */
+ (JavaLangIndexOutOfBoundsException *)throwIndexOutOfBoundsExceptionWithInt:(jint)index
                                                                     withInt:(jint)size;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilArrayList)

J2OBJC_FIELD_SETTER(JavaUtilArrayList, array_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilArrayList_initWithInt_(JavaUtilArrayList *self, jint capacity);

FOUNDATION_EXPORT JavaUtilArrayList *new_JavaUtilArrayList_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilArrayList_init(JavaUtilArrayList *self);

FOUNDATION_EXPORT JavaUtilArrayList *new_JavaUtilArrayList_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilArrayList_initWithJavaUtilCollection_(JavaUtilArrayList *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT JavaUtilArrayList *new_JavaUtilArrayList_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIndexOutOfBoundsException *JavaUtilArrayList_throwIndexOutOfBoundsExceptionWithInt_withInt_(jint index, jint size);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilArrayList)

#endif // _JavaUtilArrayList_H_
