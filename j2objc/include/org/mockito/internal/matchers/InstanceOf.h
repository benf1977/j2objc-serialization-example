//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/InstanceOf.java
//

#ifndef _OrgMockitoInternalMatchersInstanceOf_H_
#define _OrgMockitoInternalMatchersInstanceOf_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersInstanceOf : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)clazz;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersInstanceOf)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersInstanceOf_initWithIOSClass_(OrgMockitoInternalMatchersInstanceOf *self, IOSClass *clazz);

FOUNDATION_EXPORT OrgMockitoInternalMatchersInstanceOf *new_OrgMockitoInternalMatchersInstanceOf_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersInstanceOf)

#endif // _OrgMockitoInternalMatchersInstanceOf_H_
