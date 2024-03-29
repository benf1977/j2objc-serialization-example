//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/DNParser.java
//

#ifndef _OrgApacheHarmonySecurityX509DNParser_H_
#define _OrgApacheHarmonySecurityX509DNParser_H_

#include "J2ObjC_header.h"

@protocol JavaUtilList;

/*!
 @author Alexander V. Esin, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief Distinguished Name Parser.
 Parses a distinguished name(DN) string according
 BNF syntax specified in RFC 2253 and RFC 1779
 RFC 2253: Lightweight Directory Access Protocol (v3):
 UTF-8 String Representation of Distinguished Names
 http://www.ietf.org/rfc/rfc2253.txt
 RFC 1779: A String Representation of Distinguished Names
 http://www.ietf.org/rfc/rfc1779.txt
 */
@interface OrgApacheHarmonySecurityX509DNParser : NSObject

#pragma mark Public

/*!
 @param dn - distinguished name string to be parsed
 */
- (instancetype)initWithNSString:(NSString *)dn;

/*!
 @brief Parses DN
 @return a list of Relative Distinguished Names(RDN),
 each RDN is represented as a list of AttributeTypeAndValue objects
 */
- (id<JavaUtilList>)parse;

#pragma mark Protected

/*!
 @brief Decodes a UTF-8 char.
 */
- (jchar)getUTF8;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityX509DNParser)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509DNParser_initWithNSString_(OrgApacheHarmonySecurityX509DNParser *self, NSString *dn);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509DNParser *new_OrgApacheHarmonySecurityX509DNParser_initWithNSString_(NSString *dn) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509DNParser)

#endif // _OrgApacheHarmonySecurityX509DNParser_H_
