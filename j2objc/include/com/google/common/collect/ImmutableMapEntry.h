//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableMapEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableMapEntry_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableMapEntry_RESTRICT
#define ComGoogleCommonCollectImmutableMapEntry_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableMapEntry_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMapEntry_RESTRICT
#if ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_INCLUDE
#define ComGoogleCommonCollectImmutableMapEntry_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectImmutableMapEntry_) && (ComGoogleCommonCollectImmutableMapEntry_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapEntry_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapEntry_

#define ComGoogleCommonCollectImmutableEntry_RESTRICT 1
#define ComGoogleCommonCollectImmutableEntry_INCLUDE 1
#include "com/google/common/collect/ImmutableEntry.h"

@interface ComGoogleCommonCollectImmutableMapEntry : ComGoogleCommonCollectImmutableEntry

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMapEntry:(ComGoogleCommonCollectImmutableMapEntry *)contents;

- (instancetype)initWithId:(id)key
                    withId:(id)value;

- (ComGoogleCommonCollectImmutableMapEntry *)getNextInKeyBucket;

- (ComGoogleCommonCollectImmutableMapEntry *)getNextInValueBucket;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMapEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapEntry_initWithId_withId_(ComGoogleCommonCollectImmutableMapEntry *self, id key, id value);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapEntry_initWithComGoogleCommonCollectImmutableMapEntry_(ComGoogleCommonCollectImmutableMapEntry *self, ComGoogleCommonCollectImmutableMapEntry *contents);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMapEntry)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_) && (ComGoogleCommonCollectImmutableMapEntry_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_

@class ComGoogleCommonCollectImmutableMapEntry;

@interface ComGoogleCommonCollectImmutableMapEntry_TerminalEntry : ComGoogleCommonCollectImmutableMapEntry

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMapEntry:(ComGoogleCommonCollectImmutableMapEntry *)contents;

- (instancetype)initWithId:(id)key
                    withId:(id)value;

- (ComGoogleCommonCollectImmutableMapEntry *)getNextInKeyBucket;

- (ComGoogleCommonCollectImmutableMapEntry *)getNextInValueBucket;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMapEntry_TerminalEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_initWithComGoogleCommonCollectImmutableMapEntry_(ComGoogleCommonCollectImmutableMapEntry_TerminalEntry *self, ComGoogleCommonCollectImmutableMapEntry *contents);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapEntry_TerminalEntry *new_ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_initWithComGoogleCommonCollectImmutableMapEntry_(ComGoogleCommonCollectImmutableMapEntry *contents) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_initWithId_withId_(ComGoogleCommonCollectImmutableMapEntry_TerminalEntry *self, id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapEntry_TerminalEntry *new_ComGoogleCommonCollectImmutableMapEntry_TerminalEntry_initWithId_withId_(id key, id value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMapEntry_TerminalEntry)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableMapEntry_INCLUDE_ALL")
