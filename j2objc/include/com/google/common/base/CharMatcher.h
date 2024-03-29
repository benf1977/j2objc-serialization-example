//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/CharMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonBaseCharMatcher_INCLUDE_ALL")
#if ComGoogleCommonBaseCharMatcher_RESTRICT
#define ComGoogleCommonBaseCharMatcher_INCLUDE_ALL 0
#else
#define ComGoogleCommonBaseCharMatcher_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseCharMatcher_RESTRICT
#if ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_INCLUDE
#define ComGoogleCommonBaseCharMatcher_NegatedMatcher_INCLUDE 1
#endif
#if ComGoogleCommonBaseCharMatcher_FastMatcher_INCLUDE
#define ComGoogleCommonBaseCharMatcher_INCLUDE 1
#endif
#if ComGoogleCommonBaseCharMatcher_NegatedMatcher_INCLUDE
#define ComGoogleCommonBaseCharMatcher_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonBaseCharMatcher_) && (ComGoogleCommonBaseCharMatcher_INCLUDE_ALL || ComGoogleCommonBaseCharMatcher_INCLUDE)
#define _ComGoogleCommonBaseCharMatcher_

#define ComGoogleCommonBasePredicate_RESTRICT 1
#define ComGoogleCommonBasePredicate_INCLUDE 1
#include "com/google/common/base/Predicate.h"

@class JavaLangCharacter;
@class JavaUtilBitSet;
@protocol JavaLangCharSequence;

#define ComGoogleCommonBaseCharMatcher_WHITESPACE_MULTIPLIER 1682554634

@interface ComGoogleCommonBaseCharMatcher : NSObject < ComGoogleCommonBasePredicate > {
 @public
  NSString *description__;
}

#pragma mark Public

- (ComGoogleCommonBaseCharMatcher *)and__WithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)other;

+ (ComGoogleCommonBaseCharMatcher *)anyOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jboolean)applyWithId:(JavaLangCharacter *)character;

- (NSString *)collapseFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence
                                          withChar:(jchar)replacement;

- (jint)countInWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

+ (ComGoogleCommonBaseCharMatcher *)forPredicateWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (jint)indexInWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jint)indexInWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence
                                withInt:(jint)start;

+ (ComGoogleCommonBaseCharMatcher *)inRangeWithChar:(jchar)startInclusive
                                           withChar:(jchar)endInclusive;

+ (ComGoogleCommonBaseCharMatcher *)isWithChar:(jchar)match;

+ (ComGoogleCommonBaseCharMatcher *)isNotWithChar:(jchar)match;

- (jint)lastIndexInWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jboolean)matchesWithChar:(jchar)c;

- (jboolean)matchesAllOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jboolean)matchesAnyOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jboolean)matchesNoneOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (ComGoogleCommonBaseCharMatcher *)negate;

+ (ComGoogleCommonBaseCharMatcher *)noneOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (ComGoogleCommonBaseCharMatcher *)or__WithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)other;

- (ComGoogleCommonBaseCharMatcher *)precomputed;

- (NSString *)removeFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (NSString *)replaceFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence
                                         withChar:(jchar)replacement;

- (NSString *)replaceFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence
                         withJavaLangCharSequence:(id<JavaLangCharSequence>)replacement;

- (NSString *)retainFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (NSString *)description;

- (NSString *)trimAndCollapseFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence
                                                 withChar:(jchar)replacement;

- (NSString *)trimFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (NSString *)trimLeadingFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (NSString *)trimTrailingFromWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)description_;

+ (ComGoogleCommonBaseCharMatcher *)inRangeWithChar:(jchar)startInclusive
                                           withChar:(jchar)endInclusive
                                       withNSString:(NSString *)description_;

- (ComGoogleCommonBaseCharMatcher *)precomputedInternal;

- (void)setBitsWithJavaUtilBitSet:(JavaUtilBitSet *)table;

- (ComGoogleCommonBaseCharMatcher *)withToStringWithNSString:(NSString *)description_;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseCharMatcher)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseCharMatcher, description__, NSString *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_BREAKING_WHITESPACE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, BREAKING_WHITESPACE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_ASCII_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, ASCII_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_DIGIT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, DIGIT_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_JAVA_DIGIT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, JAVA_DIGIT_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_JAVA_LETTER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, JAVA_LETTER_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_JAVA_LETTER_OR_DIGIT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, JAVA_LETTER_OR_DIGIT_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_JAVA_UPPER_CASE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, JAVA_UPPER_CASE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_JAVA_LOWER_CASE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, JAVA_LOWER_CASE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_JAVA_ISO_CONTROL_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, JAVA_ISO_CONTROL_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_INVISIBLE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, INVISIBLE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_SINGLE_WIDTH_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, SINGLE_WIDTH_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_ANY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, ANY_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_NONE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, NONE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT NSString *ComGoogleCommonBaseCharMatcher_WHITESPACE_TABLE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, WHITESPACE_TABLE_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, WHITESPACE_MULTIPLIER, jint)

