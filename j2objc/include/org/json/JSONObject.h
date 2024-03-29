//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/json/src/main/java/org/json/JSONObject.java
//

#ifndef _OrgJsonJSONObject_H_
#define _OrgJsonJSONObject_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class OrgJsonJSONArray;
@class OrgJsonJSONStringer;
@class OrgJsonJSONTokener;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A modifiable set of name/value mappings.
 Names are unique, non-null strings.
 Values may be any mix of <code>JSONObjects</code>, <code>JSONArrays</code>
 , Strings, Booleans, Integers, Longs, Doubles or <code>NULL</code>.
 Values may not be <code>null</code>, <code>NaNs</code>, <code>infinities</code>
 , or of any type not listed here.
 <p>This class can coerce values to another type when requested.
 <ul>
 <li>When the requested type is a boolean, strings will be coerced using a
 case-insensitive comparison to "true" and "false".
 <li>When the requested type is a double, other <code>Number</code> types will
 be coerced using <code>doubleValue</code>. Strings
 that can be coerced using <code>Double.valueOf(String)</code> will be.
 <li>When the requested type is an int, other <code>Number</code> types will
 be coerced using <code>intValue</code>. Strings
 that can be coerced using <code>Double.valueOf(String)</code> will be,
 and then cast to int.
 <li><a name="lossy">When the requested type is a long, other <code>Number</code> types will
 be coerced using <code>longValue</code>. Strings
 that can be coerced using <code>Double.valueOf(String)</code> will be,
 and then cast to long. This two-step conversion is lossy for very
 large values. For example, the string "9223372036854775806" yields the
 long 9223372036854775807.</a>
 <li>When the requested type is a String, other non-null values will be
 coerced using <code>String.valueOf(Object)</code>. Although null cannot be
 coerced, the sentinel value <code>JSONObject.NULL</code> is coerced to the
 string "null".
 </ul>
 <p>This class can look up both mandatory and optional values:
 <ul>
 <li>Use <code>get<i>Type</i>()</code> to retrieve a mandatory value. This
 fails with a <code>JSONException</code> if the requested name has no value
 or if the value cannot be coerced to the requested type.
 <li>Use <code>opt<i>Type</i>()</code> to retrieve an optional value. This
 returns a system- or user-supplied default if the requested name has no
 value or if the value cannot be coerced to the requested type.
 </ul>
 <p><strong>Warning:</strong> this class represents null in two incompatible
 ways: the standard Java <code>null</code> reference, and the sentinel value <code>JSONObject.NULL</code>
 . In particular, calling <code>put(name, null)</code> removes the
 named entry from the object but <code>put(name, JSONObject.NULL)</code> stores an
 entry whose value is <code>JSONObject.NULL</code>.
 <p>Instances of this class are not thread safe. Although this class is
 nonfinal, it was not designed for inheritance and should not be subclassed.
 In particular, self-use by overrideable methods is not specified. See
 <i>Effective Java</i> Item 17, "Design and Document or inheritance or else
 prohibit it" for further information.
 */
@interface OrgJsonJSONObject : NSObject

#pragma mark Public

/*!
 @brief Creates a <code>JSONObject</code> with no name/value mappings.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>JSONObject</code> by copying mappings for the listed names
 from the given object.
 Names that aren't present in <code>copyFrom</code> will
 be skipped.
 */
- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)copyFrom
                        withNSStringArray:(IOSObjectArray *)names;

/*!
 @brief Creates a new <code>JSONObject</code> with name/value mappings from the next
 object in the tokener.
 @param readFrom a tokener whose nextValue() method will yield a
 <code>JSONObject</code>.
 @throws JSONException if the parse fails or doesn't yield a
 <code>JSONObject</code>.
 */
- (instancetype)initWithOrgJsonJSONTokener:(OrgJsonJSONTokener *)readFrom;

/*!
 @brief Creates a new <code>JSONObject</code> by copying all name/value mappings from
 the given map.
 @param copyFrom a map whose keys are of type <code>String</code> and whose
 values are of supported types.
 @throws NullPointerException if any of the map's keys are null.
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)copyFrom;

/*!
 @brief Creates a new <code>JSONObject</code> with name/value mappings from the JSON
 string.
 @param json a JSON-encoded string containing an object.
 @throws JSONException if the parse fails or doesn't yield a <code>JSONObject</code>
 .
 */
