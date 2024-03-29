//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Map.java
//

#ifndef _JavaUtilMap_H_
#define _JavaUtilMap_H_

#include "J2ObjC_header.h"

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

/*!
 @brief A <code>Map</code> is a data structure consisting of a set of keys and values
 in which each key is mapped to a single value.
 The class of the objects
 used as keys is declared when the <code>Map</code> is declared, as is the
 class of the corresponding values.
 <p>
 A <code>Map</code> provides helper methods to iterate through all of the
 keys contained in it, as well as various methods to access and update
 the key/value pairs.
 */
@protocol JavaUtilMap < NSObject, JavaObject >

/*!
 @brief Removes all elements from this <code>Map</code>, leaving it empty.
 @throws UnsupportedOperationException
 if removing elements from this <code>Map</code> is not supported.
 */
- (void)clear;

/*!
 @brief Returns whether this <code>Map</code> contains the specified key.
 @param key
 the key to search for.
 @return <code>true</code> if this map contains the specified key,
 <code>false</code> otherwise.
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Returns whether this <code>Map</code> contains the specified value.
 @param value
 the value to search for.
 @return <code>true</code> if this map contains the specified value,
 <code>false</code> otherwise.
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns a <code>Set</code> containing all of the mappings in this <code>Map</code>.
 Each mapping is
 an instance of <code>Map.Entry</code>. As the <code>Set</code> is backed by this <code>Map</code>,
 changes in one will be reflected in the other.
 @return a set of the mappings
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief Compares the argument to the receiver, and returns <code>true</code> if the
 specified object is a <code>Map</code> and both <code>Map</code>s contain the same mappings.
 @param object
 the <code>Object</code> to compare with this <code>Object</code>.
 @return boolean <code>true</code> if the <code>Object</code> is the same as this <code>Object</code>
 <code>false</code> if it is different from this <code>Object</code>.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the value of the mapping with the specified key.
 @param key
 the key.
 @return the value of the mapping with the specified key, or <code>null</code>
 if no mapping for the specified key is found.
 */
- (id)getWithId:(id)key;

/*!
 @brief Returns an integer hash code for the receiver.
 <code>Object</code>s which are equal
 return the same value for this method.
 @return the receiver's hash.
 */
- (NSUInteger)hash;

/*!
 @brief Returns whether this map is empty.
 @return <code>true</code> if this map has no elements, <code>false</code>
 otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns a set of the keys contained in this <code>Map</code>.
 The <code>Set</code> is backed by
 this <code>Map</code> so changes to one are reflected by the other. The <code>Set</code> does not
 support adding.
 @return a set of the keys.
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Maps the specified key to the specified value.
 @param key
 the key.
 @param value
 the value.
 @return the value of any previous mapping with the specified key or
 <code>null</code> if there was no mapping.
 @throws UnsupportedOperationException
 if adding to this <code>Map</code> is not supported.
 @throws ClassCastException
 if the class of the key or value is inappropriate for
 this <code>Map</code>.
 @throws IllegalArgumentException
 if the key or value cannot be added to this <code>Map</code>.
 @throws NullPointerException
 if the key or value is <code>null</code> and this <code>Map</code> does
 not support <code>null</code> keys or values.
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief Copies every mapping in the specified <code>Map</code> to this <code>Map</code>.
 @param map
 the <code>Map</code> to copy mappings from.
 @throws UnsupportedOperationException
 if adding to this <code>Map</code> is not supported.
 @throws ClassCastException
 if the class of a key or a value of the specified <code>Map</code> is
 inappropriate for this <code>Map</code>.
 @throws IllegalArgumentException
 if a key or value cannot be added to this <code>Map</code>.
 @throws NullPointerException
 if a key or value is <code>null</code> and this <code>Map</code> does not
 support <code>null</code> keys or values.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Removes a mapping with the specified key from this <code>Map</code>.
 @param key
 the key of the mapping to remove.
 @return the value of the removed mapping or <code>null</code> if no mapping
 for the specified key was found.
 @throws UnsupportedOperationException
 if removing from this <code>Map</code> is not supported.
 */
- (id)removeWithId:(id)key;

/*!
 @brief Returns the number of mappings in this <code>Map</code>.
 @return the number of mappings in this <code>Map</code>.
 */
- (jint)size;

/*!
 @brief Returns a <code>Collection</code> of the values contained in this <code>Map</code>.
 The <code>Collection</code>
 is backed by this <code>Map</code> so changes to one are reflected by the other. The
 <code>Collection</code> supports <code>Collection.remove</code>, <code>Collection.removeAll</code>,
 <code>Collection.retainAll</code>, and <code>Collection.clear</code> operations,
 and it does not support <code>Collection.add</code> or <code>Collection.addAll</code> operations.
 <p>
 This method returns a <code>Collection</code> which is the subclass of
 <code>AbstractCollection</code>. The <code>AbstractCollection.iterator</code> method of this subclass returns a
 "wrapper object" over the iterator of this <code>Map</code>'s <code>entrySet()</code>. The <code>AbstractCollection.size</code> method
 wraps this <code>Map</code>'s <code>size</code> method and the <code>AbstractCollection.contains</code> method wraps this <code>Map</code>'s
 <code>containsValue</code> method.
 <p>
 The collection is created when this method is called at first time and
 returned in response to all subsequent calls. This method may return
 different Collection when multiple calls to this method, since it has no
 synchronization performed.
 @return a collection of the values contained in this map.
 */
- (id<JavaUtilCollection>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMap)

/*!
 @brief <code>Map.Entry</code> is a key/value mapping contained in a <code>Map</code>.
 */
@protocol JavaUtilMap_Entry < NSObject, JavaObject >

/*!
 @brief Compares the specified object to this <code>Map.Entry</code> and returns if they
 are equal.
 To be equal, the object must be an instance of <code>Map.Entry</code> and have the
 same key and value.
 @param object
 the <code>Object</code> to compare with this <code>Object</code>.
 @return <code>true</code> if the specified <code>Object</code> is equal to this
 <code>Map.Entry</code>, <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the key.
 @return the key
 */
- (id)getKey;

/*!
 @brief Returns the value.
 @return the value
 */
- (id)getValue;

/*!
 @brief Returns an integer hash code for the receiver.
 <code>Object</code> which are
 equal return the same value for this method.
 @return the receiver's hash code.
 */
- (NSUInteger)hash;

/*!
 @brief Sets the value of this entry to the specified value, replacing any
 existing value.
 @param object
 the new value to set.
 @return object the replaced value of this entry.
 */
- (id)setValueWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMap_Entry)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMap_Entry)

#endif // _JavaUtilMap_H_
