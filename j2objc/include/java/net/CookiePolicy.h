//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookiePolicy.java
//

#ifndef _JavaNetCookiePolicy_H_
#define _JavaNetCookiePolicy_H_

#include "J2ObjC_header.h"

@class JavaNetHttpCookie;
@class JavaNetURI;

/*!
 @brief CookiePolicy has three pre-defined policy.
 They are ACCEPT_ALL, ACCEPT_NONE
 and ACCEPT_ORIGINAL_SERVER respectively. They are used to decide which
 cookies should be accepted and which should not be.
 See <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a> sections 3.3 and 7 for more detail.
 @since 1.6
 */
@protocol JavaNetCookiePolicy < NSObject, JavaObject >

/*!
 @brief This method is used to determine whether or not the specified cookie
 should be accepted.
 @param uri
 the URI to used to determine acceptability
 @param cookie
 the HttpCookie to be determined
 @return true if this cookie should be accepted; false otherwise
 */
- (jboolean)shouldAcceptWithJavaNetURI:(JavaNetURI *)uri
                 withJavaNetHttpCookie:(JavaNetHttpCookie *)cookie;

@end

@interface JavaNetCookiePolicy : NSObject

@end

J2OBJC_STATIC_INIT(JavaNetCookiePolicy)

FOUNDATION_EXPORT id<JavaNetCookiePolicy> JavaNetCookiePolicy_ACCEPT_ALL_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetCookiePolicy, ACCEPT_ALL_, id<JavaNetCookiePolicy>)

FOUNDATION_EXPORT id<JavaNetCookiePolicy> JavaNetCookiePolicy_ACCEPT_NONE_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetCookiePolicy, ACCEPT_NONE_, id<JavaNetCookiePolicy>)

FOUNDATION_EXPORT id<JavaNetCookiePolicy> JavaNetCookiePolicy_ACCEPT_ORIGINAL_SERVER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetCookiePolicy, ACCEPT_ORIGINAL_SERVER_, id<JavaNetCookiePolicy>)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookiePolicy)

#endif // _JavaNetCookiePolicy_H_