- (instancetype)initWithNSString:(NSString *)json;

/*!
 @brief Appends <code>value</code> to the array already mapped to <code>name</code>.
 If
 this object has no mapping for <code>name</code>, this inserts a new mapping.
 If the mapping exists but its value is not an array, the existing
 and new values are inserted in order into a new array which is itself
 mapped to <code>name</code>. In aggregate, this allows values to be added to a
 mapping one at a time.
 <p> Note that <code>append(String, Object)</code> provides better semantics.
 In particular, the mapping for <code>name</code> will <b>always</b> be a
 <code>JSONArray</code>. Using <code>accumulate</code> will result in either a
 <code>JSONArray</code> or a mapping whose type is the type of <code>value</code>
 depending on the number of calls to it.
 @param value a <code>JSONObject</code>, <code>JSONArray</code>, String, Boolean,
 Integer, Long, Double, <code>NULL</code> or null. May not be <code>NaNs</code>
  or <code>infinities</code>.
 */
- (OrgJsonJSONObject *)accumulateWithNSString:(NSString *)name
                                       withId:(id)value;

/*!
 @brief Appends values to the array mapped to <code>name</code>.
 A new <code>JSONArray</code>
 mapping for <code>name</code> will be inserted if no mapping exists. If the existing
 mapping for <code>name</code> is not a <code>JSONArray</code>, a <code>JSONException</code>
 will be thrown.
 @throws JSONException if <code>name</code> is <code>null</code> or if the mapping for
 <code>name</code> is non-null and is not a <code>JSONArray</code>.
 */
- (OrgJsonJSONObject *)appendWithNSString:(NSString *)name
                                   withId:(id)value;

/*!
 @brief Returns the value mapped by <code>name</code>, or throws if no such mapping exists.
 @throws JSONException if no such mapping exists.
 */
- (id)getWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a boolean or
 can be coerced to a boolean, or throws otherwise.
 @throws JSONException if the mapping doesn't exist or cannot be coerced
 to a boolean.
 */
- (jboolean)getBooleanWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a double or
 can be coerced to a double, or throws otherwise.
 @throws JSONException if the mapping doesn't exist or cannot be coerced
 to a double.
 */
- (jdouble)getDoubleWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is an int or
 can be coerced to an int, or throws otherwise.
 @throws JSONException if the mapping doesn't exist or cannot be coerced
 to an int.
 */
- (jint)getIntWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a <code>JSONArray</code>
 , or throws otherwise.
 @throws JSONException if the mapping doesn't exist or is not a <code>JSONArray</code>
 .
 */
- (OrgJsonJSONArray *)getJSONArrayWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a <code>JSONObject</code>
 , or throws otherwise.
 @throws JSONException if the mapping doesn't exist or is not a <code>JSONObject</code>
 .
 */
- (OrgJsonJSONObject *)getJSONObjectWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a long or
 can be coerced to a long, or throws otherwise.
 Note that JSON represents numbers as doubles,
 so this is <a href="#lossy">lossy</a>; use strings to transfer numbers via JSON.
 @throws JSONException if the mapping doesn't exist or cannot be coerced
 to a long.
 */
- (jlong)getLongWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists, coercing it if
 necessary, or throws if no such mapping exists.
 @throws JSONException if no such mapping exists.
 */
- (NSString *)getStringWithNSString:(NSString *)name;

/*!
 @brief Returns true if this object has a mapping for <code>name</code>.
 The mapping
 may be <code>NULL</code>.
 */
- (jboolean)hasWithNSString:(NSString *)name;

/*!
 @brief Returns true if this object has no mapping for <code>name</code> or if it has
 a mapping whose value is <code>NULL</code>.
 */
- (jboolean)isNullWithNSString:(NSString *)name;

/*!
 @brief Returns an iterator of the <code>String</code> names in this object.
 The
 returned iterator supports <code>remove</code>, which will
 remove the corresponding mapping from this object. If this object is
 modified after the iterator is returned, the iterator's behavior is
 undefined. The order of the keys is undefined.
 */
- (id<JavaUtilIterator>)keys;

