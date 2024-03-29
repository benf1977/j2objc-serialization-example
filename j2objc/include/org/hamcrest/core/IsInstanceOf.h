//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/IsInstanceOf.java
//

#ifndef _OrgHamcrestCoreIsInstanceOf_H_
#define _OrgHamcrestCoreIsInstanceOf_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/DiagnosingMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsInstanceOf : OrgHamcrestDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)expectedClass;

+ (id<OrgHamcrestMatcher>)anyWithIOSClass:(IOSClass *)type;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)instanceOfWithIOSClass:(IOSClass *)type;

#pragma mark Protected

- (jboolean)matchesWithId:(id)item
withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsInstanceOf)

FOUNDATION_EXPORT void OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(OrgHamcrestCoreIsInstanceOf *self, IOSClass *expectedClass);

FOUNDATION_EXPORT OrgHamcrestCoreIsInstanceOf *new_OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(IOSClass *expectedClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_instanceOfWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_anyWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsInstanceOf)

#endif // _OrgHamcrestCoreIsInstanceOf_H_
