//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/MethodSorter.java
//

#ifndef _OrgJunitInternalMethodSorter_H_
#define _OrgJunitInternalMethodSorter_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilComparator;

@interface OrgJunitInternalMethodSorter : NSObject

#pragma mark Public

+ (IOSObjectArray *)getDeclaredMethodsWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_STATIC_INIT(OrgJunitInternalMethodSorter)

FOUNDATION_EXPORT id<JavaUtilComparator> OrgJunitInternalMethodSorter_DEFAULT_;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitInternalMethodSorter, DEFAULT_, id<JavaUtilComparator>)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitInternalMethodSorter, DEFAULT_, id<JavaUtilComparator>)

FOUNDATION_EXPORT id<JavaUtilComparator> OrgJunitInternalMethodSorter_NAME_ASCENDING_;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitInternalMethodSorter, NAME_ASCENDING_, id<JavaUtilComparator>)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitInternalMethodSorter, NAME_ASCENDING_, id<JavaUtilComparator>)

FOUNDATION_EXPORT IOSObjectArray *OrgJunitInternalMethodSorter_getDeclaredMethodsWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMethodSorter)

#endif // _OrgJunitInternalMethodSorter_H_
