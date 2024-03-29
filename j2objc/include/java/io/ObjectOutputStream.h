//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectOutputStream.java
//

#ifndef _JavaIoObjectOutputStream_H_
#define _JavaIoObjectOutputStream_H_

#include "J2ObjC_header.h"
#include "java/io/ObjectOutput.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/OutputStream.h"

@class IOSByteArray;
@class IOSClass;
@class JavaIoObjectOutputStream_PutField;
@class JavaIoObjectStreamClass;

/*!
 @brief A specialized <code>OutputStream</code> that is able to write (serialize) Java
 objects as well as primitive data types (int, byte, char etc.).
 The data can
 later be loaded using an ObjectInputStream.
 */
@interface JavaIoObjectOutputStream : JavaIoOutputStream < JavaIoObjectOutput, JavaIoObjectStreamConstants >

#pragma mark Public

/*!
 @brief Constructs a new ObjectOutputStream that writes to the OutputStream
 <code>output</code>.
 @param output
 the non-null OutputStream to filter writes on.
 @throws IOException
 if an error occurs while writing the object stream
 header
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)output;

/*!
 @brief Closes this stream.
 Any buffered data is flushed. This implementation
 closes the target stream.
 @throws IOException
 if an error occurs while closing this stream.
 */
- (void)close;

/*!
 @brief Default method to write objects to this stream.
 Serializable fields
 defined in the object's class and superclasses are written to the output
 stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 @throws NotActiveException
 if this method is not called from <code>writeObject()</code>.
 */
- (void)defaultWriteObject;

/*!
 @brief Writes buffered data to the target stream and calls the <code>flush</code>
 method of the target stream.
 @throws IOException
 if an error occurs while writing to or flushing the output
 stream.
 */
- (void)flush;

/*!
 @brief Gets this stream's <code>PutField</code> object.
 This object provides access
 to the persistent fields that are eventually written to the output
 stream. It is used to transfer the values from the fields of the object
 that is currently being written to the persistent fields.
 @return the PutField object from which persistent fields can be accessed
 by name.
 @throws IOException
 if an I/O error occurs.
 @throws NotActiveException
 if this method is not called from <code>writeObject()</code>.
 */
- (JavaIoObjectOutputStream_PutField *)putFields;

/*!
 @brief Resets the state of this stream.
 A marker is written to the stream, so
 that the corresponding input stream will also perform a reset at the same
 point. Objects previously written are no longer remembered, so they will
 be written again (instead of a cyclical reference) if found in the object
 graph.
 @throws IOException
 if <code>reset()</code> is called during the serialization of an
 object.
 */
- (void)reset;

/*!
 @brief Sets the specified protocol version to be used by this stream.
 @param version_
 the protocol version to be used. Use a <code>PROTOCOL_VERSION_x</code>
  constant from <code>java.io.ObjectStreamConstants</code>
 .
 @throws IllegalArgumentException
 if an invalid <code>version</code> is specified.
 @throws IOException
 if an I/O error occurs.
 */
- (void)useProtocolVersionWithInt:(jint)version_;

/*!
 @brief Writes <code>count</code> bytes from the byte array <code>buffer</code> starting at
 offset <code>index</code> to the target stream.
 Blocks until all bytes are
 written.
 @param buffer
 the buffer to write.
 @param offset
 the index of the first byte in <code>buffer</code> to write.
 @param length
 the number of bytes from <code>buffer</code> to write to the output
 stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)length;

/*!
 @brief Writes a single byte to the target stream.
 Only the least significant
 byte of the integer <code>value</code> is written to the stream. Blocks until
 the byte is actually written.
 @param value
 the byte to write.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeWithInt:(jint)value;

/*!
 @brief Writes a boolean to the target stream.
 @param value
 the boolean value to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeBooleanWithBoolean:(jboolean)value;

/*!
 @brief Writes a byte (8 bit) to the target stream.
 @param value
 the byte to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeByteWithInt:(jint)value;

/*!
 @brief Writes the string <code>value</code> as a sequence of bytes to the target
 stream.
 Only the least significant byte of each character in the string
 is written.
 @param value
 the string to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeBytesWithNSString:(NSString *)value;

/*!
 @brief Writes a character (16 bit) to the target stream.
 @param value
 the character to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeCharWithInt:(jint)value;

/*!
 @brief Writes the string <code>value</code> as a sequence of characters to the target
 stream.
 @param value
 the string to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeCharsWithNSString:(NSString *)value;

/*!
 @brief Writes a double (64 bit) to the target stream.
 @param value
 the double to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeDoubleWithDouble:(jdouble)value;

/*!
 @brief Writes the fields of the object currently being written to the target
 stream.
 The field values are buffered in the currently active <code>PutField</code>
  object, which can be accessed by calling <code>putFields()</code>.
 @throws IOException
 if an error occurs while writing to the target stream.
 @throws NotActiveException
 if there are no fields to write to the target stream.
 */
- (void)writeFields;

