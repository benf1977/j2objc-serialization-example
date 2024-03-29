//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Externalizable.java
//

#ifndef _JavaIoExternalizable_H_
#define _JavaIoExternalizable_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@protocol JavaIoObjectInput;
@protocol JavaIoObjectOutput;

/*!
 @brief Defines an interface for classes that want to be serializable, but have their
 own binary representation.
 */
@protocol JavaIoExternalizable < JavaIoSerializable, NSObject, JavaObject >

/*!
 @brief Reads the next object from the ObjectInput <code>input</code>.
 @param input
 the ObjectInput from which the next object is read.
 @throws IOException
 if an error occurs attempting to read from <code>input</code>.
 @throws ClassNotFoundException
 if the class of the instance being loaded cannot be found.
 */
- (void)readExternalWithJavaIoObjectInput:(id<JavaIoObjectInput>)input;

/*!
 @brief Writes the receiver to the ObjectOutput <code>output</code>.
 @param output
 the ObjectOutput to write the object to.
 @throws IOException
 if an error occurs attempting to write to <code>output</code>.
 */
- (void)writeExternalWithJavaIoObjectOutput:(id<JavaIoObjectOutput>)output;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoExternalizable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoExternalizable)

#endif // _JavaIoExternalizable_H_
