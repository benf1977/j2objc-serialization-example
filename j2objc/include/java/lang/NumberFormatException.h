//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NumberFormatException.java
//

#ifndef _JavaLangNumberFormatException_H_
#define _JavaLangNumberFormatException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalArgumentException.h"

/*!
 @brief Thrown when an invalid value is passed to a string-to-number conversion
 method.
 */
@interface JavaLangNumberFormatException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a new <code>NumberFormatException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NumberFormatException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNumberFormatException)

FOUNDATION_EXPORT void JavaLangNumberFormatException_init(JavaLangNumberFormatException *self);

FOUNDATION_EXPORT JavaLangNumberFormatException *new_JavaLangNumberFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangNumberFormatException_initWithNSString_(JavaLangNumberFormatException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNumberFormatException *new_JavaLangNumberFormatException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNumberFormatException)

#endif // _JavaLangNumberFormatException_H_
