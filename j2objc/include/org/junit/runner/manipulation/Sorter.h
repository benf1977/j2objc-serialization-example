//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/manipulation/Sorter.java
//

#ifndef _OrgJunitRunnerManipulationSorter_H_
#define _OrgJunitRunnerManipulationSorter_H_

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"

@class OrgJunitRunnerDescription;

@interface OrgJunitRunnerManipulationSorter : NSObject < JavaUtilComparator >

#pragma mark Public

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (void)applyWithId:(id)object;

- (jint)compareWithId:(OrgJunitRunnerDescription *)o1
               withId:(OrgJunitRunnerDescription *)o2;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerManipulationSorter)

FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *OrgJunitRunnerManipulationSorter_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerManipulationSorter, NULL__, OrgJunitRunnerManipulationSorter *)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitRunnerManipulationSorter, NULL__, OrgJunitRunnerManipulationSorter *)

FOUNDATION_EXPORT void OrgJunitRunnerManipulationSorter_initWithJavaUtilComparator_(OrgJunitRunnerManipulationSorter *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *new_OrgJunitRunnerManipulationSorter_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationSorter)

#endif // _OrgJunitRunnerManipulationSorter_H_
