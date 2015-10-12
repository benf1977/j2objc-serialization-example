//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/Element.java
//

#ifndef _OrgW3cDomElement_H_
#define _OrgW3cDomElement_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomAttr;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTypeInfo;

/*!
 @brief The <code>Element</code> interface represents an element in an HTML or XML
 document.
 Elements may have attributes associated with them; since the
 <code>Element</code> interface inherits from <code>Node</code>, the
 generic <code>Node</code> interface attribute <code>attributes</code> may
 be used to retrieve the set of all attributes for an element. There are
 methods on the <code>Element</code> interface to retrieve either an
 <code>Attr</code> object by name or an attribute value by name. In XML,
 where an attribute value may contain entity references, an
 <code>Attr</code> object should be retrieved to examine the possibly
 fairly complex sub-tree representing the attribute value. On the other
 hand, in HTML, where all attributes have simple string values, methods to
 directly access an attribute value can safely be used as a convenience.
 <p ><b>Note:</b> In DOM Level 2, the method <code>normalize</code> is
 inherited from the <code>Node</code> interface where it was moved.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomElement < OrgW3cDomNode, NSObject, JavaObject >

/*!
 @brief The name of the element.
 If <code>Node.localName</code> is different
 from <code>null</code>, this attribute is a qualified name. For
 example, in:
 @code
 &lt;elementExample id="demo"&gt; ...
  
@endcode
 <code>tagName</code> has the value
 <code>"elementExample"</code>. Note that this is case-preserving in
 XML, as are all of the operations of the DOM. The HTML DOM returns
 the <code>tagName</code> of an HTML element in the canonical
 uppercase form, regardless of the case in the source HTML document.
 */
- (NSString *)getTagName;

/*!
 @brief Retrieves an attribute value by name.
 @param name The name of the attribute to retrieve.
 @return The <code>Attr</code> value as a string, or the empty string
 if that attribute does not have a specified or default value.
 */
- (NSString *)getAttributeWithNSString:(NSString *)name;

/*!
 @brief Adds a new attribute.
 If an attribute with that name is already present
 in the element, its value is changed to be that of the value
 parameter. This value is a simple string; it is not parsed as it is
 being set. So any markup (such as syntax to be recognized as an
 entity reference) is treated as literal text, and needs to be
 appropriately escaped by the implementation when it is written out.
 In order to assign an attribute value that contains entity
 references, the user must create an <code>Attr</code> node plus any
 <code>Text</code> and <code>EntityReference</code> nodes, build the
 appropriate subtree, and use <code>setAttributeNode</code> to assign
 it as the value of an attribute.
 <br>To set an attribute with a qualified name and namespace URI, use
 the <code>setAttributeNS</code> method.
 @param name The name of the attribute to create or alter.
 @param value Value to set in string form.
 @exception DOMException
 INVALID_CHARACTER_ERR: Raised if the specified name is not an XML
 name according to the XML version in use specified in the
 <code>Document.xmlVersion</code> attribute.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 */
- (void)setAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

/*!
 @brief Removes an attribute by name.
 If a default value for the removed
 attribute is defined in the DTD, a new attribute immediately appears
 with the default value as well as the corresponding namespace URI,
 local name, and prefix when applicable. The implementation may handle
 default values from other schemas similarly but applications should
 use <code>Document.normalizeDocument()</code> to guarantee this
 information is up-to-date.
 <br>If no attribute with this name is found, this method has no effect.
 <br>To remove an attribute by local name and namespace URI, use the
 <code>removeAttributeNS</code> method.
 @param name The name of the attribute to remove.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 */
- (void)removeAttributeWithNSString:(NSString *)name;

/*!
 @brief Retrieves an attribute node by name.
 <br>To retrieve an attribute node by qualified name and namespace URI,
 use the <code>getAttributeNodeNS</code> method.
 @param name The name (<code>nodeName</code>) of the attribute to
 retrieve.
 @return The <code>Attr</code> node with the specified name (
 <code>nodeName</code>) or <code>null</code> if there is no such
 attribute.
 */
- (id<OrgW3cDomAttr>)getAttributeNodeWithNSString:(NSString *)name;

