//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/primitives/Shorts.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonPrimitivesShorts_INCLUDE_ALL")
#if ComGoogleCommonPrimitivesShorts_RESTRICT
#define ComGoogleCommonPrimitivesShorts_INCLUDE_ALL 0
#else
#define ComGoogleCommonPrimitivesShorts_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesShorts_RESTRICT

#if !defined (_ComGoogleCommonPrimitivesShorts_) && (ComGoogleCommonPrimitivesShorts_INCLUDE_ALL || ComGoogleCommonPrimitivesShorts_INCLUDE)
#define _ComGoogleCommonPrimitivesShorts_

@class ComGoogleCommonBaseConverter;
@class IOSByteArray;
@class IOSObjectArray;
@class IOSShortArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

#define ComGoogleCommonPrimitivesShorts_BYTES 2
#define ComGoogleCommonPrimitivesShorts_MAX_POWER_OF_TWO 16384

@interface ComGoogleCommonPrimitivesShorts : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithShortArray:(IOSShortArray *)backingArray;

+ (jshort)checkedCastWithLong:(jlong)value;

+ (jint)compareWithShort:(jshort)a
               withShort:(jshort)b;

+ (IOSShortArray *)concatWithShortArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithShortArray:(IOSShortArray *)array
                         withShort:(jshort)target;

+ (IOSShortArray *)ensureCapacityWithShortArray:(IOSShortArray *)array
                                        withInt:(jint)minLength
                                        withInt:(jint)padding;

+ (jshort)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

+ (jshort)fromBytesWithByte:(jbyte)b1
                   withByte:(jbyte)b2;

+ (jint)hashCodeWithShort:(jshort)value;

+ (jint)indexOfWithShortArray:(IOSShortArray *)array
                    withShort:(jshort)target;

+ (jint)indexOfWithShortArray:(IOSShortArray *)array
               withShortArray:(IOSShortArray *)target;

+ (NSString *)joinWithNSString:(NSString *)separator
                withShortArray:(IOSShortArray *)array;

+ (jint)lastIndexOfWithShortArray:(IOSShortArray *)array
                        withShort:(jshort)target;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jshort)maxWithShortArray:(IOSShortArray *)array;

+ (jshort)minWithShortArray:(IOSShortArray *)array;

+ (jshort)saturatedCastWithLong:(jlong)value;

+ (ComGoogleCommonBaseConverter *)stringConverter;

+ (IOSShortArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (IOSByteArray *)toByteArrayWithShort:(jshort)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesShorts)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesShorts, BYTES, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesShorts, MAX_POWER_OF_TWO, jshort)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_hashCodeWithShort_(jshort value);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_compareWithShort_withShort_(jshort a, jshort b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesShorts_containsWithShortArray_withShort_(IOSShortArray *array, jshort target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_indexOfWithShortArray_withShort_(IOSShortArray *array, jshort target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_indexOfWithShortArray_withShortArray_(IOSShortArray *array, IOSShortArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesShorts_lastIndexOfWithShortArray_withShort_(IOSShortArray *array, jshort target);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_minWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_maxWithShortArray_(IOSShortArray *array);

FOUNDATION_EXPORT IOSShortArray *ComGoogleCommonPrimitivesShorts_concatWithShortArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesShorts_toByteArrayWithShort_(jshort value);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jshort ComGoogleCommonPrimitivesShorts_fromBytesWithByte_withByte_(jbyte b1, jbyte b2);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesShorts_stringConverter();

FOUNDATION_EXPORT IOSShortArray *ComGoogleCommonPrimitivesShorts_ensureCapacityWithShortArray_withInt_withInt_(IOSShortArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesShorts_joinWithNSString_withShortArray_(NSString *separator, IOSShortArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesShorts_lexicographicalComparator();

FOUNDATION_EXPORT IOSShortArray *ComGoogleCommonPrimitivesShorts_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesShorts_asListWithShortArray_(IOSShortArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesShorts)

#endif

#pragma pop_macro("ComGoogleCommonPrimitivesShorts_INCLUDE_ALL")
