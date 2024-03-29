//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/UTFDataFormatException.java
//

#ifndef _JavaIoUTFDataFormatException_H_
#define _JavaIoUTFDataFormatException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

/*!
 @brief Signals that an incorrectly encoded UTF-8 string has been encountered, most
 likely while reading some <code>DataInputStream</code>.
 */
@interface JavaIoUTFDataFormatException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>UTFDataFormatException</code> with its stack trace
 filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>UTFDataFormatException</code> with its stack trace and
 detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoUTFDataFormatException)

FOUNDATION_EXPORT void JavaIoUTFDataFormatException_init(JavaIoUTFDataFormatException *self);

FOUNDATION_EXPORT JavaIoUTFDataFormatException *new_JavaIoUTFDataFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoUTFDataFormatException_initWithNSString_(JavaIoUTFDataFormatException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoUTFDataFormatException *new_JavaIoUTFDataFormatException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoUTFDataFormatException)

#endif // _JavaIoUTFDataFormatException_H_
