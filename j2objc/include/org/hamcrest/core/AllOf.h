//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/AllOf.java
//

#ifndef _OrgHamcrestCoreAllOf_H_
#define _OrgHamcrestCoreAllOf_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/DiagnosingMatcher.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreAllOf : OrgHamcrestDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)matchers;

+ (id<OrgHamcrestMatcher>)allOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)sixth;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o
withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreAllOf)

FOUNDATION_EXPORT void OrgHamcrestCoreAllOf_initWithJavaLangIterable_(OrgHamcrestCoreAllOf *self, id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAllOf *new_OrgHamcrestCoreAllOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth, id<OrgHamcrestMatcher> sixth);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreAllOf)

#endif // _OrgHamcrestCoreAllOf_H_
