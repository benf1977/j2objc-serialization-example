//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookieManager.java
//

#ifndef _JavaNetCookieManager_H_
#define _JavaNetCookieManager_H_

#include "J2ObjC_header.h"
#include "java/net/CookieHandler.h"

@class JavaNetURI;
@protocol JavaNetCookiePolicy;
@protocol JavaNetCookieStore;
@protocol JavaUtilMap;

/*!
 @brief This class provides a concrete implementation of CookieHandler.
 It separates
 the storage of cookies from the policy which decides to accept or deny
 cookies. The constructor can have two arguments: a CookieStore and a
 CookiePolicy. The former is in charge of cookie storage and the latter makes
 decision on acceptance/rejection.
 CookieHandler is in the center of cookie management. User can make use of
 CookieHandler.setDefault to set a CookieManager as the default one used.
 CookieManager.put uses CookiePolicy.shouldAccept to decide whether to put
 some cookies into a cookie store. Three built-in CookiePolicy is defined:
 ACCEPT_ALL, ACCEPT_NONE and ACCEPT_ORIGINAL_SERVER. Users can also customize
 the policy by implementing CookiePolicy. Any accepted HTTP cookie is stored
 in CookieStore and users can also have their own implementation. Up to now,
 Only add(URI, HttpCookie) and get(URI) are used by CookieManager. Other
 methods in this class may probably be used in a more complicated
 implementation.
 There are many ways to customize user's own HTTP cookie management:
 First, call CookieHandler.setDefault to set a new CookieHandler
 implementation. Second, call CookieHandler.getDefault to use CookieManager.
 The CookiePolicy and CookieStore used are customized. Third, use the
 customized CookiePolicy and the CookieStore.
 This implementation conforms to <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a> section 3.3.
 @since 1.6
 */
@interface JavaNetCookieManager : JavaNetCookieHandler

#pragma mark Public

/*!
 @brief Constructs a new cookie manager.
 The invocation of this constructor is the same as the invocation of
 CookieManager(null, null).
 */
- (instancetype)init;

/*!
 @brief Constructs a new cookie manager using a specified cookie store and a
 cookie policy.
 @param store
 a CookieStore to be used by cookie manager. The manager will
 use a default one if the arg is null.
 @param cookiePolicy
 a CookiePolicy to be used by cookie manager
 ACCEPT_ORIGINAL_SERVER will be used if the arg is null.
 */
- (instancetype)initWithJavaNetCookieStore:(id<JavaNetCookieStore>)store
                   withJavaNetCookiePolicy:(id<JavaNetCookiePolicy>)cookiePolicy;

/*!
 @brief Searches and gets all cookies in the cache by the specified uri in the
 request header.
 @param uri
 the specified uri to search for
 @param requestHeaders
 a list of request headers
 @return a map that record all such cookies, the map is unchangeable
 @throws IOException
 if some error of I/O operation occurs
 */
- (id<JavaUtilMap>)getWithJavaNetURI:(JavaNetURI *)uri
                     withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

/*!
 @brief Gets current cookie store.
 @return the cookie store currently used by cookie manager.
 */
- (id<JavaNetCookieStore>)getCookieStore;

/*!
 @brief Sets cookies according to uri and responseHeaders
 @param uri
 the specified uri
 @param responseHeaders
 a list of request headers
 @throws IOException
 if some error of I/O operation occurs
 */
- (void)putWithJavaNetURI:(JavaNetURI *)uri
          withJavaUtilMap:(id<JavaUtilMap>)responseHeaders;

/*!
 @brief Sets the cookie policy of this cookie manager.
 ACCEPT_ORIGINAL_SERVER is the default policy for CookieManager.
 @param cookiePolicy
 the cookie policy. if null, the original policy will not be
 changed.
 */
- (void)setCookiePolicyWithJavaNetCookiePolicy:(id<JavaNetCookiePolicy>)cookiePolicy;

#pragma mark Package-Private

/*!
 @brief Returns a cookie-safe path by truncating everything after the last "/".
 When request path like "/foo/bar.html" yields a cookie, that cookie's
 default path is "/foo/".
 */
+ (NSString *)pathToCookiePathWithNSString:(NSString *)path;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieManager)

FOUNDATION_EXPORT void JavaNetCookieManager_init(JavaNetCookieManager *self);

FOUNDATION_EXPORT JavaNetCookieManager *new_JavaNetCookieManager_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetCookieManager_initWithJavaNetCookieStore_withJavaNetCookiePolicy_(JavaNetCookieManager *self, id<JavaNetCookieStore> store, id<JavaNetCookiePolicy> cookiePolicy);

FOUNDATION_EXPORT JavaNetCookieManager *new_JavaNetCookieManager_initWithJavaNetCookieStore_withJavaNetCookiePolicy_(id<JavaNetCookieStore> store, id<JavaNetCookiePolicy> cookiePolicy) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *JavaNetCookieManager_pathToCookiePathWithNSString_(NSString *path);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieManager)

#endif // _JavaNetCookieManager_H_
