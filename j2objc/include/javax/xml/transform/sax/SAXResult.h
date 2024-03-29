//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/SAXResult.java
//

#ifndef _JavaxXmlTransformSaxSAXResult_H_
#define _JavaxXmlTransformSaxSAXResult_H_

#include "J2ObjC_header.h"
#include "javax/xml/transform/Result.h"

@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief <p>Acts as an holder for a transformation Result.
 </p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 */
@interface JavaxXmlTransformSaxSAXResult : NSObject < JavaxXmlTransformResult >

#pragma mark Public

/*!
 @brief Zero-argument default constructor.
 */
- (instancetype)init;

/*!
 @brief Create a SAXResult that targets a SAX2 <code>org.xml.sax.ContentHandler</code>.
 @param handler Must be a non-null ContentHandler reference.
 */
- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Get the <code>org.xml.sax.ContentHandler</code> that is the Result.
 @return The ContentHandler that is to be transformation output.
 */
- (id<OrgXmlSaxContentHandler>)getHandler;

/*!
 @brief Get a SAX2 <code>org.xml.sax.ext.LexicalHandler</code> for the output.
 @return A <code>LexicalHandler</code>, or null.
 */
- (id<OrgXmlSaxExtLexicalHandler>)getLexicalHandler;

/*!
 @brief Get the system identifier that was set with setSystemId.
 @return The system identifier that was set with setSystemId, or null
 if setSystemId was not called.
 */
- (NSString *)getSystemId;

/*!
 @brief Set the target to be a SAX2 <code>org.xml.sax.ContentHandler</code>.
 @param handler Must be a non-null ContentHandler reference.
 */
- (void)setHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Set the SAX2 <code>org.xml.sax.ext.LexicalHandler</code> for the output.
 <p>This is needed to handle XML comments and the like.  If the
 lexical handler is not set, an attempt should be made by the
 transformer to cast the <code>org.xml.sax.ContentHandler</code> to a
 <code>LexicalHandler</code>.</p>
 @param handler A non-null <code>LexicalHandler</code> for
 handling lexical parse events.
 */
- (void)setLexicalHandlerWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)handler;

/*!
 @brief Method setSystemId Set the systemID that may be used in association
 with the <code>org.xml.sax.ContentHandler</code>.
 @param systemId The system identifier as a URI string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxSAXResult)

FOUNDATION_EXPORT NSString *JavaxXmlTransformSaxSAXResult_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformSaxSAXResult, FEATURE_, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXResult_init(JavaxXmlTransformSaxSAXResult *self);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXResult *new_JavaxXmlTransformSaxSAXResult_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXResult_initWithOrgXmlSaxContentHandler_(JavaxXmlTransformSaxSAXResult *self, id<OrgXmlSaxContentHandler> handler);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXResult *new_JavaxXmlTransformSaxSAXResult_initWithOrgXmlSaxContentHandler_(id<OrgXmlSaxContentHandler> handler) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxSAXResult)

#endif // _JavaxXmlTransformSaxSAXResult_H_
