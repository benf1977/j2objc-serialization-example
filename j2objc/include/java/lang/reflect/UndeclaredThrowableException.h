//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/UndeclaredThrowableException.java
//

#ifndef _JavaLangReflectUndeclaredThrowableException_H_
#define _JavaLangReflectUndeclaredThrowableException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief This class provides a wrapper for an undeclared, checked exception thrown by
 an InvocationHandler.
 */
@interface JavaLangReflectUndeclaredThrowableException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>UndeclaredThrowableException</code> instance with the
 undeclared, checked exception that occurred.
 @param exception
 the undeclared, checked exception that occurred
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception;

/*!
 @brief Constructs a new <code>UndeclaredThrowableException</code> instance with the
 undeclared, checked exception that occurred and a message.
 @param detailMessage
 the detail message for the exception
 @param exception
 the undeclared, checked exception that occurred
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception
                             withNSString:(NSString *)detailMessage;

/*!
 @brief Returns the undeclared, checked exception that occurred, which may be
 <code>null</code>.
 @return the undeclared, checked exception that occurred
 */
- (JavaLangThrowable *)getCause;

/*!
 @brief Returns the undeclared, checked exception that occurred, which may be
 <code>null</code>.
 @return the undeclared, checked exception that occurred
 */
- (JavaLangThrowable *)getUndeclaredThrowable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectUndeclaredThrowableException)

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_(JavaLangReflectUndeclaredThrowableException *self, JavaLangThrowable *exception);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_(JavaLangThrowable *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_withNSString_(JavaLangReflectUndeclaredThrowableException *self, JavaLangThrowable *exception, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithJavaLangThrowable_withNSString_(JavaLangThrowable *exception, NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectUndeclaredThrowableException)

#endif // _JavaLangReflectUndeclaredThrowableException_H_