//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x509/GeneralName.java
//

#ifndef _OrgApacheHarmonySecurityX509GeneralName_H_
#define _OrgApacheHarmonySecurityX509GeneralName_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class IOSIntArray;
@class OrgApacheHarmonySecurityAsn1ASN1Choice;
@class OrgApacheHarmonySecurityX501Name;
@class OrgApacheHarmonySecurityX509EDIPartyName;
@class OrgApacheHarmonySecurityX509ORAddress;
@class OrgApacheHarmonySecurityX509OtherName;
@protocol JavaUtilList;

/*!
 @author Vladimir N. Molotkov, Alexander Y. Kleymenov
 @version $Revision$
 */

#define OrgApacheHarmonySecurityX509GeneralName_OTHER_NAME 0
#define OrgApacheHarmonySecurityX509GeneralName_RFC822_NAME 1
#define OrgApacheHarmonySecurityX509GeneralName_DNS_NAME 2
#define OrgApacheHarmonySecurityX509GeneralName_X400_ADDR 3
#define OrgApacheHarmonySecurityX509GeneralName_DIR_NAME 4
#define OrgApacheHarmonySecurityX509GeneralName_EDIP_NAME 5
#define OrgApacheHarmonySecurityX509GeneralName_UR_ID 6
#define OrgApacheHarmonySecurityX509GeneralName_IP_ADDR 7
#define OrgApacheHarmonySecurityX509GeneralName_REG_ID 8

/*!
 @brief The class encapsulates the ASN.1 DER encoding/decoding work
 with the GeneralName structure which is a part of X.509 certificate
 (as specified in RFC 3280 -
 Internet X.509 Public Key Infrastructure.
 Certificate and Certificate Revocation List (CRL) Profile.
 http://www.ietf.org/rfc/rfc3280.txt):
 @code

   GeneralName::= CHOICE {
        otherName                       [0]     OtherName,
        rfc822Name                      [1]     IA5String,
        dNSName                         [2]     IA5String,
        x400Address                     [3]     ORAddress,
        directoryName                   [4]     Name,
        ediPartyName                    [5]     EDIPartyName,
        uniformResourceIdentifier       [6]     IA5String,
        iPAddress                       [7]     OCTET STRING,
        registeredID                    [8]     OBJECT IDENTIFIER
   }
   OtherName::= SEQUENCE {
        type-id    OBJECT IDENTIFIER,
        value      [0] EXPLICIT ANY DEFINED BY type-id
   }
   EDIPartyName::= SEQUENCE {
        nameAssigner            [0]     DirectoryString OPTIONAL,
        partyName               [1]     DirectoryString
   }
   DirectoryString::= CHOICE {
        teletexString             TeletexString   (SIZE (1..MAX)),
        printableString           PrintableString (SIZE (1..MAX)),
        universalString           UniversalString (SIZE (1..MAX)),
        utf8String              UTF8String      (SIZE (1..MAX)),
        bmpString               BMPString       (SIZE (1..MAX))
   }
  
@endcode
 <p>This class doesn't support masked addresses like "10.9.8.0/255.255.255.0".
 These are only necessary for NameConstraints, which are not exposed in the
 Java certificate API.
 */
@interface OrgApacheHarmonySecurityX509GeneralName : NSObject

#pragma mark Public

/*!
 @brief Constructor for type [7] iPAddress.
 name is an array of bytes such as:
 For IP v4, as specified in RFC 791, the address must
 contain exactly 4 byte component.  For IP v6, as specified in
 RFC 1883, the address must contain exactly 16 byte component.
 If GeneralName structure is used as a part of Name Constraints
 extension, to represent an address range the number of address
 component is doubled (to 8 and 32 bytes respectively).
 */
- (instancetype)initWithByteArray:(IOSByteArray *)name;

- (instancetype)initWithOrgApacheHarmonySecurityX509EDIPartyName:(OrgApacheHarmonySecurityX509EDIPartyName *)name;

/*!
 @brief Constructs an object representing the value of GeneralName.
 @param tag is an integer which value corresponds
 to the name type (0-8),
 @param name is a DER encoded for of the name value
 */
