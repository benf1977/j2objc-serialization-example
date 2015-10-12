//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/NodeListImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomNodeListImpl_H_
#define _OrgApacheHarmonyXmlDomNodeListImpl_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/NodeList.h"

@class OrgApacheHarmonyXmlDomNodeImpl;
@protocol JavaUtilList;
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
 */
@interface OrgApacheHarmonyXmlDomNodeListImpl : NSObject < OrgW3cDomNodeList >

#pragma mark Public

- (jint)getLength;

- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

#pragma mark Package-Private

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)list;

- (void)addWithOrgApacheHarmonyXmlDomNodeImpl:(OrgApacheHarmonyXmlDomNodeImpl *)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomNodeListImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomNodeListImpl_init(OrgApacheHarmonyXmlDomNodeListImpl *self);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomNodeListImpl *new_OrgApacheHarmonyXmlDomNodeListImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomNodeListImpl_initWithJavaUtilList_(OrgApacheHarmonyXmlDomNodeListImpl *self, id<JavaUtilList> list);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomNodeListImpl *new_OrgApacheHarmonyXmlDomNodeListImpl_initWithJavaUtilList_(id<JavaUtilList> list) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomNodeListImpl)

#endif // _OrgApacheHarmonyXmlDomNodeListImpl_H_
