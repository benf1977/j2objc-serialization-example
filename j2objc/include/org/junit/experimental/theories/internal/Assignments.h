//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/theories/internal/Assignments.java
//

#ifndef _OrgJunitExperimentalTheoriesInternalAssignments_H_
#define _OrgJunitExperimentalTheoriesInternalAssignments_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;
@class OrgJunitExperimentalTheoriesParameterSignature;
@class OrgJunitExperimentalTheoriesParameterSupplier;
@class OrgJunitExperimentalTheoriesPotentialAssignment;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

@interface OrgJunitExperimentalTheoriesInternalAssignments : NSObject

#pragma mark Public

+ (OrgJunitExperimentalTheoriesInternalAssignments *)allUnassignedWithJavaLangReflectMethod:(JavaLangReflectMethod *)testMethod
                                                          withOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

- (OrgJunitExperimentalTheoriesInternalAssignments *)assignNextWithOrgJunitExperimentalTheoriesPotentialAssignment:(OrgJunitExperimentalTheoriesPotentialAssignment *)source;

- (IOSObjectArray *)getActualValuesWithInt:(jint)start
                                   withInt:(jint)stop
                               withBoolean:(jboolean)nullsOk;

- (IOSObjectArray *)getAllArgumentsWithBoolean:(jboolean)nullsOk;

- (OrgJunitExperimentalTheoriesParameterSupplier *)getAnnotatedSupplierWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)unassigned;

- (IOSObjectArray *)getArgumentStringsWithBoolean:(jboolean)nullsOk;

- (IOSObjectArray *)getConstructorArgumentsWithBoolean:(jboolean)nullsOk;

- (IOSObjectArray *)getMethodArgumentsWithBoolean:(jboolean)nullsOk;

- (OrgJunitExperimentalTheoriesParameterSupplier *)getSupplierWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)unassigned;

- (jboolean)isComplete;

- (OrgJunitExperimentalTheoriesParameterSignature *)nextUnassigned;

- (id<JavaUtilList>)potentialsForNextUnassigned;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalAssignments)

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalAssignments *OrgJunitExperimentalTheoriesInternalAssignments_allUnassignedWithJavaLangReflectMethod_withOrgJunitRunnersModelTestClass_(JavaLangReflectMethod *testMethod, OrgJunitRunnersModelTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalAssignments)

#endif // _OrgJunitExperimentalTheoriesInternalAssignments_H_
