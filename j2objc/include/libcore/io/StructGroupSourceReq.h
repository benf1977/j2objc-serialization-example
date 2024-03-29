//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructGroupSourceReq.java
//

#ifndef _LibcoreIoStructGroupSourceReq_H_
#define _LibcoreIoStructGroupSourceReq_H_

#include "J2ObjC_header.h"

@class JavaNetInetAddress;

/*!
 @brief Corresponds to C's <code>struct group_source_req</code>.
 */
@interface LibcoreIoStructGroupSourceReq : NSObject {
 @public
  jint gsr_interface_;
  JavaNetInetAddress *gsr_group_;
  JavaNetInetAddress *gsr_source_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)gsr_interface
     withJavaNetInetAddress:(JavaNetInetAddress *)gsr_group
     withJavaNetInetAddress:(JavaNetInetAddress *)gsr_source;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoStructGroupSourceReq)

J2OBJC_FIELD_SETTER(LibcoreIoStructGroupSourceReq, gsr_group_, JavaNetInetAddress *)
J2OBJC_FIELD_SETTER(LibcoreIoStructGroupSourceReq, gsr_source_, JavaNetInetAddress *)

FOUNDATION_EXPORT void LibcoreIoStructGroupSourceReq_initWithInt_withJavaNetInetAddress_withJavaNetInetAddress_(LibcoreIoStructGroupSourceReq *self, jint gsr_interface, JavaNetInetAddress *gsr_group, JavaNetInetAddress *gsr_source);

FOUNDATION_EXPORT LibcoreIoStructGroupSourceReq *new_LibcoreIoStructGroupSourceReq_initWithInt_withJavaNetInetAddress_withJavaNetInetAddress_(jint gsr_interface, JavaNetInetAddress *gsr_group, JavaNetInetAddress *gsr_source) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoStructGroupSourceReq)

#endif // _LibcoreIoStructGroupSourceReq_H_
