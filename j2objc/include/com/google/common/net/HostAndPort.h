//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/net/HostAndPort.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonNetHostAndPort_INCLUDE_ALL")
#if ComGoogleCommonNetHostAndPort_RESTRICT
#define ComGoogleCommonNetHostAndPort_INCLUDE_ALL 0
#else
#define ComGoogleCommonNetHostAndPort_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonNetHostAndPort_RESTRICT

#if !defined (_ComGoogleCommonNetHostAndPort_) && (ComGoogleCommonNetHostAndPort_INCLUDE_ALL || ComGoogleCommonNetHostAndPort_INCLUDE)
#define _ComGoogleCommonNetHostAndPort_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonNetHostAndPort : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)other;

+ (ComGoogleCommonNetHostAndPort *)fromHostWithNSString:(NSString *)host;

+ (ComGoogleCommonNetHostAndPort *)fromPartsWithNSString:(NSString *)host
                                                 withInt:(jint)port;

+ (ComGoogleCommonNetHostAndPort *)fromStringWithNSString:(NSString *)hostPortString;

- (NSString *)getHostText;

- (jint)getPort;

- (jint)getPortOrDefaultWithInt:(jint)defaultPort;

- (NSUInteger)hash;

- (jboolean)hasPort;

- (ComGoogleCommonNetHostAndPort *)requireBracketsForIPv6;

- (NSString *)description;

- (ComGoogleCommonNetHostAndPort *)withDefaultPortWithInt:(jint)defaultPort;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonNetHostAndPort)

FOUNDATION_EXPORT ComGoogleCommonNetHostAndPort *ComGoogleCommonNetHostAndPort_fromPartsWithNSString_withInt_(NSString *host, jint port);

FOUNDATION_EXPORT ComGoogleCommonNetHostAndPort *ComGoogleCommonNetHostAndPort_fromHostWithNSString_(NSString *host);

FOUNDATION_EXPORT ComGoogleCommonNetHostAndPort *ComGoogleCommonNetHostAndPort_fromStringWithNSString_(NSString *hostPortString);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetHostAndPort)

#endif

#pragma pop_macro("ComGoogleCommonNetHostAndPort_INCLUDE_ALL")
