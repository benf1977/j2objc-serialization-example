//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/invocation/DescribedInvocation.java
//

#ifndef _OrgMockitoInvocationDescribedInvocation_H_
#define _OrgMockitoInvocationDescribedInvocation_H_

#include "J2ObjC_header.h"
#include "org/mockito/exceptions/PrintableInvocation.h"

@protocol OrgMockitoInvocationLocation;

@protocol OrgMockitoInvocationDescribedInvocation < OrgMockitoExceptionsPrintableInvocation, NSObject, JavaObject >

- (NSString *)description;

- (id<OrgMockitoInvocationLocation>)getLocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationDescribedInvocation)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationDescribedInvocation)

#endif // _OrgMockitoInvocationDescribedInvocation_H_
