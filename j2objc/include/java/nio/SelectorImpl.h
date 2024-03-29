//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/SelectorImpl.java
//

#ifndef _JavaNioSelectorImpl_H_
#define _JavaNioSelectorImpl_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/spi/AbstractSelector.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiAbstractSelectableChannel;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaUtilSet;

@interface JavaNioSelectorImpl : JavaNioChannelsSpiAbstractSelector {
 @public
  /*!
   @brief Used to synchronize when a key's interest ops change.
   */
  id keysLock_;
}

#pragma mark Public

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

- (id<JavaUtilSet>)keys;

- (jint)select;

- (jint)selectWithLong:(jlong)timeout;

- (id<JavaUtilSet>)selectedKeys;

- (jint)selectNow;

- (JavaNioChannelsSelector *)wakeup;

#pragma mark Protected

- (void)implCloseSelector;

- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(JavaNioChannelsSpiAbstractSelectableChannel *)channel
                                                                                   withInt:(jint)operations
                                                                                    withId:(id)attachment;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioSelectorImpl)

J2OBJC_FIELD_SETTER(JavaNioSelectorImpl, keysLock_, id)

FOUNDATION_EXPORT void JavaNioSelectorImpl_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioSelectorImpl *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

FOUNDATION_EXPORT JavaNioSelectorImpl *new_JavaNioSelectorImpl_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiSelectorProvider *selectorProvider) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioSelectorImpl)

#endif // _JavaNioSelectorImpl_H_
