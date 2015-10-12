//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/AttributeListImpl.java
//

#ifndef _OrgXmlSaxHelpersAttributeListImpl_H_
#define _OrgXmlSaxHelpersAttributeListImpl_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/AttributeList.h"

/*!
 @brief Default implementation for AttributeList.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>AttributeList implements the deprecated SAX1 <code>AttributeList</code>
  interface, and has been
 replaced by the new SAX2 <code>AttributesImpl</code>
  interface.</p>
 <p>This class provides a convenience implementation of the SAX
 <code>AttributeList</code> interface.  This
 implementation is useful both for SAX parser writers, who can use
 it to provide attributes to the application, and for SAX application
 writers, who can use it to create a persistent copy of an element's
 attribute specifications:</p>
 @code

  private AttributeList myatts;
  public void startElement (String name, AttributeList atts)
  {
              // create a persistent copy of the attribute list
              // for use outside this method
   myatts = new AttributeListImpl(atts);
   [...]
  }
  
@endcode
 <p>Please note that SAX parsers are not required to use this
 class to provide an implementation of AttributeList; it is
 supplied only as an optional convenience.  In particular,
 parser writers are encouraged to invent more efficient
 implementations.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxHelpersAttributeListImpl : NSObject < OrgXmlSaxAttributeList >

#pragma mark Public

/*!
 @brief Create an empty attribute list.
 <p>This constructor is most useful for parser writers, who
 will use it to create a single, reusable attribute list that
 can be reset with the clear method between elements.</p>
 */
- (instancetype)init;

/*!
 @brief Construct a persistent copy of an existing attribute list.
 <p>This constructor is most useful for application writers,
 who will use it to create a persistent copy of an existing
 attribute list.</p>
 @param atts The attribute list to copy
 */
- (instancetype)initWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)atts;

/*!
 @brief Add an attribute to an attribute list.
 <p>This method is provided for SAX parser writers, to allow them
 to build up an attribute list incrementally before delivering
 it to the application.</p>
 @param name The attribute name.
 @param type The attribute type ("NMTOKEN" for an enumeration).
 @param value The attribute value (must not be null).
 */
- (void)addAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

/*!
 @brief Clear the attribute list.
 <p>SAX parser writers can use this method to reset the attribute
 list between DocumentHandler.startElement events.  Normally,
 it will make sense to reuse the same AttributeListImpl object
 rather than allocating a new one each time.</p>
 */
- (void)clear;

/*!
 @brief Return the number of attributes in the list.
 @return The number of attributes in the list.
 */
- (jint)getLength;

/*!
 @brief Get the name of an attribute (by position).
 @param i The position of the attribute in the list.
 @return The attribute name as a string, or null if there
 is no attribute at that position.
 */
- (NSString *)getNameWithInt:(jint)i;

/*!
 @brief Get the type of an attribute (by position).
 @param i The position of the attribute in the list.
 @return The attribute type as a string ("NMTOKEN" for an
 enumeration, and "CDATA" if no declaration was
 read), or null if there is no attribute at
 that position.
 */
- (NSString *)getTypeWithInt:(jint)i;

/*!
 @brief Get the type of an attribute (by name).
 @param name The attribute name.
 @return The attribute type as a string ("NMTOKEN" for an
 enumeration, and "CDATA" if no declaration was
 read).
 */
- (NSString *)getTypeWithNSString:(NSString *)name;

/*!
 @brief Get the value of an attribute (by position).
 @param i The position of the attribute in the list.
 @return The attribute value as a string, or null if
 there is no attribute at that position.
 */
- (NSString *)getValueWithInt:(jint)i;

/*!
 @brief Get the value of an attribute (by name).
 @param name The attribute name.
 @return the named attribute's value or null, if the attribute does not
 exist.
 */
- (NSString *)getValueWithNSString:(NSString *)name;

/*!
 @brief Remove an attribute from the list.
 <p>SAX application writers can use this method to filter an
 attribute out of an AttributeList.  Note that invoking this
 method will change the length of the attribute list and
 some of the attribute's indices.</p>
 <p>If the requested attribute is not in the list, this is
 a no-op.</p>
 @param name The attribute name.
 */
- (void)removeAttributeWithNSString:(NSString *)name;

/*!
 @brief Set the attribute list, discarding previous contents.
 <p>This method allows an application writer to reuse an
 attribute list easily.</p>
 @param atts The attribute list to copy.
 */
- (void)setAttributeListWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)atts;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersAttributeListImpl)

FOUNDATION_EXPORT void OrgXmlSaxHelpersAttributeListImpl_init(OrgXmlSaxHelpersAttributeListImpl *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *new_OrgXmlSaxHelpersAttributeListImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(OrgXmlSaxHelpersAttributeListImpl *self, id<OrgXmlSaxAttributeList> atts);

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *new_OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(id<OrgXmlSaxAttributeList> atts) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersAttributeListImpl)

#endif // _OrgXmlSaxHelpersAttributeListImpl_H_