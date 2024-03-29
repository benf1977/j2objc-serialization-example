//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/FormatFlagsConversionMismatchException.java
//

#ifndef _JavaUtilFormatFlagsConversionMismatchException_H_
#define _JavaUtilFormatFlagsConversionMismatchException_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/IllegalFormatException.h"

/*!
 @brief A <code>FormatFlagsConversionMismatchException</code> will be thrown if a
 conversion and the flags are incompatible.
 */
@interface JavaUtilFormatFlagsConversionMismatchException : JavaUtilIllegalFormatException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>FormatFlagsConversionMismatchException</code> with the
 flags and conversion specified.
 @param f
 the flags.
 @param c
 the conversion.
 */
- (instancetype)initWithNSString:(NSString *)f
                        withChar:(jchar)c;

/*!
 @brief Returns the incompatible conversion.
 @return the incompatible conversion.
 */
- (jchar)getConversion;

/*!
 @brief Returns the incompatible format flag.
 @return the incompatible format flag.
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatFlagsConversionMismatchException)

FOUNDATION_EXPORT void JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(JavaUtilFormatFlagsConversionMismatchException *self, NSString *f, jchar c);

FOUNDATION_EXPORT JavaUtilFormatFlagsConversionMismatchException *new_JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(NSString *f, jchar c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatFlagsConversionMismatchException)

#endif // _JavaUtilFormatFlagsConversionMismatchException_H_
