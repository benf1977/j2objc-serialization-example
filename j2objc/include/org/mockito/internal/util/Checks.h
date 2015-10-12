//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/Checks.java
//

#ifndef _OrgMockitoInternalUtilChecks_H_
#define _OrgMockitoInternalUtilChecks_H_

#include "J2ObjC_header.h"

@protocol JavaLangIterable;

@interface OrgMockitoInternalUtilChecks : NSObject

#pragma mark Public

- (instancetype)init;

+ (id)checkItemsNotNullWithJavaLangIterable:(id<JavaLangIterable>)iterable
                               withNSString:(NSString *)checkedIterable;

+ (id)checkNotNullWithId:(id)value
            withNSString:(NSString *)checkedValue;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilChecks)

FOUNDATION_EXPORT id OrgMockitoInternalUtilChecks_checkNotNullWithId_withNSString_(id value, NSString *checkedValue);

FOUNDATION_EXPORT id OrgMockitoInternalUtilChecks_checkItemsNotNullWithJavaLangIterable_withNSString_(id<JavaLangIterable> iterable, NSString *checkedIterable);

FOUNDATION_EXPORT void OrgMockitoInternalUtilChecks_init(OrgMockitoInternalUtilChecks *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilChecks *new_OrgMockitoInternalUtilChecks_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilChecks)

#endif // _OrgMockitoInternalUtilChecks_H_