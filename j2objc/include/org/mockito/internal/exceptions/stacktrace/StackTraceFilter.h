//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/StackTraceFilter.java
//

#ifndef _OrgMockitoInternalExceptionsStacktraceStackTraceFilter_H_
#define _OrgMockitoInternalExceptionsStacktraceStackTraceFilter_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;

#define OrgMockitoInternalExceptionsStacktraceStackTraceFilter_serialVersionUID -5499819791513105700LL

@interface OrgMockitoInternalExceptionsStacktraceStackTraceFilter : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (IOSObjectArray *)filterWithJavaLangStackTraceElementArray:(IOSObjectArray *)target
                                                 withBoolean:(jboolean)keepTop;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceStackTraceFilter)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceStackTraceFilter_init(OrgMockitoInternalExceptionsStacktraceStackTraceFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceStackTraceFilter *new_OrgMockitoInternalExceptionsStacktraceStackTraceFilter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter)

#endif // _OrgMockitoInternalExceptionsStacktraceStackTraceFilter_H_