/*!
 @brief Adds a new attribute node.
 If an attribute with that name (
 <code>nodeName</code>) is already present in the element, it is
 replaced by the new one. Replacing an attribute node by itself has no
 effect.
 <br>To add a new attribute node with a qualified name and namespace
 URI, use the <code>setAttributeNodeNS</code> method.
 @param newAttr The <code>Attr</code> node to add to the attribute list.
 @return If the <code>newAttr</code> attribute replaces an existing
 attribute, the replaced <code>Attr</code> node is returned,
 otherwise <code>null</code> is returned.
 @exception DOMException
 WRONG_DOCUMENT_ERR: Raised if <code>newAttr</code> was created from a
 different document than the one that created the element.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>INUSE_ATTRIBUTE_ERR: Raised if <code>newAttr</code> is already an
 attribute of another <code>Element</code> object. The DOM user must
 explicitly clone <code>Attr</code> nodes to re-use them in other
 elements.
 */
- (id<OrgW3cDomAttr>)setAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

/*!
 @brief Removes the specified attribute node.
 If a default value for the
 removed <code>Attr</code> node is defined in the DTD, a new node
 immediately appears with the default value as well as the
 corresponding namespace URI, local name, and prefix when applicable.
 The implementation may handle default values from other schemas
 similarly but applications should use
 <code>Document.normalizeDocument()</code> to guarantee this
 information is up-to-date.
 @param oldAttr The <code>Attr</code> node to remove from the attribute
 list.
 @return The <code>Attr</code> node that was removed.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>NOT_FOUND_ERR: Raised if <code>oldAttr</code> is not an attribute
 of the element.
 */
- (id<OrgW3cDomAttr>)removeAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)oldAttr;

/*!
 @brief Returns a <code>NodeList</code> of all descendant <code>Elements</code>
 with a given tag name, in document order.
 @param name The name of the tag to match on. The special value "*"
 matches all tags.
 @return A list of matching <code>Element</code> nodes.
 */
- (id<OrgW3cDomNodeList>)getElementsByTagNameWithNSString:(NSString *)name;

