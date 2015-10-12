//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/DataFormatException.java
//

#ifndef _JavaUtilZipDataFormatException_H_
#define _JavaUtilZipDataFormatException_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

/*!
 @brief <code>DataFormatException</code> is used to indicate an error in the format of a
 particular data stream which is to be uncompressed.
 */
@interface JavaUtilZipDataFormatException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>DataFormatException</code> instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>DataFormatException</code> instance with the specified
 message.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDataFormatException)

FOUNDATION_EXPORT void JavaUtilZipDataFormatException_init(JavaUtilZipDataFormatException *self);

FOUNDATION_EXPORT JavaUtilZipDataFormatException *new_JavaUtilZipDataFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipDataFormatException_initWithNSString_(JavaUtilZipDataFormatException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilZipDataFormatException *new_JavaUtilZipDataFormatException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDataFormatException)

#endif // _JavaUtilZipDataFormatException_H_
