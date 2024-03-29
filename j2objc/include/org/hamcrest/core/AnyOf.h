//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/AnyOf.java
//

#ifndef _OrgHamcrestCoreAnyOf_H_
#define _OrgHamcrestCoreAnyOf_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/core/ShortcutCombination.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreAnyOf : OrgHamcrestCoreShortcutCombination

#pragma mark Public

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)matchers;

+ (OrgHamcrestCoreAnyOf *)anyOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second;

+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third;

+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth;

+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth;

+ (OrgHamcrestCoreAnyOf *)anyOfWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)first
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)second
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)third
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fourth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)fifth
                               withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)sixth;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreAnyOf)

FOUNDATION_EXPORT void OrgHamcrestCoreAnyOf_initWithJavaLangIterable_(OrgHamcrestCoreAnyOf *self, id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *new_OrgHamcrestCoreAnyOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth);

FOUNDATION_EXPORT OrgHamcrestCoreAnyOf *OrgHamcrestCoreAnyOf_anyOfWithOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_withOrgHamcrestMatcher_(id<OrgHamcrestMatcher> first, id<OrgHamcrestMatcher> second, id<OrgHamcrestMatcher> third, id<OrgHamcrestMatcher> fourth, id<OrgHamcrestMatcher> fifth, id<OrgHamcrestMatcher> sixth);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreAnyOf)

#endif // _OrgHamcrestCoreAnyOf_H_
