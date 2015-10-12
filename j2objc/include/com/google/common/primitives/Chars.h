//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/primitives/Chars.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonPrimitivesChars_INCLUDE_ALL")
#if ComGoogleCommonPrimitivesChars_RESTRICT
#define ComGoogleCommonPrimitivesChars_INCLUDE_ALL 0
#else
#define ComGoogleCommonPrimitivesChars_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesChars_RESTRICT

#if !defined (_ComGoogleCommonPrimitivesChars_) && (ComGoogleCommonPrimitivesChars_INCLUDE_ALL || ComGoogleCommonPrimitivesChars_INCLUDE)
#define _ComGoogleCommonPrimitivesChars_

@class IOSByteArray;
@class IOSCharArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

#define ComGoogleCommonPrimitivesChars_BYTES 2

@interface ComGoogleCommonPrimitivesChars : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithCharArray:(IOSCharArray *)backingArray;

+ (jchar)checkedCastWithLong:(jlong)value;

+ (jint)compareWithChar:(jchar)a
               withChar:(jchar)b;

+ (IOSCharArray *)concatWithCharArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithCharArray:(IOSCharArray *)array
                         withChar:(jchar)target;

+ (IOSCharArray *)ensureCapacityWithCharArray:(IOSCharArray *)array
                                      withInt:(jint)minLength
                                      withInt:(jint)padding;

+ (jchar)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

+ (jchar)fromBytesWithByte:(jbyte)b1
                  withByte:(jbyte)b2;

+ (jint)hashCodeWithChar:(jchar)value;

+ (jint)indexOfWithCharArray:(IOSCharArray *)array
                    withChar:(jchar)target;

+ (jint)indexOfWithCharArray:(IOSCharArray *)array
               withCharArray:(IOSCharArray *)target;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withCharArray:(IOSCharArray *)array;

+ (jint)lastIndexOfWithCharArray:(IOSCharArray *)array
                        withChar:(jchar)target;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jchar)maxWithCharArray:(IOSCharArray *)array;

+ (jchar)minWithCharArray:(IOSCharArray *)array;

+ (jchar)saturatedCastWithLong:(jlong)value;

+ (IOSCharArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (IOSByteArray *)toByteArrayWithChar:(jchar)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesChars)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesChars, BYTES, jint)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_hashCodeWithChar_(jchar value);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_compareWithChar_withChar_(jchar a, jchar b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesChars_containsWithCharArray_withChar_(IOSCharArray *array, jchar target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_indexOfWithCharArray_withChar_(IOSCharArray *array, jchar target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_indexOfWithCharArray_withCharArray_(IOSCharArray *array, IOSCharArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesChars_lastIndexOfWithCharArray_withChar_(IOSCharArray *array, jchar target);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_minWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_maxWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_concatWithCharArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesChars_toByteArrayWithChar_(jchar value);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jchar ComGoogleCommonPrimitivesChars_fromBytesWithByte_withByte_(jbyte b1, jbyte b2);

FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_ensureCapacityWithCharArray_withInt_withInt_(IOSCharArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesChars_joinWithNSString_withCharArray_(NSString *separator, IOSCharArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesChars_lexicographicalComparator();

FOUNDATION_EXPORT IOSCharArray *ComGoogleCommonPrimitivesChars_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesChars_asListWithCharArray_(IOSCharArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesChars)

#endif

#pragma pop_macro("ComGoogleCommonPrimitivesChars_INCLUDE_ALL")