//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/listeners/MockingStartedListener.java
//

#ifndef _OrgMockitoInternalListenersMockingStartedListener_H_
#define _OrgMockitoInternalListenersMockingStartedListener_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/listeners/MockingProgressListener.h"

@class IOSClass;

@protocol OrgMockitoInternalListenersMockingStartedListener < OrgMockitoInternalListenersMockingProgressListener, NSObject, JavaObject >

- (void)mockingStartedWithId:(id)mock
                withIOSClass:(IOSClass *)classToMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalListenersMockingStartedListener)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalListenersMockingStartedListener)

#endif // _OrgMockitoInternalListenersMockingStartedListener_H_
