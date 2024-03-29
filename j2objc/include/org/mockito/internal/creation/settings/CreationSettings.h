//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/creation/settings/CreationSettings.java
//

#ifndef _OrgMockitoInternalCreationSettingsCreationSettings_H_
#define _OrgMockitoInternalCreationSettingsCreationSettings_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/mock/MockCreationSettings.h"

@class IOSClass;
@protocol JavaUtilList;
@protocol JavaUtilSet;
@protocol OrgMockitoMockMockName;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalCreationSettingsCreationSettings : NSObject < OrgMockitoMockMockCreationSettings, JavaIoSerializable > {
 @public
  IOSClass *typeToMock_;
  id<JavaUtilSet> extraInterfaces_;
  NSString *name_;
  id spiedInstance_;
  id<OrgMockitoStubbingAnswer> defaultAnswer_;
  id<OrgMockitoMockMockName> mockName_;
  jboolean serializable_;
  id<JavaUtilList> invocationListeners_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalCreationSettingsCreationSettings:(OrgMockitoInternalCreationSettingsCreationSettings *)copy_;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<JavaUtilSet>)getExtraInterfaces;

- (id<JavaUtilList>)getInvocationListeners;

- (id<OrgMockitoMockMockName>)getMockName;

- (NSString *)getName;

- (id)getSpiedInstance;

- (IOSClass *)getTypeToMock;

- (jboolean)isSerializable;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setExtraInterfacesWithJavaUtilSet:(id<JavaUtilSet>)extraInterfaces;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setMockNameWithOrgMockitoMockMockName:(id<OrgMockitoMockMockName>)mockName;

- (OrgMockitoInternalCreationSettingsCreationSettings *)setTypeToMockWithIOSClass:(IOSClass *)typeToMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationSettingsCreationSettings)

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, typeToMock_, IOSClass *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, extraInterfaces_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, name_, NSString *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, spiedInstance_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, defaultAnswer_, id<OrgMockitoStubbingAnswer>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, mockName_, id<OrgMockitoMockMockName>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationSettingsCreationSettings, invocationListeners_, id<JavaUtilList>)

FOUNDATION_EXPORT void OrgMockitoInternalCreationSettingsCreationSettings_init(OrgMockitoInternalCreationSettingsCreationSettings *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationSettingsCreationSettings *new_OrgMockitoInternalCreationSettingsCreationSettings_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalCreationSettingsCreationSettings_initWithOrgMockitoInternalCreationSettingsCreationSettings_(OrgMockitoInternalCreationSettingsCreationSettings *self, OrgMockitoInternalCreationSettingsCreationSettings *copy_);

FOUNDATION_EXPORT OrgMockitoInternalCreationSettingsCreationSettings *new_OrgMockitoInternalCreationSettingsCreationSettings_initWithOrgMockitoInternalCreationSettingsCreationSettings_(OrgMockitoInternalCreationSettingsCreationSettings *copy_) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationSettingsCreationSettings)

#endif // _OrgMockitoInternalCreationSettingsCreationSettings_H_
