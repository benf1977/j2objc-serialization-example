//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/Comment.java
//

#ifndef _OrgW3cDomComment_H_
#define _OrgW3cDomComment_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/CharacterData.h"

/*!
 @brief This interface inherits from <code>CharacterData</code> and represents the
 content of a comment, i.e., all the characters between the starting '
 <code>&lt;!
 --</code>' and ending '<code>--&gt;</code>'. Note that this is
 the definition of a comment in XML, and, in practice, HTML, although some
 HTML tools may implement the full SGML comment structure.
 <p> No lexical check is done on the content of a comment and it is
 therefore possible to have the character sequence <code>"--"</code>
 (double-hyphen) in the content, which is illegal in a comment per section
 2.5 of [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>]. The
 presence of this character sequence must generate a fatal error during
 serialization.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomComment < OrgW3cDomCharacterData, NSObject, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomComment)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomComment)

#endif // _OrgW3cDomComment_H_
