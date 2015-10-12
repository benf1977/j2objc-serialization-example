//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathFactoryConfigurationException.java
//

#ifndef _JavaxXmlXpathXPathFactoryConfigurationException_H_
#define _JavaxXmlXpathXPathFactoryConfigurationException_H_

#include "J2ObjC_header.h"
#include "javax/xml/xpath/XPathException.h"

@class JavaLangThrowable;

/*!
 @brief <code>XPathFactoryConfigurationException</code> represents a configuration error in a <code>XPathFactory</code> environment.
 </p>
 @author <a href="mailto:Norman.Walsh@@Sun.com">Norman Walsh</a>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 @since 1.5
 */
@interface JavaxXmlXpathXPathFactoryConfigurationException : JavaxXmlXpathXPathException

#pragma mark Public

/*!
 @brief <p>Constructs a new <code>XPathFactoryConfigurationException</code> with the specified detail <code>message</code>.
 </p>
 <p>The <code>cause</code> is not initialized.</p>
 <p>If <code>message</code> is <code>null</code>, then a <code>NullPointerException</code> is thrown.</p>
 @param message The detail message.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief <p>Constructs a new <code>XPathFactoryConfigurationException</code> with the specified <code>cause</code>.
 </p>
 <p>If <code>cause</code> is <code>null</code>, then a <code>NullPointerException</code> is thrown.</p>
 @param cause The cause.
 @throws NullPointerException if <code>cause</code> is <code>null</code>.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathFactoryConfigurationException)

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactoryConfigurationException_initWithNSString_(JavaxXmlXpathXPathFactoryConfigurationException *self, NSString *message);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryConfigurationException *new_JavaxXmlXpathXPathFactoryConfigurationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactoryConfigurationException_initWithJavaLangThrowable_(JavaxXmlXpathXPathFactoryConfigurationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryConfigurationException *new_JavaxXmlXpathXPathFactoryConfigurationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFactoryConfigurationException)

#endif // _JavaxXmlXpathXPathFactoryConfigurationException_H_
