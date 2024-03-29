//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/Reference.java
//

#ifndef _JavaLangRefReference_H_
#define _JavaLangRefReference_H_

#include "J2ObjC_header.h"

@class JavaLangRefReferenceQueue;

/*!
 @brief Provides an abstract class which describes behavior common to all reference
 objects.
 It is not possible to create immediate subclasses of
 <code>Reference</code> in addition to the ones provided by this package. It is
 also not desirable to do so, since references require very close cooperation
 with the system's garbage collector. The existing, specialized reference
 classes should be used instead.
 <p>Three different type of references exist, each being weaker than the preceding one:
 <code>java.lang.ref.SoftReference</code>, <code>java.lang.ref.WeakReference</code>, and
 <code>java.lang.ref.PhantomReference</code>. "Weakness" here means that less restrictions are
 being imposed on the garbage collector as to when it is allowed to
 actually garbage-collect the referenced object.
 <p>In order to use reference objects properly it is important to understand
 the different types of reachability that trigger their clearing and
 enqueueing. The following table lists these, from strongest to weakest.
 For each row, an object is said to have the reachability on the left side
 if (and only if) it fulfills all of the requirements on the right side. In
 all rows, consider the <em>root set</em> to be a set of references that
 are "resistant" to garbage collection (that is, running threads, method
 parameters, local variables, static fields and the like).
 <p><table>
 <tr>
 <td>Strongly reachable</td>
 <td> <ul>
 <li>There exists at least one path from the root set to the object that does not traverse any
 instance of a <code>java.lang.ref.Reference</code> subclass.
 </li>
 </ul> </td>
 </tr>
 <tr>
 <td>Softly reachable</td>
 <td> <ul>
 <li>The object is not strongly reachable.</li>
 <li>There exists at least one path from the root set to the object that does traverse
 a <code>java.lang.ref.SoftReference</code> instance, but no <code>java.lang.ref.WeakReference</code>
 or <code>java.lang.ref.PhantomReference</code> instances.</li>
 </ul> </td>
 </tr>
 <tr>
 <td>Weakly reachable</td>
 <td> <ul>
 <li>The object is neither strongly nor softly reachable.</li>
 <li>There exists at least one path from the root set to the object that does traverse a
 <code>java.lang.ref.WeakReference</code> instance, but no <code>java.lang.ref.PhantomReference</code>
 instances.</li>
 </ul> </td>
 </tr>
 <tr>
 <td>Phantom-reachable</td>
 <td> <ul>
 <li>The object is neither strongly, softly, nor weakly reachable.</li>
 <li>The object is referenced by a <code>java.lang.ref.PhantomReference</code> instance.</li>
 <li>The object has already been finalized.</li>
 </ul> </td>
 </tr>
 </table>
 */
@interface JavaLangRefReference : NSObject {
 @public
  /*!
   @brief The object to which this reference refers.
   VM requirement: this field <em>must</em> be called "referent"
 and be an object.
   */
  volatile_id referent_;
  /*!
   @brief If non-null, the queue on which this reference will be enqueued
 when the referent is appropriately reachable.
   VM requirement: this field <em>must</em> be called "queue"
 and be a java.lang.ref.ReferenceQueue.
   */
  volatile_id queue_;
  /*!
   @brief Used internally by java.lang.ref.ReferenceQueue.
   VM requirement: this field <em>must</em> be called "queueNext"
 and be a java.lang.ref.Reference.
   */
  volatile_id queueNext_;
  /*!
   @brief Used internally by the VM.
   This field forms a circular and
 singly linked list of reference objects discovered by the
 garbage collector and awaiting processing by the reference
 queue thread.
   */
  volatile_id pendingNext_;
}

#pragma mark Public

/*!
 @brief Makes the referent <code>null</code>.
 This does not force the reference
 object to be enqueued.
 */
- (void)clear;

/*!
 @brief Forces the reference object to be enqueued if it has been associated with
 a queue.
 @return <code>true</code> if this call has caused the <code>Reference</code> to
 become enqueued, or <code>false</code> otherwise
 */
- (jboolean)enqueue;

/*!
 @brief Adds an object to its reference queue.
 @return <code>true</code> if this call has caused the <code>Reference</code> to
 become enqueued, or <code>false</code> otherwise
 */
- (jboolean)enqueueInternal;

/*!
 @brief Returns the referent of the reference object.
 @return the referent to which reference refers, or <code>null</code> if the
 object has been cleared.
 */
- (id)get;

/*!
 @brief Checks whether the reference object has been enqueued.
 @return <code>true</code> if the <code>Reference</code> has been enqueued, <code>false</code>
  otherwise
 */
- (jboolean)isEnqueued;

#pragma mark Protected

- (void)dealloc;

#pragma mark Package-Private

/*!
 @brief Constructs a new instance of this class.
 */
- (instancetype)init;

- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefReference)

J2OBJC_VOLATILE_FIELD_SETTER(JavaLangRefReference, queueNext_, JavaLangRefReference *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaLangRefReference, pendingNext_, JavaLangRefReference *)

FOUNDATION_EXPORT void JavaLangRefReference_init(JavaLangRefReference *self);

FOUNDATION_EXPORT void JavaLangRefReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefReference *self, id r, JavaLangRefReferenceQueue *q);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefReference)

#endif // _JavaLangRefReference_H_
