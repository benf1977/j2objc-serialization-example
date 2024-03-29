//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/IllegalBlockingModeException.java
//

#ifndef _JavaNioChannelsIllegalBlockingModeException_H_
#define _JavaNioChannelsIllegalBlockingModeException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalStateException.h"

/*!
 @brief An <code>IllegalBlockingModeException</code> is thrown when an operation that
 requires a specific blocking mode is invoked on a channel that is in a
 different blocking mode.
 */
@interface JavaNioChannelsIllegalBlockingModeException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>IllegalBlockingModeException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsIllegalBlockingModeException)

FOUNDATION_EXPORT void JavaNioChannelsIllegalBlockingModeException_init(JavaNioChannelsIllegalBlockingModeException *self);

FOUNDATION_EXPORT JavaNioChannelsIllegalBlockingModeException *new_JavaNioChannelsIllegalBlockingModeException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsIllegalBlockingModeException)

#endif // _JavaNioChannelsIllegalBlockingModeException_H_
