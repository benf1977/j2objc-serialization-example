//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/Localized.java
//

#ifndef _OrgMockitoInternalDebuggingLocalized_H_
#define _OrgMockitoInternalDebuggingLocalized_H_

#include "J2ObjC_header.h"

@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalDebuggingLocalized : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)object;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (id)getObject;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingLocalized)

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingLocalized_initWithId_(OrgMockitoInternalDebuggingLocalized *self, id object);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocalized *new_OrgMockitoInternalDebuggingLocalized_initWithId_(id object) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingLocalized)

#endif // _OrgMockitoInternalDebuggingLocalized_H_