/*!
 @brief Retrieves an attribute value by local name and namespace URI.
 <br>Per [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
 , applications must use the value <code>null</code> as the
 <code>namespaceURI</code> parameter for methods if they wish to have
 no namespace.
 @param namespaceURI The namespace URI of the attribute to retrieve.
 @param localName The local name of the attribute to retrieve.
 @return The <code>Attr</code> value as a string, or the empty string
 if that attribute does not have a specified or default value.
 @exception DOMException
 NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (NSString *)getAttributeNSWithNSString:(NSString *)namespaceURI
                            withNSString:(NSString *)localName;

/*!
 @brief Adds a new attribute.
 If an attribute with the same local name and
 namespace URI is already present on the element, its prefix is
 changed to be the prefix part of the <code>qualifiedName</code>, and
 its value is changed to be the <code>value</code> parameter. This
 value is a simple string; it is not parsed as it is being set. So any
 markup (such as syntax to be recognized as an entity reference) is
 treated as literal text, and needs to be appropriately escaped by the
 implementation when it is written out. In order to assign an
 attribute value that contains entity references, the user must create
 an <code>Attr</code> node plus any <code>Text</code> and
 <code>EntityReference</code> nodes, build the appropriate subtree,
 and use <code>setAttributeNodeNS</code> or
 <code>setAttributeNode</code> to assign it as the value of an
 attribute.
 <br>Per [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
 , applications must use the value <code>null</code> as the
 <code>namespaceURI</code> parameter for methods if they wish to have
 no namespace.
 @param namespaceURI The namespace URI of the attribute to create or
 alter.
 @param qualifiedName The qualified name of the attribute to create or
 alter.
 @param value The value to set in string form.
 @exception DOMException
 INVALID_CHARACTER_ERR: Raised if the specified qualified name is not
 an XML name according to the XML version in use specified in the
 <code>Document.xmlVersion</code> attribute.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>NAMESPACE_ERR: Raised if the <code>qualifiedName</code> is
 malformed per the Namespaces in XML specification, if the
 <code>qualifiedName</code> has a prefix and the
 <code>namespaceURI</code> is <code>null</code>, if the
 <code>qualifiedName</code> has a prefix that is "xml" and the
 <code>namespaceURI</code> is different from "<a href='http://www.w3.org/XML/1998/namespace'>
 http://www.w3.org/XML/1998/namespace</a>", if the <code>qualifiedName</code> or its prefix is "xmlns" and the
 <code>namespaceURI</code> is different from "<a href='http://www.w3.org/2000/xmlns/'>http://www.w3.org/2000/xmlns/</a>", or if the <code>namespaceURI</code> is "<a href='http://www.w3.org/2000/xmlns/'>http://www.w3.org/2000/xmlns/</a>" and neither the <code>qualifiedName</code> nor its prefix is "xmlns".
 <br>NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (void)setAttributeNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)qualifiedName
                      withNSString:(NSString *)value;

/*!
 @brief Removes an attribute by local name and namespace URI.
 If a default
 value for the removed attribute is defined in the DTD, a new
 attribute immediately appears with the default value as well as the
 corresponding namespace URI, local name, and prefix when applicable.
 The implementation may handle default values from other schemas
 similarly but applications should use
 <code>Document.normalizeDocument()</code> to guarantee this
 information is up-to-date.
 <br>If no attribute with this local name and namespace URI is found,
 this method has no effect.
 <br>Per [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
 , applications must use the value <code>null</code> as the
 <code>namespaceURI</code> parameter for methods if they wish to have
 no namespace.
 @param namespaceURI The namespace URI of the attribute to remove.
 @param localName The local name of the attribute to remove.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (void)removeAttributeNSWithNSString:(NSString *)namespaceURI
                         withNSString:(NSString *)localName;

/*!
 @brief Retrieves an <code>Attr</code> node by local name and namespace URI.
 <br>Per [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
 , applications must use the value <code>null</code> as the
 <code>namespaceURI</code> parameter for methods if they wish to have
 no namespace.
 @param namespaceURI The namespace URI of the attribute to retrieve.
 @param localName The local name of the attribute to retrieve.
 @return The <code>Attr</code> node with the specified attribute local
 name and namespace URI or <code>null</code> if there is no such
 attribute.
 @exception DOMException
 NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (id<OrgW3cDomAttr>)getAttributeNodeNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)localName;

/*!
 @brief Adds a new attribute.
 If an attribute with that local name and that
 namespace URI is already present in the element, it is replaced by
 the new one. Replacing an attribute node by itself has no effect.
 <br>Per [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
 , applications must use the value <code>null</code> as the
 <code>namespaceURI</code> parameter for methods if they wish to have
 no namespace.
 @param newAttr The <code>Attr</code> node to add to the attribute list.
 @return If the <code>newAttr</code> attribute replaces an existing
 attribute with the same local name and namespace URI, the replaced
 <code>Attr</code> node is returned, otherwise <code>null</code> is
 returned.
 @exception DOMException
 WRONG_DOCUMENT_ERR: Raised if <code>newAttr</code> was created from a
 different document than the one that created the element.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>INUSE_ATTRIBUTE_ERR: Raised if <code>newAttr</code> is already an
 attribute of another <code>Element</code> object. The DOM user must
 explicitly clone <code>Attr</code> nodes to re-use them in other
 elements.
 <br>NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (id<OrgW3cDomAttr>)setAttributeNodeNSWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

/*!
 @brief Returns a <code>NodeList</code> of all the descendant
 <code>Elements</code> with a given local name and namespace URI in
 document order.
 @param namespaceURI The namespace URI of the elements to match on. The
 special value "*" matches all namespaces.
 @param localName The local name of the elements to match on. The
 special value "*" matches all local names.
 @return A new <code>NodeList</code> object containing all the matched
 <code>Elements</code>.
 @exception DOMException
 NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (id<OrgW3cDomNodeList>)getElementsByTagNameNSWithNSString:(NSString *)namespaceURI
                                               withNSString:(NSString *)localName;

/*!
 @brief Returns <code>true</code> when an attribute with a given name is
 specified on this element or has a default value, <code>false</code>
 otherwise.
 @param name The name of the attribute to look for.
 @return <code>true</code> if an attribute with the given name is
 specified on this element or has a default value, <code>false</code>
 otherwise.
 @since DOM Level 2
 */
