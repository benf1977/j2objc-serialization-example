//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/builders/AnnotatedBuilder.java
//

#ifndef _OrgJunitInternalBuildersAnnotatedBuilder_H_
#define _OrgJunitInternalBuildersAnnotatedBuilder_H_

#include "J2ObjC_header.h"
#include "org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersAnnotatedBuilder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)suiteBuilder;

- (OrgJunitRunnerRunner *)buildRunnerWithIOSClass:(IOSClass *)runnerClass
                                     withIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersAnnotatedBuilder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersAnnotatedBuilder_initWithOrgJunitRunnersModelRunnerBuilder_(OrgJunitInternalBuildersAnnotatedBuilder *self, OrgJunitRunnersModelRunnerBuilder *suiteBuilder);

FOUNDATION_EXPORT OrgJunitInternalBuildersAnnotatedBuilder *new_OrgJunitInternalBuildersAnnotatedBuilder_initWithOrgJunitRunnersModelRunnerBuilder_(OrgJunitRunnersModelRunnerBuilder *suiteBuilder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersAnnotatedBuilder)

#endif // _OrgJunitInternalBuildersAnnotatedBuilder_H_