- (instancetype)initWithInt:(jint)tag
              withByteArray:(IOSByteArray *)name;

/*!
 @brief Makes the GeneralName object from the tag type and corresponding
 well established string representation of the name value.
 The String representation of [7] iPAddress is such as:
 For IP v4, as specified in RFC 791, the address must
 contain exactly 4 byte component.  For IP v6, as specified in
 RFC 1883, the address must contain exactly 16 byte component.
 If GeneralName structure is used as a part of Name Constraints
 extension, to represent an address range the number of address
 component is doubled (to 8 and 32 bytes respectively).
 Note that the names:
 [0] otherName, [3] x400Address, [5] ediPartyName
 have no the string representation, so exception will be thrown.
 To make the GeneralName object with such names use another constructor.
 @param tag is an integer which value corresponds to the name type.
 @param name is a name value corresponding to the tag.
 */
- (instancetype)initWithInt:(jint)tag
               withNSString:(NSString *)name;

- (instancetype)initWithOrgApacheHarmonySecurityX501Name:(OrgApacheHarmonySecurityX501Name *)name;

- (instancetype)initWithOrgApacheHarmonySecurityX509ORAddress:(OrgApacheHarmonySecurityX509ORAddress *)name;

- (instancetype)initWithOrgApacheHarmonySecurityX509OtherName:(OrgApacheHarmonySecurityX509OtherName *)name;

/*!
 @brief Checks the correctness of the string representation of DNS name as
 specified in RFC 1034 p. 10 and RFC 1123 section 2.1.
 <p>This permits a wildcard character '*' anywhere in the name; it is up
 to the application to check which wildcards are permitted. See RFC 6125
 for recommended wildcard matching rules.
 */
+ (void)checkDNSWithNSString:(NSString *)dns;

/*!
 @brief Checks the correctness of the string representation of URI name.
 The correctness is checked as pointed out in RFC 3280 p. 34.
 */
+ (void)checkURIWithNSString:(NSString *)uri;

- (jboolean)isEqual:(id)other;

/*!
 @brief Gets a list representation of this GeneralName object.
 The first entry of the list is an Integer object representing
 the type of mane (0-8), and the second entry is a value of the name:
 string or ASN.1 DER encoded form depending on the type as follows:
 rfc822Name, dNSName, uniformResourceIdentifier names are returned
 as Strings, using the string formats for those types (rfc 3280)
 IP v4 address names are returned using dotted quad notation.
 IP v6 address names are returned in the form "p1:p2:...:p8",
 where p1-p8 are hexadecimal values representing the eight 16-bit
 pieces of the address. registeredID name are returned as Strings
 represented as a series of nonnegative integers separated by periods.
 And directory names (distinguished names) are returned in
 RFC 2253 string format.
 otherName, X400Address, ediPartyName returned as byte arrays
 containing the ASN.1 DER encoded form of the name.
 */
- (id<JavaUtilList>)getAsList;

/*!
 @brief Returns ASN.1 encoded form of this X.509 GeneralName value.
 */
- (IOSByteArray *)getEncoded;

/*!
 @return the encoded value of the name without the tag associated
 with the name in the GeneralName structure
 @throws IOException
 */
- (IOSByteArray *)getEncodedName;

/*!
 @return the value of the name.
 The class of name object depends on the tag as follows:
 [0] otherName - OtherName object,
 [1] rfc822Name - String object,
 [2] dNSName - String object,
 [3] x400Address - ORAddress object,
 [4] directoryName - instance of Name object,
 [5] ediPartyName - EDIPartyName object,
 [6] uniformResourceIdentifier - String object,
 [7] iPAddress - array of bytes such as:
 For IP v4, as specified in RFC 791, the address must
 contain exactly 4 byte component.  For IP v6, as specified in
 RFC 1883, the address must contain exactly 16 byte component.
 If GeneralName structure is used as a part of Name Constraints
 extension, to represent an address range the number of address
 component is doubled (to 8 and 32 bytes respectively).
 [8] registeredID - String.
 */
- (id)getName;

/*!
 @brief Returns the tag of the name in the structure
 */
- (jint)getTag;

- (NSUInteger)hash;

