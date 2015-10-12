//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/IsCollectionContaining.java
//

#ifndef _OrgHamcrestCoreIsCollectionContaining_H_
#define _OrgHamcrestCoreIsCollectionContaining_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/TypeSafeDiagnosingMatcher.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsCollectionContaining : OrgHamcrestTypeSafeDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)elementMatcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)hasItemWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)itemMatcher;

+ (id<OrgHamcrestMatcher>)hasItemWithId:(id)item;

+ (id<OrgHamcrestMatcher>)hasItemsWithOrgHamcrestMatcherArray:(IOSObjectArray *)itemMatchers;

+ (id<OrgHamcrestMatcher>)hasItemsWithNSObjectArray:(IOSObjectArray *)items;

#pragma mark Protected

- (jboolean)matchesSafelyWithId:(id<JavaLangIterable>)collection
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsCollectionContaining)

FOUNDATION_EXPORT void OrgHamcrestCoreIsCollectionContaining_initWithOrgHamcrestMatcher_(OrgHamcrestCoreIsCollectionContaining *self, id<OrgHamcrestMatcher> elementMatcher);

FOUNDATION_EXPORT OrgHamcrestCoreIsCollectionContaining *new_OrgHamcrestCoreIsCollectionContaining_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> elementMatcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsCollectionContaining_hasItemWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> itemMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsCollectionContaining_hasItemWithId_(id item);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsCollectionContaining_hasItemsWithOrgHamcrestMatcherArray_(IOSObjectArray *itemMatchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsCollectionContaining_hasItemsWithNSObjectArray_(IOSObjectArray *items);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsCollectionContaining)

#endif // _OrgHamcrestCoreIsCollectionContaining_H_
