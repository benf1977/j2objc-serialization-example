//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/ComparisonCriteria.java
//

#ifndef _OrgJunitInternalComparisonCriteria_H_
#define _OrgJunitInternalComparisonCriteria_H_

#include "J2ObjC_header.h"

@interface OrgJunitInternalComparisonCriteria : NSObject

#pragma mark Public

- (instancetype)init;

- (void)arrayEqualsWithNSString:(NSString *)message
                         withId:(id)expecteds
                         withId:(id)actuals;

#pragma mark Protected

- (void)assertElementsEqualWithId:(id)expected
                           withId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalComparisonCriteria)

FOUNDATION_EXPORT void OrgJunitInternalComparisonCriteria_init(OrgJunitInternalComparisonCriteria *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalComparisonCriteria)

#endif // _OrgJunitInternalComparisonCriteria_H_
