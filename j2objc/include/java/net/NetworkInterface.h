//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/NetworkInterface.java
//

#ifndef _JavaNetNetworkInterface_H_
#define _JavaNetNetworkInterface_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaNetInetAddress;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;

/*!
 @brief This class is used to represent a network interface of the local device.
 An
 interface is defined by its address and a platform dependent name. The class
 provides methods to get all information about the available interfaces of the
 system or to identify the local interface of a joined multicast group.
 */
@interface JavaNetNetworkInterface : NSObject

#pragma mark Public

/*!
 @brief Compares the specified object to this <code>NetworkInterface</code> and
 returns whether they are equal or not.
 The object must be an instance of
 <code>NetworkInterface</code> with the same name, display name, and list
 of interface addresses.
 @param obj
 the object to compare with this instance.
 @return <code>true</code> if the specified object is equal to this <code>NetworkInterface</code>
 , <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the NetworkInterface corresponding to the given interface index, or null if no
 interface has this index.
 @throws SocketException if an error occurs.
 @since 1.7
 */
+ (JavaNetNetworkInterface *)getByIndexWithInt:(jint)index;

/*!
 @brief Returns the <code>NetworkInterface</code> corresponding to the given address, or null if no
 interface has this address.
 @throws SocketException if an error occurs.
 @throws NullPointerException if <code>address == null</code>.
 */
+ (JavaNetNetworkInterface *)getByInetAddressWithJavaNetInetAddress:(JavaNetInetAddress *)address;

/*!
 @brief Returns the <code>NetworkInterface</code> corresponding to the named network interface, or null
 if no interface has this name.
 @throws SocketException if an error occurs.
 @throws NullPointerException if <code>interfaceName == null</code>.
 */
+ (JavaNetNetworkInterface *)getByNameWithNSString:(NSString *)interfaceName;

/*!
 @brief Returns a human-readable name for this network interface.
 On Android, this is the same
 string as returned by <code>getName</code>.
 */
- (NSString *)getDisplayName;

/*!
 @brief Returns the hardware address of the interface, if it has one, or null otherwise.
 @throws SocketException if an I/O error occurs.
 @since 1.6
 */
- (IOSByteArray *)getHardwareAddress;

/*!
 @brief Returns the index for the network interface, or -1 if unknown.
 @since 1.7
 */
- (jint)getIndex;

/*!
 @brief Returns an enumeration of the addresses bound to this network interface.
 */
- (id<JavaUtilEnumeration>)getInetAddresses;

/*!
 @brief Returns a List of the InterfaceAddresses for this network interface.
 @since 1.6
 */
- (id<JavaUtilList>)getInterfaceAddresses;

/*!
 @brief Returns the Maximum Transmission Unit (MTU) of this interface.
 @return the value of the MTU for the interface.
 @throws SocketException if an I/O error occurs.
 @since 1.6
 */
- (jint)getMTU;

/*!
 @brief Returns the name of this network interface (such as "eth0" or "lo").
 */
- (NSString *)getName;

/*!
 @brief Gets a list of all network interfaces available on the local system or
 <code>null</code> if no interface is available.
 @return the list of <code>NetworkInterface</code> instances representing the
 available interfaces.
 @throws SocketException
 if an error occurs while getting the network interface
 information.
 */
+ (id<JavaUtilEnumeration>)getNetworkInterfaces;

/*!
 @brief Returns the parent NetworkInterface of this interface if this is a
 sub-interface, or null if it's a physical (non virtual) interface.
 @return the NetworkInterface this interface is attached to.
 @since 1.6
 */
- (JavaNetNetworkInterface *)getParent;

/*!
 @brief Returns an enumeration of all the sub-interfaces of this network interface.
 Sub-interfaces are also known as virtual interfaces.
 <p>For example, <code>eth0:1</code> would be a sub-interface of <code>eth0</code>.
 @return an Enumeration of all the sub-interfaces of this network interface
 @since 1.6
 */
- (id<JavaUtilEnumeration>)getSubInterfaces;

/*!
 @brief Returns the hash code for this <code>NetworkInterface</code>.
 Since the
 name should be unique for each network interface the hash code is
 generated using the name.
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if this network interface is a loopback interface.
 @return true if the interface is a loopback interface.
 @throws SocketException if an I/O error occurs.
 @since 1.6
 */
- (jboolean)isLoopback;

/*!
 @brief Returns true if this network interface is a point-to-point interface.
 (For example, a PPP connection using a modem.)
 @return true if the interface is point-to-point.
 @throws SocketException if an I/O error occurs.
 @since 1.6
 */
- (jboolean)isPointToPoint;

/*!
 @brief Returns true if this network interface is up.
 @return true if the interface is up.
 @throws SocketException if an I/O error occurs.
 @since 1.6
 */
- (jboolean)isUp;

/*!
 @brief Returns true if this interface is a virtual interface (also called
 a sub-interface).
 Virtual interfaces are, on some systems, interfaces
 created as a child of a physical interface and given different settings
 (like address or MTU). Usually the name of the interface will the name of
 the parent followed by a colon (:) and a number identifying the child,
 since there can be several virtual interfaces attached to a single
 physical interface.
 @return true if this interface is a virtual interface.
 @since 1.6
 */
- (jboolean)isVirtual;

/*!
 @brief Returns true if this network interface supports multicast.
 @throws SocketException if an I/O error occurs.
 @since 1.6
 */
- (jboolean)supportsMulticast;

/*!
 @brief Returns a string containing details of this network interface.
 The exact format is deliberately unspecified. Callers that require a specific
 format should build a string themselves, using this class' accessor methods.
 */
- (NSString *)description;

#pragma mark Package-Private

+ (JavaNetNetworkInterface *)forUnboundMulticastSocket;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetNetworkInterface)

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_forUnboundMulticastSocket();

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_getByNameWithNSString_(NSString *interfaceName);

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_getByInetAddressWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_getByIndexWithInt_(jint index);

FOUNDATION_EXPORT id<JavaUtilEnumeration> JavaNetNetworkInterface_getNetworkInterfaces();

J2OBJC_TYPE_LITERAL_HEADER(JavaNetNetworkInterface)

#endif // _JavaNetNetworkInterface_H_
