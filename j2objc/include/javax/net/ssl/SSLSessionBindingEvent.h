//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSessionBindingEvent.java
//

#ifndef _JavaxNetSslSSLSessionBindingEvent_H_
#define _JavaxNetSslSSLSessionBindingEvent_H_

#include "J2ObjC_header.h"
#include "java/util/EventObject.h"

@protocol JavaxNetSslSSLSession;

/*!
 @brief The event sent to an <code>SSLSessionBindingListener</code> when the listener
 object is bound (<code>SSLSession.putValue(String,Object)</code>) or unbound
 (<code>SSLSession.removeValue(String)</code>) to an <code>SSLSession</code>.
 */
@interface JavaxNetSslSSLSessionBindingEvent : JavaUtilEventObject

#pragma mark Public

/*!
 @brief Creates a new <code>SSLSessionBindingEvent</code> for the specified session
 indicating a binding event for the specified name.
 @param session
 the session for which the event occurs.
 @param name
 the name of the object being (un)bound.
 */
- (instancetype)initWithJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)session
                                 withNSString:(NSString *)name;

/*!
 @brief Returns the name of the binding being added or removed.
 @return the name of the binding.
 */
- (NSString *)getName;

/*!
 @brief Returns the session to which the binding is added or from which it is
 removed.
 @return the session to which the binding is added or from which it is
 removed.
 */
- (id<JavaxNetSslSSLSession>)getSession;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionBindingEvent)

FOUNDATION_EXPORT void JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(JavaxNetSslSSLSessionBindingEvent *self, id<JavaxNetSslSSLSession> session, NSString *name);

FOUNDATION_EXPORT JavaxNetSslSSLSessionBindingEvent *new_JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(id<JavaxNetSslSSLSession> session, NSString *name) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionBindingEvent)

#endif // _JavaxNetSslSSLSessionBindingEvent_H_