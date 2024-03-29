//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/NotationImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomNotationImpl_H_
#define _OrgApacheHarmonyXmlDomNotationImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/LeafNodeImpl.h"
#include "org/w3c/dom/Notation.h"

@class OrgApacheHarmonyXmlDomDocumentImpl;

/*!
 @brief Provides a straightforward implementation of the corresponding W3C DOM
 interface.
 The class is used internally only, thus only notable members that
 are not in the original interface are documented (the W3C docs are quite
 extensive). Hope that's ok.
 <p>
 Some of the fields may have package visibility, so other classes belonging to
 the DOM implementation can easily access them while maintaining the DOM tree
 structure.
 */
@interface OrgApacheHarmonyXmlDomNotationImpl : OrgApacheHarmonyXmlDomLeafNodeImpl < OrgW3cDomNotation >

#pragma mark Public

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getPublicId;

- (NSString *)getSystemId;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)notationName
                                              withNSString:(NSString *)publicID
                                              withNSString:(NSString *)systemID;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomNotationImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomNotationImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_withNSString_withNSString_(OrgApacheHarmonyXmlDomNotationImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *notationName, NSString *publicID, NSString *systemID);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomNotationImpl *new_OrgApacheHarmonyXmlDomNotationImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_withNSString_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *notationName, NSString *publicID, NSString *systemID) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomNotationImpl)

#endif // _OrgApacheHarmonyXmlDomNotationImpl_H_
