//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/Futures.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentFutures_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentFutures_RESTRICT
#define ComGoogleCommonUtilConcurrentFutures_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentFutures_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentFutures_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentFutures_) && (ComGoogleCommonUtilConcurrentFutures_INCLUDE_ALL || ComGoogleCommonUtilConcurrentFutures_INCLUDE)
#define _ComGoogleCommonUtilConcurrentFutures_

@class ComGoogleCommonCollectImmutableList;
@class IOSClass;
@class IOSObjectArray;
@class JavaLangException;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonUtilConcurrentAsyncFunction;
@protocol ComGoogleCommonUtilConcurrentCheckedFuture;
@protocol ComGoogleCommonUtilConcurrentFutureCallback;
@protocol ComGoogleCommonUtilConcurrentFutureFallback;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentFuture;

@interface ComGoogleCommonUtilConcurrentFutures : NSObject

#pragma mark Public

+ (void)addCallbackWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future
                     withComGoogleCommonUtilConcurrentFutureCallback:(id<ComGoogleCommonUtilConcurrentFutureCallback>)callback;

+ (void)addCallbackWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future
                     withComGoogleCommonUtilConcurrentFutureCallback:(id<ComGoogleCommonUtilConcurrentFutureCallback>)callback
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)allAsListWithJavaLangIterable:(id<JavaLangIterable>)futures;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)allAsListWithComGoogleCommonUtilConcurrentListenableFutureArray:(IOSObjectArray *)futures;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)dereferenceWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)nested;

+ (id)getWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                         withIOSClass:(IOSClass *)exceptionClass;

+ (id)getWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                             withLong:(jlong)timeout
   withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit
                         withIOSClass:(IOSClass *)exceptionClass;

+ (id)getUncheckedWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)immediateCancelledFuture;

+ (id<ComGoogleCommonUtilConcurrentCheckedFuture>)immediateCheckedFutureWithId:(id)value;

+ (id<ComGoogleCommonUtilConcurrentCheckedFuture>)immediateFailedCheckedFutureWithJavaLangException:(JavaLangException *)exception;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)immediateFailedFutureWithJavaLangThrowable:(JavaLangThrowable *)throwable;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)immediateFutureWithId:(id)value;

+ (ComGoogleCommonCollectImmutableList *)inCompletionOrderWithJavaLangIterable:(id<JavaLangIterable>)futures;

+ (id<JavaUtilConcurrentFuture>)lazyTransformWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)input
                                          withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonUtilConcurrentCheckedFuture>)makeCheckedWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future
                                                                               withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)mapper;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)nonCancellationPropagatingWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)successfulAsListWithJavaLangIterable:(id<JavaLangIterable>)futures;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)successfulAsListWithComGoogleCommonUtilConcurrentListenableFutureArray:(IOSObjectArray *)futures;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)transformWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                 withComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)function;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)transformWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                 withComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)function
                                                                                 withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)transformWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                                withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)transformWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                                withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                                                                                 withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)withFallbackWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                   withComGoogleCommonUtilConcurrentFutureFallback:(id<ComGoogleCommonUtilConcurrentFutureFallback>)fallback;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)withFallbackWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                   withComGoogleCommonUtilConcurrentFutureFallback:(id<ComGoogleCommonUtilConcurrentFutureFallback>)fallback
                                                                                    withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFutures)

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentCheckedFuture> ComGoogleCommonUtilConcurrentFutures_makeCheckedWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonBaseFunction_(id<ComGoogleCommonUtilConcurrentListenableFuture> future, id<ComGoogleCommonBaseFunction> mapper);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_immediateFutureWithId_(id value);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentCheckedFuture> ComGoogleCommonUtilConcurrentFutures_immediateCheckedFutureWithId_(id value);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_immediateFailedFutureWithJavaLangThrowable_(JavaLangThrowable *throwable);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_immediateCancelledFuture();

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentCheckedFuture> ComGoogleCommonUtilConcurrentFutures_immediateFailedCheckedFutureWithJavaLangException_(JavaLangException *exception);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_withFallbackWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonUtilConcurrentFutureFallback_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, id<ComGoogleCommonUtilConcurrentFutureFallback> fallback);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_withFallbackWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonUtilConcurrentFutureFallback_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, id<ComGoogleCommonUtilConcurrentFutureFallback> fallback, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_transformWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonUtilConcurrentAsyncFunction_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, id<ComGoogleCommonUtilConcurrentAsyncFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_transformWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonUtilConcurrentAsyncFunction_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, id<ComGoogleCommonUtilConcurrentAsyncFunction> function, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_transformWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonBaseFunction_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_transformWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonBaseFunction_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, id<ComGoogleCommonBaseFunction> function, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT id<JavaUtilConcurrentFuture> ComGoogleCommonUtilConcurrentFutures_lazyTransformWithJavaUtilConcurrentFuture_withComGoogleCommonBaseFunction_(id<JavaUtilConcurrentFuture> input, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_dereferenceWithComGoogleCommonUtilConcurrentListenableFuture_(id<ComGoogleCommonUtilConcurrentListenableFuture> nested);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_allAsListWithComGoogleCommonUtilConcurrentListenableFutureArray_(IOSObjectArray *futures);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_allAsListWithJavaLangIterable_(id<JavaLangIterable> futures);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_nonCancellationPropagatingWithComGoogleCommonUtilConcurrentListenableFuture_(id<ComGoogleCommonUtilConcurrentListenableFuture> future);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_successfulAsListWithComGoogleCommonUtilConcurrentListenableFutureArray_(IOSObjectArray *futures);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentFutures_successfulAsListWithJavaLangIterable_(id<JavaLangIterable> futures);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableList *ComGoogleCommonUtilConcurrentFutures_inCompletionOrderWithJavaLangIterable_(id<JavaLangIterable> futures);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFutures_addCallbackWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonUtilConcurrentFutureCallback_(id<ComGoogleCommonUtilConcurrentListenableFuture> future, id<ComGoogleCommonUtilConcurrentFutureCallback> callback);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFutures_addCallbackWithComGoogleCommonUtilConcurrentListenableFuture_withComGoogleCommonUtilConcurrentFutureCallback_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> future, id<ComGoogleCommonUtilConcurrentFutureCallback> callback, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFutures_getWithJavaUtilConcurrentFuture_withIOSClass_(id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFutures_getWithJavaUtilConcurrentFuture_withLong_withJavaUtilConcurrentTimeUnitEnum_withIOSClass_(id<JavaUtilConcurrentFuture> future, jlong timeout, JavaUtilConcurrentTimeUnitEnum *unit, IOSClass *exceptionClass);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFutures_getUncheckedWithJavaUtilConcurrentFuture_(id<JavaUtilConcurrentFuture> future);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFutures)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentFutures_INCLUDE_ALL")
