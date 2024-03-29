//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/XmlPullParserException.java
//

#ifndef _OrgXmlpullV1XmlPullParserException_H_
#define _OrgXmlpullV1XmlPullParserException_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

@class JavaLangThrowable;
@protocol OrgXmlpullV1XmlPullParser;

/*!
 @brief This exception is thrown to signal XML Pull Parser related faults.
 @author <a href="http://www.extreme.indiana.edu/~aslom/">Aleksander Slominski</a>
 */
@interface OrgXmlpullV1XmlPullParserException : JavaLangException {
 @public
  JavaLangThrowable *detail_;
  jint row_;
  jint column_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)s;

- (instancetype)initWithNSString:(NSString *)msg
   withOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)parser
           withJavaLangThrowable:(JavaLangThrowable *)chain;

- (jint)getColumnNumber;

- (JavaLangThrowable *)getDetail;

- (jint)getLineNumber;

- (void)printStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlpullV1XmlPullParserException)

J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserException, detail_, JavaLangThrowable *)

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserException_initWithNSString_(OrgXmlpullV1XmlPullParserException *self, NSString *s);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *new_OrgXmlpullV1XmlPullParserException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withJavaLangThrowable_(OrgXmlpullV1XmlPullParserException *self, NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, JavaLangThrowable *chain);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *new_OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withJavaLangThrowable_(NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, JavaLangThrowable *chain) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1XmlPullParserException)

#endif // _OrgXmlpullV1XmlPullParserException_H_
