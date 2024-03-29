//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractSelector.java
//

#ifndef _JavaNioChannelsSpiAbstractSelector_H_
#define _JavaNioChannelsSpiAbstractSelector_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/Selector.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSpiAbstractSelectableChannel;
@class JavaNioChannelsSpiAbstractSelectionKey;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaUtilSet;

/*!
 @brief <code>AbstractSelector</code> is the base implementation class for selectors.
 It realizes the interruption of selection by <code>begin</code> and
 <code>end</code>. It also holds the cancellation and the deletion of the key
 set.
 */
@interface JavaNioChannelsSpiAbstractSelector : JavaNioChannelsSelector

#pragma mark Public

/*!
 @brief Closes this selector.
 This method does nothing if this selector is
 already closed. The actual closing must be implemented by subclasses in
 <code>implCloseSelector()</code>.
 */
- (void)close;

/*!
 @brief Returns true if this selector is open.
 */
- (jboolean)isOpen;

/*!
 @brief Returns this selector's provider.
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

#pragma mark Protected

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

/*!
 @brief Indicates the beginning of a code section that includes an I/O operation
 that is potentially blocking.
 After this operation, the application
 should invoke the corresponding <code>end(boolean)</code> method.
 */
- (void)begin;

/*!
 @brief Returns this channel's set of canceled selection keys.
 */
- (id<JavaUtilSet>)cancelledKeys;

/*!
 @brief Deletes the key from the channel's key set.
 */
- (void)deregisterWithJavaNioChannelsSpiAbstractSelectionKey:(JavaNioChannelsSpiAbstractSelectionKey *)key;

/*!
 @brief Indicates the end of a code section that has been started with
 <code>begin()</code> and that includes a potentially blocking I/O operation.
 */
- (void)end;

/*!
 @brief Implements the closing of this channel.
 */
- (void)implCloseSelector;

/*!
 @brief Registers <code>channel</code> with this selector.
 @param operations the <code>interest set</code> of <code>channel</code>
 .
 @param attachment the attachment for the selection key.
 @return the key related to the channel and this selector.
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(JavaNioChannelsSpiAbstractSelectableChannel *)channel
                                                                                   withInt:(jint)operations
                                                                                    withId:(id)attachment;

#pragma mark Package-Private

- (void)cancelWithJavaNioChannelsSelectionKey:(JavaNioChannelsSelectionKey *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelector)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelector_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiAbstractSelector *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelector)

#endif // _JavaNioChannelsSpiAbstractSelector_H_
