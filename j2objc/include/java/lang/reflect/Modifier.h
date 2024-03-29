//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Modifier.java
//

#ifndef _JavaLangReflectModifier_H_
#define _JavaLangReflectModifier_H_

#include "J2ObjC_header.h"

#define JavaLangReflectModifier_PUBLIC 1
#define JavaLangReflectModifier_PRIVATE 2
#define JavaLangReflectModifier_PROTECTED 4
#define JavaLangReflectModifier_STATIC 8
#define JavaLangReflectModifier_FINAL 16
#define JavaLangReflectModifier_SYNCHRONIZED 32
#define JavaLangReflectModifier_VOLATILE 64
#define JavaLangReflectModifier_TRANSIENT 128
#define JavaLangReflectModifier_NATIVE 256
#define JavaLangReflectModifier_INTERFACE 512
#define JavaLangReflectModifier_ABSTRACT 1024
#define JavaLangReflectModifier_STRICT 2048
#define JavaLangReflectModifier_BRIDGE 64
#define JavaLangReflectModifier_VARARGS 128
#define JavaLangReflectModifier_SYNTHETIC 4096
#define JavaLangReflectModifier_ANNOTATION 8192
#define JavaLangReflectModifier_ENUM 16384

/*!
 @brief This class provides static methods to decode class and member modifiers.
 */
@interface JavaLangReflectModifier : NSObject

#pragma mark Public

/*!
 @brief Constructs a new <code>Modifier</code> instance.
 */
- (instancetype)init;

/*!
 @brief Returns a mask of all the modifiers that may be applied to classes.
 @since 1.7
  1.7
 */
+ (jint)classModifiers;

/*!
 @brief Returns a mask of all the modifiers that may be applied to constructors.
 @since 1.7
  1.7
 */
+ (jint)constructorModifiers;

/*!
 @brief Returns a mask of all the modifiers that may be applied to fields.
 @since 1.7
  1.7
 */
+ (jint)fieldModifiers;

/*!
 @brief Returns a mask of all the modifiers that may be applied to interfaces.
 @since 1.7
  1.7
 */
+ (jint)interfaceModifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>abstract</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>abstract</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isAbstractWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>final</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>final</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isFinalWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>interface</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>interface</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isInterfaceWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>native</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>native</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isNativeWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>private</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>private</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isPrivateWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>protected</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>protected</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isProtectedWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>public</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>public</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isPublicWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>static</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>static</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isStaticWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>strict</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>strict</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isStrictWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>synchronized</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>synchronized</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isSynchronizedWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>transient</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>transient</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isTransientWithInt:(jint)modifiers;

/*!
 @brief Indicates whether or not the specified modifiers contain the <code>volatile</code>
  modifier.
 @param modifiers
 the modifiers to test
 @return <code>true</code> if the specified modifiers contain the <code>volatile</code>
  modifier, <code>false</code> otherwise
 */
+ (jboolean)isVolatileWithInt:(jint)modifiers;

/*!
 @brief Returns a mask of all the modifiers that may be applied to methods.
 @since 1.7
  1.7
 */
+ (jint)methodModifiers;

/*!
 @brief Returns a string containing the string representation of all modifiers
 present in the specified modifiers.
 Modifiers appear in the order
 specified by the Java Language Specification:
 <code>public private protected abstract static final transient volatile native synchronized interface strict</code>
 @param modifiers
 the modifiers to print
 @return a printable representation of the modifiers
 */
+ (NSString *)toStringWithInt:(jint)modifiers;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectModifier)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, PUBLIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, PRIVATE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, PROTECTED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, STATIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, FINAL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, SYNCHRONIZED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, VOLATILE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, TRANSIENT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, NATIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, INTERFACE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, ABSTRACT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, STRICT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, BRIDGE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, VARARGS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, SYNTHETIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, ANNOTATION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectModifier, ENUM, jint)

FOUNDATION_EXPORT void JavaLangReflectModifier_init(JavaLangReflectModifier *self);

FOUNDATION_EXPORT JavaLangReflectModifier *new_JavaLangReflectModifier_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint JavaLangReflectModifier_classModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_constructorModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_fieldModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_interfaceModifiers();

FOUNDATION_EXPORT jint JavaLangReflectModifier_methodModifiers();

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isAbstractWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isFinalWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isInterfaceWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isNativeWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isPrivateWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isProtectedWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isPublicWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isStaticWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isStrictWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isSynchronizedWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isTransientWithInt_(jint modifiers);

FOUNDATION_EXPORT jboolean JavaLangReflectModifier_isVolatileWithInt_(jint modifiers);

FOUNDATION_EXPORT NSString *JavaLangReflectModifier_toStringWithInt_(jint modifiers);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectModifier)

#endif // _JavaLangReflectModifier_H_
