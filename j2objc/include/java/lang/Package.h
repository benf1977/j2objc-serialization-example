//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Package.java
//

#ifndef _JavaLangPackage_H_
#define _JavaLangPackage_H_

#include "J2ObjC_header.h"
#include "java/lang/reflect/AnnotatedElement.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaNetURL;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief Contains information about a Java package.
 This includes implementation and
 specification versions. Typically this information is retrieved from the
 manifest.
 <p>
 Packages are managed by class loaders. All classes loaded by the same loader
 from the same package share a <code>Package</code> instance.
 </p>
 */
@interface JavaLangPackage : NSObject < JavaLangReflectAnnotatedElement >

#pragma mark Public

/*!
 @brief Returns the annotation associated with the specified annotation type and
 this package, if present.
 @param annotationType
 the annotation type to look for.
 @return an instance of <code>Annotation</code> or <code>null</code>.
 */
- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

/*!
 @brief Returns an array of this package's annotations.
 */
- (IOSObjectArray *)getAnnotations;

/*!
 @brief Returns an array of this package's declared annotations.
 Package annotations aren't
 inherited, so this is equivalent to <code>getAnnotations</code>.
 */
- (IOSObjectArray *)getDeclaredAnnotations;

/*!
 @brief Returns the title of the implementation of this package, or <code>null</code>
 if this is unknown.
 The format of this string is unspecified.
 @return the implementation title, may be <code>null</code>.
 */
- (NSString *)getImplementationTitle;

/*!
 @brief Returns the name of the vendor or organization that provides this
 implementation of the package, or <code>null</code> if this is unknown.
 The
 format of this string is unspecified.
 @return the implementation vendor name, may be <code>null</code>.
 */
- (NSString *)getImplementationVendor;

/*!
 @brief Returns the version of the implementation of this package, or <code>null</code>
  if this is unknown.
 The format of this string is unspecified.
 @return the implementation version, may be <code>null</code>.
 */
- (NSString *)getImplementationVersion;

/*!
 @brief Returns the name of this package in the standard dot notation; for
 example: "java.lang".
 @return the name of this package.
 */
- (NSString *)getName;

/*!
 @brief Attempts to locate the requested package in the caller's class loader.
 If
 no package information can be located, <code>null</code> is returned.
 @param packageName
 the name of the package to find.
 @return the requested package, or <code>null</code>.
 */
+ (JavaLangPackage *)getPackageWithNSString:(NSString *)packageName;

/*!
 @brief Returns all the packages known to the caller's class loader.
 @return all the packages known to the caller's class loader.
 */
+ (IOSObjectArray *)getPackages;

/*!
 @brief Returns the title of the specification this package implements, or
 <code>null</code> if this is unknown.
 @return the specification title, may be <code>null</code>.
 */
- (NSString *)getSpecificationTitle;

/*!
 @brief Returns the name of the vendor or organization that owns and maintains
 the specification this package implements, or <code>null</code> if this is
 unknown.
 @return the specification vendor name, may be <code>null</code>.
 */
- (NSString *)getSpecificationVendor;

/*!
 @brief Returns the version of the specification this package implements, or
 <code>null</code> if this is unknown.
 The version string is a sequence of
 non-negative integers separated by dots; for example: "1.2.3".
 @return the specification version string, may be <code>null</code>.
 */
- (NSString *)getSpecificationVersion;

- (NSUInteger)hash;

/*!
 @brief Indicates whether the specified annotation is present.
 @param annotationType
 the annotation type to look for.
 @return <code>true</code> if the annotation is present; <code>false</code>
 otherwise.
 */
- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationType;

/*!
 @brief Indicates whether this package's specification version is compatible with
 the specified version string.
 Version strings are compared by comparing
 each dot separated part of the version as an integer.
 @param version_
 the version string to compare against.
 @return <code>true</code> if the package versions are compatible; <code>false</code>
  otherwise.
 @throws NumberFormatException
 if this package's version string or the one provided are not
 in the correct format.
 */
- (jboolean)isCompatibleWithWithNSString:(NSString *)version_;

/*!
 @brief Indicates whether this package is sealed.
 @return <code>true</code> if this package is sealed; <code>false</code> otherwise.
 */
- (jboolean)isSealed;

/*!
 @brief Indicates whether this package is sealed with respect to the specified
 URL.
 @param url
 the URL to check.
 @return <code>true</code> if this package is sealed with <code>url</code>; <code>false</code>
  otherwise
 */
- (jboolean)isSealedWithJavaNetURL:(JavaNetURL *)url;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)specTitle
                    withNSString:(NSString *)specVersion
                    withNSString:(NSString *)specVendor
                    withNSString:(NSString *)implTitle
                    withNSString:(NSString *)implVersion
                    withNSString:(NSString *)implVendor
                  withJavaNetURL:(JavaNetURL *)sealBase;

@end

J2OBJC_STATIC_INIT(JavaLangPackage)

FOUNDATION_EXPORT void JavaLangPackage_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withJavaNetURL_(JavaLangPackage *self, NSString *name, NSString *specTitle, NSString *specVersion, NSString *specVendor, NSString *implTitle, NSString *implVersion, NSString *implVendor, JavaNetURL *sealBase);

FOUNDATION_EXPORT JavaLangPackage *new_JavaLangPackage_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withJavaNetURL_(NSString *name, NSString *specTitle, NSString *specVersion, NSString *specVendor, NSString *implTitle, NSString *implVersion, NSString *implVendor, JavaNetURL *sealBase) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangPackage *JavaLangPackage_getPackageWithNSString_(NSString *packageName);

FOUNDATION_EXPORT IOSObjectArray *JavaLangPackage_getPackages();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangPackage)

#endif // _JavaLangPackage_H_
