//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URL.java
//

#ifndef _JavaNetURL_H_
#define _JavaNetURL_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaNetProxy;
@class JavaNetURI;
@class JavaNetURLConnection;
@class JavaNetURLStreamHandler;
@protocol JavaNetURLStreamHandlerFactory;

/*!
 @brief A Uniform Resource Locator that identifies the location of an Internet
 resource as specified by <a href="http://www.ietf.org/rfc/rfc1738.txt">RFC
 1738</a>.
 <h3>Parts of a URL</h3>
 A URL is composed of many parts. This class can both parse URL strings into
 parts and compose URL strings from parts. For example, consider the parts of
 this URL:
 <code>http://username:password@@host:8080/directory/file?query#ref</code>:
 <table>
 <tr><th>Component</th><th>Example value</th><th>Also known as</th></tr>
 <tr><td><code>Protocol</code></td><td><code>http</code></td><td>scheme</td></tr>
 <tr><td><code>Authority</code></td><td><code>username:password@@host:8080</code></td><td></td></tr>
 <tr><td><code>User Info</code></td><td><code>username:password</code></td><td></td></tr>
 <tr><td><code>Host</code></td><td><code>host</code></td><td></td></tr>
 <tr><td><code>Port</code></td><td><code>8080</code></td><td></td></tr>
 <tr><td><code>File</code></td><td><code>/directory/file?query</code></td><td></td></tr>
 <tr><td><code>Path</code></td><td><code>/directory/file</code></td><td></td></tr>
 <tr><td><code>Query</code></td><td><code>query</code></td><td></td></tr>
 <tr><td><code>Ref</code></td><td><code>ref</code></td><td>fragment</td></tr>
 </table>
 <h3>Supported Protocols</h3>
 This class may be used to construct URLs with the following protocols:
 <ul>
 <li><strong>file</strong>: read files from the local filesystem.
 <li><strong>ftp</strong>: <a href="http://www.ietf.org/rfc/rfc959.txt">File
 Transfer Protocol</a>
 <li><strong>http</strong>: <a href="http://www.ietf.org/rfc/rfc2616.txt">Hypertext
 Transfer Protocol</a>
 <li><strong>https</strong>: <a href="http://www.ietf.org/rfc/rfc2818.txt">HTTP
 over TLS</a>
 </ul>
 In general, attempts to create URLs with any other protocol will fail with a
 <code>MalformedURLException</code>. Applications may install handlers for other
 schemes using <code>setURLStreamHandlerFactory</code> or with the <code>java.protocol.handler.pkgs</code>
  system property.
 <p>The <code>URI</code> class can be used to manipulate URLs of any protocol.
 */
@interface JavaNetURL : NSObject < JavaIoSerializable > {
 @public
  JavaNetURLStreamHandler *streamHandler_;
}

#pragma mark Public

/*!
 @brief Creates a new URL instance by parsing <code>spec</code>.
 @throws MalformedURLException if <code>spec</code> could not be parsed as a
 URL.
 */
- (instancetype)initWithNSString:(NSString *)spec;

/*!
 @brief Creates a new URL of the given component parts.
 The URL uses the
 protocol's default port.
 @param host the host name or IP address of the new URL.
 @param port the port, or <code>-1</code> for the protocol's default port.
 @param file the name of the resource.
 @throws MalformedURLException if the combination of all arguments do not
 represent a valid URL or if the protocol is invalid.
 */
- (instancetype)initWithNSString:(NSString *)protocol
                    withNSString:(NSString *)host
                         withInt:(jint)port
                    withNSString:(NSString *)file;

/*!
 @brief Creates a new URL of the given component parts.
 The URL uses the
 protocol's default port.
 @param host the host name or IP address of the new URL.
 @param port the port, or <code>-1</code> for the protocol's default port.
 @param file the name of the resource.
 @param handler the stream handler for this URL, or null for the
 protocol's default stream handler.
 @throws MalformedURLException if the combination of all arguments do not
 represent a valid URL or if the protocol is invalid.
 */
- (instancetype)initWithNSString:(NSString *)protocol
                    withNSString:(NSString *)host
                         withInt:(jint)port
                    withNSString:(NSString *)file
     withJavaNetURLStreamHandler:(JavaNetURLStreamHandler *)handler;

/*!
 @brief Creates a new URL of the given component parts.
 The URL uses the
 protocol's default port.
 @throws MalformedURLException if the combination of all arguments do not
 represent a valid URL or if the protocol is invalid.
 */
- (instancetype)initWithNSString:(NSString *)protocol
                    withNSString:(NSString *)host
                    withNSString:(NSString *)file;

