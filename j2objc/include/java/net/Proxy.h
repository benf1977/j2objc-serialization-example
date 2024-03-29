//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Proxy.java
//

#ifndef _JavaNetProxy_H_
#define _JavaNetProxy_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

@class JavaNetProxy_TypeEnum;
@class JavaNetSocketAddress;

/*!
 @brief This class represents proxy server settings.
 A created instance of <code>Proxy</code>
  stores a type and an address and is immutable. There are three types
 of proxies:
 <ul>
 <li>DIRECT</li>
 <li>HTTP</li>
 <li>SOCKS</li></ul
 */
@interface JavaNetProxy : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>Proxy</code> instance.
 <code>SocketAddress</code> must NOT be
 <code>null</code> when <code>type</code> is either <code>Proxy.Type.HTTP</code> or
 <code>Proxy.Type.SOCKS</code>. To create a <code>Proxy</code> instance representing
 the proxy type <code>Proxy.Type.DIRECT</code>, use <code>Proxy.NO_PROXY</code>
 instead of this constructor.
 @param type
 the proxy type of this instance.
 @param sa
 the proxy address of this instance.
 @throws IllegalArgumentException
 if the parameter <code>type</code> is set to <code>Proxy.Type.DIRECT</code>
  or the value for <code>SocketAddress</code> is
 <code>null</code>.
 */
- (instancetype)initWithJavaNetProxy_TypeEnum:(JavaNetProxy_TypeEnum *)type
                     withJavaNetSocketAddress:(JavaNetSocketAddress *)sa;

/*!
 @brief Gets the address of this <code>Proxy</code> instance.
 @return the stored proxy address or <code>null</code> if the proxy type is
 <code>DIRECT</code>.
 */
- (JavaNetSocketAddress *)address;

/*!
 @brief Compares the specified <code>obj</code> to this <code>Proxy</code> instance and
 returns whether they are equal or not.
 The given object must be an
 instance of <code>Proxy</code> with the same address and the same type value
 to be equal.
 @param obj
 the object to compare with this instance.
 @return <code>true</code> if the given object represents the same <code>Proxy</code>
  as this instance, <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Gets the hashcode for this <code>Proxy</code> instance.
 @return the hashcode value for this Proxy instance.
 */
- (NSUInteger)hash;

/*!
 @brief Gets a textual representation of this <code>Proxy</code> instance.
 The string
 includes the two parts <code>type.toString()</code> and <code>address.toString()</code>
  if <code>address</code> is not <code>null</code>.
 @return the representing string of this proxy.
 */
- (NSString *)description;

/*!
 @brief Gets the type of this <code>Proxy</code> instance.
 @return the stored proxy type.
 */
- (JavaNetProxy_TypeEnum *)type;

@end

J2OBJC_STATIC_INIT(JavaNetProxy)

FOUNDATION_EXPORT JavaNetProxy *JavaNetProxy_NO_PROXY_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetProxy, NO_PROXY_, JavaNetProxy *)

FOUNDATION_EXPORT void JavaNetProxy_initWithJavaNetProxy_TypeEnum_withJavaNetSocketAddress_(JavaNetProxy *self, JavaNetProxy_TypeEnum *type, JavaNetSocketAddress *sa);

FOUNDATION_EXPORT JavaNetProxy *new_JavaNetProxy_initWithJavaNetProxy_TypeEnum_withJavaNetSocketAddress_(JavaNetProxy_TypeEnum *type, JavaNetSocketAddress *sa) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxy)

typedef NS_ENUM(NSUInteger, JavaNetProxy_Type) {
  JavaNetProxy_Type_DIRECT = 0,
  JavaNetProxy_Type_HTTP = 1,
  JavaNetProxy_Type_SOCKS = 2,
};

/*!
 @brief <code>Enum</code> class for the proxy type.
 Possible options are <code>DIRECT</code>
 , <code>HTTP</code> and <code>SOCKS</code>.
 */
@interface JavaNetProxy_TypeEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaNetProxy_TypeEnum_values();

+ (JavaNetProxy_TypeEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT JavaNetProxy_TypeEnum *JavaNetProxy_TypeEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaNetProxy_TypeEnum)

FOUNDATION_EXPORT JavaNetProxy_TypeEnum *JavaNetProxy_TypeEnum_values_[];

#define JavaNetProxy_TypeEnum_DIRECT JavaNetProxy_TypeEnum_values_[JavaNetProxy_Type_DIRECT]
J2OBJC_ENUM_CONSTANT_GETTER(JavaNetProxy_TypeEnum, DIRECT)

#define JavaNetProxy_TypeEnum_HTTP JavaNetProxy_TypeEnum_values_[JavaNetProxy_Type_HTTP]
J2OBJC_ENUM_CONSTANT_GETTER(JavaNetProxy_TypeEnum, HTTP)

#define JavaNetProxy_TypeEnum_SOCKS JavaNetProxy_TypeEnum_values_[JavaNetProxy_Type_SOCKS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaNetProxy_TypeEnum, SOCKS)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxy_TypeEnum)

#endif // _JavaNetProxy_H_
