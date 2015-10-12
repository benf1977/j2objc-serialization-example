//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectStreamClass.java
//

#ifndef _JavaIoObjectStreamClass_H_
#define _JavaIoObjectStreamClass_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaIoObjectStreamField;
@class JavaLangReflectConstructor;
@class JavaLangReflectField;
@class JavaLangReflectMethod;
@protocol JavaUtilList;

#define JavaIoObjectStreamClass_CONSTRUCTOR_IS_NOT_RESOLVED -1LL

/*!
 @brief Represents a descriptor for identifying a class during serialization and
 deserialization.
 Information contained in the descriptor includes the name
 and SUID of the class as well as field names and types. Information inherited
 from the superclasses is also taken into account.
 */
@interface JavaIoObjectStreamClass : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns the class (java.lang.Class) for this descriptor.
 @return the class in the local VM that this descriptor represents;
 <code>null</code> if there is no corresponding class.
 */
- (IOSClass *)forClass;

/*!
 @brief Gets a field descriptor of the class represented by this class
 descriptor.
 @param name
 the name of the desired field.
 @return the field identified by <code>name</code> or <code>null</code> if there is
 no such field.
 */
- (JavaIoObjectStreamField *)getFieldWithNSString:(NSString *)name;

/*!
 @brief Returns a collection of field descriptors for the serialized fields of
 the class represented by this class descriptor.
 @return an array of field descriptors or an array of length zero if there
 are no fields in this descriptor's class.
 */
- (IOSObjectArray *)getFields;

/*!
 @brief Returns the name of the class represented by this descriptor.
 @return the fully qualified name of the class this descriptor represents.
 */
- (NSString *)getName;

/*!
 @brief Returns the Serial Version User ID of the class represented by this
 descriptor.
 @return the SUID for the class represented by this descriptor.
 */
- (jlong)getSerialVersionUID;

/*!
 @brief Returns the descriptor for a serializable class.
 Returns null if the class doesn't implement <code>Serializable</code> or <code>Externalizable</code>.
 @param cl
 a java.lang.Class for which to obtain the corresponding
 descriptor
 @return the corresponding descriptor if the class is serializable or
 externalizable; null otherwise.
 */
+ (JavaIoObjectStreamClass *)lookupWithIOSClass:(IOSClass *)cl;

/*!
 @brief Returns the descriptor for any class, whether or not the class
 implements Serializable or Externalizable.
 @param cl
 a java.lang.Class for which to obtain the corresponding
 descriptor
 @return the descriptor
 @since 1.6
 */
+ (JavaIoObjectStreamClass *)lookupAnyWithIOSClass:(IOSClass *)cl;

/*!
 @brief Returns a string containing a concise, human-readable description of this
 descriptor.
 @return a printable representation of this descriptor.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Constructs a new instance of this class.
 */
- (instancetype)init;

/*!
 @brief Builds the collection of field descriptors for the receiver
 @param declaredFields
 collection of java.lang.reflect.Field for which to compute
 field descriptors
 */
- (void)buildFieldDescriptorsWithJavaLangReflectFieldArray:(IOSObjectArray *)declaredFields;

/*!
 @brief Returns the collection of field descriptors for the fields of the
 corresponding class
 @return the receiver's collection of declared fields for the class it
 represents
 */
- (IOSObjectArray *)fields;

/*!
 @brief Return the java.lang.reflect.Field <code>serialPersistentFields</code>
 if class <code>cl</code> implements it.
 Return null otherwise.
 @param cl
 a java.lang.Class which to test
 @return <code>java.lang.reflect.Field</code> if the class has
 serialPersistentFields <code>null</code> if the class does not
 have serialPersistentFields
 */
+ (JavaLangReflectField *)fieldSerialPersistentFieldsWithIOSClass:(IOSClass *)cl;

/*!
 @brief Return the java.lang.reflect.Method if class <code>cl</code> implements
 <code>methodName</code> .
 Return null otherwise.
 @param cl
 a java.lang.Class which to test
 @return <code>java.lang.reflect.Method</code> if the class implements
 writeReplace <code>null</code> if the class does not implement
 writeReplace
 */
+ (JavaLangReflectMethod *)findMethodWithIOSClass:(IOSClass *)cl
                                     withNSString:(NSString *)methodName;

/*!
 @brief Return the java.lang.reflect.Method if class <code>cl</code> implements
 private <code>methodName</code> .
 Return null otherwise.
 @param cl
 a java.lang.Class which to test
 @return <code>java.lang.reflect.Method</code> if the class implements
 writeReplace <code>null</code> if the class does not implement
 writeReplace
 */