- (jboolean)hasAttributeWithNSString:(NSString *)name;

/*!
 @brief Returns <code>true</code> when an attribute with a given local name and
 namespace URI is specified on this element or has a default value,
 <code>false</code> otherwise.
 <br>Per [<a href='http://www.w3.org/TR/1999/REC-xml-names-19990114/'>XML Namespaces</a>]
 , applications must use the value <code>null</code> as the
 <code>namespaceURI</code> parameter for methods if they wish to have
 no namespace.
 @param namespaceURI The namespace URI of the attribute to look for.
 @param localName The local name of the attribute to look for.
 @return <code>true</code> if an attribute with the given local name
 and namespace URI is specified or has a default value on this
 element, <code>false</code> otherwise.
 @exception DOMException
 NOT_SUPPORTED_ERR: May be raised if the implementation does not
 support the feature <code>"XML"</code> and the language exposed
 through the Document does not support XML Namespaces (such as [<a href='http://www.w3.org/TR/1999/REC-html401-19991224/'>HTML 4.01</a>]).
 @since DOM Level 2
 */
- (jboolean)hasAttributeNSWithNSString:(NSString *)namespaceURI
                          withNSString:(NSString *)localName;

/*!
 @brief The type information associated with this element.
 @since DOM Level 3
 */
- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

/*!
 @brief If the parameter <code>isId</code> is <code>true</code>, this method
 declares the specified attribute to be a user-determined ID attribute
 .
 This affects the value of <code>Attr.isId</code> and the behavior
 of <code>Document.getElementById</code>, but does not change any
 schema that may be in use, in particular this does not affect the
 <code>Attr.schemaTypeInfo</code> of the specified <code>Attr</code>
 node. Use the value <code>false</code> for the parameter
 <code>isId</code> to undeclare an attribute for being a
 user-determined ID attribute.
 <br> To specify an attribute by local name and namespace URI, use the
 <code>setIdAttributeNS</code> method.
 @param name The name of the attribute.
 @param isId Whether the attribute is a of type ID.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>NOT_FOUND_ERR: Raised if the specified node is not an attribute
 of this element.
 @since DOM Level 3
 */
- (void)setIdAttributeWithNSString:(NSString *)name
                       withBoolean:(jboolean)isId;

/*!
 @brief If the parameter <code>isId</code> is <code>true</code>, this method
 declares the specified attribute to be a user-determined ID attribute
 .
 This affects the value of <code>Attr.isId</code> and the behavior
 of <code>Document.getElementById</code>, but does not change any
 schema that may be in use, in particular this does not affect the
 <code>Attr.schemaTypeInfo</code> of the specified <code>Attr</code>
 node. Use the value <code>false</code> for the parameter
 <code>isId</code> to undeclare an attribute for being a
 user-determined ID attribute.
 @param namespaceURI The namespace URI of the attribute.
 @param localName The local name of the attribute.
 @param isId Whether the attribute is a of type ID.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>NOT_FOUND_ERR: Raised if the specified node is not an attribute
 of this element.
 @since DOM Level 3
 */
- (void)setIdAttributeNSWithNSString:(NSString *)namespaceURI
                        withNSString:(NSString *)localName
                         withBoolean:(jboolean)isId;

/*!
 @brief If the parameter <code>isId</code> is <code>true</code>, this method
 declares the specified attribute to be a user-determined ID attribute
 .
 This affects the value of <code>Attr.isId</code> and the behavior
 of <code>Document.getElementById</code>, but does not change any
 schema that may be in use, in particular this does not affect the
 <code>Attr.schemaTypeInfo</code> of the specified <code>Attr</code>
 node. Use the value <code>false</code> for the parameter
 <code>isId</code> to undeclare an attribute for being a
 user-determined ID attribute.
 @param idAttr The attribute node.
 @param isId Whether the attribute is a of type ID.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 <br>NOT_FOUND_ERR: Raised if the specified node is not an attribute
 of this element.
 @since DOM Level 3
 */
- (void)setIdAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)idAttr
                                withBoolean:(jboolean)isId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomElement)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomElement)

#endif // _OrgW3cDomElement_H_
