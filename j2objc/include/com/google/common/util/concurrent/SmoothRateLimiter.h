//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/SmoothRateLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentSmoothRateLimiter_RESTRICT
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentSmoothRateLimiter_RESTRICT
#if ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_INCLUDE
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_INCLUDE
#define ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonUtilConcurrentSmoothRateLimiter_) && (ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE)
#define _ComGoogleCommonUtilConcurrentSmoothRateLimiter_

#define ComGoogleCommonUtilConcurrentRateLimiter_RESTRICT 1
#define ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE 1
#include "com/google/common/util/concurrent/RateLimiter.h"

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter : ComGoogleCommonUtilConcurrentRateLimiter {
 @public
  jdouble storedPermits_;
  jdouble maxPermits_;
  jdouble stableIntervalMicros_;
}

#pragma mark Package-Private

- (jdouble)doGetRate;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                   withLong:(jlong)nowMicros;

- (jlong)queryEarliestAvailableWithLong:(jlong)nowMicros;

- (jlong)reserveEarliestAvailableWithInt:(jint)requiredPermits
                                withLong:(jlong)nowMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_) && (ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_INCLUDE)
#define _ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp : ComGoogleCommonUtilConcurrentSmoothRateLimiter

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                          withLong:(jlong)warmupPeriod
                                                withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeUnit;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnitEnum_(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnitEnum *timeUnit);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp *new_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withLong_withJavaUtilConcurrentTimeUnitEnum_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jlong warmupPeriod, JavaUtilConcurrentTimeUnitEnum *timeUnit) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothWarmingUp)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_) && (ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_INCLUDE)
#define _ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;

@interface ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty : ComGoogleCommonUtilConcurrentSmoothRateLimiter {
 @public
  jdouble maxBurstSeconds_;
}

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *)stopwatch
                                                                        withDouble:(jdouble)maxBurstSeconds;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *self, ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty *new_ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty_initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch, jdouble maxBurstSeconds) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSmoothRateLimiter_SmoothBursty)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentSmoothRateLimiter_INCLUDE_ALL")
