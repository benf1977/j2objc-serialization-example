//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookieStore.java
//

#ifndef _JavaNetCookieStore_H_
#define _JavaNetCookieStore_H_

#include "J2ObjC_header.h"

@class JavaNetHttpCookie;
@class JavaNetURI;
@protocol JavaUtilList;

/*!
 @brief A CookieStore object is a repository for cookies.
 CookieManager will store cookies of every incoming HTTP response into
 CookieStore, and retrieve cookies for every outgoing HTTP request.Expired
 HttpCookies should be removed from this store by themselves.
 @since 1.6
 */
@protocol JavaNetCookieStore < NSObject, JavaObject >

/*!
 @brief Saves a HTTP cookie to this store.
 This is called for every incoming HTTP
 response.
 A cookie may or may not has an associated URI. If not, the cookie's
 domain and path attribute will show cradleland. If there is an
 associated URI and no domain and path attribute are speicifed for the
 cookie, the given URI will indicate where this cookie comes from.
 If a cookie corresponding to the given URI already exists, then it is
 replaced with the new one.
 @param uri
 the uri associated with the specified cookie. A null value
 indicates the cookie is not associated with a URI
 @param cookie
 the cookie to be stored
 */
- (void)addWithJavaNetURI:(JavaNetURI *)uri
    withJavaNetHttpCookie:(JavaNetHttpCookie *)cookie;

/*!
 @brief Retrieves cookies that match the specified URI.
 Return not expired cookies.
 For every outgoing HTTP request, this method will be called.
 @param uri
 the uri this cookie associated with. If null, this cookie will
 not be associated with an URI
 @return an immutable list of HttpCookies, return empty list if no cookies
 match the given URI
 @throws NullPointerException
 if uri is null
 */
- (id<JavaUtilList>)getWithJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Get all cookies in cookie store which are not expired.
 @return an empty list if there's no http cookie in store, or an immutable
 list of cookies
 */
- (id<JavaUtilList>)getCookies;

/*!
 @brief Get a set of URIs, which is composed of associated URI with all the
 cookies in the store.
 @return zero-length list if no cookie in the store is associated with any
 URIs, otherwise an immutable list of URIs.
 */
- (id<JavaUtilList>)getURIs;

/*!
 @brief Remove the specified cookie from the store.
 @param uri
 the uri associated with the specified cookie. If the cookie is
 not associated with an URI when added, uri should be null;
 otherwise the uri should be non-null.
 @param cookie
 the cookie to be removed
 @return true if the specified cookie is contained in this store and
 removed successfully
 */
- (jboolean)removeWithJavaNetURI:(JavaNetURI *)uri
           withJavaNetHttpCookie:(JavaNetHttpCookie *)cookie;

/*!
 @brief Clear this cookie store.
 @return true if any cookies were removed as a result of this call.
 */
- (jboolean)removeAll;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieStore)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieStore)

#endif // _JavaNetCookieStore_H_
