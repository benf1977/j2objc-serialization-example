//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/theories/Theory.java
//

#ifndef _OrgJunitExperimentalTheoriesTheory_H_
#define _OrgJunitExperimentalTheoriesTheory_H_

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@protocol OrgJunitExperimentalTheoriesTheory < JavaLangAnnotationAnnotation >

@property (readonly) jboolean nullsAccepted;

@end

@interface OrgJunitExperimentalTheoriesTheory : NSObject < OrgJunitExperimentalTheoriesTheory > {
 @private
  jboolean nullsAccepted_;
}

- (instancetype)initWithNullsAccepted:(jboolean)nullsAccepted__;

+ (jboolean)nullsAcceptedDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesTheory)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesTheory)

#endif // _OrgJunitExperimentalTheoriesTheory_H_
