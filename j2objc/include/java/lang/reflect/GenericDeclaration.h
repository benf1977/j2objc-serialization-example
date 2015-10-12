//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/GenericDeclaration.java
//

#ifndef _JavaLangReflectGenericDeclaration_H_
#define _JavaLangReflectGenericDeclaration_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;

/*!
 @brief Common interface for language constructs that declare type parameters.
 @since 1.5
 */
@protocol JavaLangReflectGenericDeclaration < NSObject, JavaObject >

/*!
 @brief Returns the declared type parameters in declaration order.
 If there are
 no type parameters, this method returns a zero length array.
 @return the declared type parameters in declaration order
 @throws GenericSignatureFormatError
 if the signature is malformed
 */
- (IOSObjectArray *)getTypeParameters;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectGenericDeclaration)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectGenericDeclaration)

#endif // _JavaLangReflectGenericDeclaration_H_
