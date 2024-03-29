//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/Enums.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseEnums_INCLUDE_ALL")
#if ComGoogleCommonBaseEnums_RESTRICT
#define ComGoogleCommonBaseEnums_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseEnums_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseEnums_RESTRICT

#if !defined (_ComGoogleCommonBaseEnums_) && (ComGoogleCommonBaseEnums_INCLUDE_ALL || ComGoogleCommonBaseEnums_INCLUDE)
#define _ComGoogleCommonBaseEnums_

@class ComGoogleCommonBaseConverter;
@class ComGoogleCommonBaseOptional;
@class IOSClass;
@class JavaLangEnum;
@class JavaLangReflectField;
@protocol JavaUtilMap;

@interface ComGoogleCommonBaseEnums : NSObject

#pragma mark Public

+ (JavaLangReflectField *)getFieldWithJavaLangEnum:(JavaLangEnum *)enumValue;

+ (ComGoogleCommonBaseOptional *)getIfPresentWithIOSClass:(IOSClass *)enumClass
                                             withNSString:(NSString *)value;

+ (ComGoogleCommonBaseConverter *)stringConverterWithIOSClass:(IOSClass *)enumClass;

#pragma mark Package-Private

+ (id<JavaUtilMap>)getEnumConstantsWithIOSClass:(IOSClass *)enumClass;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseEnums)

FOUNDATION_EXPORT JavaLangReflectField *ComGoogleCommonBaseEnums_getFieldWithJavaLangEnum_(JavaLangEnum *enumValue);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseEnums_getIfPresentWithIOSClass_withNSString_(IOSClass *enumClass, NSString *value);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonBaseEnums_getEnumConstantsWithIOSClass_(IOSClass *enumClass);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseEnums_stringConverterWithIOSClass_(IOSClass *enumClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseEnums)

#endif

#pragma pop_macro("ComGoogleCommonBaseEnums_INCLUDE_ALL")
