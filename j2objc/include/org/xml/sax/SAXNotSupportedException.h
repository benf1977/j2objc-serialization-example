//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/SAXNotSupportedException.java
//

#ifndef _OrgXmlSaxSAXNotSupportedException_H_
#define _OrgXmlSaxSAXNotSupportedException_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/SAXException.h"

/*!
 @brief Exception class for an unsupported operation.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>An XMLReader will throw this exception when it recognizes a
 feature or property identifier, but cannot perform the requested
 operation (setting a state or value).  Other SAX2 applications and
 extensions may use this class for similar purposes.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxSAXNotSupportedException : OrgXmlSaxSAXException

#pragma mark Public

/*!
 @brief Construct a new exception with no message.
 */
- (instancetype)init;

/*!
 @brief Construct a new exception with the given message.
 @param message The text message of the exception.
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXNotSupportedException)

FOUNDATION_EXPORT void OrgXmlSaxSAXNotSupportedException_init(OrgXmlSaxSAXNotSupportedException *self);

FOUNDATION_EXPORT OrgXmlSaxSAXNotSupportedException *new_OrgXmlSaxSAXNotSupportedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxSAXNotSupportedException_initWithNSString_(OrgXmlSaxSAXNotSupportedException *self, NSString *message);

FOUNDATION_EXPORT OrgXmlSaxSAXNotSupportedException *new_OrgXmlSaxSAXNotSupportedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXNotSupportedException)

#endif // _OrgXmlSaxSAXNotSupportedException_H_