+ (JavaLangReflectMethod *)findPrivateMethodWithIOSClass:(IOSClass *)cl
                                            withNSString:(NSString *)methodName
                                       withIOSClassArray:(IOSObjectArray *)param;

- (jlong)getConstructor;

/*!
 @brief Return a String representing the signature for a Constructor <code>c</code>.
 @param c
 a java.lang.reflect.Constructor for which to compute the
 signature
 @return the constructor's signature
 */
+ (NSString *)getConstructorSignatureWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)c;

/*!
 @brief Returns the flags for this descriptor, where possible combined values are
 ObjectStreamConstants.SC_WRITE_METHOD
 ObjectStreamConstants.SC_SERIALIZABLE
 ObjectStreamConstants.SC_EXTERNALIZABLE
 @return byte the receiver's flags for the class it represents
 */
- (jbyte)getFlags;

- (id<JavaUtilList>)getHierarchy;

/*!
 @brief Returns the collection of field descriptors for the input fields of the
 corresponding class
 @return the receiver's collection of input fields for the class it
 represents
 */
- (IOSObjectArray *)getLoadFields;

- (JavaLangReflectMethod *)getMethodReadObject;

- (JavaLangReflectMethod *)getMethodReadObjectNoData;

- (JavaLangReflectMethod *)getMethodReadResolve;

/*!
 @brief Return a String representing the signature for a method <code>m</code>.
 @param m
 a java.lang.reflect.Method for which to compute the signature
 @return the method's signature
 */
+ (NSString *)getMethodSignatureWithJavaLangReflectMethod:(JavaLangReflectMethod *)m;

- (JavaLangReflectMethod *)getMethodWriteObject;

- (JavaLangReflectMethod *)getMethodWriteReplace;

- (JavaLangReflectField *)getReflectionFieldWithJavaIoObjectStreamField:(JavaIoObjectStreamField *)osf;

/*!
 @brief Returns the descriptor (ObjectStreamClass) of the superclass of the class
 represented by the receiver.
 @return an ObjectStreamClass representing the superclass of the class
 represented by the receiver.
 */
- (JavaIoObjectStreamClass *)getSuperclass;

- (jboolean)hasMethodReadObject;

- (jboolean)hasMethodReadObjectNoData;

- (jboolean)hasMethodReadResolve;

- (jboolean)hasMethodWriteObject;

- (jboolean)hasMethodWriteReplace;

- (void)initPrivateFieldsWithJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)desc OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEnum;

- (jboolean)isExternalizable;

/*!
 @brief Return true if instances of class <code>cl</code> are Externalizable,
 false otherwise.
 @param cl
 a java.lang.Class which to test
 @return <code>true</code> if instances of the class are Externalizable
 <code>false</code> if instances of the class are not
 Externalizable
 */
+ (jboolean)isExternalizableWithIOSClass:(IOSClass *)cl;

/*!
 @brief Return true if the type code
 <code>typecode<code> describes a primitive type
 @param typecode a char describing the typecode
 @return <code>true</code> if the typecode represents a primitive type
 <code>false</code> if the typecode represents an Object type (including arrays)
 */
+ (jboolean)isPrimitiveTypeWithChar:(jchar)typecode;

- (jboolean)isProxy__;

- (jboolean)isSerializable;

/*!
 @brief Return true if instances of class <code>cl</code> are Serializable,
 false otherwise.
 @param cl
 a java.lang.Class which to test
 @return <code>true</code> if instances of the class are Serializable
 <code>false</code> if instances of the class are not
 Serializable
 */
+ (jboolean)isSerializableWithIOSClass:(IOSClass *)cl;

/*!
 @brief Return the descriptor (ObjectStreamClass) corresponding to the class
 <code>cl</code>.
 Returns an ObjectStreamClass even if instances of the
 class cannot be serialized
 @param cl
 a java.langClass for which to obtain the corresponding
 descriptor
 @return the corresponding descriptor
 */
+ (JavaIoObjectStreamClass *)lookupStreamClassWithIOSClass:(IOSClass *)cl;

/*!
 @brief Create and return a new instance of class 'instantiationClass'
 using JNI to call the constructor chosen by resolveConstructorClass.
 The returned instance may have uninitialized fields, including final fields.
 */
- (id)newInstanceWithIOSClass:(IOSClass *)instantiationClass OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Set the class (java.lang.Class) that the receiver represents
 @param c
 aClass, the new class that the receiver describes
 */
- (void)setClassWithIOSClass:(IOSClass *)c;

