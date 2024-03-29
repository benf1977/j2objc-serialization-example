//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/utils/AlgNameMapperSource.java
//

#ifndef _OrgApacheHarmonySecurityUtilsAlgNameMapperSource_H_
#define _OrgApacheHarmonySecurityUtilsAlgNameMapperSource_H_

#include "J2ObjC_header.h"

/*!
 @brief Provides a mapping source that the <code>AlgNameMapper</code> can query for
 mapping between algorithm names and OIDs.
 */
@protocol OrgApacheHarmonySecurityUtilsAlgNameMapperSource < NSObject, JavaObject >

- (NSString *)mapNameToOidWithNSString:(NSString *)algName;

- (NSString *)mapOidToNameWithNSString:(NSString *)oid;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityUtilsAlgNameMapperSource)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityUtilsAlgNameMapperSource)

#endif // _OrgApacheHarmonySecurityUtilsAlgNameMapperSource_H_
