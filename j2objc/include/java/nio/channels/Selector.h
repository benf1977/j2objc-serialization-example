//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/Selector.java
//

#ifndef _JavaNioChannelsSelector_H_
#define _JavaNioChannelsSelector_H_

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"

@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaUtilSet;

/*!
 @brief A controller for the selection of <code>SelectableChannel</code> objects.
 Selectable channels can be registered with a selector and get a
 <code>SelectionKey</code> that represents the registration. The keys are also
 added to the selector's key set. Selection keys can be canceled so that the
 corresponding channel is no longer registered with the selector.
 <p>
 By invoking the <code>select</code> method, the key set is checked and all keys
 that have been canceled since last select operation are moved to the set of
 canceled keys. During the select operation, the channels registered with this
 selector are checked to see whether they are ready for operation according to
 their <code>interest set</code>.
 */
@interface JavaNioChannelsSelector : NSObject < JavaIoCloseable >

#pragma mark Public

/*!
 @brief Closes this selector.
 Ongoing calls to the <code>select</code> methods of this
 selector will get interrupted. This interruption behaves as if the
 <code>wakeup()</code> method of this selector is called. After this, all keys
 that are still valid are invalidated and their channels are unregistered.
 All resources held by this selector are released.
 <p>
 Any further attempt of using this selector after this method has been
 called (except calling <code>close()</code> or <code>wakeup()</code>) results in
 a <code>ClosedSelectorException</code> being thrown.
 @throws IOException
 if an I/O error occurs.
 */
- (void)close;

/*!
 @brief Indicates whether this selector is open.
 @return <code>true</code> if this selector is not closed, <code>false</code>
 otherwise.
 */
- (jboolean)isOpen;

/*!
 @brief Gets the set of registered keys.
 The set is immutable and is not thread-
 safe.
 @return the set of registered keys.
 */
- (id<JavaUtilSet>)keys;

/*!
 @brief Returns a selector returned by <code>SelectorProvider.provider</code>'s
 <code>SelectorProvider.openSelector</code> method.
 @throws IOException
 if an I/O error occurs.
 */
+ (JavaNioChannelsSelector *)open;

/*!
 @brief Gets the provider of this selector.
 @return the provider of this selector.
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Detects if any of the registered channels is ready for I/O operations
 according to its <code>interest set</code>.
 This method does not
 return until at least one channel is ready, <code>wakeup()</code> is
 invoked or the calling thread is interrupted.
 @return the number of channels that are ready for operation.
 @throws IOException
 if an I/O error occurs.
 @throws ClosedSelectorException
 if the selector is closed.
 */
- (jint)select;

/*!
 @brief Detects if any of the registered channels is ready for I/O operations
 according to its <code>interest set</code>.
 This method does not
 return until at least one channel is ready, <code>wakeup()</code> is invoked,
 the calling thread is interrupted or the specified <code>timeout</code>
 expires.
 @param timeout
 the non-negative timeout in millisecond; 0 will block forever
 if no channels get ready.
 @return the number of channels that are ready for operation.
 @throws ClosedSelectorException
 if the selector is closed.
 @throws IllegalArgumentException
 if the given timeout argument is less than zero.
 @throws IOException
 if an I/O error occurs.
 */
- (jint)selectWithLong:(jlong)timeout;

/*!
 @brief Gets the selection keys whose channels are ready for operation.
 The set
 is not thread-safe and no keys may be added to it. Removing keys is
 allowed.
 @return the selection keys whose channels are ready for operation.
 @throws ClosedSelectorException
 if the selector is closed.
 */
- (id<JavaUtilSet>)selectedKeys;

/*!
 @brief Detects if any of the registered channels is ready for I/O operations
 according to its <code>interest set</code>.
 This operation will
 return immediately.
 @return the number of channels that are ready for operation, 0 if none is
 ready.
 @throws IOException
 if an I/O error occurrs.
 @throws ClosedSelectorException
 if the selector is closed.
 */
- (jint)selectNow;

/*!
 @brief Forces blocked <code>select</code> operations to return immediately.
 <p>
 If no <code>select</code> operation is blocked when <code>wakeup()</code> is called
 then the next <code>select</code> operation will return immediately. This can
 be undone by a call to <code>selectNow()</code>; after calling
 <code>selectNow()</code>, a subsequent call of <code>select</code> can block
 again.
 @return this selector.
 @throws ClosedSelectorException
 if the selector is closed.
 */
- (JavaNioChannelsSelector *)wakeup;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Selector</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSelector)

FOUNDATION_EXPORT JavaNioChannelsSelector *JavaNioChannelsSelector_open();

FOUNDATION_EXPORT void JavaNioChannelsSelector_init(JavaNioChannelsSelector *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSelector)

#endif // _JavaNioChannelsSelector_H_
