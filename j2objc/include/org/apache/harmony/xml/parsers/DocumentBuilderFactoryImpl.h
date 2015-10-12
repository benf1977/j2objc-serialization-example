//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/parsers/DocumentBuilderFactoryImpl.java
//

#ifndef _OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl_H_
#define _OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl_H_

#include "J2ObjC_header.h"
#include "javax/xml/parsers/DocumentBuilderFactory.h"

@class JavaxXmlParsersDocumentBuilder;

/*!
 @brief Provides a straightforward DocumentBuilderFactory implementation based on
 XMLPull/KXML.
 The class is used internally only, thus only notable members
 that are not already in the abstract superclass are documented. Hope that's
 ok.
 */
@interface OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl : JavaxXmlParsersDocumentBuilderFactory

#pragma mark Public

- (instancetype)init;

- (id)getAttributeWithNSString:(NSString *)name;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (JavaxXmlParsersDocumentBuilder *)newDocumentBuilder OBJC_METHOD_FAMILY_NONE;

- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl_init(OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl *self);

FOUNDATION_EXPORT OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl *new_OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl)

#endif // _OrgApacheHarmonyXmlParsersDocumentBuilderFactoryImpl_H_