/*!
 @brief Creates a new URL by resolving <code>spec</code> relative to <code>context</code>.
 @param context the URL to which <code>spec</code> is relative, or null for
 no context in which case <code>spec</code> must be an absolute URL.
 @throws MalformedURLException if <code>spec</code> could not be parsed as a
 URL or has an unsupported protocol.
 */
- (instancetype)initWithJavaNetURL:(JavaNetURL *)context
                      withNSString:(NSString *)spec;

/*!
 @brief Creates a new URL by resolving <code>spec</code> relative to <code>context</code>.
 @param context the URL to which <code>spec</code> is relative, or null for
 no context in which case <code>spec</code> must be an absolute URL.
 @param handler the stream handler for this URL, or null for the
 protocol's default stream handler.
 @throws MalformedURLException if the given string <code>spec</code> could not
 be parsed as a URL or an invalid protocol has been found.
 */
- (instancetype)initWithJavaNetURL:(JavaNetURL *)context
                      withNSString:(NSString *)spec
       withJavaNetURLStreamHandler:(JavaNetURLStreamHandler *)handler;

/*!
 @brief Returns true if this URL equals <code>o</code>.
 URLs are equal if they have
 the same protocol, host, port, file, and reference.
 <h3>Network I/O Warning</h3>
 <p>Some implementations of URL.equals() resolve host names over the
 network. This is problematic:
 <ul>
 <li><strong>The network may be slow.</strong> Many classes, including
 core collections like <code>Map</code> and <code>Set</code>
  expect that <code>equals</code> and <code>hashCode</code> will return quickly.
 By violating this assumption, this method posed potential performance
 problems.
 <li><strong>Equal IP addresses do not imply equal content.</strong>
 Virtual hosting permits unrelated sites to share an IP address. This
 method could report two otherwise unrelated URLs to be equal because
 they're hosted on the same server.</li>
 <li><strong>The network many not be available.</strong> Two URLs could be
 equal when a network is available and unequal otherwise.</li>
 <li><strong>The network may change.</strong> The IP address for a given
 host name varies by network and over time. This is problematic for mobile
 devices. Two URLs could be equal on some networks and unequal on
 others.</li>
 </ul>
 <p>This problem is fixed in Android 4.0 (Ice Cream Sandwich). In that
 release, URLs are only equal if their host names are equal (ignoring
 case).
 */
- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the authority part of this URL, or null if this URL has no
 authority.
 */
- (NSString *)getAuthority;

/*!
 @brief Returns the content of the resource which is referred by this URL.
 By
 default this returns an <code>InputStream</code>, or null if the content type
 of the response is unknown.
 */
- (id)getContent;

/*!
 @brief Equivalent to <code>openConnection().getContent(types)</code>.
 */
- (id)getContentWithIOSClassArray:(IOSObjectArray *)types;

/*!
 @brief Returns the default port number of the protocol used by this URL.
 If no
 default port is defined by the protocol or the <code>URLStreamHandler</code>,
 <code>-1</code> will be returned.
 */
- (jint)getDefaultPort;

/*!
  
 */
- (jint)getEffectivePort;

/*!
 @brief Returns the file of this URL.
 */
- (NSString *)getFile;

/*!
 @brief Returns the host name or IP address of this URL.
 */
- (NSString *)getHost;

/*!
 @brief Returns the path part of this URL.
 */
- (NSString *)getPath;

/*!
 @brief Returns the port number of this URL or <code>-1</code> if this URL has no
 explicit port.
 <p>If this URL has no explicit port, connections opened using this URL
 will use its <code>default port</code>.
 */
- (jint)getPort;

/*!
 @brief Returns the protocol of this URL like "http" or "file".
 This is also
 known as the scheme. The returned string is lower case.
 */
- (NSString *)getProtocol;

/*!
 @brief Returns the query part of this URL, or null if this URL has no query.
 */
- (NSString *)getQuery;

/*!
 @brief Returns the value of the reference part of this URL, or null if this URL
 has no reference part.
 This is also known as the fragment.
 */
- (NSString *)getRef;

/*!
 @brief Returns the user info of this URL, or null if this URL has no user info.
 */
- (NSString *)getUserInfo;

- (NSUInteger)hash;

/*!
 @brief Returns a new connection to the resource referred to by this URL.
 @throws IOException if an error occurs while opening the connection.
 */
- (JavaNetURLConnection *)openConnection;

/*!
 @brief Returns a new connection to the resource referred to by this URL.
 @param proxy the proxy through which the connection will be established.
 @throws IOException if an I/O error occurs while opening the connection.
 @throws IllegalArgumentException if the argument proxy is null or of is
 an invalid type.
 @throws UnsupportedOperationException if the protocol handler does not
 support opening connections through proxies.
 */
