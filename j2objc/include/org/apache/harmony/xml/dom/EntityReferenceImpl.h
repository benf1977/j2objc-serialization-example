//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/EntityReferenceImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomEntityReferenceImpl_H_
#define _OrgApacheHarmonyXmlDomEntityReferenceImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/LeafNodeImpl.h"
#include "org/w3c/dom/EntityReference.h"

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
@interface OrgApacheHarmonyXmlDomEntityReferenceImpl : OrgApacheHarmonyXmlDomLeafNodeImpl < OrgW3cDomEntityReference >

#pragma mark Public

- (NSString *)getNodeName;

- (jshort)getNodeType;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomEntityReferenceImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomEntityReferenceImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomEntityReferenceImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *name);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomEntityReferenceImpl *new_OrgApacheHarmonyXmlDomEntityReferenceImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *name) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomEntityReferenceImpl)

#endif // _OrgApacheHarmonyXmlDomEntityReferenceImpl_H_