FOUNDATION_EXPORT jint ComGoogleCommonBaseCharMatcher_WHITESPACE_SHIFT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, WHITESPACE_SHIFT_, jint)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_WHITESPACE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseCharMatcher, WHITESPACE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_isWithChar_(jchar match);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_isNotWithChar_(jchar match);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_anyOfWithJavaLangCharSequence_(id<JavaLangCharSequence> sequence);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_noneOfWithJavaLangCharSequence_(id<JavaLangCharSequence> sequence);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_inRangeWithChar_withChar_(jchar startInclusive, jchar endInclusive);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_inRangeWithChar_withChar_withNSString_(jchar startInclusive, jchar endInclusive, NSString *description_);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonBaseCharMatcher_forPredicateWithComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_initWithNSString_(ComGoogleCommonBaseCharMatcher *self, NSString *description_);

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_init(ComGoogleCommonBaseCharMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCharMatcher)

#endif

#if !defined (_ComGoogleCommonBaseCharMatcher_NegatedMatcher_) && (ComGoogleCommonBaseCharMatcher_INCLUDE_ALL || ComGoogleCommonBaseCharMatcher_NegatedMatcher_INCLUDE)
#define _ComGoogleCommonBaseCharMatcher_NegatedMatcher_

@class ComGoogleCommonBaseCharMatcher;
@class JavaUtilBitSet;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonBaseCharMatcher_NegatedMatcher : ComGoogleCommonBaseCharMatcher {
 @public
  ComGoogleCommonBaseCharMatcher *original_;
}

#pragma mark Public

- (jint)countInWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jboolean)matchesWithChar:(jchar)c;

- (jboolean)matchesAllOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (jboolean)matchesNoneOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)sequence;

- (ComGoogleCommonBaseCharMatcher *)negate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)original;

- (instancetype)initWithNSString:(NSString *)toString
withComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)original;

- (void)setBitsWithJavaUtilBitSet:(JavaUtilBitSet *)table;

- (ComGoogleCommonBaseCharMatcher *)withToStringWithNSString:(NSString *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCharMatcher_NegatedMatcher)

J2OBJC_FIELD_SETTER(ComGoogleCommonBaseCharMatcher_NegatedMatcher, original_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_NegatedMatcher_initWithNSString_withComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher_NegatedMatcher *self, NSString *toString, ComGoogleCommonBaseCharMatcher *original);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher_NegatedMatcher *new_ComGoogleCommonBaseCharMatcher_NegatedMatcher_initWithNSString_withComGoogleCommonBaseCharMatcher_(NSString *toString, ComGoogleCommonBaseCharMatcher *original) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_NegatedMatcher_initWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher_NegatedMatcher *self, ComGoogleCommonBaseCharMatcher *original);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher_NegatedMatcher *new_ComGoogleCommonBaseCharMatcher_NegatedMatcher_initWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher *original) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCharMatcher_NegatedMatcher)

#endif

#if !defined (_ComGoogleCommonBaseCharMatcher_FastMatcher_) && (ComGoogleCommonBaseCharMatcher_INCLUDE_ALL || ComGoogleCommonBaseCharMatcher_FastMatcher_INCLUDE)
#define _ComGoogleCommonBaseCharMatcher_FastMatcher_

@class ComGoogleCommonBaseCharMatcher;

@interface ComGoogleCommonBaseCharMatcher_FastMatcher : ComGoogleCommonBaseCharMatcher

#pragma mark Public

- (ComGoogleCommonBaseCharMatcher *)negate;

- (ComGoogleCommonBaseCharMatcher *)precomputed;

#pragma mark Package-Private

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCharMatcher_FastMatcher)

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_FastMatcher_init(ComGoogleCommonBaseCharMatcher_FastMatcher *self);

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_FastMatcher_initWithNSString_(ComGoogleCommonBaseCharMatcher_FastMatcher *self, NSString *description_);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCharMatcher_FastMatcher)

#endif

#if !defined (_ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_) && (ComGoogleCommonBaseCharMatcher_INCLUDE_ALL || ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_INCLUDE)
#define _ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_

@class ComGoogleCommonBaseCharMatcher;

@interface ComGoogleCommonBaseCharMatcher_NegatedFastMatcher : ComGoogleCommonBaseCharMatcher_NegatedMatcher

#pragma mark Public

- (ComGoogleCommonBaseCharMatcher *)precomputed;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)original;

- (instancetype)initWithNSString:(NSString *)toString
withComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)original;

- (ComGoogleCommonBaseCharMatcher *)withToStringWithNSString:(NSString *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCharMatcher_NegatedFastMatcher)

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_initWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher_NegatedFastMatcher *self, ComGoogleCommonBaseCharMatcher *original);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher_NegatedFastMatcher *new_ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_initWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher *original) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_initWithNSString_withComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher_NegatedFastMatcher *self, NSString *toString, ComGoogleCommonBaseCharMatcher *original);

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher_NegatedFastMatcher *new_ComGoogleCommonBaseCharMatcher_NegatedFastMatcher_initWithNSString_withComGoogleCommonBaseCharMatcher_(NSString *toString, ComGoogleCommonBaseCharMatcher *original) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCharMatcher_NegatedFastMatcher)

#endif

#pragma pop_macro("ComGoogleCommonBaseCharMatcher_INCLUDE_ALL")
