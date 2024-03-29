//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ResponseCache.java
//

#ifndef _JavaNetResponseCache_H_
#define _JavaNetResponseCache_H_

#include "J2ObjC_header.h"

@class JavaNetCacheRequest;
@class JavaNetCacheResponse;
@class JavaNetURI;
@class JavaNetURLConnection;
@protocol JavaUtilMap;

/*!
 @brief Caches <code>URLConnection</code> responses.
 <p>The system's default cache can be set using <code>setDefault</code>.
 If <code>URLConnection.getUseCaches</code> returns true, <code>URLConnection</code> will use the
 default response cache, if one has been set.
 <p>Although <code>URLConnection</code> will always call <code>put</code>, the specific
 <code>ResponseCache</code> implementation gets to decide what will actually be cached,
 and for how long.
 */
@interface JavaNetResponseCache : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns the cached response corresponding to the given request.
 @param uri
 the request URI.
 @param requestMethod
 the request method.
 @param requestHeaders
 a map of request headers.
 @return the <code>CacheResponse</code> object if the request is available in the cache
 or <code>null</code> otherwise.
 @throws IOException
 if an I/O error occurs while getting the cached data.
 @throws IllegalArgumentException
 if any one of the parameters is set to <code>null</code>.
 */
- (JavaNetCacheResponse *)getWithJavaNetURI:(JavaNetURI *)uri
                               withNSString:(NSString *)requestMethod
                            withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

/*!
 @brief Returns the system's default response cache, or null.
 */
+ (JavaNetResponseCache *)getDefault;

/*!
 @brief Allows the protocol handler to cache data after retrieving resources.
 The
 <code>ResponseCache</code> decides whether the resource data should be cached
 or not. If so, this method returns a <code>CacheRequest</code> to write the
 resource data to. Otherwise, this method returns <code>null</code>.
 @param uri
 the reference to the requested resource.
 @param connection
 the connection to fetch the response.
 @return a CacheRequest object with a WriteableByteChannel if the resource
 has to be cached, <code>null</code> otherwise.
 @throws IOException
 if an I/O error occurs while adding the resource.
 @throws IllegalArgumentException
 if any one of the parameters is set to <code>null</code>.
 */
- (JavaNetCacheRequest *)putWithJavaNetURI:(JavaNetURI *)uri
                  withJavaNetURLConnection:(JavaNetURLConnection *)connection;

/*!
 @brief Sets the system's default response cache.
 Use null to remove the response cache.
 */
+ (void)setDefaultWithJavaNetResponseCache:(JavaNetResponseCache *)responseCache;

@end

J2OBJC_STATIC_INIT(JavaNetResponseCache)

FOUNDATION_EXPORT JavaNetResponseCache *JavaNetResponseCache_getDefault();

FOUNDATION_EXPORT void JavaNetResponseCache_setDefaultWithJavaNetResponseCache_(JavaNetResponseCache *responseCache);

FOUNDATION_EXPORT void JavaNetResponseCache_init(JavaNetResponseCache *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetResponseCache)

#endif // _JavaNetResponseCache_H_
