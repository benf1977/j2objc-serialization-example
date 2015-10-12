//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/awt/font/NumericShaper.java
//

#ifndef _JavaAwtFontNumericShaper_H_
#define _JavaAwtFontNumericShaper_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSCharArray;

/*!
 @author Ilya S. Okomin
 @version $Revision$
 */

#define JavaAwtFontNumericShaper_EUROPEAN 1
#define JavaAwtFontNumericShaper_ARABIC 2
#define JavaAwtFontNumericShaper_EASTERN_ARABIC 4
#define JavaAwtFontNumericShaper_DEVANAGARI 8
#define JavaAwtFontNumericShaper_BENGALI 16
#define JavaAwtFontNumericShaper_GURMUKHI 32
#define JavaAwtFontNumericShaper_GUJARATI 64
#define JavaAwtFontNumericShaper_ORIYA 128
#define JavaAwtFontNumericShaper_TAMIL 256
#define JavaAwtFontNumericShaper_TELUGU 512
#define JavaAwtFontNumericShaper_KANNADA 1024
#define JavaAwtFontNumericShaper_MALAYALAM 2048
#define JavaAwtFontNumericShaper_THAI 4096
#define JavaAwtFontNumericShaper_LAO 8192
#define JavaAwtFontNumericShaper_TIBETAN 16384
#define JavaAwtFontNumericShaper_MYANMAR 32768
#define JavaAwtFontNumericShaper_ETHIOPIC 65536
#define JavaAwtFontNumericShaper_KHMER 131072
#define JavaAwtFontNumericShaper_MONGOLIAN 262144
#define JavaAwtFontNumericShaper_ALL_RANGES 524287

/*!
 @brief The Class NumericShaper provides methods to convert latin character codes
 to unicode character codes.
 For tables of the character codes used,
 see <a href="http://www.unicode.org/Public/UNIDATA/">unicode.org</a>.
 */
@interface JavaAwtFontNumericShaper : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

/*!
 @brief Gets the NumericShaper for the specified unicode ranges.
 The OR logical operation should be used for multiple ranges:
 NumericShaper.DEVANAGARI | NumericShaper.BENGALI.
 The NumericShaper returned by this method is contextual
 in that it supports multiple character ranges, depending
 on the context.
 @param ranges the unicode ranges.
 @return the NumericShaper for the specified ranges.
 */
+ (JavaAwtFontNumericShaper *)getContextualShaperWithInt:(jint)ranges;

/*!
 @brief Gets the NumericShaper for the specified unicode ranges
 and default unicode range.
 The defaultContext parameter
 is used as the starting context (which indicates the
 language/script being used). The OR logical operation
 should be used for multiple ranges:
 NumericShaper.DEVANAGARI | NumericShaper.BENGALI.
 The NumericShaper returned by this method is contextual
 in that it supports multiple character ranges, depending
 on the context.
 @param ranges the unicode ranges.
 @param defaultContext the default, starting context.
 @return the NumericShaper for the specified ranges.
 */
+ (JavaAwtFontNumericShaper *)getContextualShaperWithInt:(jint)ranges
                                                 withInt:(jint)defaultContext;

/*!
 @brief Gets the masks for all of the ranges supported by this NumericShaper,
 packed into an int value using the logical OR logical operation
 for multiple ranges:
 NumericShaper.DEVANAGARI | NumericShaper.BENGALI.
 @return all ranges of this NumericShaper.
 */
- (jint)getRanges;

/*!
 @brief Gets a NumericShaper for the specified unicode range.
 The NumericShaper supports only a single range and
 hence is not contextual.
 @param singleRange the specified unicode single range.
 @return the NumericShaper for the specified unicode range.
 */
+ (JavaAwtFontNumericShaper *)getShaperWithInt:(jint)singleRange;

- (NSUInteger)hash;

/*!
 @brief Checks if this NumericShaper is contextual (supporting
 multiple script ranges) or not.
 @return true, if this NumericShaper is contextual, false otherwise.
 */
- (jboolean)isContextual;

/*!
 @brief Transforms the encoding of the text, starting from the character
 at index start and transforming count characters.
 @param text the text to be shaped.
 @param start the start offset of the text.
 @param count the number of characters to be shaped.
 */
- (void)shapeWithCharArray:(IOSCharArray *)text
                   withInt:(jint)start
                   withInt:(jint)count;

/*!
 @brief Transforms the encoding of the text, starting from the character
 at index start and transforming count characters,
 using the specified context.
 @param text the text to be shaped.
 @param start the start offset of the text.
 @param count the number of characters to be shaped.
 @param context the context to be used for shaping.
 */
- (void)shapeWithCharArray:(IOSCharArray *)text
                   withInt:(jint)start
                   withInt:(jint)count
                   withInt:(jint)context;

- (NSString *)description;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaAwtFontNumericShaper)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, EUROPEAN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, ARABIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, EASTERN_ARABIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, DEVANAGARI, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, BENGALI, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, GURMUKHI, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, GUJARATI, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, ORIYA, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, TAMIL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, TELUGU, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, KANNADA, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, MALAYALAM, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, THAI, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, LAO, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, TIBETAN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, MYANMAR, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, ETHIOPIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, KHMER, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, MONGOLIAN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaAwtFontNumericShaper, ALL_RANGES, jint)

FOUNDATION_EXPORT JavaAwtFontNumericShaper *JavaAwtFontNumericShaper_getContextualShaperWithInt_withInt_(jint ranges, jint defaultContext);

FOUNDATION_EXPORT JavaAwtFontNumericShaper *JavaAwtFontNumericShaper_getContextualShaperWithInt_(jint ranges);

FOUNDATION_EXPORT JavaAwtFontNumericShaper *JavaAwtFontNumericShaper_getShaperWithInt_(jint singleRange);

J2OBJC_TYPE_LITERAL_HEADER(JavaAwtFontNumericShaper)

#endif // _JavaAwtFontNumericShaper_H_
