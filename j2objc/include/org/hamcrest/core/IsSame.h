//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/IsSame.java
//

#ifndef _OrgHamcrestCoreIsSame_H_
#define _OrgHamcrestCoreIsSame_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsSame : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithId:(id)object;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)arg;

+ (id<OrgHamcrestMatcher>)sameInstanceWithId:(id)target;

+ (id<OrgHamcrestMatcher>)theInstanceWithId:(id)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsSame)

FOUNDATION_EXPORT void OrgHamcrestCoreIsSame_initWithId_(OrgHamcrestCoreIsSame *self, id object);

FOUNDATION_EXPORT OrgHamcrestCoreIsSame *new_OrgHamcrestCoreIsSame_initWithId_(id object) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsSame_sameInstanceWithId_(id target);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsSame_theInstanceWithId_(id target);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsSame)

#endif // _OrgHamcrestCoreIsSame_H_
