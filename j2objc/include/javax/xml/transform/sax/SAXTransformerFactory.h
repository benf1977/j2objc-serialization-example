//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/SAXTransformerFactory.java
//

#ifndef _JavaxXmlTransformSaxSAXTransformerFactory_H_
#define _JavaxXmlTransformSaxSAXTransformerFactory_H_

#include "J2ObjC_header.h"
#include "javax/xml/transform/TransformerFactory.h"

@protocol JavaxXmlTransformSaxTemplatesHandler;
@protocol JavaxXmlTransformSaxTransformerHandler;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformTemplates;
@protocol OrgXmlSaxXMLFilter;

/*!
 @brief This class extends TransformerFactory to provide SAX-specific
 factory methods.
 It provides two types of ContentHandlers,
 one for creating Transformers, the other for creating Templates
 objects.
 <p>If an application wants to set the ErrorHandler or EntityResolver
 for an XMLReader used during a transformation, it should use a URIResolver
 to return the SAXSource which provides (with getXMLReader) a reference to
 the XMLReader.</p>
 */
@interface JavaxXmlTransformSaxSAXTransformerFactory : JavaxXmlTransformTransformerFactory

#pragma mark Public

/*!
 @brief Get a TemplatesHandler object that can process SAX
 ContentHandler events into a Templates object.
 @return A non-null reference to a TransformerHandler, that may
 be used as a ContentHandler for SAX parse events.
 @throws TransformerConfigurationException If for some reason the
 TemplatesHandler cannot be created.
 */
- (id<JavaxXmlTransformSaxTemplatesHandler>)newTemplatesHandler OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get a TransformerHandler object that can process SAX
 ContentHandler events into a Result.
 The transformation
 is defined as an identity (or copy) transformation, for example
 to copy a series of SAX parse events into a DOM tree.
 @return A non-null reference to a TransformerHandler, that may
 be used as a ContentHandler for SAX parse events.
 @throws TransformerConfigurationException If for some reason the
 TransformerHandler cannot be created.
 */
- (id<JavaxXmlTransformSaxTransformerHandler>)newTransformerHandler OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get a TransformerHandler object that can process SAX
 ContentHandler events into a Result, based on the transformation
 instructions specified by the argument.
 @param src The Source of the transformation instructions.
 @return TransformerHandler ready to transform SAX events.
 @throws TransformerConfigurationException If for some reason the
 TransformerHandler can not be created.
 */
- (id<JavaxXmlTransformSaxTransformerHandler>)newTransformerHandlerWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)src OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get a TransformerHandler object that can process SAX
 ContentHandler events into a Result, based on the Templates argument.
 @param templates The compiled transformation instructions.
 @return TransformerHandler ready to transform SAX events.
 @throws TransformerConfigurationException If for some reason the
 TransformerHandler can not be created.
 */
- (id<JavaxXmlTransformSaxTransformerHandler>)newTransformerHandlerWithJavaxXmlTransformTemplates:(id<JavaxXmlTransformTemplates>)templates OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create an XMLFilter that uses the given Source as the
 transformation instructions.
 @param src The Source of the transformation instructions.
 @return An XMLFilter object, or null if this feature is not supported.
 @throws TransformerConfigurationException If for some reason the
 TemplatesHandler cannot be created.
 */
- (id<OrgXmlSaxXMLFilter>)newXMLFilterWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)src OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create an XMLFilter, based on the Templates argument..
 @param templates The compiled transformation instructions.
 @return An XMLFilter object, or null if this feature is not supported.
 @throws TransformerConfigurationException If for some reason the
 TemplatesHandler cannot be created.
 */
- (id<OrgXmlSaxXMLFilter>)newXMLFilterWithJavaxXmlTransformTemplates:(id<JavaxXmlTransformTemplates>)templates OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief The default constructor is protected on purpose.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxSAXTransformerFactory)

FOUNDATION_EXPORT NSString *JavaxXmlTransformSaxSAXTransformerFactory_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformSaxSAXTransformerFactory, FEATURE_, NSString *)

FOUNDATION_EXPORT NSString *JavaxXmlTransformSaxSAXTransformerFactory_FEATURE_XMLFILTER_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformSaxSAXTransformerFactory, FEATURE_XMLFILTER_, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXTransformerFactory_init(JavaxXmlTransformSaxSAXTransformerFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxSAXTransformerFactory)

#endif // _JavaxXmlTransformSaxSAXTransformerFactory_H_
