//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ArrayStoreException.java
//

#ifndef _JavaLangArrayStoreException_H_
#define _JavaLangArrayStoreException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown when a program attempts to store an element of an incompatible type in
 an array.
 */
@interface JavaLangArrayStoreException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>ArrayStoreException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ArrayStoreException</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangArrayStoreException)

FOUNDATION_EXPORT void JavaLangArrayStoreException_init(JavaLangArrayStoreException *self);

FOUNDATION_EXPORT JavaLangArrayStoreException *new_JavaLangArrayStoreException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangArrayStoreException_initWithNSString_(JavaLangArrayStoreException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangArrayStoreException *new_JavaLangArrayStoreException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangArrayStoreException)

#endif // _JavaLangArrayStoreException_H_
