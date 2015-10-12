//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DateFormat.java
//

#ifndef _JavaTextDateFormat_H_
#define _JavaTextDateFormat_H_

#include "J2ObjC_header.h"
#include "java/text/Format.h"

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextNumberFormat;
@class JavaTextParsePosition;
@class JavaUtilCalendar;
@class JavaUtilDate;
@class JavaUtilLocale;
@class JavaUtilTimeZone;

#define JavaTextDateFormat_DEFAULT 2
#define JavaTextDateFormat_FULL 0
#define JavaTextDateFormat_LONG 1
#define JavaTextDateFormat_MEDIUM 2
#define JavaTextDateFormat_SHORT 3
#define JavaTextDateFormat_ERA_FIELD 0
#define JavaTextDateFormat_YEAR_FIELD 1
#define JavaTextDateFormat_MONTH_FIELD 2
#define JavaTextDateFormat_DATE_FIELD 3
#define JavaTextDateFormat_HOUR_OF_DAY1_FIELD 4
#define JavaTextDateFormat_HOUR_OF_DAY0_FIELD 5
#define JavaTextDateFormat_MINUTE_FIELD 6
#define JavaTextDateFormat_SECOND_FIELD 7
#define JavaTextDateFormat_MILLISECOND_FIELD 8
#define JavaTextDateFormat_DAY_OF_WEEK_FIELD 9
#define JavaTextDateFormat_DAY_OF_YEAR_FIELD 10
#define JavaTextDateFormat_DAY_OF_WEEK_IN_MONTH_FIELD 11
#define JavaTextDateFormat_WEEK_OF_YEAR_FIELD 12
#define JavaTextDateFormat_WEEK_OF_MONTH_FIELD 13
#define JavaTextDateFormat_AM_PM_FIELD 14
#define JavaTextDateFormat_HOUR1_FIELD 15
#define JavaTextDateFormat_HOUR0_FIELD 16
#define JavaTextDateFormat_TIMEZONE_FIELD 17

/*!
 @brief Formats or parses dates and times.
 <p>This class provides factories for obtaining instances configured for a specific locale.
 The most common subclass is <code>SimpleDateFormat</code>.
 <h4>Sample Code</h4>
 <p>This code:
 @code

  DateFormat[] formats = new DateFormat[] {
   DateFormat.getDateInstance(),
   DateFormat.getDateTimeInstance(),
   DateFormat.getTimeInstance(),
  };
  for (DateFormat df : formats) {
   System.out.println(df.format(new Date(0)));
   df.setTimeZone(TimeZone.getTimeZone("UTC"));
   System.out.println(df.format(new Date(0)));
  }
  
@endcode
 <p>Produces this output when run on an <code>en_US</code> device in the America/Los_Angeles time zone:
 @code

  Dec 31, 1969
  Jan 1, 1970
  Dec 31, 1969 4:00:00 PM
  Jan 1, 1970 12:00:00 AM
  4:00:00 PM
  12:00:00 AM
  
@endcode
 And will produce similarly appropriate localized human-readable output on any user's system.
 Notice how the same point in time when formatted can appear to be a different time when rendered
 for a different time zone. This is one reason why formatting should be left until the data will
 only be presented to a human. Machines should interchange "Unix time" integers.
 */
@interface JavaTextDateFormat : JavaTextFormat {
 @public
  /*!
   @brief The calendar that this <code>DateFormat</code> uses to format a number
 representing a date.
   */
  JavaUtilCalendar *calendar_;
  /*!
   @brief The number format used to format a number.
   */
  JavaTextNumberFormat *numberFormat_;
}

#pragma mark Public

/*!
 @brief Returns a new instance of <code>DateFormat</code> with the same properties.
 */
- (id)clone;

/*!
 @brief Compares this date format with the specified object and indicates if they
 are equal.
 @param object
 the object to compare with this date format.
 @return <code>true</code> if <code>object</code> is a <code>DateFormat</code> object and
 it has the same properties as this date format; <code>false</code>
 otherwise.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Formats the specified date using the rules of this date format.
 @param date
 the date to format.
 @return the formatted string.
 */
- (NSString *)formatWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Formats the specified date as a string using the pattern of this date
 format and appends the string to the specified string buffer.
 <p>
 If the <code>field</code> member of <code>field</code> contains a value specifying
 a format field, then its <code>beginIndex</code> and <code>endIndex</code> members
 will be updated with the position of the first occurrence of this field
 in the formatted text.
 @param date
 the date to format.
 @param buffer
 the target string buffer to append the formatted date/time to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 */