/*!
 @brief Returns the set of <code>String</code> names in this object.
 The returned set
 is a view of the keys in this object. <code>Set.remove(Object)</code> will remove
 the corresponding mapping from this object and set iterator behaviour
 is undefined if this object is modified after it is returned.
 See <code>keys()</code>.
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Returns the number of name/value mappings in this object.
 */
- (jint)length;

/*!
 @brief Returns an array containing the string names in this object.
 This method
 returns null if this object contains no mappings.
 */
- (OrgJsonJSONArray *)names;

/*!
 @brief Encodes the number as a JSON string.
 @param number a finite value. May not be <code>NaNs</code> or
 <code>infinities</code>.
 */
+ (NSString *)numberToStringWithNSNumber:(NSNumber *)number;

/*!
 @brief Returns the value mapped by <code>name</code>, or null if no such mapping
 exists.
 */
- (id)optWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a boolean or
 can be coerced to a boolean, or false otherwise.
 */
- (jboolean)optBooleanWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a boolean or
 can be coerced to a boolean, or <code>fallback</code> otherwise.
 */
- (jboolean)optBooleanWithNSString:(NSString *)name
                       withBoolean:(jboolean)fallback;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a double or
 can be coerced to a double, or <code>NaN</code> otherwise.
 */
- (jdouble)optDoubleWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a double or
 can be coerced to a double, or <code>fallback</code> otherwise.
 */
- (jdouble)optDoubleWithNSString:(NSString *)name
                      withDouble:(jdouble)fallback;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is an int or
 can be coerced to an int, or 0 otherwise.
 */
- (jint)optIntWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is an int or
 can be coerced to an int, or <code>fallback</code> otherwise.
 */
- (jint)optIntWithNSString:(NSString *)name
                   withInt:(jint)fallback;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a <code>JSONArray</code>
 , or null otherwise.
 */
- (OrgJsonJSONArray *)optJSONArrayWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a <code>JSONObject</code>
 , or null otherwise.
 */
- (OrgJsonJSONObject *)optJSONObjectWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a long or
 can be coerced to a long, or 0 otherwise.
 Note that JSON represents numbers as doubles,
 so this is <a href="#lossy">lossy</a>; use strings to transfer numbers via JSON.
 */
- (jlong)optLongWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists and is a long or
 can be coerced to a long, or <code>fallback</code> otherwise.
 Note that JSON represents
 numbers as doubles, so this is <a href="#lossy">lossy</a>; use strings to transfer
 numbers via JSON.
 */
- (jlong)optLongWithNSString:(NSString *)name
                    withLong:(jlong)fallback;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists, coercing it if
 necessary, or the empty string if no such mapping exists.
 */
- (NSString *)optStringWithNSString:(NSString *)name;

/*!
 @brief Returns the value mapped by <code>name</code> if it exists, coercing it if
 necessary, or <code>fallback</code> if no such mapping exists.
 */
- (NSString *)optStringWithNSString:(NSString *)name
                       withNSString:(NSString *)fallback;

/*!
 @brief Maps <code>name</code> to <code>value</code>, clobbering any existing name/value
 mapping with the same name.
 @return this object.
 */
- (OrgJsonJSONObject *)putWithNSString:(NSString *)name
                           withBoolean:(jboolean)value;

/*!
 @brief Maps <code>name</code> to <code>value</code>, clobbering any existing name/value
 mapping with the same name.
 @param value a finite value. May not be <code>NaNs</code> or
 <code>infinities</code>.
 @return this object.
 */
- (OrgJsonJSONObject *)putWithNSString:(NSString *)name
                            withDouble:(jdouble)value;

/*!
 @brief Maps <code>name</code> to <code>value</code>, clobbering any existing name/value
 mapping with the same name.
 @return this object.
 */
- (OrgJsonJSONObject *)putWithNSString:(NSString *)name
                               withInt:(jint)value;

/*!
 @brief Maps <code>name</code> to <code>value</code>, clobbering any existing name/value
 mapping with the same name.
 @return this object.
 */
- (OrgJsonJSONObject *)putWithNSString:(NSString *)name
                              withLong:(jlong)value;

/*!
 @brief Maps <code>name</code> to <code>value</code>, clobbering any existing name/value
 mapping with the same name.
 If the value is <code>null</code>, any existing
 mapping for <code>name</code> is removed.
 @param value a <code>JSONObject</code>, <code>JSONArray</code>, String, Boolean,
 Integer, Long, Double, <code>NULL</code>, or <code>null</code>. May not be
 <code>NaNs</code> or <code>infinities</code>
 .
 @return this object.
 */
