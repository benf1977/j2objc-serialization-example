//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/PatternFilenameFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL")
#if ComGoogleCommonIoPatternFilenameFilter_RESTRICT
#define ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoPatternFilenameFilter_RESTRICT

#if !defined (_ComGoogleCommonIoPatternFilenameFilter_) && (ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL || ComGoogleCommonIoPatternFilenameFilter_INCLUDE)
#define _ComGoogleCommonIoPatternFilenameFilter_

#define JavaIoFilenameFilter_RESTRICT 1
#define JavaIoFilenameFilter_INCLUDE 1
#include "java/io/FilenameFilter.h"

@class JavaIoFile;
@class JavaUtilRegexPattern;

@interface ComGoogleCommonIoPatternFilenameFilter : NSObject < JavaIoFilenameFilter >

#pragma mark Public

- (instancetype)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (instancetype)initWithNSString:(NSString *)patternStr;

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)fileName;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoPatternFilenameFilter)

FOUNDATION_EXPORT void ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(ComGoogleCommonIoPatternFilenameFilter *self, NSString *patternStr);

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *new_ComGoogleCommonIoPatternFilenameFilter_initWithNSString_(NSString *patternStr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(ComGoogleCommonIoPatternFilenameFilter *self, JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT ComGoogleCommonIoPatternFilenameFilter *new_ComGoogleCommonIoPatternFilenameFilter_initWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoPatternFilenameFilter)

#endif

#pragma pop_macro("ComGoogleCommonIoPatternFilenameFilter_INCLUDE_ALL")