- (JavaLangStringBuffer *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                       withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Formats the specified object as a string using the pattern of this date
 format and appends the string to the specified string buffer.
 <p>
 If the <code>field</code> member of <code>field</code> contains a value specifying
 a format field, then its <code>beginIndex</code> and <code>endIndex</code> members
 will be updated with the position of the first occurrence of this field
 in the formatted text.
 @param object
 the source object to format, must be a <code>Date</code> or a
 <code>Number</code>. If <code>object</code> is a number then a date is
 constructed using the <code>longValue()</code> of the number.
 @param buffer
 the target string buffer to append the formatted date/time to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 @throws IllegalArgumentException
 if <code>object</code> is neither a <code>Date</code> nor a
 <code>Number</code> instance.
 */
- (JavaLangStringBuffer *)formatWithId:(id)object
              withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Returns an array of locales for which custom <code>DateFormat</code> instances
 are available.
 <p>Note that Android does not support user-supplied locale service providers.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns the calendar used by this <code>DateFormat</code>.
 @return the calendar used by this date format.
 */
- (JavaUtilCalendar *)getCalendar;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing dates in
 the DEFAULT style for the default locale.
 @return the <code>DateFormat</code> instance for the default style and locale.
 */
+ (JavaTextDateFormat *)getDateInstance;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing dates in
 the specified style for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param style
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @return the <code>DateFormat</code> instance for <code>style</code> and the default
 locale.
 @throws IllegalArgumentException
 if <code>style</code> is not one of SHORT, MEDIUM, LONG, FULL, or
 DEFAULT.
 */
+ (JavaTextDateFormat *)getDateInstanceWithInt:(jint)style;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing dates in
 the specified style for the specified locale.
 @param style
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @param locale
 the locale.
 @throws IllegalArgumentException
 if <code>style</code> is not one of SHORT, MEDIUM, LONG, FULL, or
 DEFAULT.
 @return the <code>DateFormat</code> instance for <code>style</code> and
 <code>locale</code>.
 */
+ (JavaTextDateFormat *)getDateInstanceWithInt:(jint)style
                            withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing dates
 and time values in the DEFAULT style for the default locale.
 @return the <code>DateFormat</code> instance for the default style and locale.
 */
+ (JavaTextDateFormat *)getDateTimeInstance;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing of both
 dates and time values in the manner appropriate for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param dateStyle
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @param timeStyle
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @return the <code>DateFormat</code> instance for <code>dateStyle</code>,
 <code>timeStyle</code> and the default locale.
 @throws IllegalArgumentException
 if <code>dateStyle</code> or <code>timeStyle</code> is not one of
 SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 */
+ (JavaTextDateFormat *)getDateTimeInstanceWithInt:(jint)dateStyle
                                           withInt:(jint)timeStyle;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing dates
 and time values in the specified styles for the specified locale.
 @param dateStyle
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @param timeStyle
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @param locale
 the locale.
 @return the <code>DateFormat</code> instance for <code>dateStyle</code>,
 <code>timeStyle</code> and <code>locale</code>.
 @throws IllegalArgumentException
 if <code>dateStyle</code> or <code>timeStyle</code> is not one of
 SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 */
+ (JavaTextDateFormat *)getDateTimeInstanceWithInt:(jint)dateStyle
                                           withInt:(jint)timeStyle
                                withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing dates
 and times in the SHORT style for the default locale.
 @return the <code>DateFormat</code> instance for the SHORT style and default
 locale.
 */
+ (JavaTextDateFormat *)getInstance;

/*!
 @brief Returns the <code>NumberFormat</code> used by this <code>DateFormat</code>.
 @return the <code>NumberFormat</code> used by this date format.
 */
- (JavaTextNumberFormat *)getNumberFormat;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing time
 values in the DEFAULT style for the default locale.
 @return the <code>DateFormat</code> instance for the default style and locale.
 */
+ (JavaTextDateFormat *)getTimeInstance;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing time
 values in the specified style for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param style
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @return the <code>DateFormat</code> instance for <code>style</code> and the default
 locale.
 @throws IllegalArgumentException
 if <code>style</code> is not one of SHORT, MEDIUM, LONG, FULL, or
 DEFAULT.
 */
+ (JavaTextDateFormat *)getTimeInstanceWithInt:(jint)style;

/*!
 @brief Returns a <code>DateFormat</code> instance for formatting and parsing time
 values in the specified style for the specified locale.
 @param style
 one of SHORT, MEDIUM, LONG, FULL, or DEFAULT.
 @param locale
 the locale.
 @throws IllegalArgumentException
 if <code>style</code> is not one of SHORT, MEDIUM, LONG, FULL, or
 DEFAULT.
 @return the <code>DateFormat</code> instance for <code>style</code> and
 <code>locale</code>.
 */
+ (JavaTextDateFormat *)getTimeInstanceWithInt:(jint)style
                            withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the time zone of this date format's calendar.
 @return the time zone of the calendar used by this date format.
 */
- (JavaUtilTimeZone *)getTimeZone;

- (NSUInteger)hash;

/*!
 @brief Indicates whether the calendar used by this date format is lenient.
 @return <code>true</code> if the calendar is lenient; <code>false</code> otherwise.
 */
- (jboolean)isLenient;

/*!
 @brief Parses a date from the specified string using the rules of this date
 format.
 @param string
 the string to parse.
 @return the <code>Date</code> resulting from the parsing.
 @throws ParseException
 if an error occurs during parsing.
 */
- (JavaUtilDate *)parseWithNSString:(NSString *)string;

/*!
 @brief Parses a date from the specified string starting at the index specified
 by <code>position</code>.
 If the string is successfully parsed then the index
 of the <code>ParsePosition</code> is updated to the index following the parsed
 text. On error, the index is unchanged and the error index of <code>ParsePosition</code>
  is set to the index where the error occurred.
 <p>
 By default, parsing is lenient: If the input is not in the form used by
 this object's format method but can still be parsed as a date, then the
 parse succeeds. Clients may insist on strict adherence to the format by
 calling <code>setLenient(false)</code>.
 @param string
 the string to parse.
 @param position
 input/output parameter, specifies the start index in <code>string</code>
  from where to start parsing. If parsing is successful,
 it is updated with the index following the parsed text; on
 error, the index is unchanged and the error index is set to
 the index where the error occurred.
 @return the date resulting from the parse, or <code>null</code> if there is an
 error.
 */
- (JavaUtilDate *)parseWithNSString:(NSString *)string
          withJavaTextParsePosition:(JavaTextParsePosition *)position;

/*!
 @brief Parses a date from the specified string starting at the index specified
 by <code>position</code>.
 If the string is successfully parsed then the index
 of the <code>ParsePosition</code> is updated to the index following the parsed
 text. On error, the index is unchanged and the error index of
 <code>ParsePosition</code> is set to the index where the error occurred.
 <p>
 By default, parsing is lenient: If the input is not in the form used by
 this object's format method but can still be parsed as a date, then the
 parse succeeds. Clients may insist on strict adherence to the format by
 calling <code>setLenient(false)</code>.
 @param string
 the string to parse.
 @param position
 input/output parameter, specifies the start index in
 <code>string</code> from where to start parsing. If parsing is
 successful, it is updated with the index following the parsed
 text; on error, the index is unchanged and the error index
 is set to the index where the error occurred.
 @return the date resulting from the parsing, or <code>null</code> if there is
 an error.
 */
- (id)parseObjectWithNSString:(NSString *)string
    withJavaTextParsePosition:(JavaTextParsePosition *)position;

/*!
  for internal use only.
 */
+ (void)set24HourTimePrefWithBoolean:(jboolean)is24Hour;

/*!
 @brief Sets the calendar used by this date format.
 @param cal
 the new calendar.
 */
- (void)setCalendarWithJavaUtilCalendar:(JavaUtilCalendar *)cal;

/*!
 @brief Specifies whether or not date/time parsing shall be lenient.
 With lenient
 parsing, the parser may use heuristics to interpret inputs that do not
 precisely match this object's format. With strict parsing, inputs must
 match this object's format.
 @param value
 <code>true</code> to set the calendar to be lenient, <code>false</code>
 otherwise.
 */
- (void)setLenientWithBoolean:(jboolean)value;

/*!
 @brief Sets the <code>NumberFormat</code> used by this date format.
 @param format
 the new number format.
 */
- (void)setNumberFormatWithJavaTextNumberFormat:(JavaTextNumberFormat *)format;

/*!
 @brief Sets the time zone of the calendar used by this date format.
 @param timezone
 the new time zone.
 */
- (void)setTimeZoneWithJavaUtilTimeZone:(JavaUtilTimeZone *)timezone;

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>DateFormat</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextDateFormat)

