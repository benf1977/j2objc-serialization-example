//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/AbstractIdleService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentAbstractIdleService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAbstractIdleService_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractIdleService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAbstractIdleService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractIdleService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAbstractIdleService_) && (ComGoogleCommonUtilConcurrentAbstractIdleService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractIdleService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractIdleService_

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_INCLUDE 1
#include "com/google/common/util/concurrent/Service.h"

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentAbstractIdleService : NSObject < ComGoogleCommonUtilConcurrentService >

#pragma mark Public

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)awaitRunning;

- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)awaitTerminated;

- (void)awaitTerminatedWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (JavaLangThrowable *)failureCause;

- (jboolean)isRunning;

- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)state;

- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentExecutor>)executor;

- (NSString *)serviceName;

- (void)shutDown;

- (void)startUp;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractIdleService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractIdleService_init(ComGoogleCommonUtilConcurrentAbstractIdleService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractIdleService)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentAbstractIdleService_INCLUDE_ALL")