/*!
 @brief Returns the string form of the given IP address.
 If the address is not 4
 octets for IPv4 or 16 octets for IPv6, an IllegalArgumentException will
 be thrown.
 */
+ (NSString *)ipBytesToStrWithByteArray:(IOSByteArray *)ip;

/*!
 @brief Returns the bytes of the given IP address or masked IP address.
 */
+ (IOSByteArray *)ipStrToBytesWithNSString:(NSString *)ip;

/*!
 @brief Checks if the other general name is acceptable by this object.
 The name is acceptable if it has the same type name and its
 name value is equal to name value of this object. Also the name
 is acceptable if this general name object is a part of name
 constraints and the specified name is satisfied the restriction
 provided by this object (for more detail see section 4.2.1.11
 of rfc 3280).
 Note that for X400Address [3] check procedure is unclear so method
 just checks the equality of encoded forms.
 For otherName [0], ediPartyName [5], and registeredID [8]
 the check procedure if not defined by rfc 3280 and for names of
 these types this method also checks only for equality of encoded forms.
 */
- (jboolean)isAcceptableWithOrgApacheHarmonySecurityX509GeneralName:(OrgApacheHarmonySecurityX509GeneralName *)gname;

/*!
 @brief Converts OID into array of ints.
 */
+ (IOSIntArray *)oidStrToIntsWithNSString:(NSString *)oid;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityX509GeneralName)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, OTHER_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, RFC822_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, DNS_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, X400_ADDR, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, DIR_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, EDIP_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, UR_ID, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, IP_ADDR, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, REG_ID, jint)

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1Choice *OrgApacheHarmonySecurityX509GeneralName_ASN1_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX509GeneralName, ASN1_, OrgApacheHarmonySecurityAsn1ASN1Choice *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithInt_withNSString_(OrgApacheHarmonySecurityX509GeneralName *self, jint tag, NSString *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithInt_withNSString_(jint tag, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX509OtherName_(OrgApacheHarmonySecurityX509GeneralName *self, OrgApacheHarmonySecurityX509OtherName *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX509OtherName_(OrgApacheHarmonySecurityX509OtherName *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX509ORAddress_(OrgApacheHarmonySecurityX509GeneralName *self, OrgApacheHarmonySecurityX509ORAddress *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX509ORAddress_(OrgApacheHarmonySecurityX509ORAddress *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX501Name_(OrgApacheHarmonySecurityX509GeneralName *self, OrgApacheHarmonySecurityX501Name *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX501Name_(OrgApacheHarmonySecurityX501Name *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX509EDIPartyName_(OrgApacheHarmonySecurityX509GeneralName *self, OrgApacheHarmonySecurityX509EDIPartyName *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithOrgApacheHarmonySecurityX509EDIPartyName_(OrgApacheHarmonySecurityX509EDIPartyName *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithByteArray_(OrgApacheHarmonySecurityX509GeneralName *self, IOSByteArray *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithByteArray_(IOSByteArray *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_initWithInt_withByteArray_(OrgApacheHarmonySecurityX509GeneralName *self, jint tag, IOSByteArray *name);

FOUNDATION_EXPORT OrgApacheHarmonySecurityX509GeneralName *new_OrgApacheHarmonySecurityX509GeneralName_initWithInt_withByteArray_(jint tag, IOSByteArray *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_checkDNSWithNSString_(NSString *dns);

FOUNDATION_EXPORT void OrgApacheHarmonySecurityX509GeneralName_checkURIWithNSString_(NSString *uri);

FOUNDATION_EXPORT IOSIntArray *OrgApacheHarmonySecurityX509GeneralName_oidStrToIntsWithNSString_(NSString *oid);

FOUNDATION_EXPORT IOSByteArray *OrgApacheHarmonySecurityX509GeneralName_ipStrToBytesWithNSString_(NSString *ip);

FOUNDATION_EXPORT NSString *OrgApacheHarmonySecurityX509GeneralName_ipBytesToStrWithByteArray_(IOSByteArray *ip);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityX509GeneralName)

#endif // _OrgApacheHarmonySecurityX509GeneralName_H_
