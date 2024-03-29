//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/FeatureDescriptor.java
//

#ifndef _JavaBeansFeatureDescriptor_H_
#define _JavaBeansFeatureDescriptor_H_

#include "J2ObjC_header.h"

@protocol JavaUtilEnumeration;

/*!
 @brief Common base class for Descriptors.
 */
@interface JavaBeansFeatureDescriptor : NSObject {
 @public
  jboolean preferred_, hidden_, expert_;
  NSString *shortDescription_;
  NSString *name_;
  NSString *displayName_;
}

#pragma mark Public

/*!
 @brief <p>
 Constructs an instance.
 </p>
 */
- (instancetype)init;

/*!
 @brief <p>
 Enumerates the attribute names.
 </p>
 @return An instance of <code>Enumeration</code>.
 */
- (id<JavaUtilEnumeration>)attributeNames;

/*!
 @brief <p>
 Gets the display name or <code>getName()</code> if not set.
 </p>
 @return The display name.
 */
- (NSString *)getDisplayName;

/*!
 @brief <p>
 Gets the name.
 </p>
 @return The name.
 */
- (NSString *)getName;

/*!
 @brief <p>
 Gets the short description or <code>getDisplayName()</code> if not set.
 </p>
 @return The description.
 */
- (NSString *)getShortDescription;

/*!
 @brief <p>
 Gets the value associated with the named attribute.
 </p>
 @param attributeName
 The name of the attribute to get a value for.
 @return The attribute's value.
 */
- (id)getValueWithNSString:(NSString *)attributeName;

/*!
 @brief <p>
 Indicates if this feature is an expert feature.
 </p>
 @return <code>true</code> if hidden, <code>false</code> otherwise.
 */
- (jboolean)isExpert;

/*!
 @brief <p>
 Indicates if this feature is hidden.
 </p>
 @return <code>true</code> if hidden, <code>false</code> otherwise.
 */
- (jboolean)isHidden;

/*!
 @brief <p>
 Indicates if this feature is preferred.
 </p>
 @return <code>true</code> if preferred, <code>false</code> otherwise.
 */
- (jboolean)isPreferred;

/*!
 @brief <p>
 Sets the display name.
 </p>
 @param displayName
 The display name to set.
 */
- (void)setDisplayNameWithNSString:(NSString *)displayName;

/*!
 @brief <p>
 Sets the expert indicator.
 </p>
 @param expert
 <code>true</code> if expert, <code>false</code> otherwise.
 */
- (void)setExpertWithBoolean:(jboolean)expert;

/*!
 @brief <p>
 Sets the hidden indicator.
 </p>
 @param hidden
 <code>true</code> if hidden, <code>false</code> otherwise.
 */
- (void)setHiddenWithBoolean:(jboolean)hidden;

/*!
 @brief <p>
 Sets the name.
 </p>
 @param name
 The name to set.
 */
- (void)setNameWithNSString:(NSString *)name;

/*!
 @brief <p>
 Sets the preferred indicator.
 </p>
 @param preferred
 <code>true</code> if preferred, <code>false</code>
 otherwise.
 */
- (void)setPreferredWithBoolean:(jboolean)preferred;

/*!
 @brief <p>
 Sets the short description.
 </p>
 @param text
 The description to set.
 */
- (void)setShortDescriptionWithNSString:(NSString *)text;

/*!
 @brief <p>
 Sets the value for the named attribute.
 </p>
 @param attributeName
 The name of the attribute to set a value with.
 @param value
 The value to set.
 */
- (void)setValueWithNSString:(NSString *)attributeName
                      withId:(id)value;

#pragma mark Package-Private

- (void)mergeWithJavaBeansFeatureDescriptor:(JavaBeansFeatureDescriptor *)feature;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansFeatureDescriptor)

J2OBJC_FIELD_SETTER(JavaBeansFeatureDescriptor, shortDescription_, NSString *)
J2OBJC_FIELD_SETTER(JavaBeansFeatureDescriptor, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaBeansFeatureDescriptor, displayName_, NSString *)

FOUNDATION_EXPORT void JavaBeansFeatureDescriptor_init(JavaBeansFeatureDescriptor *self);

FOUNDATION_EXPORT JavaBeansFeatureDescriptor *new_JavaBeansFeatureDescriptor_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansFeatureDescriptor)

#endif // _JavaBeansFeatureDescriptor_H_
