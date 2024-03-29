//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/MockInjectionStrategy.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_H_
#define _OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_H_

#include "J2ObjC_header.h"

@class JavaLangReflectField;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionMockInjectionStrategy : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)nop;

- (jboolean)processWithJavaLangReflectField:(JavaLangReflectField *)onField
                                     withId:(id)fieldOwnedBy
                            withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)thenTryWithOrgMockitoInternalConfigurationInjectionMockInjectionStrategy:(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *)strategy;

#pragma mark Protected

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy)

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_nop();

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_init(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionMockInjectionStrategy)

#endif // _OrgMockitoInternalConfigurationInjectionMockInjectionStrategy_H_
