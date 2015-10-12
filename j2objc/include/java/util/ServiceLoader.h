//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ServiceLoader.java
//

#ifndef _JavaUtilServiceLoader_H_
#define _JavaUtilServiceLoader_H_

#include "J2ObjC_header.h"
#include "java/lang/Iterable.h"

@class IOSClass;
@class JavaLangClassLoader;
@protocol JavaUtilIterator;

/*!
 @brief A service-provider loader.
 <p>A service provider is a factory for creating all known implementations of a particular
 class or interface <code>S</code>. The known implementations are read from a configuration file in
 <code>META-INF/services/</code>. The file's name should match the class' binary name (such as
 <code>java.util.Outer$Inner</code>).
 <p>The file format is as follows.
 The file's character encoding must be UTF-8.
 Whitespace is ignored, and <code>#</code> is used to begin a comment that continues to the
 next newline.
 Lines that are empty after comment removal and whitespace trimming are ignored.
 Otherwise, each line contains the binary name of one implementation class.
 Duplicate entries are ignored, but entries are otherwise returned in order (that is, the file
 is treated as an ordered set).
 <p>Given these classes:
 @code

  package a.b.c;
  public interface MyService { ... }
  public class MyImpl1 implements MyService { ... }
  public class MyImpl2 implements MyService { ... }
  
@endcode
 And this configuration file (stored as <code>META-INF/services/a.b.c.MyService</code>):
 @code

  # Known MyService providers.
  a.b.c.MyImpl1  # The original implementation for handling "bar"s.
  a.b.c.MyImpl2  # A later implementation for "foo"s.
  
@endcode
 You might use <code>ServiceProvider</code> something like this:
 @code

   for (MyService service : ServiceLoader<MyService>.load(MyService.class)) {
     if (service.supports(o)) {
       return service.handle(o);
     }
   }
  
@endcode
 <p>Note that each iteration creates new instances of the various service implementations, so
 any heavily-used code will likely want to cache the known implementations itself and reuse them.
 Note also that the candidate classes are instantiated lazily as you call <code>next</code> on the
 iterator: construction of the iterator itself does not instantiate any of the providers.
 @since 1.6
 */
@interface JavaUtilServiceLoader : NSObject < JavaLangIterable >

#pragma mark Public

/*!
 @brief Returns an iterator over all the service providers offered by this service loader.
 Note that <code>hasNext</code> and <code>next</code> may throw if the configuration is invalid.
 <p>Each iterator will return new instances of the classes it iterates over, so callers
 may want to cache the results of a single call to this method rather than call it
 repeatedly.
 <p>The returned iterator does not support <code>remove</code>.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Constructs a service loader, using the current thread's context class loader.
 @param service the service class or interface
 @return a new ServiceLoader
 */
+ (JavaUtilServiceLoader *)load__WithIOSClass:(IOSClass *)service;

/*!
 @brief Constructs a service loader.
 If <code>classLoader</code> is null, the system class loader
 is used.
 @param service the service class or interface
 @param classLoader the class loader
 @return a new ServiceLoader
 */
+ (JavaUtilServiceLoader *)load__WithIOSClass:(IOSClass *)service
                      withJavaLangClassLoader:(JavaLangClassLoader *)classLoader;

/*!
 @brief Internal API to support built-in SPIs that check a system property first.
 Returns an instance specified by a property with the class' binary name, or null if
 no such property is set.
 */
+ (id)loadFromSystemPropertyWithIOSClass:(IOSClass *)service;

/*!
 @brief Constructs a service loader, using the extension class loader.
 @param service the service class or interface
 @return a new ServiceLoader
 */
+ (JavaUtilServiceLoader *)loadInstalledWithIOSClass:(IOSClass *)service;

/*!
 @brief Invalidates the cache of known service provider class names.
 */
- (void)reload;

- (NSString *)description;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilServiceLoader)

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_load__WithIOSClass_withJavaLangClassLoader_(IOSClass *service, JavaLangClassLoader *classLoader);

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_load__WithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT JavaUtilServiceLoader *JavaUtilServiceLoader_loadInstalledWithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT id JavaUtilServiceLoader_loadFromSystemPropertyWithIOSClass_(IOSClass *service);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilServiceLoader)

#endif // _JavaUtilServiceLoader_H_
