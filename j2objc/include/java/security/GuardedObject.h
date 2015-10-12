//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/GuardedObject.java
//

#ifndef _JavaSecurityGuardedObject_H_
#define _JavaSecurityGuardedObject_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@protocol JavaSecurityGuard;

/*!
 @brief <code>GuardedObject</code> controls access to an object, by checking all requests
 for the object with a <code>Guard</code>.
 */
@interface JavaSecurityGuardedObject : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>GuardedObject</code> which protects access
 to the specified <code>Object</code> using the specified <code>Guard</code>.
 @param object
 the <code>Object</code> to protect.
 @param guard
 the <code>Guard</code> which protects the specified <code>Object</code>,
 maybe <code>null</code>.
 */
- (instancetype)initWithId:(id)object
     withJavaSecurityGuard:(id<JavaSecurityGuard>)guard;

/*!
 @brief Returns the guarded <code>Object</code> if the associated <code>Guard</code>
 permits access.
 If access is not granted, then a <code>SecurityException</code>
  is thrown.
 @return the guarded object.
 @exception SecurityException
 if access is not granted to the guarded object.
 */
- (id)getObject;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGuardedObject)

FOUNDATION_EXPORT void JavaSecurityGuardedObject_initWithId_withJavaSecurityGuard_(JavaSecurityGuardedObject *self, id object, id<JavaSecurityGuard> guard);

FOUNDATION_EXPORT JavaSecurityGuardedObject *new_JavaSecurityGuardedObject_initWithId_withJavaSecurityGuard_(id object, id<JavaSecurityGuard> guard) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGuardedObject)

#endif // _JavaSecurityGuardedObject_H_
