//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentMap.java
//

#ifndef _JavaUtilConcurrentConcurrentMap_H_
#define _JavaUtilConcurrentConcurrentMap_H_

#include "J2ObjC_header.h"
#include "java/util/Map.h"

/*!
 @brief A <code>java.util.Map</code> providing additional atomic
 <code>putIfAbsent</code>, <code>remove</code>, and <code>replace</code> methods.
 <p>Memory consistency effects: As with other concurrent
 collections, actions in a thread prior to placing an object into a
 <code>ConcurrentMap</code> as a key or value
 <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
 actions subsequent to the access or removal of that object from
 the <code>ConcurrentMap</code> in another thread.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentConcurrentMap < JavaUtilMap, NSObject, JavaObject >

/*!
 @brief If the specified key is not already associated
 with a value, associate it with the given value.
 This is equivalent to
 @code
  if (!map.containsKey(key))
   return map.put(key, value);
  else
   return map.get(key);
 
@endcode
 except that the action is performed atomically.
 @param key key with which the specified value is to be associated
 @param value value to be associated with the specified key
 @return the previous value associated with the specified key, or
 <code>null</code> if there was no mapping for the key.
 (A <code>null</code> return can also indicate that the map
 previously associated <code>null</code> with the key,
 if the implementation supports null values.)
 @throws UnsupportedOperationException if the <code>put</code> operation
 is not supported by this map
 @throws ClassCastException if the class of the specified key or value
 prevents it from being stored in this map
 @throws NullPointerException if the specified key or value is null,
 and this map does not permit null keys or values
 @throws IllegalArgumentException if some property of the specified key
 or value prevents it from being stored in this map
 */
- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

/*!
 @brief Removes the entry for a key only if currently mapped to a given value.
 This is equivalent to
 @code
 
  if (map.containsKey(key) && map.get(key).equals(value)) 
   map.remove(key);
   return true;
  } else
   
@endcode
 except that the action is performed atomically.
 @param key key with which the specified value is associated
 @param value value expected to be associated with the specified key
 @return <code>true</code> if the value was removed
 @throws UnsupportedOperationException if the <code>remove</code> operation
 is not supported by this map
 @throws ClassCastException if the key or value is of an inappropriate
 type for this map
 (<a href="../Collection.html#optional-restrictions">optional</a>)
 @throws NullPointerException if the specified key or value is null,
 and this map does not permit null keys or values
 (<a href="../Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)removeWithId:(id)key
                  withId:(id)value;

/*!
 @brief Replaces the entry for a key only if currently mapped to a given value.
 This is equivalent to
 @code
 
  if (map.containsKey(key) && map.get(key).equals(oldValue)) 
   map.put(key, newValue);
   return true;
  } else
   
@endcode
 except that the action is performed atomically.
 @param key key with which the specified value is associated
 @param oldValue value expected to be associated with the specified key
 @param newValue value to be associated with the specified key
 @return <code>true</code> if the value was replaced
 @throws UnsupportedOperationException if the <code>put</code> operation
 is not supported by this map
 @throws ClassCastException if the class of a specified key or value
 prevents it from being stored in this map
 @throws NullPointerException if a specified key or value is null,
 and this map does not permit null keys or values
 @throws IllegalArgumentException if some property of a specified key
 or value prevents it from being stored in this map
 */
- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

/*!
 @brief Replaces the entry for a key only if currently mapped to some value.
 This is equivalent to
 @code
 
  if (map.containsKey(key)) 
   return map.put(key, value);
  } else
   
@endcode
 except that the action is performed atomically.
 @param key key with which the specified value is associated
 @param value value to be associated with the specified key
 @return the previous value associated with the specified key, or
 <code>null</code> if there was no mapping for the key.
 (A <code>null</code> return can also indicate that the map
 previously associated <code>null</code> with the key,
 if the implementation supports null values.)
 @throws UnsupportedOperationException if the <code>put</code> operation
 is not supported by this map
 @throws ClassCastException if the class of the specified key or value
 prevents it from being stored in this map
 @throws NullPointerException if the specified key or value is null,
 and this map does not permit null keys or values
 @throws IllegalArgumentException if some property of the specified key
 or value prevents it from being stored in this map
 */
- (id)replaceWithId:(id)key
             withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentMap)

#endif // _JavaUtilConcurrentConcurrentMap_H_
