//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/LeafNodeImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomLeafNodeImpl_H_
#define _OrgApacheHarmonyXmlDomLeafNodeImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/NodeImpl.h"

@class OrgApacheHarmonyXmlDomDocumentImpl;
@class OrgApacheHarmonyXmlDomInnerNodeImpl;
@protocol OrgW3cDomNode;

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
 <p>
 This class represents a Node that has a parent Node, but no children.
 */
@interface OrgApacheHarmonyXmlDomLeafNodeImpl : OrgApacheHarmonyXmlDomNodeImpl {
 @public
  __weak OrgApacheHarmonyXmlDomInnerNodeImpl *parent_;
  jint index_;
}

#pragma mark Public

- (id<OrgW3cDomNode>)getNextSibling;

- (id<OrgW3cDomNode>)getParentNode;

- (id<OrgW3cDomNode>)getPreviousSibling;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document;

- (jboolean)isParentOfWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomLeafNodeImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomLeafNodeImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_(OrgApacheHarmonyXmlDomLeafNodeImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomLeafNodeImpl)

#endif // _OrgApacheHarmonyXmlDomLeafNodeImpl_H_
