//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalThreadStateException.java
//

#ifndef _JavaLangIllegalThreadStateException_H_
#define _JavaLangIllegalThreadStateException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalArgumentException.h"

/*!
 @brief Thrown when an operation is attempted which is not possible given the state
 that the executing thread is in.
 */
@interface JavaLangIllegalThreadStateException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalThreadStateException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>IllegalThreadStateException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalThreadStateException)

FOUNDATION_EXPORT void JavaLangIllegalThreadStateException_init(JavaLangIllegalThreadStateException *self);

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *new_JavaLangIllegalThreadStateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalThreadStateException_initWithNSString_(JavaLangIllegalThreadStateException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *new_JavaLangIllegalThreadStateException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalThreadStateException)

#endif // _JavaLangIllegalThreadStateException_H_
