//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runners/model/RunnerBuilder.java
//

#ifndef _OrgJunitRunnersModelRunnerBuilder_H_
#define _OrgJunitRunnersModelRunnerBuilder_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@protocol JavaUtilList;

@interface OrgJunitRunnersModelRunnerBuilder : NSObject

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                      withIOSClassArray:(IOSObjectArray *)children;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                       withJavaUtilList:(id<JavaUtilList>)children;

- (OrgJunitRunnerRunner *)safeRunnerForClassWithIOSClass:(IOSClass *)testClass;

#pragma mark Package-Private

- (IOSClass *)addParentWithIOSClass:(IOSClass *)parent;

- (void)removeParentWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelRunnerBuilder)

FOUNDATION_EXPORT void OrgJunitRunnersModelRunnerBuilder_init(OrgJunitRunnersModelRunnerBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelRunnerBuilder)

#endif // _OrgJunitRunnersModelRunnerBuilder_H_
