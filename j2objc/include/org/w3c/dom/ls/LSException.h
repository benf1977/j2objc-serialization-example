//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/ls/LSException.java
//

#ifndef _OrgW3cDomLsLSException_H_
#define _OrgW3cDomLsLSException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

#define OrgW3cDomLsLSException_PARSE_ERR 81
#define OrgW3cDomLsLSException_SERIALIZE_ERR 82

/*!
 @brief Parser or write operations may throw an <code>LSException</code> if the
 processing is stopped.
 The processing can be stopped due to a
 <code>DOMError</code> with a severity of
 <code>DOMError.SEVERITY_FATAL_ERROR</code> or a non recovered
 <code>DOMError.SEVERITY_ERROR</code>, or if
 <code>DOMErrorHandler.handleError()</code> returned <code>false</code>.
 <p ><b>Note:</b>  As suggested in the definition of the constants in the
 <code>DOMError</code> interface, a DOM implementation may choose to
 continue after a fatal error, but the resulting DOM tree is then
 implementation dependent.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@interface OrgW3cDomLsLSException : JavaLangRuntimeException {
 @public
  jshort code_;
}

#pragma mark Public

- (instancetype)initWithShort:(jshort)code
                 withNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSException)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomLsLSException, PARSE_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomLsLSException, SERIALIZE_ERR, jshort)

FOUNDATION_EXPORT void OrgW3cDomLsLSException_initWithShort_withNSString_(OrgW3cDomLsLSException *self, jshort code, NSString *message);

FOUNDATION_EXPORT OrgW3cDomLsLSException *new_OrgW3cDomLsLSException_initWithShort_withNSString_(jshort code, NSString *message) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSException)

#endif // _OrgW3cDomLsLSException_H_
