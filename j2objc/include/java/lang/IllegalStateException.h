//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalStateException.java
//

#ifndef _JavaLangIllegalStateException_H_
#define _JavaLangIllegalStateException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when an action is attempted at a time when the VM is not
 in the correct state.
 */
@interface JavaLangIllegalStateException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalStateException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>IllegalStateException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>IllegalStateException</code> with the current stack
 trace, the specified detail message and the specified cause.
 @param message
 the detail message for this exception.
 @param cause
 the cause of this exception.
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new <code>IllegalStateException</code> with the current stack
 trace and the specified cause.
 @param cause
 the cause of this exception, may be <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalStateException)

FOUNDATION_EXPORT void JavaLangIllegalStateException_init(JavaLangIllegalStateException *self);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSString_(JavaLangIllegalStateException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSString_withJavaLangThrowable_(JavaLangIllegalStateException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithJavaLangThrowable_(JavaLangIllegalStateException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalStateException)

#endif // _JavaLangIllegalStateException_H_
