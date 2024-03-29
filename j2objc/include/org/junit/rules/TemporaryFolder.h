//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/rules/TemporaryFolder.java
//

#ifndef _OrgJunitRulesTemporaryFolder_H_
#define _OrgJunitRulesTemporaryFolder_H_

#include "J2ObjC_header.h"
#include "org/junit/rules/ExternalResource.h"

@class IOSObjectArray;
@class JavaIoFile;

@interface OrgJunitRulesTemporaryFolder : OrgJunitRulesExternalResource

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)parentFolder;

- (void)create;

- (void)delete__;

- (JavaIoFile *)getRoot;

- (JavaIoFile *)newFile OBJC_METHOD_FAMILY_NONE;

- (JavaIoFile *)newFileWithNSString:(NSString *)fileName OBJC_METHOD_FAMILY_NONE;

- (JavaIoFile *)newFolder OBJC_METHOD_FAMILY_NONE;

- (JavaIoFile *)newFolderWithNSString:(NSString *)folder OBJC_METHOD_FAMILY_NONE;

- (JavaIoFile *)newFolderWithNSStringArray:(IOSObjectArray *)folderNames OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

- (void)after;

- (void)before;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTemporaryFolder)

FOUNDATION_EXPORT void OrgJunitRulesTemporaryFolder_init(OrgJunitRulesTemporaryFolder *self);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *new_OrgJunitRulesTemporaryFolder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJunitRulesTemporaryFolder_initWithJavaIoFile_(OrgJunitRulesTemporaryFolder *self, JavaIoFile *parentFolder);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *new_OrgJunitRulesTemporaryFolder_initWithJavaIoFile_(JavaIoFile *parentFolder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTemporaryFolder)

#endif // _OrgJunitRulesTemporaryFolder_H_