- (void)setConstructorWithLong:(jlong)newConstructor;

/*!
 @brief Set the collection of field descriptors for the fields of the
 corresponding class
 @param f
 ObjectStreamField[], the receiver's new collection of declared
 fields for the class it represents
 */
- (void)setFieldsWithJavaIoObjectStreamFieldArray:(IOSObjectArray *)f;

/*!
 @brief Set the flags for this descriptor, where possible combined values are
 ObjectStreamConstants.SC_WRITE_METHOD
 ObjectStreamConstants.SC_SERIALIZABLE
 ObjectStreamConstants.SC_EXTERNALIZABLE
 @param b
 byte, the receiver's new flags for the class it represents
 */
- (void)setFlagsWithByte:(jbyte)b;

/*!
 @brief Set the collection of field descriptors for the input fields of the
 corresponding class
 @param f
 ObjectStreamField[], the receiver's new collection of input
 fields for the class it represents
 */
- (void)setLoadFieldsWithJavaIoObjectStreamFieldArray:(IOSObjectArray *)f;

/*!
 @brief Set the name of the class represented by the receiver
 @param newName
 a String, the new fully qualified name of the class the
 receiver represents
 */
- (void)setNameWithNSString:(NSString *)newName;

/*!
 @brief Set the Serial Version User ID of the class represented by the receiver
 @param l
 a long, the new SUID for the class represented by the receiver
 */
- (void)setSerialVersionUIDWithLong:(jlong)l;

/*!
 @brief Set the descriptor for the superclass of the class described by the
 receiver
 @param c
 an ObjectStreamClass, the new ObjectStreamClass for the
 superclass of the class represented by the receiver
 */
- (void)setSuperclassWithJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)c;

@end

J2OBJC_STATIC_INIT(JavaIoObjectStreamClass)

J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamClass, CONSTRUCTOR_IS_NOT_RESOLVED, jlong)

FOUNDATION_EXPORT IOSObjectArray *JavaIoObjectStreamClass_NO_FIELDS_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamClass, NO_FIELDS_, IOSObjectArray *)

FOUNDATION_EXPORT IOSClass *JavaIoObjectStreamClass_ARRAY_OF_FIELDS_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamClass, ARRAY_OF_FIELDS_, IOSClass *)

FOUNDATION_EXPORT IOSClass *JavaIoObjectStreamClass_STRINGCLASS_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamClass, STRINGCLASS_, IOSClass *)

FOUNDATION_EXPORT IOSClass *JavaIoObjectStreamClass_CLASSCLASS_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamClass, CLASSCLASS_, IOSClass *)

FOUNDATION_EXPORT IOSClass *JavaIoObjectStreamClass_OBJECTSTREAMCLASSCLASS_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectStreamClass, OBJECTSTREAMCLASSCLASS_, IOSClass *)

FOUNDATION_EXPORT void JavaIoObjectStreamClass_init(JavaIoObjectStreamClass *self);

FOUNDATION_EXPORT JavaIoObjectStreamClass *new_JavaIoObjectStreamClass_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectField *JavaIoObjectStreamClass_fieldSerialPersistentFieldsWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT NSString *JavaIoObjectStreamClass_getConstructorSignatureWithJavaLangReflectConstructor_(JavaLangReflectConstructor *c);

FOUNDATION_EXPORT NSString *JavaIoObjectStreamClass_getMethodSignatureWithJavaLangReflectMethod_(JavaLangReflectMethod *m);

FOUNDATION_EXPORT jboolean JavaIoObjectStreamClass_isExternalizableWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT jboolean JavaIoObjectStreamClass_isPrimitiveTypeWithChar_(jchar typecode);

FOUNDATION_EXPORT jboolean JavaIoObjectStreamClass_isSerializableWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT JavaIoObjectStreamClass *JavaIoObjectStreamClass_lookupWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT JavaIoObjectStreamClass *JavaIoObjectStreamClass_lookupAnyWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT JavaIoObjectStreamClass *JavaIoObjectStreamClass_lookupStreamClassWithIOSClass_(IOSClass *cl);

FOUNDATION_EXPORT JavaLangReflectMethod *JavaIoObjectStreamClass_findMethodWithIOSClass_withNSString_(IOSClass *cl, NSString *methodName);

FOUNDATION_EXPORT JavaLangReflectMethod *JavaIoObjectStreamClass_findPrivateMethodWithIOSClass_withNSString_withIOSClassArray_(IOSClass *cl, NSString *methodName, IOSObjectArray *param);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamClass)

#endif // _JavaIoObjectStreamClass_H_
