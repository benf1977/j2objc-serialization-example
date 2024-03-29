//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/reflect/MutableTypeToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL")
#if ComGoogleCommonReflectMutableTypeToInstanceMap_RESTRICT
#define ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectMutableTypeToInstanceMap_RESTRICT

#if !defined (_ComGoogleCommonReflectMutableTypeToInstanceMap_) && (ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL || ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE)
#define _ComGoogleCommonReflectMutableTypeToInstanceMap_

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

#define ComGoogleCommonReflectTypeToInstanceMap_RESTRICT 1
#define ComGoogleCommonReflectTypeToInstanceMap_INCLUDE 1
#include "com/google/common/reflect/TypeToInstanceMap.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonReflectMutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap >

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilSet>)entrySet;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

- (id)putWithId:(ComGoogleCommonReflectTypeToken *)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectMutableTypeToInstanceMap)

FOUNDATION_EXPORT void ComGoogleCommonReflectMutableTypeToInstanceMap_init(ComGoogleCommonReflectMutableTypeToInstanceMap *self);

FOUNDATION_EXPORT ComGoogleCommonReflectMutableTypeToInstanceMap *new_ComGoogleCommonReflectMutableTypeToInstanceMap_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectMutableTypeToInstanceMap)

#endif

#pragma pop_macro("ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL")
