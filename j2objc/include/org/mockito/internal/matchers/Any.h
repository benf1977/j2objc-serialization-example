//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Any.java
//

#ifndef _OrgMockitoInternalMatchersAny_H_
#define _OrgMockitoInternalMatchersAny_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersAny : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersAny)

FOUNDATION_EXPORT OrgMockitoInternalMatchersAny *OrgMockitoInternalMatchersAny_ANY_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersAny, ANY_, OrgMockitoInternalMatchersAny *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAny)

#endif // _OrgMockitoInternalMatchersAny_H_
