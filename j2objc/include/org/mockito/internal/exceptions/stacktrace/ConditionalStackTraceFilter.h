//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/ConditionalStackTraceFilter.java
//

#ifndef _OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_H_
#define _OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class JavaLangThrowable;

#define OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_serialVersionUID -8085849703510292641LL

@interface OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (void)filterWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *new_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

#endif // _OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_H_
