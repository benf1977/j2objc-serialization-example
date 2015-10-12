//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/InvocationHandler.java
//

#ifndef _JavaLangReflectInvocationHandler_H_
#define _JavaLangReflectInvocationHandler_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;

/*!
 @brief Implementors of this interface dispatch methods invoked on proxy instances.
 */
@protocol JavaLangReflectInvocationHandler < NSObject, JavaObject >

/*!
 @brief Handles the method which was originally invoked on the proxy instance.
 A
 typical usage pattern follows below:
 @code

  public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
     //do some processing before the method invocation
     //invoke the method
     Object result = method.invoke(proxy, args);
     //do some processing after the method invocation
     return result;
  
@endcode
 @param proxy
 the proxy instance on which the method was invoked
 @param method
 the method invoked on the proxy instance
 @param args
 an array of objects containing the parameters passed to the
 method, or <code>null</code> if no arguments are expected.
 Primitive types are boxed.
 @return the result of executing the method. Primitive types are boxed.
 @throws Throwable
 the exception to throw from the invoked method on the proxy.
 The exception must match one of the declared exception types
 of the invoked method or any unchecked exception type. If not
 then an <code>UndeclaredThrowableException</code> is thrown
 */
- (id)invokeWithId:(id)proxy
withJavaLangReflectMethod:(JavaLangReflectMethod *)method
 withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectInvocationHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectInvocationHandler)

#endif // _JavaLangReflectInvocationHandler_H_