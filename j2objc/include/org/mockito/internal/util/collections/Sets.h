//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/collections/Sets.java
//

#ifndef _OrgMockitoInternalUtilCollectionsSets_H_
#define _OrgMockitoInternalUtilCollectionsSets_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class OrgMockitoInternalUtilCollectionsIdentitySet;
@protocol JavaLangIterable;
@protocol JavaUtilSet;

@interface OrgMockitoInternalUtilCollectionsSets : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgMockitoInternalUtilCollectionsIdentitySet *)newIdentitySet OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilSet>)newMockSafeHashSetWithJavaLangIterable:(id<JavaLangIterable>)mocks OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilSet>)newMockSafeHashSetWithNSObjectArray:(IOSObjectArray *)mocks OBJC_METHOD_FAMILY_NONE;

+ (id<JavaUtilSet>)newSetWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsSets)

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoInternalUtilCollectionsSets_newMockSafeHashSetWithJavaLangIterable_(id<JavaLangIterable> mocks);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoInternalUtilCollectionsSets_newMockSafeHashSetWithNSObjectArray_(IOSObjectArray *mocks);

FOUNDATION_EXPORT OrgMockitoInternalUtilCollectionsIdentitySet *OrgMockitoInternalUtilCollectionsSets_newIdentitySet();

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoInternalUtilCollectionsSets_newSetWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT void OrgMockitoInternalUtilCollectionsSets_init(OrgMockitoInternalUtilCollectionsSets *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsSets)

#endif // _OrgMockitoInternalUtilCollectionsSets_H_
