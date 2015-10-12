//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/EmulatedFields.java
//

#ifndef _JavaIoEmulatedFields_H_
#define _JavaIoEmulatedFields_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaIoObjectStreamField;

/*!
 @brief An EmulatedFields is an object that represents a set of emulated fields for
 an object being dumped or loaded.
 It allows objects to be dumped with a shape
 different than the fields they were declared to have.
 */
@interface JavaIoEmulatedFields : NSObject

#pragma mark Public

/*!
 @brief Constructs a new instance of EmulatedFields.
 @param fields
 an array of ObjectStreamFields, which describe the fields to
 be emulated (names, types, etc).
 @param declared
 an array of ObjectStreamFields, which describe the declared
 fields.
 */
- (instancetype)initWithJavaIoObjectStreamFieldArray:(IOSObjectArray *)fields
                    withJavaIoObjectStreamFieldArray:(IOSObjectArray *)declared;

/*!
 @brief Returns <code>true</code> indicating the field called <code>name</code> has not had
 a value explicitly assigned and that it still holds a default value for
 its type, or <code>false</code> indicating that the field named has been
 assigned a value explicitly.
 @param name
 the name of the field to test.
 @return <code>true</code> if <code>name</code> still holds its default value,
 <code>false</code> otherwise
 @throws IllegalArgumentException
 if <code>name</code> is <code>null</code>
 */
- (jboolean)defaultedWithNSString:(NSString *)name;

/*!
 @brief Finds and returns the boolean value of a given field named <code>name</code> in
 the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jboolean)getWithNSString:(NSString *)name
                withBoolean:(jboolean)defaultValue;

/*!
 @brief Finds and returns the byte value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jbyte)getWithNSString:(NSString *)name
                withByte:(jbyte)defaultValue;

/*!
 @brief Finds and returns the char value of a given field named <code>name</code> in the
 receiver.
 If the field has not been assigned any value yet, the default
 value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jchar)getWithNSString:(NSString *)name
                withChar:(jchar)defaultValue;

/*!
 @brief Finds and returns the double value of a given field named <code>name</code>
 in the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jdouble)getWithNSString:(NSString *)name
                withDouble:(jdouble)defaultValue;

/*!
 @brief Finds and returns the float value of a given field named <code>name</code> in
 the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jfloat)getWithNSString:(NSString *)name
                withFloat:(jfloat)defaultValue;

/*!
 @brief Finds and returns the int value of a given field named <code>name</code> in the
 receiver.
 If the field has not been assigned any value yet, the default
 value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jint)getWithNSString:(NSString *)name
                withInt:(jint)defaultValue;

/*!
 @brief Finds and returns the long value of a given field named <code>name</code> in the
 receiver.
 If the field has not been assigned any value yet, the default
 value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jlong)getWithNSString:(NSString *)name
                withLong:(jlong)defaultValue;

/*!
 @brief Finds and returns the Object value of a given field named <code>name</code> in
 the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (id)getWithNSString:(NSString *)name
               withId:(id)defaultValue;

/*!
 @brief Finds and returns the short value of a given field named <code>name</code> in
 the receiver.
 If the field has not been assigned any value yet, the
 default value <code>defaultValue</code> is returned instead.
 @param name
 the name of the field to find.
 @param defaultValue
 return value in case the field has not been assigned to yet.
 @return the value of the given field if it has been assigned, the default
 value otherwise.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (jshort)getWithNSString:(NSString *)name
                withShort:(jshort)defaultValue;

/*!
 @brief Find and set the boolean value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
            withBoolean:(jboolean)value;

/*!
 @brief Find and set the byte value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
               withByte:(jbyte)value;

/*!
 @brief Find and set the char value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
               withChar:(jchar)value;

/*!
 @brief Find and set the double value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
             withDouble:(jdouble)value;

/*!
 @brief Find and set the float value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
              withFloat:(jfloat)value;

/*!
 @brief Find and set the int value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
                withInt:(jint)value;

/*!
 @brief Find and set the long value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
               withLong:(jlong)value;

/*!
 @brief Find and set the Object value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
                 withId:(id)value;

/*!
 @brief Find and set the short value of a given field named <code>name</code> in the
 receiver.
 @param name
 the name of the field to set.
 @param value
 new value for the field.
 @throws IllegalArgumentException
 if the corresponding field can not be found.
 */
- (void)putWithNSString:(NSString *)name
              withShort:(jshort)value;

/*!
 @brief Return the array of ObjectSlot the receiver represents.
 @return array of ObjectSlot the receiver represents.
 */
- (IOSObjectArray *)slots;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEmulatedFields)

FOUNDATION_EXPORT void JavaIoEmulatedFields_initWithJavaIoObjectStreamFieldArray_withJavaIoObjectStreamFieldArray_(JavaIoEmulatedFields *self, IOSObjectArray *fields, IOSObjectArray *declared);

FOUNDATION_EXPORT JavaIoEmulatedFields *new_JavaIoEmulatedFields_initWithJavaIoObjectStreamFieldArray_withJavaIoObjectStreamFieldArray_(IOSObjectArray *fields, IOSObjectArray *declared) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEmulatedFields)

@interface JavaIoEmulatedFields_ObjectSlot : NSObject {
 @public
  JavaIoObjectStreamField *field_;
  id fieldValue_;
  jboolean defaulted_;
}

#pragma mark Public

/*!
 @brief Returns the descriptor for this emulated field.
 @return the field descriptor
 */
- (JavaIoObjectStreamField *)getField;

/*!
 @brief Returns the value held by this emulated field.
 @return the field value
 */
- (id)getFieldValue;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEmulatedFields_ObjectSlot)

J2OBJC_FIELD_SETTER(JavaIoEmulatedFields_ObjectSlot, field_, JavaIoObjectStreamField *)
J2OBJC_FIELD_SETTER(JavaIoEmulatedFields_ObjectSlot, fieldValue_, id)

FOUNDATION_EXPORT void JavaIoEmulatedFields_ObjectSlot_init(JavaIoEmulatedFields_ObjectSlot *self);

FOUNDATION_EXPORT JavaIoEmulatedFields_ObjectSlot *new_JavaIoEmulatedFields_ObjectSlot_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEmulatedFields_ObjectSlot)

#endif // _JavaIoEmulatedFields_H_
