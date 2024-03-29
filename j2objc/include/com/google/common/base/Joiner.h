//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/Joiner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseJoiner_INCLUDE_ALL")
#if ComGoogleCommonBaseJoiner_RESTRICT
#define ComGoogleCommonBaseJoiner_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseJoiner_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseJoiner_RESTRICT

#if !defined (_ComGoogleCommonBaseJoiner_) && (ComGoogleCommonBaseJoiner_INCLUDE_ALL || ComGoogleCommonBaseJoiner_INCLUDE)
#define _ComGoogleCommonBaseJoiner_

@class ComGoogleCommonBaseJoiner_MapJoiner;
@class IOSObjectArray;
@class JavaLangStringBuilder;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonBaseJoiner : NSObject

#pragma mark Public

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                withJavaLangIterable:(id<JavaLangIterable>)parts;

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                withJavaUtilIterator:(id<JavaUtilIterator>)parts;

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                              withId:(id)first
                              withId:(id)second
                   withNSObjectArray:(IOSObjectArray *)rest;

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                   withNSObjectArray:(IOSObjectArray *)parts;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                        withJavaLangIterable:(id<JavaLangIterable>)parts;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                        withJavaUtilIterator:(id<JavaUtilIterator>)parts;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                                      withId:(id)first
                                                      withId:(id)second
                                           withNSObjectArray:(IOSObjectArray *)rest;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                           withNSObjectArray:(IOSObjectArray *)parts;

- (NSString *)joinWithJavaLangIterable:(id<JavaLangIterable>)parts;

- (NSString *)joinWithJavaUtilIterator:(id<JavaUtilIterator>)parts;

- (NSString *)joinWithId:(id)first
                  withId:(id)second
       withNSObjectArray:(IOSObjectArray *)rest;

- (NSString *)joinWithNSObjectArray:(IOSObjectArray *)parts;

+ (ComGoogleCommonBaseJoiner *)onWithChar:(jchar)separator;

+ (ComGoogleCommonBaseJoiner *)onWithNSString:(NSString *)separator;

- (ComGoogleCommonBaseJoiner *)skipNulls;

- (ComGoogleCommonBaseJoiner *)useForNullWithNSString:(NSString *)nullText;

- (ComGoogleCommonBaseJoiner_MapJoiner *)withKeyValueSeparatorWithNSString:(NSString *)keyValueSeparator;

#pragma mark Package-Private

- (id<JavaLangCharSequence>)toStringWithId:(id)part;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseJoiner)

FOUNDATION_EXPORT ComGoogleCommonBaseJoiner *ComGoogleCommonBaseJoiner_onWithNSString_(NSString *separator);

FOUNDATION_EXPORT ComGoogleCommonBaseJoiner *ComGoogleCommonBaseJoiner_onWithChar_(jchar separator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseJoiner)

#endif

#if !defined (_ComGoogleCommonBaseJoiner_MapJoiner_) && (ComGoogleCommonBaseJoiner_INCLUDE_ALL || ComGoogleCommonBaseJoiner_MapJoiner_INCLUDE)
#define _ComGoogleCommonBaseJoiner_MapJoiner_

@class JavaLangStringBuilder;
@protocol JavaLangAppendable;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

@interface ComGoogleCommonBaseJoiner_MapJoiner : NSObject

#pragma mark Public

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                withJavaLangIterable:(id<JavaLangIterable>)entries;

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                withJavaUtilIterator:(id<JavaUtilIterator>)parts;

- (id)appendToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable
                     withJavaUtilMap:(id<JavaUtilMap>)map;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                        withJavaLangIterable:(id<JavaLangIterable>)entries;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                        withJavaUtilIterator:(id<JavaUtilIterator>)entries;

- (JavaLangStringBuilder *)appendToWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                             withJavaUtilMap:(id<JavaUtilMap>)map;

- (NSString *)joinWithJavaLangIterable:(id<JavaLangIterable>)entries;

- (NSString *)joinWithJavaUtilIterator:(id<JavaUtilIterator>)entries;

- (NSString *)joinWithJavaUtilMap:(id<JavaUtilMap>)map;

- (ComGoogleCommonBaseJoiner_MapJoiner *)useForNullWithNSString:(NSString *)nullText;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseJoiner_MapJoiner)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseJoiner_MapJoiner)

#endif

#pragma pop_macro("ComGoogleCommonBaseJoiner_INCLUDE_ALL")
