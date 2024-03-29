//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteBufferAsFloatBuffer.java
//

#ifndef _JavaNioByteBufferAsFloatBuffer_H_
#define _JavaNioByteBufferAsFloatBuffer_H_

#include "J2ObjC_header.h"
#include "java/nio/FloatBuffer.h"

@class IOSFloatArray;
@class JavaNioByteBuffer;
@class JavaNioByteOrder;

/*!
 @brief This class wraps a byte buffer to be a float buffer.
 <p>
 Implementation notice:
 <ul>
 <li>After a byte buffer instance is wrapped, it becomes privately owned by
 the adapter. It must NOT be accessed outside the adapter any more.</li>
 <li>The byte buffer's position and limit are NOT linked with the adapter.
 The adapter extends Buffer, thus has its own position and limit.</li>
 </ul>
 </p>
 */
@interface JavaNioByteBufferAsFloatBuffer : JavaNioFloatBuffer

#pragma mark Public

- (JavaNioFloatBuffer *)asReadOnlyBuffer;

- (JavaNioFloatBuffer *)compact;

- (JavaNioFloatBuffer *)duplicate;

- (jfloat)get;

- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)floatCount;

- (jfloat)getWithInt:(jint)index;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteOrder *)order;

- (JavaNioFloatBuffer *)putWithFloat:(jfloat)c;

- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)floatCount;

- (JavaNioFloatBuffer *)putWithInt:(jint)index
                         withFloat:(jfloat)c;

- (JavaNioFloatBuffer *)slice;

#pragma mark Package-Private

- (instancetype)initWithJavaNioByteBuffer:(JavaNioByteBuffer *)byteBuffer;

+ (JavaNioFloatBuffer *)asFloatBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)byteBuffer;

- (IOSFloatArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioByteBufferAsFloatBuffer)

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioByteBufferAsFloatBuffer_asFloatBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *byteBuffer);

FOUNDATION_EXPORT void JavaNioByteBufferAsFloatBuffer_initWithJavaNioByteBuffer_(JavaNioByteBufferAsFloatBuffer *self, JavaNioByteBuffer *byteBuffer);

FOUNDATION_EXPORT JavaNioByteBufferAsFloatBuffer *new_JavaNioByteBufferAsFloatBuffer_initWithJavaNioByteBuffer_(JavaNioByteBuffer *byteBuffer) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteBufferAsFloatBuffer)

#endif // _JavaNioByteBufferAsFloatBuffer_H_
