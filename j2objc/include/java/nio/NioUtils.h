//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/NioUtils.java
//

#ifndef _JavaNioNioUtils_H_
#define _JavaNioNioUtils_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaIoFileDescriptor;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileChannel;
@protocol JavaNetSocketOption;
@protocol JavaNioFileDescriptorChannel;
@protocol JavaUtilSet;

/*!
  internal use only
 */
@interface JavaNioNioUtils : NSObject

#pragma mark Public

+ (void)freeDirectBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

/*!
 @brief Returns the int file descriptor from within the given FileChannel 'fc'.
 */
+ (JavaIoFileDescriptor *)getFDWithJavaNioChannelsFileChannel:(JavaNioChannelsFileChannel *)fc;

/*!
 @brief Gets the supplied option from the channel if option is a member of allowedOptions.
 @throws IOException
 if the value could not be read due to IO errors.
 @throws IllegalArgumentException
 if the socket option is invalid.
 @throws UnsupportedOperationException
 if the option is not a member of allowedOptions.
 @throws ClosedChannelException
 if the channel is closed
 */
+ (id)getSocketOptionWithJavaNioFileDescriptorChannel:(id<JavaNioFileDescriptorChannel>)channel
                                      withJavaUtilSet:(id<JavaUtilSet>)allowedOptions
                              withJavaNetSocketOption:(id<JavaNetSocketOption>)option;

/*!
 @brief Helps bridge between io and nio.
 */
+ (JavaNioChannelsFileChannel *)newFileChannelWithId:(id)stream
                            withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                             withInt:(jint)mode OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Sets the supplied option on the channel to have the value if option is a member of
 allowedOptions.
 @throws IOException
 if the value could not be set due to IO errors.
 @throws IllegalArgumentException
 if the socket option or the value is invalid.
 @throws UnsupportedOperationException
 if the option is not a member of allowedOptions.
 @throws ClosedChannelException
 if the channel is closed
 */
+ (void)setSocketOptionWithJavaNioFileDescriptorChannel:(id<JavaNioFileDescriptorChannel>)channel
                                        withJavaUtilSet:(id<JavaUtilSet>)allowedOptions
                                withJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                 withId:(id)value;

/*!
 @brief Exposes the array backing a non-direct ByteBuffer, even if the ByteBuffer is read-only.
 Normally, attempting to access the array backing a read-only buffer throws.
 */
+ (IOSByteArray *)unsafeArrayWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

/*!
 @brief Exposes the array offset for the array backing a non-direct ByteBuffer,
 even if the ByteBuffer is read-only.
 */
+ (jint)unsafeArrayOffsetWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioNioUtils)

FOUNDATION_EXPORT void JavaNioNioUtils_freeDirectBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *buffer);

FOUNDATION_EXPORT JavaIoFileDescriptor *JavaNioNioUtils_getFDWithJavaNioChannelsFileChannel_(JavaNioChannelsFileChannel *fc);

FOUNDATION_EXPORT JavaNioChannelsFileChannel *JavaNioNioUtils_newFileChannelWithId_withJavaIoFileDescriptor_withInt_(id stream, JavaIoFileDescriptor *fd, jint mode);

FOUNDATION_EXPORT IOSByteArray *JavaNioNioUtils_unsafeArrayWithJavaNioByteBuffer_(JavaNioByteBuffer *b);

FOUNDATION_EXPORT jint JavaNioNioUtils_unsafeArrayOffsetWithJavaNioByteBuffer_(JavaNioByteBuffer *b);

FOUNDATION_EXPORT void JavaNioNioUtils_setSocketOptionWithJavaNioFileDescriptorChannel_withJavaUtilSet_withJavaNetSocketOption_withId_(id<JavaNioFileDescriptorChannel> channel, id<JavaUtilSet> allowedOptions, id<JavaNetSocketOption> option, id value);

FOUNDATION_EXPORT id JavaNioNioUtils_getSocketOptionWithJavaNioFileDescriptorChannel_withJavaUtilSet_withJavaNetSocketOption_(id<JavaNioFileDescriptorChannel> channel, id<JavaUtilSet> allowedOptions, id<JavaNetSocketOption> option);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioNioUtils)

#endif // _JavaNioNioUtils_H_
