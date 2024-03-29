//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/BerInputStream.java
//

#ifndef _OrgApacheHarmonySecurityAsn1BerInputStream_H_
#define _OrgApacheHarmonySecurityAsn1BerInputStream_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class IOSIntArray;
@class JavaIoInputStream;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@class OrgApacheHarmonySecurityAsn1ASN1SequenceOf;
@class OrgApacheHarmonySecurityAsn1ASN1Set;
@class OrgApacheHarmonySecurityAsn1ASN1SetOf;
@class OrgApacheHarmonySecurityAsn1ASN1StringType;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

#define OrgApacheHarmonySecurityAsn1BerInputStream_INDEFINIT_LENGTH -1

/*!
 @brief Decodes ASN.1 types encoded with BER (X.690)
 */
@interface OrgApacheHarmonySecurityAsn1BerInputStream : NSObject {
 @public
  IOSByteArray *buffer_;
  /*!
   @brief The position in the buffer.
   Next read must place data into the buffer from this offset
   */
  jint offset_;
  /*!
   @brief Current decoded tag
   */
  jint tag_;
  /*!
   @brief Current decoded length
   */
  jint length_;
  /*!
   @brief Current decoded content
   */
  id content_;
  /*!
   @brief Current decoded tag offset
   */
  jint tagOffset_;
  /*!
   @brief Current decoded content offset
   */
  jint contentOffset_;
  /*!
   @brief The last choice index
   */
  jint choiceIndex_;
  /*!
   @brief Keeps last decoded: year, month, day, hour, minute, second, millisecond
   */
  IOSIntArray *times_;
  jint oidElement_;
  /*!
   @brief Indicates verify or store mode.
   In store mode a decoded content is stored in a newly allocated
 appropriate object. The <code>content</code> variable holds
 a reference to the last created object.
 In verify mode a decoded content is not stored.
   */
  jboolean isVerify_;
  /*!
   @brief Indicates defined or indefined reading mode for associated InputStream.
   This mode is defined by reading a length
 for a first ASN.1 type from InputStream.
   */
  jboolean isIndefinedLength_;
}

#pragma mark Public

/*!
 @brief Creates stream for decoding.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encoded;

/*!
 @brief Creates stream for decoding.
 @param encoded bytes array to be decoded
 @param offset the encoding offset
 @param expectedLength expected length of full encoding, this includes
 identifier, length an content octets
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encoded
                          withInt:(jint)offset
                          withInt:(jint)expectedLength;

/*!
 @brief Creates stream for decoding.
 Allocates initial buffer of default size
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates stream for decoding.
 @param initialSize the internal buffer initial size
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)initialSize;

/*!
 @brief Reallocates the buffer in order to make it
 exactly the size of data it contains
 */
- (void)compactBuffer;

- (id)getWithId:(id)key;

/*!
 @brief Returns internal buffer used for decoding
 */
- (IOSByteArray *)getBuffer;

/*!
 @brief Returns encoded array.
 MUST be invoked after decoding corresponding ASN.1 notation
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns end offset for the current encoded type
 */
- (jint)getEndOffset;

/*!
 @brief Returns length of the current content for decoding
 */
- (jint)getLength;

/*!
 @brief Returns the length of the encoding
 */
+ (jint)getLengthWithByteArray:(IOSByteArray *)encoding;

/*!
 @brief Returns the current offset
 */
- (jint)getOffset;

/*!
 @brief Returns start offset for the current encoded type
 */
- (jint)getTagOffset;

/*!
 @brief Decodes next encoded type.
 Initializes tag, length, tagOffset and contentOffset variables
 @return next decoded tag
 @throws IOException if error occured
 */
- (jint)next;

- (void)putWithId:(id)key
           withId:(id)entry_;

/*!
 @brief Decodes ASN.1 bitstring type
 */
- (void)readBitString;

/*!
 @brief Decodes ASN.1 boolean type
 */
- (void)readBoolean;

/*!
 @brief Reads the next encoded content from the encoded input stream.
 The method MUST be used for reading a primitive encoded content.
 */
- (void)readContent;

/*!
 @brief Decodes ASN.1 Enumerated type
 */
- (void)readEnumerated;

/*!
 @brief Decodes ASN.1 GeneralizedTime type
 @throws IOException if error occured
 */
- (void)readGeneralizedTime;

/*!
 @brief Decodes ASN.1 Integer type
 */
- (void)readInteger;

/*!
 @brief Decodes ASN.1 Octetstring type
 */
- (void)readOctetString;

/*!
 @brief Decodes ASN.1 ObjectIdentifier type
 */
- (void)readOID;

/*!
 @brief Decodes ASN.1 Sequence type
 */
- (void)readSequenceWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

/*!
 @brief Decodes ASN.1 SequenceOf type
 */
- (void)readSequenceOfWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequenceOf;

/*!
 @brief Decodes ASN.1 Set type
 */
- (void)readSetWithOrgApacheHarmonySecurityAsn1ASN1Set:(OrgApacheHarmonySecurityAsn1ASN1Set *)set;

/*!
 @brief Decodes ASN.1 SetOf type
 */
- (void)readSetOfWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

/*!
 @brief Decodes ASN.1 String type
 @throws IOException if an I/O error occurs or the end of the stream is reached
 */
- (void)readStringWithOrgApacheHarmonySecurityAsn1ASN1StringType:(OrgApacheHarmonySecurityAsn1ASN1StringType *)type;

/*!
 @brief Decodes ASN.1 UTCTime type
 @throws IOException if an I/O error occurs or the end of the stream is reached
 */
- (void)readUTCTime;

/*!
 @brief Resets this stream to initial state.
 @param encoded a new bytes array to be decoded
 @throws IOException if an error occurs
 */
- (void)resetWithByteArray:(IOSByteArray *)encoded;

/*!
 @brief Sets verify mode.
 */
- (void)setVerify;

#pragma mark Protected

/*!
 @brief Reads the next encoded byte from the encoded input stream.
 */
- (jint)read;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1BerInputStream)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1BerInputStream, buffer_, IOSByteArray *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1BerInputStream, content_, id)
J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1BerInputStream, times_, IOSIntArray *)

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1BerInputStream, INDEFINIT_LENGTH, jint)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1BerInputStream_initWithByteArray_(OrgApacheHarmonySecurityAsn1BerInputStream *self, IOSByteArray *encoded);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1BerInputStream *new_OrgApacheHarmonySecurityAsn1BerInputStream_initWithByteArray_(IOSByteArray *encoded) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1BerInputStream_initWithByteArray_withInt_withInt_(OrgApacheHarmonySecurityAsn1BerInputStream *self, IOSByteArray *encoded, jint offset, jint expectedLength);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1BerInputStream *new_OrgApacheHarmonySecurityAsn1BerInputStream_initWithByteArray_withInt_withInt_(IOSByteArray *encoded, jint offset, jint expectedLength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1BerInputStream_initWithJavaIoInputStream_(OrgApacheHarmonySecurityAsn1BerInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1BerInputStream *new_OrgApacheHarmonySecurityAsn1BerInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1BerInputStream_initWithJavaIoInputStream_withInt_(OrgApacheHarmonySecurityAsn1BerInputStream *self, JavaIoInputStream *inArg, jint initialSize);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1BerInputStream *new_OrgApacheHarmonySecurityAsn1BerInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint initialSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint OrgApacheHarmonySecurityAsn1BerInputStream_getLengthWithByteArray_(IOSByteArray *encoding);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1BerInputStream)

#endif // _OrgApacheHarmonySecurityAsn1BerInputStream_H_
