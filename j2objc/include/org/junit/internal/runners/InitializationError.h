//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/InitializationError.java
//

#ifndef _OrgJunitInternalRunnersInitializationError_H_
#define _OrgJunitInternalRunnersInitializationError_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

@class IOSObjectArray;
@protocol JavaUtilList;

@interface OrgJunitInternalRunnersInitializationError : JavaLangException

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)errors;

- (instancetype)initWithNSString:(NSString *)string;

- (instancetype)initWithJavaLangThrowableArray:(IOSObjectArray *)errors;

- (id<JavaUtilList>)getCauses;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersInitializationError)

FOUNDATION_EXPORT void OrgJunitInternalRunnersInitializationError_initWithJavaUtilList_(OrgJunitInternalRunnersInitializationError *self, id<JavaUtilList> errors);

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *new_OrgJunitInternalRunnersInitializationError_initWithJavaUtilList_(id<JavaUtilList> errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitInternalRunnersInitializationError_initWithJavaLangThrowableArray_(OrgJunitInternalRunnersInitializationError *self, IOSObjectArray *errors);

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *new_OrgJunitInternalRunnersInitializationError_initWithJavaLangThrowableArray_(IOSObjectArray *errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitInternalRunnersInitializationError_initWithNSString_(OrgJunitInternalRunnersInitializationError *self, NSString *string);

FOUNDATION_EXPORT OrgJunitInternalRunnersInitializationError *new_OrgJunitInternalRunnersInitializationError_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersInitializationError)

#endif // _OrgJunitInternalRunnersInitializationError_H_
