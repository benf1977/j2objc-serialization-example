//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractSelectionKey.java
//

#ifndef _JavaNioChannelsSpiAbstractSelectionKey_H_
#define _JavaNioChannelsSpiAbstractSelectionKey_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/SelectionKey.h"

/*!
 @brief <code>AbstractSelectionKey</code> is the base implementation class for selection keys.
 It implements validation and cancellation methods.
 */
@interface JavaNioChannelsSpiAbstractSelectionKey : JavaNioChannelsSelectionKey {
 @public
  jboolean isValid_;
}

#pragma mark Public

/*!
 @brief Cancels this key.
 <p>
 A key that has been canceled is no longer valid. Calling this method on
 an already canceled key does nothing.
 */
- (void)cancel;

/*!
 @brief Indicates whether this key is valid.
 A key is valid as long as it has not
 been canceled.
 @return <code>true</code> if this key has not been canceled, <code>false</code>
 otherwise.
 */
- (jboolean)isValid;

#pragma mark Protected

/*!
 @brief Constructs a new <code>AbstractSelectionKey</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelectionKey)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelectionKey_init(JavaNioChannelsSpiAbstractSelectionKey *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelectionKey)

#endif // _JavaNioChannelsSpiAbstractSelectionKey_H_