- (OrgJsonJSONObject *)putWithNSString:(NSString *)name
                                withId:(id)value;

/*!
 @brief Equivalent to <code>put(name, value)</code> when both parameters are non-null;
 does nothing otherwise.
 */
- (OrgJsonJSONObject *)putOptWithNSString:(NSString *)name
                                   withId:(id)value;

/*!
 @brief Encodes <code>data</code> as a JSON string.
 This applies quotes and any
 necessary character escaping.
 @param data the string to encode. Null will be interpreted as an empty
 string.
 */
+ (NSString *)quoteWithNSString:(NSString *)data;

/*!
 @brief Removes the named mapping if it exists; does nothing otherwise.
 @return the value previously mapped by <code>name</code>, or null if there was
 no such mapping.
 */
- (id)removeWithNSString:(NSString *)name;

/*!
 @brief Returns an array with the values corresponding to <code>names</code>.
 The
 array contains null for names that aren't mapped. This method returns
 null if <code>names</code> is either null or empty.
 */
- (OrgJsonJSONArray *)toJSONArrayWithOrgJsonJSONArray:(OrgJsonJSONArray *)names;

/*!
 @brief Encodes this object as a compact JSON string, such as:
 @code
{"query":"Pizza","locations":[94043,90210]}
@endcode
 */
- (NSString *)description;

/*!
 @brief Encodes this object as a human readable JSON string for debugging, such
 as:
 @code

  {
     "query": "Pizza",
     "locations": [
         94043,
         90210
     ]
  
@endcode
 @param indentSpaces the number of spaces to indent for each level of
 nesting.
 */
- (NSString *)toStringWithInt:(jint)indentSpaces;

/*!
 @brief Wraps the given object if necessary.
 <p>If the object is null or , returns <code>NULL</code>.
 If the object is a <code>JSONArray</code> or <code>JSONObject</code>, no wrapping is necessary.
 If the object is <code>NULL</code>, no wrapping is necessary.
 If the object is an array or <code>Collection</code>, returns an equivalent <code>JSONArray</code>.
 If the object is a <code>Map</code>, returns an equivalent <code>JSONObject</code>.
 If the object is a primitive wrapper type or <code>String</code>, returns the object.
 Otherwise if the object is from a <code>java</code> package, returns the result of <code>toString</code>.
 If wrapping fails, returns null.
 */
+ (id)wrapWithId:(id)o;

#pragma mark Package-Private

- (NSString *)checkNameWithNSString:(NSString *)name;

- (void)writeToWithOrgJsonJSONStringer:(OrgJsonJSONStringer *)stringer;

@end

J2OBJC_STATIC_INIT(OrgJsonJSONObject)

FOUNDATION_EXPORT id OrgJsonJSONObject_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgJsonJSONObject, NULL__, id)

FOUNDATION_EXPORT void OrgJsonJSONObject_init(OrgJsonJSONObject *self);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithJavaUtilMap_(OrgJsonJSONObject *self, id<JavaUtilMap> copyFrom);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithJavaUtilMap_(id<JavaUtilMap> copyFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithOrgJsonJSONTokener_(OrgJsonJSONObject *self, OrgJsonJSONTokener *readFrom);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithOrgJsonJSONTokener_(OrgJsonJSONTokener *readFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithNSString_(OrgJsonJSONObject *self, NSString *json);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithNSString_(NSString *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithOrgJsonJSONObject_withNSStringArray_(OrgJsonJSONObject *self, OrgJsonJSONObject *copyFrom, IOSObjectArray *names);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithOrgJsonJSONObject_withNSStringArray_(OrgJsonJSONObject *copyFrom, IOSObjectArray *names) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *OrgJsonJSONObject_numberToStringWithNSNumber_(NSNumber *number);

FOUNDATION_EXPORT NSString *OrgJsonJSONObject_quoteWithNSString_(NSString *data);

FOUNDATION_EXPORT id OrgJsonJSONObject_wrapWithId_(id o);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONObject)

#endif // _OrgJsonJSONObject_H_
