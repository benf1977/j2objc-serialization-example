//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ThreadFactory.java
//

#ifndef _JavaUtilConcurrentThreadFactory_H_
#define _JavaUtilConcurrentThreadFactory_H_

#include "J2ObjC_header.h"

@class JavaLangThread;
@protocol JavaLangRunnable;

/*!
 @brief An object that creates new threads on demand.
 Using thread factories
 removes hardwiring of calls to <code>new Thread</code>,
 enabling applications to use special thread subclasses, priorities, etc.
 <p>
 The simplest implementation of this interface is just:
 @code
 
  class SimpleThreadFactory implements ThreadFactory 
   public Thread newThread(Runnable r) {
     return new Thread(r);
   }
  
@endcode
 The <code>Executors.defaultThreadFactory</code> method provides a more
 useful simple implementation, that sets the created thread context
 to known values before returning it.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentThreadFactory < NSObject, JavaObject >

/*!
 @brief Constructs a new <code>Thread</code>.
 Implementations may also initialize
 priority, name, daemon status, <code>ThreadGroup</code>, etc.
 @param r a runnable to be executed by new thread instance
 @return constructed thread, or <code>null</code> if the request to
 create a thread is rejected
 */
- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)r OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadFactory)

#endif // _JavaUtilConcurrentThreadFactory_H_
