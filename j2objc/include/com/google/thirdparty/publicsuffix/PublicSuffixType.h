//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/thirdparty/publicsuffix/PublicSuffixType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleThirdpartyPublicsuffixPublicSuffixType_INCLUDE_ALL")
#if ComGoogleThirdpartyPublicsuffixPublicSuffixType_RESTRICT
#define ComGoogleThirdpartyPublicsuffixPublicSuffixType_INCLUDE_ALL 0
#else
#define ComGoogleThirdpartyPublicsuffixPublicSuffixType_INCLUDE_ALL 1
#endif
#undef ComGoogleThirdpartyPublicsuffixPublicSuffixType_RESTRICT

#if !defined (_ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_) && (ComGoogleThirdpartyPublicsuffixPublicSuffixType_INCLUDE_ALL || ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_INCLUDE)
#define _ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, ComGoogleThirdpartyPublicsuffixPublicSuffixType) {
  ComGoogleThirdpartyPublicsuffixPublicSuffixType_PRIVATE = 0,
  ComGoogleThirdpartyPublicsuffixPublicSuffixType_ICANN = 1,
};

@interface ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *)fromCodeWithChar:(jchar)code;

+ (ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *)fromIsPrivateWithBoolean:(jboolean)isPrivate;

- (jchar)getInnerNodeCode;

- (jchar)getLeafNodeCode;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_values();

+ (ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum)

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_values_[];

#define ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_PRIVATE ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_values_[ComGoogleThirdpartyPublicsuffixPublicSuffixType_PRIVATE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum, PRIVATE)

#define ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_ICANN ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_values_[ComGoogleThirdpartyPublicsuffixPublicSuffixType_ICANN]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum, ICANN)

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_fromCodeWithChar_(jchar code);

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum *ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum_fromIsPrivateWithBoolean_(jboolean isPrivate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleThirdpartyPublicsuffixPublicSuffixTypeEnum)

#endif

#pragma pop_macro("ComGoogleThirdpartyPublicsuffixPublicSuffixType_INCLUDE_ALL")
