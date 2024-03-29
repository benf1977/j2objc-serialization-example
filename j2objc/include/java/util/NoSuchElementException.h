//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/NoSuchElementException.java
//

#ifndef _JavaUtilNoSuchElementException_H_
#define _JavaUtilNoSuchElementException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown when trying to retrieve an element
 past the end of an Enumeration or Iterator.
 */
@interface JavaUtilNoSuchElementException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>NoSuchElementException</code> with the current stack
 trace filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NoSuchElementException</code> with the current stack
 trace and message filled in.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilNoSuchElementException)

FOUNDATION_EXPORT void JavaUtilNoSuchElementException_init(JavaUtilNoSuchElementException *self);

FOUNDATION_EXPORT JavaUtilNoSuchElementException *new_JavaUtilNoSuchElementException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilNoSuchElementException_initWithNSString_(JavaUtilNoSuchElementException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilNoSuchElementException *new_JavaUtilNoSuchElementException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilNoSuchElementException)

#endif // _JavaUtilNoSuchElementException_H_
