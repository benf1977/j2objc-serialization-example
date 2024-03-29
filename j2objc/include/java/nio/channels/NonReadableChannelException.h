//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/NonReadableChannelException.java
//

#ifndef _JavaNioChannelsNonReadableChannelException_H_
#define _JavaNioChannelsNonReadableChannelException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalStateException.h"

/*!
 @brief A <code>NonReadableChannelException</code> is thrown when attempting to read from
 a channel that is not open for reading.
 */
@interface JavaNioChannelsNonReadableChannelException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>NonReadableChannelException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNonReadableChannelException)

FOUNDATION_EXPORT void JavaNioChannelsNonReadableChannelException_init(JavaNioChannelsNonReadableChannelException *self);

FOUNDATION_EXPORT JavaNioChannelsNonReadableChannelException *new_JavaNioChannelsNonReadableChannelException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNonReadableChannelException)

#endif // _JavaNioChannelsNonReadableChannelException_H_
