//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/GeneralRange.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectGeneralRange_INCLUDE_ALL")
#if ComGoogleCommonCollectGeneralRange_RESTRICT
#define ComGoogleCommonCollectGeneralRange_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectGeneralRange_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectGeneralRange_RESTRICT

#if !defined (_ComGoogleCommonCollectGeneralRange_) && (ComGoogleCommonCollectGeneralRange_INCLUDE_ALL || ComGoogleCommonCollectGeneralRange_INCLUDE)
#define _ComGoogleCommonCollectGeneralRange_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectRange;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectGeneralRange : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

+ (ComGoogleCommonCollectGeneralRange *)allWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsWithId:(id)t;

+ (ComGoogleCommonCollectGeneralRange *)downToWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                              withId:(id)endpoint
                             withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

+ (ComGoogleCommonCollectGeneralRange *)fromWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectBoundTypeEnum *)getLowerBoundType;

- (id)getLowerEndpoint;

- (ComGoogleCommonCollectBoundTypeEnum *)getUpperBoundType;

- (id)getUpperEndpoint;

- (jboolean)hasLowerBound;

- (jboolean)hasUpperBound;

- (ComGoogleCommonCollectGeneralRange *)intersectWithComGoogleCommonCollectGeneralRange:(ComGoogleCommonCollectGeneralRange *)other;

- (jboolean)isEmpty;

+ (ComGoogleCommonCollectGeneralRange *)rangeWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                             withId:(id)lower
                            withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerType
                                                             withId:(id)upper
                            withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperType;

- (ComGoogleCommonCollectGeneralRange *)reverse;

- (jboolean)tooHighWithId:(id)t;

- (jboolean)tooLowWithId:(id)t;

+ (ComGoogleCommonCollectGeneralRange *)upToWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                            withId:(id)endpoint
                           withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectGeneralRange)

FOUNDATION_EXPORT ComGoogleCommonCollectGeneralRange *ComGoogleCommonCollectGeneralRange_fromWithComGoogleCommonCollectRange_(ComGoogleCommonCollectRange *range);

FOUNDATION_EXPORT ComGoogleCommonCollectGeneralRange *ComGoogleCommonCollectGeneralRange_allWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectGeneralRange *ComGoogleCommonCollectGeneralRange_downToWithJavaUtilComparator_withId_withComGoogleCommonCollectBoundTypeEnum_(id<JavaUtilComparator> comparator, id endpoint, ComGoogleCommonCollectBoundTypeEnum *boundType);

FOUNDATION_EXPORT ComGoogleCommonCollectGeneralRange *ComGoogleCommonCollectGeneralRange_upToWithJavaUtilComparator_withId_withComGoogleCommonCollectBoundTypeEnum_(id<JavaUtilComparator> comparator, id endpoint, ComGoogleCommonCollectBoundTypeEnum *boundType);

FOUNDATION_EXPORT ComGoogleCommonCollectGeneralRange *ComGoogleCommonCollectGeneralRange_rangeWithJavaUtilComparator_withId_withComGoogleCommonCollectBoundTypeEnum_withId_withComGoogleCommonCollectBoundTypeEnum_(id<JavaUtilComparator> comparator, id lower, ComGoogleCommonCollectBoundTypeEnum *lowerType, id upper, ComGoogleCommonCollectBoundTypeEnum *upperType);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectGeneralRange)

#endif

#pragma pop_macro("ComGoogleCommonCollectGeneralRange_INCLUDE_ALL")
