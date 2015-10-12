//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/Splitter.java
//

#ifndef _JavaUtilRegexSplitter_H_
#define _JavaUtilRegexSplitter_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaUtilRegexPattern;

/*!
 @brief Used to make <code>String.split</code> fast (and to help <code>Pattern.split</code> too).
 */
@interface JavaUtilRegexSplitter : NSObject

#pragma mark Public

/*!
 @brief Returns a result equivalent to <code>s.split(separator, limit)</code> if it's able
 to compute it more cheaply than ICU, or null if the caller should fall back to
 using ICU.
 */
+ (IOSObjectArray *)fastSplitWithNSString:(NSString *)re
                             withNSString:(NSString *)input
                                  withInt:(jint)limit;

+ (IOSObjectArray *)splitWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                                     withNSString:(NSString *)re
                                     withNSString:(NSString *)input
                                          withInt:(jint)limit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexSplitter)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilRegexSplitter_fastSplitWithNSString_withNSString_withInt_(NSString *re, NSString *input, jint limit);

FOUNDATION_EXPORT IOSObjectArray *JavaUtilRegexSplitter_splitWithJavaUtilRegexPattern_withNSString_withNSString_withInt_(JavaUtilRegexPattern *pattern, NSString *re, NSString *input, jint limit);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexSplitter)

#endif // _JavaUtilRegexSplitter_H_
