//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/IntBuffer.java
//

#ifndef _JavaNioIntBuffer_H_
#define _JavaNioIntBuffer_H_

#include "J2ObjC_header.h"
#include "java/lang/Comparable.h"
#include "java/nio/Buffer.h"

@class IOSIntArray;
@class JavaNioByteOrder;

/*!
 @brief A buffer of ints.
 <p>
 A int buffer can be created in either of the following ways:
 <ul>
 <li><code>Allocate</code> a new int array and create a buffer
 based on it;</li>
 <li><code>Wrap</code> an existing int array to create a new buffer;</li>
 <li>Use <code>ByteBuffer.asIntBuffer</code> to
 create a int buffer based on a byte buffer.</li>
 </ul>
 */
@interface JavaNioIntBuffer : JavaNioBuffer < JavaLangComparable >

#pragma mark Public

/*!
 @brief Creates an int buffer based on a newly allocated int array.
 @param capacity
 the capacity of the new buffer.
 @return the created int buffer.
 @throws IllegalArgumentException
 if <code>capacity</code> is less than zero.
 */
+ (JavaNioIntBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

- (IOSIntArray *)array;

- (jint)arrayOffset;

/*!
 @brief Returns a read-only buffer that shares its content with this buffer.
 <p>
 The returned buffer is guaranteed to be a new instance, even this buffer
 is read-only itself. The new buffer's position, limit, capacity and mark
 are the same as this buffer's.
 <p>
 The new buffer shares its content with this buffer, which means this
 buffer's change of content will be visible to the new buffer. The two
 buffer's position, limit and mark are independent.
 @return a read-only version of this buffer.
 */
- (JavaNioIntBuffer *)asReadOnlyBuffer;

/*!
 @brief Compacts this int buffer.
 <p>
 The remaining ints will be moved to the head of the buffer, starting from
 position zero. Then the position is set to <code>remaining()</code>; the
 limit is set to capacity; the mark is cleared.
 @return this buffer.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioIntBuffer *)compact;

/*!
 @brief Compares the remaining ints of this buffer to another int buffer's
 remaining ints.
 @param otherBuffer
 another int buffer.
 @return a negative value if this is less than <code>other</code>; 0 if this
 equals to <code>other</code>; a positive value if this is greater
 than <code>other</code>.
 @throws ClassCastException
 if <code>other</code> is not an int buffer.
 */
- (jint)compareToWithId:(JavaNioIntBuffer *)otherBuffer;

/*!
 @brief Returns a duplicated buffer that shares its content with this buffer.
 <p>
 The duplicated buffer's position, limit, capacity and mark are the same
 as this buffer. The duplicated buffer's read-only property and byte order
 are the same as this buffer's.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioIntBuffer *)duplicate;

/*!
 @brief Checks whether this int buffer is equal to another object.
 <p>
 If <code>other</code> is not a int buffer then <code>false</code> is returned. Two
 int buffers are equal if and only if their remaining ints are exactly the
 same. Position, limit, capacity and mark are not considered.
 @param other
 the object to compare with this int buffer.
 @return <code>true</code> if this int buffer is equal to <code>other</code>,
 <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the int at the current position and increases the position by 1.
 @return the int at the current position.
 @throws BufferUnderflowException
 if the position is equal or greater than limit.
 */
- (jint)get;

/*!
 @brief Returns an int at the specified index; the position is not changed.
 @param index
 the index, must not be negative and less than limit.
 @return an int at the specified index.
 @throws IndexOutOfBoundsException
 if index is invalid.
 */
- (jint)getWithInt:(jint)index;

/*!
 @brief Reads ints from the current position into the specified int array and
 increases the position by the number of ints read.
 <p>
 Calling this method has the same effect as
 <code>get(dst, 0, dst.length)</code>.
 @param dst
 the destination int array.
 @return this buffer.
 @throws BufferUnderflowException
 if <code>dst.length</code> is greater than <code>remaining()</code>.
 */
- (JavaNioIntBuffer *)getWithIntArray:(IOSIntArray *)dst;

/*!
 @brief Reads ints from the current position into the specified int array,
 starting from the specified offset, and increases the position by the
 number of ints read.
 @param dst
 the target int array.
 @param dstOffset
 the offset of the int array, must not be negative and not
 greater than <code>dst.length</code>.
 @param intCount
 the number of ints to read, must be no less than zero and not
 greater than <code>dst.length - dstOffset</code>.
 @return this buffer.
 @throws IndexOutOfBoundsException
 if either <code>dstOffset</code> or <code>intCount</code> is invalid.
 @throws BufferUnderflowException
 if <code>intCount</code> is greater than <code>remaining()</code>.
 */
- (JavaNioIntBuffer *)getWithIntArray:(IOSIntArray *)dst
                              withInt:(jint)dstOffset
                              withInt:(jint)intCount;

- (jboolean)hasArray;

/*!
 @brief Calculates this buffer's hash code from the remaining chars.
 The
 position, limit, capacity and mark don't affect the hash code.
 @return the hash code calculated from the remaining ints.
 */
- (NSUInteger)hash;

/*!
 @brief Indicates whether this buffer is direct.
 A direct buffer will try its
 best to take advantage of native memory APIs and it may not stay in the
 Java heap, so it is not affected by garbage collection.
 <p>
 An int buffer is direct if it is based on a byte buffer and the byte
 buffer is direct.
 @return <code>true</code> if this buffer is direct, <code>false</code> otherwise.
 */
- (jboolean)isDirect;

/*!
 @brief Returns the byte order used by this buffer when converting ints from/to
 bytes.
 <p>
 If this buffer is not based on a byte buffer, then always return the
 platform's native byte order.
 @return the byte order used by this buffer when converting ints from/to
 bytes.
 */
- (JavaNioByteOrder *)order;

/*!
 @brief Writes the given int to the current position and increases the position
 by 1.
 @param i
 the int to write.
 @return this buffer.
 @throws BufferOverflowException
 if position is equal or greater than limit.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioIntBuffer *)putWithInt:(jint)i;

/*!
 @brief Write a int to the specified index of this buffer; the position is not
 changed.
 @param index
 the index, must not be negative and less than the limit.
 @param i
 the int to write.
 @return this buffer.
 @throws IndexOutOfBoundsException
 if index is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioIntBuffer *)putWithInt:(jint)index
                         withInt:(jint)i;

/*!
 @brief Writes ints from the given int array to the current position and
 increases the position by the number of ints written.
 <p>
 Calling this method has the same effect as
 <code>put(src, 0, src.length)</code>.
 @param src
 the source int array.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>src.length</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioIntBuffer *)putWithIntArray:(IOSIntArray *)src;

/*!
 @brief Writes ints from the given int array, starting from the specified offset,
 to the current position and increases the position by the number of ints
 written.
 @param src
 the source int array.
 @param srcOffset
 the offset of int array, must not be negative and not greater
 than <code>src.length</code>.
 @param intCount
 the number of ints to write, must be no less than zero and not
 greater than <code>src.length - srcOffset</code>.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>intCount</code>.
 @throws IndexOutOfBoundsException
 if either <code>srcOffset</code> or <code>intCount</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioIntBuffer *)putWithIntArray:(IOSIntArray *)src
                              withInt:(jint)srcOffset
                              withInt:(jint)intCount;

/*!
 @brief Writes all the remaining ints of the <code>src</code> int buffer to this
 buffer's current position, and increases both buffers' position by the
 number of ints copied.
 @param src
 the source int buffer.
 @return this buffer.
 @throws BufferOverflowException
 if <code>src.remaining()</code> is greater than this buffer's
 <code>remaining()</code>.
 @throws IllegalArgumentException
 if <code>src</code> is this buffer.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioIntBuffer *)putWithJavaNioIntBuffer:(JavaNioIntBuffer *)src;

/*!
 @brief Returns a sliced buffer that shares its content with this buffer.
 <p>
 The sliced buffer's capacity will be this buffer's <code>remaining()</code>,
 and its zero position will correspond to this buffer's current position.
 The new buffer's position will be 0, limit will be its capacity, and its
 mark is cleared. The new buffer's read-only property and byte order are
 same as this buffer's.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioIntBuffer *)slice;

/*!
 @brief Creates a new int buffer by wrapping the given int array.
 <p>
 Calling this method has the same effect as
 <code>wrap(array, 0, array.length)</code>.
 @param array
 the int array which the new buffer will be based on.
 @return the created int buffer.
 */
+ (JavaNioIntBuffer *)wrapWithIntArray:(IOSIntArray *)array;

/*!
 @brief Creates a new int buffer by wrapping the given int array.
 <p>
 The new buffer's position will be <code>start</code>, limit will be
 <code>start + intCount</code>, capacity will be the length of the array.
 @param array
 the int array which the new buffer will be based on.
 @param start
 the start index, must not be negative and not greater than
 <code>array.length</code>
 @param intCount
 the length, must not be negative and not greater than
 <code>array.length - start</code>.
 @return the created int buffer.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>intCount</code> is invalid.
 */
+ (JavaNioIntBuffer *)wrapWithIntArray:(IOSIntArray *)array
                               withInt:(jint)start
                               withInt:(jint)intCount;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

/*!
 @brief Child class implements this method to realize <code>array()</code>.
 @return see <code>array()</code>
 */
- (IOSIntArray *)protectedArray;

/*!
 @brief Child class implements this method to realize <code>arrayOffset()</code>.
 @return see <code>arrayOffset()</code>
 */
- (jint)protectedArrayOffset;

/*!
 @brief Child class implements this method to realize <code>hasArray()</code>.
 @return see <code>hasArray()</code>
 */
- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioIntBuffer)

FOUNDATION_EXPORT JavaNioIntBuffer *JavaNioIntBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioIntBuffer *JavaNioIntBuffer_wrapWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT JavaNioIntBuffer *JavaNioIntBuffer_wrapWithIntArray_withInt_withInt_(IOSIntArray *array, jint start, jint intCount);

FOUNDATION_EXPORT void JavaNioIntBuffer_initWithInt_withLong_(JavaNioIntBuffer *self, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioIntBuffer)

#endif // _JavaNioIntBuffer_H_
