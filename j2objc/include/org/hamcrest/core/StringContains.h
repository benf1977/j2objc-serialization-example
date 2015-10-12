//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/StringContains.java
//

#ifndef _OrgHamcrestCoreStringContains_H_
#define _OrgHamcrestCoreStringContains_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/core/SubstringMatcher.h"

@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreStringContains : OrgHamcrestCoreSubstringMatcher

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)substring;

+ (id<OrgHamcrestMatcher>)containsStringWithNSString:(NSString *)substring;

#pragma mark Protected

- (jboolean)evalSubstringOfWithNSString:(NSString *)s;

- (NSString *)relationship;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreStringContains)

FOUNDATION_EXPORT void OrgHamcrestCoreStringContains_initWithNSString_(OrgHamcrestCoreStringContains *self, NSString *substring);

FOUNDATION_EXPORT OrgHamcrestCoreStringContains *new_OrgHamcrestCoreStringContains_initWithNSString_(NSString *substring) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreStringContains_containsStringWithNSString_(NSString *substring);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreStringContains)

#endif // _OrgHamcrestCoreStringContains_H_
