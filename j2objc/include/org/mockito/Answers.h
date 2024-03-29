//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/Answers.java
//

#ifndef _OrgMockitoAnswers_H_
#define _OrgMockitoAnswers_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

@protocol OrgMockitoStubbingAnswer;

typedef NS_ENUM(NSUInteger, OrgMockitoAnswers) {
  OrgMockitoAnswers_RETURNS_DEFAULTS = 0,
  OrgMockitoAnswers_RETURNS_SMART_NULLS = 1,
  OrgMockitoAnswers_RETURNS_MOCKS = 2,
  OrgMockitoAnswers_RETURNS_DEEP_STUBS = 3,
  OrgMockitoAnswers_CALLS_REAL_METHODS = 4,
};

@interface OrgMockitoAnswersEnum : JavaLangEnum < NSCopying >

#pragma mark Public

- (id<OrgMockitoStubbingAnswer>)get;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *OrgMockitoAnswersEnum_values();

+ (OrgMockitoAnswersEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT OrgMockitoAnswersEnum *OrgMockitoAnswersEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgMockitoAnswersEnum)

FOUNDATION_EXPORT OrgMockitoAnswersEnum *OrgMockitoAnswersEnum_values_[];

#define OrgMockitoAnswersEnum_RETURNS_DEFAULTS OrgMockitoAnswersEnum_values_[OrgMockitoAnswers_RETURNS_DEFAULTS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMockitoAnswersEnum, RETURNS_DEFAULTS)

#define OrgMockitoAnswersEnum_RETURNS_SMART_NULLS OrgMockitoAnswersEnum_values_[OrgMockitoAnswers_RETURNS_SMART_NULLS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMockitoAnswersEnum, RETURNS_SMART_NULLS)

#define OrgMockitoAnswersEnum_RETURNS_MOCKS OrgMockitoAnswersEnum_values_[OrgMockitoAnswers_RETURNS_MOCKS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMockitoAnswersEnum, RETURNS_MOCKS)

#define OrgMockitoAnswersEnum_RETURNS_DEEP_STUBS OrgMockitoAnswersEnum_values_[OrgMockitoAnswers_RETURNS_DEEP_STUBS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMockitoAnswersEnum, RETURNS_DEEP_STUBS)

#define OrgMockitoAnswersEnum_CALLS_REAL_METHODS OrgMockitoAnswersEnum_values_[OrgMockitoAnswers_CALLS_REAL_METHODS]
J2OBJC_ENUM_CONSTANT_GETTER(OrgMockitoAnswersEnum, CALLS_REAL_METHODS)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoAnswersEnum)

#endif // _OrgMockitoAnswers_H_
