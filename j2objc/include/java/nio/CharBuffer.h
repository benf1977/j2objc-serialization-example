//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/CharBuffer.java
//

#ifndef _JavaNioCharBuffer_H_
#define _JavaNioCharBuffer_H_

#include "J2ObjC_header.h"
#include "java/lang/Appendable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Comparable.h"
#include "java/lang/Readable.h"
#include "java/nio/Buffer.h"

@class IOSCharArray;
@class JavaNioByteOrder;

/*!
 @brief A buffer of chars.
 <p>
 A char buffer can be created in either one of the following ways:
 <ul>
 <li><code>Allocate</code> a new char array and create a buffer
 based on it;</li>
 <li><code>Wrap</code> an existing char array to create a new
 buffer;</li>
 <li><code>Wrap</code> an existing char sequence to create a
 new buffer;</li>
 <li>Use <code>ByteBuffer.asCharBuffer</code>
 to create a char buffer based on a byte buffer.</li>
 </ul>
 */
@interface JavaNioCharBuffer : JavaNioBuffer < JavaLangComparable, JavaLangCharSequence, JavaLangAppendable, JavaLangReadable >

#pragma mark Public

/*!
 @brief Creates a char buffer based on a newly allocated char array.
 @param capacity
 the capacity of the new buffer.
 @return the created char buffer.
 @throws IllegalArgumentException
 if <code>capacity</code> is less than zero.
 */
+ (JavaNioCharBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Writes the given char to the current position and increases the position
 by 1.
 @param c
 the char to write.
 @return this buffer.
 @throws BufferOverflowException
 if position is equal or greater than limit.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)appendWithChar:(jchar)c;

/*!
 @brief Writes all chars of the given character sequence <code>csq</code> to the
 current position of this buffer, and increases the position by the length
 of the csq.
 <p>
 Calling this method has the same effect as <code>append(csq.toString())</code>.
 If the <code>CharSequence</code> is <code>null</code> the string "null" will be
 written to the buffer.
 @param csq
 the <code>CharSequence</code> to write.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than the length of csq.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Writes chars of the given <code>CharSequence</code> to the current position of
 this buffer, and increases the position by the number of chars written.
 @param csq
 the <code>CharSequence</code> to write.
 @param start
 the first char to write, must not be negative and not greater
 than <code>csq.length()</code>.
 @param end
 the last char to write (excluding), must be less than
 <code>start</code> and not greater than <code>csq.length()</code>.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>end - start</code>.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>end</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                              withInt:(jint)start
                                              withInt:(jint)end;

- (IOSCharArray *)array;

- (jint)arrayOffset;

/*!
 @brief Returns a read-only buffer that shares its content with this buffer.
 <p>
 The returned buffer is guaranteed to be a new instance, even if this
 buffer is read-only itself. The new buffer's position, limit, capacity
 and mark are the same as this buffer's.
 <p>
 The new buffer shares its content with this buffer, which means this
 buffer's change of content will be visible to the new buffer. The two
 buffer's position, limit and mark are independent.
 @return a read-only version of this buffer.
 */
- (JavaNioCharBuffer *)asReadOnlyBuffer;

/*!
 @brief Returns the character located at the given offset <i>relative to the current position</i>.
 @throws IndexOutOfBoundsException if <code>index < 0</code> or <code>index >= remaining()</code>.
 */
- (jchar)charAtWithInt:(jint)index;

/*!
 @brief Compacts this char buffer.
 <p>
 The remaining chars will be moved to the head of the buffer,
 starting from position zero. Then the position is set to
 <code>remaining()</code>; the limit is set to capacity; the mark is cleared.
 @return this buffer.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)compact;

/*!
 @brief Compare the remaining chars of this buffer to another char
 buffer's remaining chars.
 @param otherBuffer
 another char buffer.
 @return a negative value if this is less than <code>otherBuffer</code>; 0 if
 this equals to <code>otherBuffer</code>; a positive value if this is
 greater than <code>otherBuffer</code>.
 @throws ClassCastException
 if <code>otherBuffer</code> is not a char buffer.
 */
- (jint)compareToWithId:(JavaNioCharBuffer *)otherBuffer;

/*!
 @brief Returns a duplicated buffer that shares its content with this buffer.
 <p>
 The duplicated buffer's initial position, limit, capacity and mark are
 the same as this buffer's. The duplicated buffer's read-only property and
 byte order are the same as this buffer's, too.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioCharBuffer *)duplicate;

/*!
 @brief Checks whether this char buffer is equal to another object.
 <p>
 If <code>other</code> is not a char buffer then <code>false</code> is returned. Two
 char buffers are equal if and only if their remaining chars are exactly
 the same. Position, limit, capacity and mark are not considered.
 @param other
 the object to compare with this char buffer.
 @return <code>true</code> if this char buffer is equal to <code>other</code>,
 <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the char at the current position and increases the position by 1.
 @return the char at the current position.
 @throws BufferUnderflowException
 if the position is equal or greater than limit.
 */