/*!
 @brief Writes a float (32 bit) to the target stream.
 @param value
 the float to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeFloatWithFloat:(jfloat)value;

/*!
 @brief Writes an integer (32 bit) to the target stream.
 @param value
 the integer to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeIntWithInt:(jint)value;

/*!
 @brief Writes a long (64 bit) to the target stream.
 @param value
 the long to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeLongWithLong:(jlong)value;

/*!
 @brief Writes an object to the target stream.
 @param object
 the object to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeObjectWithId:(id)object;

/*!
 @brief Writes a short (16 bit) to the target stream.
 @param value
 the short to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeShortWithInt:(jint)value;

/*!
 @brief Writes an unshared object to the target stream.
 This method is identical
 to <code>writeObject</code>, except that it always writes a new object to the
 stream versus the use of back-referencing for identical objects by
 <code>writeObject</code>.
 @param object
 the object to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeUnsharedWithId:(id)object;

/*!
 @brief Writes a string encoded with <code>modified UTF-8</code> to the
 target stream.
 @param value
 the string to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeUTFWithNSString:(NSString *)value;

#pragma mark Protected

/*!
 @brief Constructs a new <code>ObjectOutputStream</code>.
 This default constructor can
 be used by subclasses that do not want to use the public constructor if
 it allocates unneeded data.
 @throws IOException
 if an error occurs when creating this stream.
 */
- (instancetype)init;

/*!
 @brief Writes optional information for class <code>aClass</code> to the output
 stream.
 This optional data can be read when deserializing the class
 descriptor (ObjectStreamClass) for this class from an input stream. By
 default, no extra data is saved.
 @param aClass
 the class to annotate.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)annotateClassWithIOSClass:(IOSClass *)aClass;

/*!
 @brief Writes optional information for a proxy class to the target stream.
 This
 optional data can be read when deserializing the proxy class from an
 input stream. By default, no extra data is saved.
 @param aClass
 the proxy class to annotate.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)annotateProxyClassWithIOSClass:(IOSClass *)aClass;

/*!
 @brief Writes buffered data to the target stream.
 This is similar to <code>flush</code>
  but the flush is not propagated to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)drain;

/*!
 @brief Enables object replacement for this stream.
 By default this is not
 enabled. Only trusted subclasses (loaded with system class loader) are
 allowed to change this status.
 @param enable
 <code>true</code> to enable object replacement; <code>false</code> to
 disable it.
 @return the previous setting.
 */
- (jboolean)enableReplaceObjectWithBoolean:(jboolean)enable;

/*!
 @brief Allows trusted subclasses to substitute the specified original <code>object</code>
  with a new object.
 Object substitution has to be activated first
 with calling <code>enableReplaceObject(true)</code>. This implementation just
 returns <code>object</code>.
 @param object
 the original object for which a replacement may be defined.
 @return the replacement object for <code>object</code>.
 @throws IOException
 if any I/O error occurs while creating the replacement
 object.
 */
- (id)replaceObjectWithId:(id)object;

/*!
 @brief Writes a class descriptor to the target stream.
 @param classDesc
 the class descriptor to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeClassDescriptorWithJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)classDesc;

/*!
 @brief Method to be overridden by subclasses to write <code>object</code> to the
 target stream.
 @param object
 the object to write to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeObjectOverrideWithId:(id)object;

/*!
 @brief Writes the <code>ObjectOutputStream</code> header to the target stream.
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeStreamHeader;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectOutputStream)

FOUNDATION_EXPORT void JavaIoObjectOutputStream_init(JavaIoObjectOutputStream *self);

FOUNDATION_EXPORT JavaIoObjectOutputStream *new_JavaIoObjectOutputStream_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoObjectOutputStream_initWithJavaIoOutputStream_(JavaIoObjectOutputStream *self, JavaIoOutputStream *output);

FOUNDATION_EXPORT JavaIoObjectOutputStream *new_JavaIoObjectOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *output) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectOutputStream)

/*!
 @brief PutField is an inner class to provide access to the persistent fields
 that are written to the target stream.
 */
@interface JavaIoObjectOutputStream_PutField : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Puts the value of the boolean field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
            withBoolean:(jboolean)value;

/*!
 @brief Puts the value of the byte field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
               withByte:(jbyte)value;

/*!
 @brief Puts the value of the character field identified by <code>name</code> to
 the persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
               withChar:(jchar)value;

/*!
 @brief Puts the value of the double field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
             withDouble:(jdouble)value;

/*!
 @brief Puts the value of the float field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
              withFloat:(jfloat)value;

/*!
 @brief Puts the value of the integer field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
                withInt:(jint)value;

/*!
 @brief Puts the value of the long field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
               withLong:(jlong)value;

/*!
 @brief Puts the value of the Object field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
                 withId:(id)value;

/*!
 @brief Puts the value of the short field identified by <code>name</code> to the
 persistent field.
 @param name
 the name of the field to serialize.
 @param value
 the value that is put to the persistent field.
 */
- (void)putWithNSString:(NSString *)name
              withShort:(jshort)value;

/*!
 @brief Writes the fields to the target stream <code>out</code>.
 @param outArg
 the target stream
 @throws IOException
 if an error occurs while writing to the target stream.
 */
- (void)writeWithJavaIoObjectOutput:(id<JavaIoObjectOutput>)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectOutputStream_PutField)

FOUNDATION_EXPORT void JavaIoObjectOutputStream_PutField_init(JavaIoObjectOutputStream_PutField *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectOutputStream_PutField)

#endif // _JavaIoObjectOutputStream_H_
