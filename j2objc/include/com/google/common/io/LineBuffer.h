//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/LineBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoLineBuffer_INCLUDE_ALL")
#if ComGoogleCommonIoLineBuffer_RESTRICT
#define ComGoogleCommonIoLineBuffer_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoLineBuffer_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoLineBuffer_RESTRICT

#if !defined (_ComGoogleCommonIoLineBuffer_) && (ComGoogleCommonIoLineBuffer_INCLUDE_ALL || ComGoogleCommonIoLineBuffer_INCLUDE)
#define _ComGoogleCommonIoLineBuffer_

@class IOSCharArray;

@interface ComGoogleCommonIoLineBuffer : NSObject

#pragma mark Protected

- (void)addWithCharArray:(IOSCharArray *)cbuf
                 withInt:(jint)off
                 withInt:(jint)len;

- (void)finish;

- (void)handleLineWithNSString:(NSString *)line
                  withNSString:(NSString *)end;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLineBuffer)

FOUNDATION_EXPORT void ComGoogleCommonIoLineBuffer_init(ComGoogleCommonIoLineBuffer *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLineBuffer)

#endif

#pragma pop_macro("ComGoogleCommonIoLineBuffer_INCLUDE_ALL")