- (JavaNetURLConnection *)openConnectionWithJavaNetProxy:(JavaNetProxy *)proxy;

/*!
 @brief Equivalent to <code>openConnection().getInputStream(types)</code>.
 */
- (JavaIoInputStream *)openStream;

/*!
 @brief Returns true if this URL refers to the same resource as <code>otherURL</code>.
 All URL components except the reference field are compared.
 */
- (jboolean)sameFileWithJavaNetURL:(JavaNetURL *)otherURL;

/*!
 @brief Sets the stream handler factory for this VM.
 @throws Error if a URLStreamHandlerFactory has already been installed
 for the current VM.
 */
+ (void)setURLStreamHandlerFactoryWithJavaNetURLStreamHandlerFactory:(id<JavaNetURLStreamHandlerFactory>)factory;

/*!
 @brief Returns a string containing a concise, human-readable representation of
 this URL.
 */
- (NSString *)toExternalForm;

/*!
 @brief Returns a string containing a concise, human-readable representation of
 this URL.
 The returned string is the same as the result of the method
 <code>toExternalForm()</code>.
 */
- (NSString *)description;

/*!
 @brief Returns the URI equivalent to this URL.
 @throws URISyntaxException if this URL cannot be converted into a URI.
 */
- (JavaNetURI *)toURI;

/*!
 @brief Encodes this URL to the equivalent URI after escaping characters that are
 not permitted by URI.
 */
- (JavaNetURI *)toURILenient;

#pragma mark Protected

/*!
 @brief Sets the properties of this URL using the provided arguments.
 Only a
 <code>URLStreamHandler</code> can use this method to set fields of the
 existing URL instance. A URL is generally constant.
 */
- (void)setWithNSString:(NSString *)protocol
           withNSString:(NSString *)host
                withInt:(jint)port
           withNSString:(NSString *)file
           withNSString:(NSString *)ref;

/*!
 @brief Sets the properties of this URL using the provided arguments.
 Only a
 <code>URLStreamHandler</code> can use this method to set fields of the
 existing URL instance. A URL is generally constant.
 */
- (void)setWithNSString:(NSString *)protocol
           withNSString:(NSString *)host
                withInt:(jint)port
           withNSString:(NSString *)authority
           withNSString:(NSString *)userInfo
           withNSString:(NSString *)path
           withNSString:(NSString *)query
           withNSString:(NSString *)ref;

#pragma mark Package-Private

- (void)fixURLWithBoolean:(jboolean)fixHost;

/*!
 @brief Sets the receiver's stream handler to one which is appropriate for its
 protocol.
 <p>Note that this will overwrite any existing stream handler with the new
 one. Senders must check if the streamHandler is null before calling the
 method if they do not want this behavior (a speed optimization).
 @throws MalformedURLException if no reasonable handler is available.
 */
- (void)setupStreamHandler;

@end

J2OBJC_STATIC_INIT(JavaNetURL)

J2OBJC_FIELD_SETTER(JavaNetURL, streamHandler_, JavaNetURLStreamHandler *)

FOUNDATION_EXPORT void JavaNetURL_setURLStreamHandlerFactoryWithJavaNetURLStreamHandlerFactory_(id<JavaNetURLStreamHandlerFactory> factory);

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_(JavaNetURL *self, NSString *spec);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_(NSString *spec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURL_initWithJavaNetURL_withNSString_(JavaNetURL *self, JavaNetURL *context, NSString *spec);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithJavaNetURL_withNSString_(JavaNetURL *context, NSString *spec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURL_initWithJavaNetURL_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *self, JavaNetURL *context, NSString *spec, JavaNetURLStreamHandler *handler);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithJavaNetURL_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *context, NSString *spec, JavaNetURLStreamHandler *handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_withNSString_withNSString_(JavaNetURL *self, NSString *protocol, NSString *host, NSString *file);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_withNSString_withNSString_(NSString *protocol, NSString *host, NSString *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_withNSString_withInt_withNSString_(JavaNetURL *self, NSString *protocol, NSString *host, jint port, NSString *file);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_withNSString_withInt_withNSString_(NSString *protocol, NSString *host, jint port, NSString *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURL_initWithNSString_withNSString_withInt_withNSString_withJavaNetURLStreamHandler_(JavaNetURL *self, NSString *protocol, NSString *host, jint port, NSString *file, JavaNetURLStreamHandler *handler);

FOUNDATION_EXPORT JavaNetURL *new_JavaNetURL_initWithNSString_withNSString_withInt_withNSString_withJavaNetURLStreamHandler_(NSString *protocol, NSString *host, jint port, NSString *file, JavaNetURLStreamHandler *handler) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURL)

#endif // _JavaNetURL_H_