J2OBJC_FIELD_SETTER(JavaTextDateFormat, calendar_, JavaUtilCalendar *)
J2OBJC_FIELD_SETTER(JavaTextDateFormat, numberFormat_, JavaTextNumberFormat *)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DEFAULT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, FULL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, LONG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MEDIUM, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, SHORT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, ERA_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, YEAR_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DATE_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR_OF_DAY1_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR_OF_DAY0_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MINUTE_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, SECOND_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, MILLISECOND_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DAY_OF_WEEK_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DAY_OF_YEAR_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, DAY_OF_WEEK_IN_MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, WEEK_OF_YEAR_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, WEEK_OF_MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, AM_PM_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR1_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, HOUR0_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat, TIMEZONE_FIELD, jint)

FOUNDATION_EXPORT void JavaTextDateFormat_init(JavaTextDateFormat *self);

FOUNDATION_EXPORT IOSObjectArray *JavaTextDateFormat_getAvailableLocales();

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateInstance();

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateInstanceWithInt_(jint style);

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateInstanceWithInt_withJavaUtilLocale_(jint style, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateTimeInstance();

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateTimeInstanceWithInt_withInt_(jint dateStyle, jint timeStyle);

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getDateTimeInstanceWithInt_withInt_withJavaUtilLocale_(jint dateStyle, jint timeStyle, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getInstance();

FOUNDATION_EXPORT void JavaTextDateFormat_set24HourTimePrefWithBoolean_(jboolean is24Hour);

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getTimeInstance();

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getTimeInstanceWithInt_(jint style);

FOUNDATION_EXPORT JavaTextDateFormat *JavaTextDateFormat_getTimeInstanceWithInt_withJavaUtilLocale_(jint style, JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDateFormat)

/*!
 @brief The instances of this inner class are used as attribute keys and values
 in <code>AttributedCharacterIterator</code> that the
 <code>SimpleDateFormat.formatToCharacterIterator(Object)</code> method returns.
 <p>
 There is no public constructor in this class, the only instances are the
 constants defined here.
 */
@interface JavaTextDateFormat_Field : JavaTextFormat_Field

#pragma mark Public

/*!
 @brief Returns the Calendar field that this field represents.
 @return the calendar field.
 */
- (jint)getCalendarField;

/*!
 @brief Returns the <code>DateFormat.Field</code> instance for the given calendar
 field.
 @param calendarField
 a calendar field constant.
 @return the <code>DateFormat.Field</code> corresponding to
 <code>calendarField</code>.
 @throws IllegalArgumentException
 if <code>calendarField</code> is negative or greater than the
 field count of <code>Calendar</code>.
 */
+ (JavaTextDateFormat_Field *)ofCalendarFieldWithInt:(jint)calendarField;

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>DateFormat.Field</code> with the given
 fieldName and calendar field.
 @param fieldName
 the field name.
 @param calendarField
 the calendar field type of the field.
 */
- (instancetype)initWithNSString:(NSString *)fieldName
                         withInt:(jint)calendarField;

@end

J2OBJC_STATIC_INIT(JavaTextDateFormat_Field)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_ERA_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, ERA_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, YEAR_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR_OF_DAY0_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR_OF_DAY0_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR_OF_DAY1_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR_OF_DAY1_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_MINUTE_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, MINUTE_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_SECOND_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, SECOND_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_MILLISECOND_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, MILLISECOND_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_WEEK_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_WEEK_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_YEAR_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_DAY_OF_WEEK_IN_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, DAY_OF_WEEK_IN_MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_WEEK_OF_YEAR_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, WEEK_OF_YEAR_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_WEEK_OF_MONTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, WEEK_OF_MONTH_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_AM_PM_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, AM_PM_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR0_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR0_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_HOUR1_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, HOUR1_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_TIME_ZONE_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextDateFormat_Field, TIME_ZONE_, JavaTextDateFormat_Field *)

FOUNDATION_EXPORT void JavaTextDateFormat_Field_initWithNSString_withInt_(JavaTextDateFormat_Field *self, NSString *fieldName, jint calendarField);

FOUNDATION_EXPORT JavaTextDateFormat_Field *new_JavaTextDateFormat_Field_initWithNSString_withInt_(NSString *fieldName, jint calendarField) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDateFormat_Field *JavaTextDateFormat_Field_ofCalendarFieldWithInt_(jint calendarField);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDateFormat_Field)

#endif // _JavaTextDateFormat_H_
