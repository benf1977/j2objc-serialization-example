//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Exchanger.java
//

#ifndef _JavaUtilConcurrentExchanger_H_
#define _JavaUtilConcurrentExchanger_H_

#include "J2ObjC_header.h"
#include "java/lang/ThreadLocal.h"

@class JavaLangThread;
@class JavaUtilConcurrentTimeUnitEnum;

/*!
 @brief A synchronization point at which threads can pair and swap elements
 within pairs.
 Each thread presents some object on entry to the
 <code>exchange</code> method, matches with a partner thread,
 and receives its partner's object on return.  An Exchanger may be
 viewed as a bidirectional form of a <code>SynchronousQueue</code>.
 Exchangers may be useful in applications such as genetic algorithms
 and pipeline designs.
 <p><b>Sample Usage:</b>
 Here are the highlights of a class that uses an <code>Exchanger</code>
 to swap buffers between threads so that the thread filling the
 buffer gets a freshly emptied one when it needs it, handing off the
 filled one to the thread emptying the buffer.
 @code
 
  class FillAndEmpty 
   Exchanger<DataBuffer> exchanger = new Exchanger<DataBuffer>();
   DataBuffer initialEmptyBuffer = ... a made-up type
   DataBuffer initialFullBuffer = ...
   class FillingLoop implements Runnable {
     public void run() {
       DataBuffer currentBuffer = initialEmptyBuffer;
       try {
         while (currentBuffer != null) {
           addToBuffer(currentBuffer);
           if (currentBuffer.isFull())
             currentBuffer = exchanger.exchange(currentBuffer);
         }
       } catch (InterruptedException ex) { ... handle ... }
     }
   }
   class EmptyingLoop implements Runnable {
     public void run() {
       DataBuffer currentBuffer = initialFullBuffer;
       try {
         while (currentBuffer != null) {
           takeFromBuffer(currentBuffer);
           if (currentBuffer.isEmpty())
             currentBuffer = exchanger.exchange(currentBuffer);
         }
       } catch (InterruptedException ex) { ... handle ...}
     }
   }
   void start() {
     new Thread(new FillingLoop()).start();
     new Thread(new EmptyingLoop()).start();
   }
  
@endcode
 <p>Memory consistency effects: For each pair of threads that
 successfully exchange objects via an <code>Exchanger</code>, actions
 prior to the <code>exchange()</code> in each thread
 <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
 those subsequent to a return from the corresponding <code>exchange()</code>
 in the other thread.
 @since 1.5
 @author Doug Lea and Bill Scherer and Michael Scott
 */
@interface JavaUtilConcurrentExchanger : NSObject

#pragma mark Public

/*!
 @brief Creates a new Exchanger.
 */
- (instancetype)init;

/*!
 @brief Waits for another thread to arrive at this exchange point (unless
 the current thread is interrupted),
 and then transfers the given object to it, receiving its object
 in return.
 <p>If another thread is already waiting at the exchange point then
 it is resumed for thread scheduling purposes and receives the object
 passed in by the current thread.  The current thread returns immediately,
 receiving the object passed to the exchange by that other thread.
 <p>If no other thread is already waiting at the exchange then the
 current thread is disabled for thread scheduling purposes and lies
 dormant until one of two things happens:
 <ul>
 <li>Some other thread enters the exchange; or
 <li>Some other thread interrupts
 the current thread.
 </ul>
 <p>If the current thread:
 <ul>
 <li>has its interrupted status set on entry to this method; or
 <li>is interrupted while waiting
 for the exchange,
 </ul>
 then <code>InterruptedException</code> is thrown and the current thread's
 interrupted status is cleared.
 @param x the object to exchange
 @return the object provided by the other thread
 @throws InterruptedException if the current thread was
 interrupted while waiting
 */
- (id)exchangeWithId:(id)x;

