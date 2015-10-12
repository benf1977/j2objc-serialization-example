//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/auth/x500/X500Principal.java
//

#ifndef _JavaxSecurityAuthX500X500Principal_H_
#define _JavaxSecurityAuthX500X500Principal_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/security/Principal.h"

@class IOSByteArray;
@class JavaIoInputStream;
@protocol JavaUtilMap;

/*!
 @brief Represents an X.500 principal, which holds the distinguished name of some
 network entity.
 An example of a distinguished name is <code>"O=SomeOrg,
 OU=SomeOrgUnit, C=US"</code>
 . The class can be instantiated from a byte representation
 of an object identifier (OID), an ASN.1 DER-encoded version, or a simple
 string holding the distinguished name. The representations must follow either
 RFC 2253, RFC 1779, or RFC2459.
 */
@interface JavaxSecurityAuthX500X500Principal : NSObject < JavaIoSerializable, JavaSecurityPrincipal >

#pragma mark Public

/*!
 @brief Creates a new X500Principal from a given ASN.1 DER encoding of a
 distinguished name.
 @param name
 the ASN.1 DER-encoded distinguished name
 @throws IllegalArgumentException
 if the ASN.1 DER-encoded distinguished name is incorrect
 */
- (instancetype)initWithByteArray:(IOSByteArray *)name;

/*!
 @brief Creates a new X500Principal from a given ASN.1 DER encoding of a
 distinguished name.
 @param inArg
 an <code>InputStream</code> holding the ASN.1 DER-encoded
 distinguished name
 @throws IllegalArgumentException
 if the ASN.1 DER-encoded distinguished name is incorrect
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates a new X500Principal from a string representation of a
 distinguished name.
 @param name
 the string representation of the distinguished name
 @throws IllegalArgumentException
 if the string representation of the distinguished name is
 incorrect
 */
- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                 withJavaUtilMap:(id<JavaUtilMap>)keywordMap;

- (jboolean)isEqual:(id)o;

/*!
 @brief Returns an ASN.1 DER-encoded representation of the distinguished name
 contained in this X.500 principal.
 @return the ASN.1 DER-encoded representation
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns a human-readable string representation of the distinguished name
 contained in this X.500 principal.
 @return the string representation
 */
- (NSString *)getName;

/*!
 @brief Returns a string representation of the distinguished name contained in
 this X.500 principal.
 The format of the representation can be chosen.
 Valid arguments are <code>RFC1779</code>, <code>RFC2253</code>, and
 <code>CANONICAL</code>. The representations are specified in RFC 1779 and RFC
 2253, respectively. The canonical form is based on RFC 2253, but adds
 some canonicalizing operations like removing leading and trailing
 whitespace, lower-casing the whole name, and bringing it into a
 normalized Unicode representation.
 @param format
 the name of the format to use for the representation
 @return the string representation
 @throws IllegalArgumentException
 if the <code>format</code> argument is not one of the three
 mentioned above
 */
- (NSString *)getNameWithNSString:(NSString *)format;

- (NSString *)getNameWithNSString:(NSString *)format
                  withJavaUtilMap:(id<JavaUtilMap>)oidMap;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthX500X500Principal)

FOUNDATION_EXPORT NSString *JavaxSecurityAuthX500X500Principal_CANONICAL_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthX500X500Principal, CANONICAL_, NSString *)

FOUNDATION_EXPORT NSString *JavaxSecurityAuthX500X500Principal_RFC1779_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthX500X500Principal, RFC1779_, NSString *)

FOUNDATION_EXPORT NSString *JavaxSecurityAuthX500X500Principal_RFC2253_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthX500X500Principal, RFC2253_, NSString *)

FOUNDATION_EXPORT void JavaxSecurityAuthX500X500Principal_initWithByteArray_(JavaxSecurityAuthX500X500Principal *self, IOSByteArray *name);

FOUNDATION_EXPORT JavaxSecurityAuthX500X500Principal *new_JavaxSecurityAuthX500X500Principal_initWithByteArray_(IOSByteArray *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityAuthX500X500Principal_initWithJavaIoInputStream_(JavaxSecurityAuthX500X500Principal *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaxSecurityAuthX500X500Principal *new_JavaxSecurityAuthX500X500Principal_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityAuthX500X500Principal_initWithNSString_(JavaxSecurityAuthX500X500Principal *self, NSString *name);

FOUNDATION_EXPORT JavaxSecurityAuthX500X500Principal *new_JavaxSecurityAuthX500X500Principal_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityAuthX500X500Principal_initWithNSString_withJavaUtilMap_(JavaxSecurityAuthX500X500Principal *self, NSString *name, id<JavaUtilMap> keywordMap);

FOUNDATION_EXPORT JavaxSecurityAuthX500X500Principal *new_JavaxSecurityAuthX500X500Principal_initWithNSString_withJavaUtilMap_(NSString *name, id<JavaUtilMap> keywordMap) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthX500X500Principal)

#endif // _JavaxSecurityAuthX500X500Principal_H_
