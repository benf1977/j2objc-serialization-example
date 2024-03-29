//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Level.java
//

#ifndef _JavaUtilLoggingLevel_H_
#define _JavaUtilLoggingLevel_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

/*!
 @brief <code>Level</code> objects are used to indicate the level of logging.
 There are a
 set of predefined logging levels, each associated with an integer value.
 Enabling a certain logging level also enables all logging levels with larger
 values.
 <p>
 The predefined levels in ascending order are FINEST, FINER, FINE, CONFIG,
 INFO, WARNING, SEVERE. There are two additional predefined levels, which are
 ALL and OFF. ALL indicates logging all messages, and OFF indicates logging no
 messages.
 */
@interface JavaUtilLoggingLevel : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Compares two <code>Level</code> objects for equality.
 They are considered to
 be equal if they have the same level value.
 @param o
 the other object to compare this level to.
 @return <code>true</code> if this object equals to the supplied object,
 <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)o;

/*!
 @brief Gets the localized name of this level.
 The default locale is used. If no
 resource bundle is associated with this level then the original level
 name is returned.
 @return the localized name of this level.
 */
- (NSString *)getLocalizedName;

/*!
 @brief Gets the name of this level.
 @return this level's name.
 */
- (NSString *)getName;

/*!
 @brief Gets the name of the resource bundle associated with this level.
 @return the name of this level's resource bundle.
 */
- (NSString *)getResourceBundleName;

/*!
 @brief Returns the hash code of this <code>Level</code> object.
 @return this level's hash code.
 */
- (NSUInteger)hash;

/*!
 @brief Gets the integer value indicating this level.
 @return this level's integer value.
 */
- (jint)intValue;

/*!
 @brief Parses a level name into a <code>Level</code> object.
 @param name
 the name of the desired <code>level</code>, which cannot be
 <code>null</code>.
 @return the level with the specified name.
 @throws NullPointerException
 if <code>name</code> is <code>null</code>.
 @throws IllegalArgumentException
 if <code>name</code> is not valid.
 */
+ (JavaUtilLoggingLevel *)parseWithNSString:(NSString *)name;

/*!
 @brief Returns the string representation of this <code>Level</code> object.
 In
 this case, it is the level's name.
 @return the string representation of this level.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Constructs an instance of <code>Level</code> taking the supplied name and
 level value.
 @param name
 the name of the level.
 @param level
 an integer value indicating the level.
 @throws NullPointerException
 if <code>name</code> is <code>null</code>.
 */
- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)level;

/*!
 @brief Constructs an instance of <code>Level</code> taking the supplied name, level
 value and resource bundle name.
 @param name
 the name of the level.
 @param level
 an integer value indicating the level.
 @param resourceBundleName
 the name of the resource bundle to use.
 @throws NullPointerException
 if <code>name</code> is <code>null</code>.
 */
- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)level
                    withNSString:(NSString *)resourceBundleName;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLevel)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_OFF_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, OFF_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_SEVERE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, SEVERE_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_WARNING_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, WARNING_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_INFO_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, INFO_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_CONFIG_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, CONFIG_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_FINE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, FINE_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_FINER_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, FINER_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_FINEST_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, FINEST_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_ALL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLevel, ALL_, JavaUtilLoggingLevel *)

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingLevel_parseWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaUtilLoggingLevel_initWithNSString_withInt_(JavaUtilLoggingLevel *self, NSString *name, jint level);

FOUNDATION_EXPORT JavaUtilLoggingLevel *new_JavaUtilLoggingLevel_initWithNSString_withInt_(NSString *name, jint level) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilLoggingLevel_initWithNSString_withInt_withNSString_(JavaUtilLoggingLevel *self, NSString *name, jint level, NSString *resourceBundleName);

FOUNDATION_EXPORT JavaUtilLoggingLevel *new_JavaUtilLoggingLevel_initWithNSString_withInt_withNSString_(NSString *name, jint level, NSString *resourceBundleName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLevel)

#endif // _JavaUtilLoggingLevel_H_
