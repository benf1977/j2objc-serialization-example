//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicLongArray.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicLongArray_H_
#define _JavaUtilConcurrentAtomicAtomicLongArray_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSLongArray;

/*!
 @brief A <code>long</code> array in which elements may be updated atomically.
 See the <code>java.util.concurrent.atomic</code> package specification
 for description of the properties of atomic variables.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicLongArray : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new AtomicLongArray of the given length, with all
 elements initially zero.
 @param length the length of the array
 */
- (instancetype)initWithInt:(jint)length;

/*!
 @brief Creates a new AtomicLongArray with the same length as, and
 all elements copied from, the given array.
 @param array the array to copy elements from
 @throws NullPointerException if array is null
 */
- (instancetype)initWithLongArray:(IOSLongArray *)array;

/*!
 @brief Atomically adds the given value to the element at index <code>i</code>.
 @param i the index
 @param delta the value to add
 @return the updated value
 */
- (jlong)addAndGetWithInt:(jint)i
                 withLong:(jlong)delta;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given
 updated value if the current value <code>==</code> the expected value.
 @param i the index
 @param expect the expected value
 @param update the new value
 @return true if successful. False return indicates that
 the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithInt:(jint)i
                        withLong:(jlong)expect
                        withLong:(jlong)update;

/*!
 @brief Atomically decrements by one the element at index <code>i</code>.
 @param i the index
 @return the updated value
 */
- (jlong)decrementAndGetWithInt:(jint)i;

/*!
 @brief Gets the current value at position <code>i</code>.
 @param i the index
 @return the current value
 */
- (jlong)getWithInt:(jint)i;

/*!
 @brief Atomically adds the given value to the element at index <code>i</code>.
 @param i the index
 @param delta the value to add
 @return the previous value
 */
- (jlong)getAndAddWithInt:(jint)i
                 withLong:(jlong)delta;

/*!
 @brief Atomically decrements by one the element at index <code>i</code>.
 @param i the index
 @return the previous value
 */
- (jlong)getAndDecrementWithInt:(jint)i;

/*!
 @brief Atomically increments by one the element at index <code>i</code>.
 @param i the index
 @return the previous value
 */
- (jlong)getAndIncrementWithInt:(jint)i;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given value
 and returns the old value.
 @param i the index
 @param newValue the new value
 @return the previous value
 */
- (jlong)getAndSetWithInt:(jint)i
                 withLong:(jlong)newValue;

/*!
 @brief Atomically increments by one the element at index <code>i</code>.
 @param i the index
 @return the updated value
 */
- (jlong)incrementAndGetWithInt:(jint)i;

/*!
 @brief Eventually sets the element at position <code>i</code> to the given value.
 @param i the index
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithInt:(jint)i
              withLong:(jlong)newValue;

/*!
 @brief Returns the length of the array.
 @return the length of the array
 */
- (jint)length;

/*!
 @brief Sets the element at position <code>i</code> to the given value.
 @param i the index
 @param newValue the new value
 */
- (void)setWithInt:(jint)i
          withLong:(jlong)newValue;

/*!
 @brief Returns the String representation of the current values of array.
 @return the String representation of the current values of array
 */
- (NSString *)description;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given
 updated value if the current value <code>==</code> the expected value.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
 spuriously and does not provide ordering guarantees</a>, so is
 only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param i the index
 @param expect the expected value
 @param update the new value
 @return true if successful
 */
- (jboolean)weakCompareAndSetWithInt:(jint)i
                            withLong:(jlong)expect
                            withLong:(jlong)update;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicLongArray)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicLongArray_initWithInt_(JavaUtilConcurrentAtomicAtomicLongArray *self, jint length);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLongArray *new_JavaUtilConcurrentAtomicAtomicLongArray_initWithInt_(jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicLongArray_initWithLongArray_(JavaUtilConcurrentAtomicAtomicLongArray *self, IOSLongArray *array);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLongArray *new_JavaUtilConcurrentAtomicAtomicLongArray_initWithLongArray_(IOSLongArray *array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicLongArray)

#endif // _JavaUtilConcurrentAtomicAtomicLongArray_H_
