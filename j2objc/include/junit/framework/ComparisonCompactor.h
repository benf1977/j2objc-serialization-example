//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/framework/ComparisonCompactor.java
//

#ifndef _JunitFrameworkComparisonCompactor_H_
#define _JunitFrameworkComparisonCompactor_H_

#include "J2ObjC_header.h"

@interface JunitFrameworkComparisonCompactor : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)contextLength
               withNSString:(NSString *)expected
               withNSString:(NSString *)actual;

- (NSString *)compactWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkComparisonCompactor)

FOUNDATION_EXPORT void JunitFrameworkComparisonCompactor_initWithInt_withNSString_withNSString_(JunitFrameworkComparisonCompactor *self, jint contextLength, NSString *expected, NSString *actual);

FOUNDATION_EXPORT JunitFrameworkComparisonCompactor *new_JunitFrameworkComparisonCompactor_initWithInt_withNSString_withNSString_(jint contextLength, NSString *expected, NSString *actual) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkComparisonCompactor)

#endif // _JunitFrameworkComparisonCompactor_H_