/*!
 @brief Waits for another thread to arrive at this exchange point (unless
 the current thread is interrupted or
 the specified waiting time elapses), and then transfers the given
 object to it, receiving its object in return.
 <p>If another thread is already waiting at the exchange point then
 it is resumed for thread scheduling purposes and receives the object
 passed in by the current thread.  The current thread returns immediately,
 receiving the object passed to the exchange by that other thread.
 <p>If no other thread is already waiting at the exchange then the
 current thread is disabled for thread scheduling purposes and lies
 dormant until one of three things happens:
 <ul>
 <li>Some other thread enters the exchange; or
 <li>Some other thread interrupts
 the current thread; or
 <li>The specified waiting time elapses.
 </ul>
 <p>If the current thread:
 <ul>
 <li>has its interrupted status set on entry to this method; or
 <li>is interrupted while waiting
 for the exchange,
 </ul>
 then <code>InterruptedException</code> is thrown and the current thread's
 interrupted status is cleared.
 <p>If the specified waiting time elapses then <code>TimeoutException</code>
  is thrown.  If the time is less than or equal
 to zero, the method will not wait at all.
 @param x the object to exchange
 @param timeout the maximum time to wait
 @param unit the time unit of the <code>timeout</code> argument
 @return the object provided by the other thread
 @throws InterruptedException if the current thread was
 interrupted while waiting
 @throws TimeoutException if the specified waiting time elapses
 before another thread enters the exchange
 */
- (id)exchangeWithId:(id)x
            withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentExchanger)

FOUNDATION_EXPORT jint JavaUtilConcurrentExchanger_FULL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, FULL_, jint)

FOUNDATION_EXPORT void JavaUtilConcurrentExchanger_init(JavaUtilConcurrentExchanger *self);

FOUNDATION_EXPORT JavaUtilConcurrentExchanger *new_JavaUtilConcurrentExchanger_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExchanger)

/*!
 @brief Nodes hold partially exchanged data, plus other per-thread
 bookkeeping.
 */
@interface JavaUtilConcurrentExchanger_Node : NSObject {
 @public
  jint index_;
  jint bound_;
  jint collides_;
  jint hash__;
  id item_;
  volatile_id match_;
  volatile_id parked_;
  id p0_, p1_, p2_, p3_, p4_, p5_, p6_, p7_, p8_, p9_, pa_, pb_, pc_, pd_, pe_, pf_;
  id q0_, q1_, q2_, q3_, q4_, q5_, q6_, q7_, q8_, q9_, qa_, qb_, qc_, qd_, qe_, qf_;
}

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExchanger_Node)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, item_, id)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, match_, id)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, parked_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p0_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p1_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p2_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p3_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p4_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p5_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p6_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p7_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p8_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, p9_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, pa_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, pb_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, pc_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, pd_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, pe_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, pf_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q0_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q1_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q2_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q3_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q4_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q5_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q6_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q7_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q8_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, q9_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, qa_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, qb_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, qc_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, qd_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, qe_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, qf_, id)

FOUNDATION_EXPORT void JavaUtilConcurrentExchanger_Node_init(JavaUtilConcurrentExchanger_Node *self);

FOUNDATION_EXPORT JavaUtilConcurrentExchanger_Node *new_JavaUtilConcurrentExchanger_Node_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExchanger_Node)

/*!
 @brief The corresponding thread local class
 */
@interface JavaUtilConcurrentExchanger_Participant : JavaLangThreadLocal

#pragma mark Public

- (JavaUtilConcurrentExchanger_Node *)initialValue OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExchanger_Participant)

FOUNDATION_EXPORT void JavaUtilConcurrentExchanger_Participant_init(JavaUtilConcurrentExchanger_Participant *self);

FOUNDATION_EXPORT JavaUtilConcurrentExchanger_Participant *new_JavaUtilConcurrentExchanger_Participant_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExchanger_Participant)

#endif // _JavaUtilConcurrentExchanger_H_
