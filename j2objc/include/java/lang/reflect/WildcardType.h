//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/WildcardType.java
//

#ifndef _JavaLangReflectWildcardType_H_
#define _JavaLangReflectWildcardType_H_

#include "J2ObjC_header.h"
#include "java/lang/reflect/Type.h"

@class IOSObjectArray;

/*!
 @brief A pattern type, such as the upper bounded wildcard <code>?
 extends Closeable</code>
  or the lower bounded wildcard <code>? super String</code>.
 <p>Although this interface permits an arbitrary number of upper and lower
 bounds, all wildcard types of Java language programs are in one of two forms:
 <ol>
 <li><strong>No lower bound and one upper bound.</strong> Such types are
 written like <code>? extends java.lang.Number</code>. When the upper bound is
 <code>java.lang.Object</code>, the <code>extends java.lang.Object</code> suffix is
 optional: <code>Set<?></code> is shorthand for <code>Set<? extends java.lang.Object></code>
 .
 <li><strong>One lower bound and an upper bound of <code>java.lang.Object</code>
 .</strong> Such types are written like <code>? super java.lang.String</code>
 .
 </ol>
 */
@protocol JavaLangReflectWildcardType < JavaLangReflectType, NSObject, JavaObject >

/*!
 @brief Returns the array of types that represent the upper bounds of this type.
 The default upper bound is <code>Object</code>.
 @return an array containing the upper bounds types
 @throws TypeNotPresentException
 if any of the bounds points to a missing type
 @throws MalformedParameterizedTypeException
 if any bound points to a type that cannot be instantiated for
 some reason
 */
- (IOSObjectArray *)getUpperBounds;

/*!
 @brief Returns the array of types that represent the lower bounds of this type.
 The default lower bound is <code>null</code>, in which case an empty array is
 returned. Since only one lower bound is allowed, the returned array's
 length will never exceed one.
 @return an array containing the lower bounds types
 @throws TypeNotPresentException
 if any of the bounds points to a missing type
 @throws MalformedParameterizedTypeException
 if any of the bounds points to a type that cannot be
 instantiated for some reason
 */
- (IOSObjectArray *)getLowerBounds;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectWildcardType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectWildcardType)

#endif // _JavaLangReflectWildcardType_H_
