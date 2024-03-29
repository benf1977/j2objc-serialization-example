//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/FileNameMap.java
//

#ifndef _JavaNetFileNameMap_H_
#define _JavaNetFileNameMap_H_

#include "J2ObjC_header.h"

/*!
 @brief Defines a scheme for mapping a filename type to a MIME content type.
 Mainly
 used by <code>URLStreamHandler</code> for determining the right content handler to
 handle the resource.
 */
@protocol JavaNetFileNameMap < NSObject, JavaObject >

/*!
 @brief Returns the MIME type (such as "text/plain") for the given filename, or null.
 */
- (NSString *)getContentTypeForWithNSString:(NSString *)filename;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetFileNameMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetFileNameMap)

#endif // _JavaNetFileNameMap_H_
