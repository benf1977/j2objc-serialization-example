//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Principal.java
//

#ifndef _JavaSecurityPrincipal_H_
#define _JavaSecurityPrincipal_H_

#include "J2ObjC_header.h"

/*!
 @brief <code>Principal</code>s are objects which have identities.
 These can be
 individuals, groups, corporations, unique program executions, etc.
 */
@protocol JavaSecurityPrincipal < NSObject, JavaObject >

/*!
 @brief Compares the specified object with this <code>Principal</code> for equality
 and returns <code>true</code> if the specified object is equal, <code>false</code>
 otherwise.
 @param obj
 object to be compared for equality with this <code>Principal</code>
 .
 @return <code>true</code> if the specified object is equal to this <code>Principal</code>
 , otherwise <code>false</code>.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the name of this <code>Principal</code>.
 @return the name of this <code>Principal</code>.
 */
- (NSString *)getName;

/*!
 @brief Returns the hash code value for this <code>Principal</code>.
 Returns the same
 hash code for <code>Principal</code>s that are equal to each other as
 required by the general contract of <code>Object.hashCode</code>.
 @return the hash code value for this <code>Principal</code>.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string containing a concise, human-readable description of
 this <code>Principal</code>.
 @return a printable representation for this <code>Principal</code>.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrincipal)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrincipal)

#endif // _JavaSecurityPrincipal_H_
