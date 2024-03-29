//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PrivilegedActionException.java
//

#ifndef _JavaSecurityPrivilegedActionException_H_
#define _JavaSecurityPrivilegedActionException_H_

#include "J2ObjC_header.h"
#include "java/lang/Exception.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPrivilegedActionException : JavaLangException

#pragma mark Public

- (instancetype)initWithJavaLangException:(JavaLangException *)ex;

- (JavaLangException *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrivilegedActionException)

FOUNDATION_EXPORT void JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaSecurityPrivilegedActionException *self, JavaLangException *ex);

FOUNDATION_EXPORT JavaSecurityPrivilegedActionException *new_JavaSecurityPrivilegedActionException_initWithJavaLangException_(JavaLangException *ex) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrivilegedActionException)

#endif // _JavaSecurityPrivilegedActionException_H_
