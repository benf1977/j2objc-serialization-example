//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/Whitebox.java
//

#ifndef _OrgMockitoInternalUtilReflectionWhitebox_H_
#define _OrgMockitoInternalUtilReflectionWhitebox_H_

#include "J2ObjC_header.h"

@interface OrgMockitoInternalUtilReflectionWhitebox : NSObject

#pragma mark Public

- (instancetype)init;

+ (id)getInternalStateWithId:(id)target
                withNSString:(NSString *)field;

+ (void)setInternalStateWithId:(id)target
                  withNSString:(NSString *)field
                        withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionWhitebox)

FOUNDATION_EXPORT id OrgMockitoInternalUtilReflectionWhitebox_getInternalStateWithId_withNSString_(id target, NSString *field);

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionWhitebox_setInternalStateWithId_withNSString_withId_(id target, NSString *field, id value);

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionWhitebox_init(OrgMockitoInternalUtilReflectionWhitebox *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionWhitebox *new_OrgMockitoInternalUtilReflectionWhitebox_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionWhitebox)

#endif // _OrgMockitoInternalUtilReflectionWhitebox_H_