- (jchar)get;

/*!
 @brief Reads chars from the current position into the specified char array and
 increases the position by the number of chars read.
 <p>
 Calling this method has the same effect as
 <code>get(dst, 0, dst.length)</code>.
 @param dst
 the destination char array.
 @return this buffer.
 @throws BufferUnderflowException
 if <code>dst.length</code> is greater than <code>remaining()</code>.
 */
- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst;

/*!
 @brief Reads chars from the current position into the specified char array,
 starting from the specified offset, and increases the position by the
 number of chars read.
 @param dst
 the target char array.
 @param dstOffset
 the offset of the char array, must not be negative and not
 greater than <code>dst.length</code>.
 @param charCount
 The number of chars to read, must be no less than zero and no
 greater than <code>dst.length - dstOffset</code>.
 @return this buffer.
 @throws IndexOutOfBoundsException
 if either <code>dstOffset</code> or <code>charCount</code> is invalid.
 @throws BufferUnderflowException
 if <code>charCount</code> is greater than <code>remaining()</code>.
 */
- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)charCount;

/*!
 @brief Returns a char at the specified index; the position is not changed.
 @param index
 the index, must not be negative and less than limit.
 @return a char at the specified index.
 @throws IndexOutOfBoundsException
 if index is invalid.
 */
- (jchar)getWithInt:(jint)index;

- (jboolean)hasArray;

/*!
 @brief Calculates this buffer's hash code from the remaining chars.
 The
 position, limit, capacity and mark don't affect the hash code.
 @return the hash code calculated from the remaining chars.
 */
- (NSUInteger)hash;

/*!
 @brief Indicates whether this buffer is direct.
 A direct buffer will try its
 best to take advantage of native memory APIs and it may not stay in the
 Java heap, so it is not affected by garbage collection.
 <p>
 A char buffer is direct if it is based on a byte buffer and the byte
 buffer is direct.
 @return <code>true</code> if this buffer is direct, <code>false</code> otherwise.
 */
- (jboolean)isDirect;

/*!
 @brief Returns the number of remaining chars.
 @return the number of remaining chars.
 */
- (jint)length;

/*!
 @brief Returns the byte order used by this buffer when converting chars from/to
 bytes.
 <p>
 If this buffer is not based on a byte buffer, then this always returns
 the platform's native byte order.
 @return the byte order used by this buffer when converting chars from/to
 bytes.
 */
- (JavaNioByteOrder *)order;

/*!
 @brief Writes the given char to the current position and increases the position
 by 1.
 @param c
 the char to write.
 @return this buffer.
 @throws BufferOverflowException
 if position is equal or greater than limit.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithChar:(jchar)c;

/*!
 @brief Writes chars from the given char array to the current position and
 increases the position by the number of chars written.
 <p>
 Calling this method has the same effect as
 <code>put(src, 0, src.length)</code>.
 @param src
 the source char array.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>src.length</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src;

/*!
 @brief Writes chars from the given char array, starting from the specified offset,
 to the current position and increases the position by the number of chars
 written.
 @param src
 the source char array.
 @param srcOffset
 the offset of char array, must not be negative and not greater
 than <code>src.length</code>.
 @param charCount
 the number of chars to write, must be no less than zero and no
 greater than <code>src.length - srcOffset</code>.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>charCount</code>.
 @throws IndexOutOfBoundsException
 if either <code>srcOffset</code> or <code>charCount</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)charCount;

/*!
 @brief Writes all the remaining chars of the <code>src</code> char buffer to this
 buffer's current position, and increases both buffers' position by the
 number of chars copied.
 @param src
 the source char buffer.
 @return this buffer.
 @throws BufferOverflowException
 if <code>src.remaining()</code> is greater than this buffer's
 <code>remaining()</code>.
 @throws IllegalArgumentException
 if <code>src</code> is this buffer.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithJavaNioCharBuffer:(JavaNioCharBuffer *)src;

/*!
 @brief Writes a char to the specified index of this buffer; the position is not
 changed.
 @param index
 the index, must be no less than zero and less than the limit.
 @param c
 the char to write.
 @return this buffer.
 @throws IndexOutOfBoundsException
 if index is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithInt:(jint)index
                         withChar:(jchar)c;

/*!
 @brief Writes all chars of the given string to the current position of this
 buffer, and increases the position by the length of string.
 <p>
 Calling this method has the same effect as
 <code>put(str, 0, str.length())</code>.
 @param str
 the string to write.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than the length of string.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithNSString:(NSString *)str;

/*!
 @brief Writes chars of the given string to the current position of this buffer,
 and increases the position by the number of chars written.
 @param str
 the string to write.
 @param start
 the first char to write, must not be negative and not greater
 than <code>str.length()</code>.
 @param end
 the last char to write (excluding), must be less than
 <code>start</code> and not greater than <code>str.length()</code>.
 @return this buffer.
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>end - start</code>.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>end</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioCharBuffer *)putWithNSString:(NSString *)str
                               withInt:(jint)start
                               withInt:(jint)end;

/*!
 @brief Reads characters from this buffer and puts them into <code>target</code>.
 The
 number of chars that are copied is either the number of remaining chars
 in this buffer or the number of remaining chars in <code>target</code>,
 whichever is smaller.
 @param target
 the target char buffer.
 @throws IllegalArgumentException
 if <code>target</code> is this buffer.
 @throws IOException
 if an I/O error occurs.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of <code>target</code>.
 @return the number of chars copied or -1 if there are no chars left to be
 read from this buffer.
 */
- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

/*!
 @brief Returns a sliced buffer that shares its content with this buffer.
 <p>
 The sliced buffer's capacity will be this buffer's <code>remaining()</code>,
 and its zero position will correspond to this buffer's current position.
 The new buffer's position will be 0, limit will be its capacity, and its
 mark is cleared. The new buffer's read-only property and byte order are
 same as this buffer.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioCharBuffer *)slice;

/*!
 @brief Returns a new char buffer representing a sub-sequence of this buffer's
 current remaining content.
 <p>
 The new buffer's position will be <code>position() + start</code>, limit will
 be <code>position() + end</code>, capacity will be the same as this buffer.
 The new buffer's read-only property and byte order are the same as this
 buffer.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 @param start
 the start index of the sub-sequence, referenced from the
 current buffer position. Must not be less than zero and not
 greater than the value obtained from a call to
 <code>remaining()</code>.
 @param end
 the end index of the sub-sequence, referenced from the current
 buffer position. Must not be less than <code>start</code> and not
 be greater than the value obtained from a call to
 <code>remaining()</code>.
 @return a new char buffer represents a sub-sequence of this buffer's
 current remaining content.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>end</code> is invalid.
 */
- (JavaNioCharBuffer *)subSequenceFrom:(jint)start
                                    to:(jint)end;

/*!
 @brief Returns a string representing the current remaining chars of this buffer.
 */
- (NSString *)description;

/*!
 @brief Creates a new char buffer by wrapping the given char array.
 <p>
 Calling this method has the same effect as
 <code>wrap(array, 0, array.length)</code>.
 @param array
 the char array which the new buffer will be based on.
 @return the created char buffer.
 */
+ (JavaNioCharBuffer *)wrapWithCharArray:(IOSCharArray *)array;

/*!
 @brief Creates a new char buffer by wrapping the given char array.
 <p>
 The new buffer's position will be <code>start</code>, limit will be
 <code>start + charCount</code>, capacity will be the length of the array.
 @param array
 the char array which the new buffer will be based on.
 @param start
 the start index, must not be negative and not greater than
 <code>array.length</code>.
 @param charCount
 the length, must not be negative and not greater than
 <code>array.length - start</code>.
 @return the created char buffer.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>charCount</code> is invalid.
 */
+ (JavaNioCharBuffer *)wrapWithCharArray:(IOSCharArray *)array
                                 withInt:(jint)start
                                 withInt:(jint)charCount;

/*!
 @brief Creates a new char buffer by wrapping the given char sequence.
 <p>
 Calling this method has the same effect as
 <code>wrap(chseq, 0, chseq.length())</code>.
 @param chseq
 the char sequence which the new buffer will be based on.
 @return the created char buffer.
 */
+ (JavaNioCharBuffer *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)chseq;

/*!
 @brief Creates a new char buffer by wrapping the given char sequence.
 <p>
 The new buffer's position will be <code>start</code>, limit will be
 <code>end</code>, capacity will be the length of the char sequence. The new
 buffer is read-only.
 @param cs
 the char sequence which the new buffer will be based on.
 @param start
 the start index, must not be negative and not greater than
 <code>cs.length()</code>.
 @param end
 the end index, must be no less than <code>start</code> and no
 greater than <code>cs.length()</code>.
 @return the created char buffer.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>end</code> is invalid.
 */
+ (JavaNioCharBuffer *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs
                                            withInt:(jint)start
                                            withInt:(jint)end;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

/*!
 @brief Child class implements this method to realize <code>array()</code>.
 */
- (IOSCharArray *)protectedArray;

/*!
 @brief Child class implements this method to realize <code>arrayOffset()</code>.
 */
- (jint)protectedArrayOffset;

/*!
 @brief Child class implements this method to realize <code>hasArray()</code>.
 */
- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharBuffer)

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithCharArray_withInt_withInt_(IOSCharArray *array, jint start, jint charCount);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithJavaLangCharSequence_(id<JavaLangCharSequence> chseq);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> cs, jint start, jint end);

FOUNDATION_EXPORT void JavaNioCharBuffer_initWithInt_withLong_(JavaNioCharBuffer *self, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharBuffer)

#endif // _JavaNioCharBuffer_H_
