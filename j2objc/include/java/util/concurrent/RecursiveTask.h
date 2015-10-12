//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/RecursiveTask.java
//

#ifndef _JavaUtilConcurrentRecursiveTask_H_
#define _JavaUtilConcurrentRecursiveTask_H_

#include "J2ObjC_header.h"
#include "java/util/concurrent/ForkJoinTask.h"

/*!
 @brief A recursive result-bearing <code>ForkJoinTask</code>.
 <p>For a classic example, here is a task computing Fibonacci numbers:
 @code
 
  class Fibonacci extends RecursiveTask<Integer> 
   final int n;
   Fibonacci(int n) { this.n = n; }
   Integer compute() {
     if (n <= 1)
       return n;
     Fibonacci f1 = new Fibonacci(n - 1);
     f1.fork();
     Fibonacci f2 = new Fibonacci(n - 2);
     return f2.compute() + f1.join();
   }
  
@endcode
 However, besides being a dumb way to compute Fibonacci functions
 (there is a simple fast linear algorithm that you'd use in
 practice), this is likely to perform poorly because the smallest
 subtasks are too small to be worthwhile splitting up. Instead, as
 is the case for nearly all fork/join applications, you'd pick some
 minimum granularity size (for example 10 here) for which you always
 sequentially solve rather than subdividing.
 @since 1.7
 @author Doug Lea
 */
@interface JavaUtilConcurrentRecursiveTask : JavaUtilConcurrentForkJoinTask {
 @public
  /*!
   @brief The result of the computation.
   */
  id result_;
}

#pragma mark Public

- (instancetype)init;

- (id)getRawResult;

#pragma mark Protected

/*!
 @brief The main computation performed by this task.
 @return the result of the computation
 */
- (id)compute;

/*!
 @brief Implements execution conventions for RecursiveTask.
 */
- (jboolean)exec;

- (void)setRawResultWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRecursiveTask)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentRecursiveTask, result_, id)

FOUNDATION_EXPORT void JavaUtilConcurrentRecursiveTask_init(JavaUtilConcurrentRecursiveTask *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRecursiveTask)

#endif // _JavaUtilConcurrentRecursiveTask_H_
