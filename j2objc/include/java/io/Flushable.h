//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Flushable.java
//

#ifndef _JavaIoFlushable_H_
#define _JavaIoFlushable_H_

#include "J2ObjC_header.h"

/*!
 @brief Defines an interface for classes that can (or need to) be flushed, typically
 before some output processing is considered to be finished and the object
 gets closed.
 */
@protocol JavaIoFlushable < NSObject, JavaObject >

/*!
 @brief Flushes the object by writing out any buffered data to the underlying
 output.
 @throws IOException
 if there are any issues writing the data.
 */
- (void)flush;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFlushable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFlushable)

#endif // _JavaIoFlushable_H_
