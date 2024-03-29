//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/parsers/SAXParserFactoryImpl.java
//

#ifndef _OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_H_
#define _OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_H_

#include "J2ObjC_header.h"
#include "javax/xml/parsers/SAXParserFactory.h"

@class JavaxXmlParsersSAXParser;

/*!
 @brief Provides a straightforward SAXParserFactory implementation based on
 Expat.
 The class is used internally only, thus only notable members
 that are not already in the abstract superclass are documented.
 */
@interface OrgApacheHarmonyXmlParsersSAXParserFactoryImpl : JavaxXmlParsersSAXParserFactory

#pragma mark Public

- (instancetype)init;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (JavaxXmlParsersSAXParser *)newSAXParser OBJC_METHOD_FAMILY_NONE;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (void)setNamespaceAwareWithBoolean:(jboolean)value;

- (void)setValidatingWithBoolean:(jboolean)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlParsersSAXParserFactoryImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_init(OrgApacheHarmonyXmlParsersSAXParserFactoryImpl *self);

FOUNDATION_EXPORT OrgApacheHarmonyXmlParsersSAXParserFactoryImpl *new_OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlParsersSAXParserFactoryImpl)

#endif // _OrgApacheHarmonyXmlParsersSAXParserFactoryImpl_H_
