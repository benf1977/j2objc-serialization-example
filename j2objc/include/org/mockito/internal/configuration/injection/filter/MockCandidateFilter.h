//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/MockCandidateFilter.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_H_
#define _OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_H_

#include "J2ObjC_header.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

@protocol OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter < NSObject, JavaObject >

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)fieldToBeInjected
                                                                                                    withId:(id)fieldInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter)

#endif // _OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_H_
