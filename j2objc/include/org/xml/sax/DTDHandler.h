//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/DTDHandler.java
//

#ifndef _OrgXmlSaxDTDHandler_H_
#define _OrgXmlSaxDTDHandler_H_

#include "J2ObjC_header.h"

/*!
 @brief Receive notification of basic DTD-related events.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>If a SAX application needs information about notations and
 unparsed entities, then the application implements this
 interface and registers an instance with the SAX parser using
 the parser's setDTDHandler method.  The parser uses the
 instance to report notation and unparsed entity declarations to
 the application.</p>
 <p>Note that this interface includes only those DTD events that
 the XML recommendation <em>requires</em> processors to report:
 notation and unparsed entity declarations.</p>
 <p>The SAX parser may report these events in any order, regardless
 of the order in which the notations and unparsed entities were
 declared; however, all DTD events must be reported after the
 document handler's startDocument event, and before the first
 startElement event.
 (If the <code>LexicalHandler</code> is
 used, these events must also be reported before the endDTD event.)
 </p>
 <p>It is up to the application to store the information for
 future use (perhaps in a hash table or object tree).
 If the application encounters attributes of type "NOTATION",
 "ENTITY", or "ENTITIES", it can use the information that it
 obtained through this interface to find the entity and/or
 notation corresponding with the attribute value.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 */
@protocol OrgXmlSaxDTDHandler < NSObject, JavaObject >

/*!
 @brief Receive notification of a notation declaration event.
 <p>It is up to the application to record the notation for later
 reference, if necessary;
 notations may appear as attribute values and in unparsed entity
 declarations, and are sometime used with processing instruction
 target names.</p>
 <p>At least one of publicId and systemId must be non-null.
 If a system identifier is present, and it is a URL, the SAX
 parser must resolve it fully before passing it to the
 application through this event.</p>
 <p>There is no guarantee that the notation declaration will be
 reported before any unparsed entities that use it.</p>
 @param name The notation name.
 @param publicId The notation's public identifier, or null if
 none was given.
 @param systemId The notation's system identifier, or null if
 none was given.
 @exception org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of an unparsed entity declaration event.
 <p>Note that the notation name corresponds to a notation
 reported by the <code>notationDecl</code> event.
 It is up to the application to record the entity for later
 reference, if necessary;
 unparsed entities may appear as attribute values.
 </p>
 <p>If the system identifier is a URL, the parser must resolve it
 fully before passing it to the application.</p>
 @exception org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 @param name The unparsed entity's name.
 @param publicId The entity's public identifier, or null if none
 was given.
 @param systemId The entity's system identifier.
 @param notationName The name of the associated notation.
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxDTDHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxDTDHandler)

#endif // _OrgXmlSaxDTDHandler_H_
