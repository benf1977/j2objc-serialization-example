//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/ReferenceQueue.java
//

#ifndef _JavaLangRefReferenceQueue_H_
#define _JavaLangRefReferenceQueue_H_

#include "J2ObjC_header.h"

@class JavaLangRefReference;

/*!
 @brief The <code>ReferenceQueue</code> is the container on which reference objects are
 enqueued when the garbage collector detects the reachability type specified
 for the referent.
 @since 1.2
 */
@interface JavaLangRefReferenceQueue : NSObject

#pragma mark Public

/*!
 @brief Constructs a new instance of this class.
 */
- (instancetype)init;

/*!
 @brief Returns the next available reference from the queue, removing it in the
 process.
 Does not wait for a reference to become available.
 @return the next available reference, or <code>null</code> if no reference is
 immediately available
 */
- (JavaLangRefReference *)poll;

/*!
 @brief Returns the next available reference from the queue, removing it in the
 process.
 Waits indefinitely for a reference to become available.
 @throws InterruptedException if the blocking call was interrupted
 */
- (JavaLangRefReference *)remove;

/*!
 @brief Returns the next available reference from the queue, removing it in the
 process.
 Waits for a reference to become available or the given timeout
 period to elapse, whichever happens first.
 @param timeoutMillis maximum time to spend waiting for a reference object
 to become available. A value of <code>0</code> results in the method
 waiting indefinitely.
 @return the next available reference, or <code>null</code> if no reference
 becomes available within the timeout period
 @throws IllegalArgumentException if <code>timeoutMillis < 0</code>.
 @throws InterruptedException if the blocking call was interrupted
 */
- (JavaLangRefReference *)removeWithLong:(jlong)timeoutMillis;

#pragma mark Package-Private

+ (void)addWithJavaLangRefReference:(JavaLangRefReference *)list;

/*!
 @brief Enqueue the reference object on the receiver.
 @param reference
 reference object to be enqueued.
 */
- (void)enqueueWithJavaLangRefReference:(JavaLangRefReference *)reference;

@end

J2OBJC_STATIC_INIT(JavaLangRefReferenceQueue)

FOUNDATION_EXPORT JavaLangRefReference *JavaLangRefReferenceQueue_unenqueued_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangRefReferenceQueue, unenqueued_, JavaLangRefReference *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangRefReferenceQueue, unenqueued_, JavaLangRefReference *)

FOUNDATION_EXPORT void JavaLangRefReferenceQueue_init(JavaLangRefReferenceQueue *self);

FOUNDATION_EXPORT JavaLangRefReferenceQueue *new_JavaLangRefReferenceQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangRefReferenceQueue_addWithJavaLangRefReference_(JavaLangRefReference *list);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefReferenceQueue)

#endif // _JavaLangRefReferenceQueue_H_
