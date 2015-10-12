//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/MessageFormat.java
//

#ifndef _JavaTextMessageFormat_H_
#define _JavaTextMessageFormat_H_

#include "J2ObjC_header.h"
#include "java/text/Format.h"

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilLocale;
@protocol JavaTextAttributedCharacterIterator;

/*!
 @brief Produces concatenated messages in language-neutral way.
 New code
 should probably use <code>java.util.Formatter</code> instead.
 <p>
 <code>MessageFormat</code> takes a set of objects, formats them and then
 inserts the formatted strings into the pattern at the appropriate places.
 <p>
 <strong>Note:</strong> <code>MessageFormat</code> differs from the other
 <code>Format</code> classes in that you create a <code>MessageFormat</code>
 object with one of its constructors (not with a <code>getInstance</code>
 style factory method). The factory methods aren't necessary because
 <code>MessageFormat</code> itself doesn't implement locale-specific
 behavior. Any locale-specific behavior is defined by the pattern that you
 provide as well as the subformats used for inserted arguments.
 <h4><a name="patterns">Patterns and their interpretation</a></h4>
 <code>MessageFormat</code> uses patterns of the following form:
 <blockquote>
 @code

  <i>MessageFormatPattern:</i>
         <i>String</i>
         <i>MessageFormatPattern</i> <i>FormatElement</i> <i>String</i>
  <i>FormatElement:</i>
         { <i>ArgumentIndex</i> }
         { <i>ArgumentIndex</i> , <i>FormatType</i> }
         { <i>ArgumentIndex</i> , <i>FormatType</i> , <i>FormatStyle</i> }
  <i>FormatType: one of </i>
         number date time choice
  <i>FormatStyle:</i>
         short
         medium
         long
         full
         integer
         currency
         percent
         <i>SubformatPattern</i>
  <i>String:</i>
         <i>StringPart&lt;sub&gt;opt&lt;/sub&gt;</i>
         <i>String</i> <i>StringPart</i>
  <i>StringPart:</i>
         ''
         ' <i>QuotedString</i> '
         <i>UnquotedString</i>
  <i>SubformatPattern:</i>
         <i>SubformatPatternPart&lt;sub&gt;opt&lt;/sub&gt;</i>
         <i>SubformatPattern</i> <i>SubformatPatternPart</i>
  <i>SubFormatPatternPart:</i>
         ' <i>QuotedPattern</i> '
         <i>UnquotedPattern</i>
  
@endcode
 </blockquote>
 <p>
 Within a <i>String</i>, <code>"''"</code> represents a single quote. A
 <i>QuotedString</i> can contain arbitrary characters except single quotes;
 the surrounding single quotes are removed. An <i>UnquotedString</i> can
 contain arbitrary characters except single quotes and left curly brackets.
 Thus, a string that should result in the formatted message "'{0}'" can be
 written as <code></code> "''''0}''"} or <code></code> "'''0}'''"}.
 <p>
 Within a <i>SubformatPattern</i>, different rules apply. A <i>QuotedPattern</i>
 can contain arbitrary characters except single quotes, but the surrounding
 single quotes are <strong>not</strong> removed, so they may be interpreted
 by the subformat. For example, <code></code> "1,number,$'#',##}"} will
 produce a number format with the hash-sign quoted, with a result such as:
 "$#31,45". An <i>UnquotedPattern</i> can contain arbitrary characters except
 single quotes, but curly braces within it must be balanced. For example,
 <code></code> "ab 0} de"} and <code>"ab '</code>' de"} are valid subformat
 patterns, but <code></code> "ab 0'}' de"} and <code>"ab</code> de"} are
 not.
 <dl>
 <dt><b>Warning:</b></dt>
 <dd>The rules for using quotes within message format patterns unfortunately
 have shown to be somewhat confusing. In particular, it isn't always obvious
 to localizers whether single quotes need to be doubled or not. Make sure to
 inform localizers about the rules, and tell them (for example, by using
 comments in resource bundle source files) which strings will be processed by
 <code>MessageFormat</code>. Note that localizers may need to use single quotes in
 translated strings where the original version doesn't have them. <br>
 Note also that the simplest way to avoid the problem is to use the real
 apostrophe (single quote) character \u2019 (') for human-readable text, and
 to use the ASCII apostrophe (\u0027 ' ) only in program syntax, like quoting
 in <code>MessageFormat</code>. See the annotations for U+0027 Apostrophe in The Unicode
 Standard.
 </dl>
 <p>
 The <i>ArgumentIndex</i> value is a non-negative integer written using the
 digits '0' through '9', and represents an index into the
 <code>arguments</code> array passed to the <code>format</code> methods or
 the result array returned by the <code>parse</code> methods.
 <p>
 The <i>FormatType</i> and <i>FormatStyle</i> values are used to create a
 <code>Format</code> instance for the format element. The following table
 shows how the values map to <code>Format</code> instances. Combinations not shown in the
 table are illegal. A <i>SubformatPattern</i> must be a valid pattern string
 for the <code>Format</code> subclass used.
 <p>
 <table border=1>
 <tr>
 <th>Format Type</th>
 <th>Format Style</th>
 <th>Subformat Created</th>
 </tr>
 <tr>
 <td colspan="2"><i>(none)</i></td>
 <td><code>null</code></td>
 </tr>
 <tr>
 <td rowspan="5"><code>number</code></td>
 <td><i>(none)</i></td>
 <td><code>NumberFormat.getInstance(getLocale())</code></td>
 </tr>
 <tr>
 <td><code>integer</code></td>
 <td><code>NumberFormat.getIntegerInstance(getLocale())</code></td>
 </tr>
 <tr>
 <td><code>currency</code></td>
 <td><code>NumberFormat.getCurrencyInstance(getLocale())</code></td>
 </tr>
 <tr>
 <td><code>percent</code></td>
 <td><code>NumberFormat.getPercentInstance(getLocale())</code></td>
 </tr>
 <tr>
 <td><i>SubformatPattern</i></td>
 <td><code>new DecimalFormat(subformatPattern, new DecimalFormatSymbols(getLocale()))</code></td>
 </tr>
 <tr>
 <td rowspan="6"><code>date</code></td>
 <td><i>(none)</i></td>
 <td><code>DateFormat.getDateInstance(DateFormat.DEFAULT, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>short</code></td>
 <td><code>DateFormat.getDateInstance(DateFormat.SHORT, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>medium</code></td>
 <td><code>DateFormat.getDateInstance(DateFormat.DEFAULT, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>long</code></td>
 <td><code>DateFormat.getDateInstance(DateFormat.LONG, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>full</code></td>
 <td><code>DateFormat.getDateInstance(DateFormat.FULL, getLocale())</code></td>
 </tr>
 <tr>
 <td><i>SubformatPattern</i></td>
 <td><code>new SimpleDateFormat(subformatPattern, getLocale())</code></td>
 </tr>
 <tr>
 <td rowspan="6"><code>time</code></td>
 <td><i>(none)</i></td>
 <td><code>DateFormat.getTimeInstance(DateFormat.DEFAULT, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>short</code></td>
 <td><code>DateFormat.getTimeInstance(DateFormat.SHORT, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>medium</code></td>
 <td><code>DateFormat.getTimeInstance(DateFormat.DEFAULT, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>long</code></td>
 <td><code>DateFormat.getTimeInstance(DateFormat.LONG, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>full</code></td>
 <td><code>DateFormat.getTimeInstance(DateFormat.FULL, getLocale())</code></td>
 </tr>
 <tr>
 <td><i>SubformatPattern</i></td>
 <td><code>new SimpleDateFormat(subformatPattern, getLocale())</code></td>
 </tr>
 <tr>
 <td><code>choice</code></td>
 <td><i>SubformatPattern</i></td>
 <td><code>new ChoiceFormat(subformatPattern)</code></td>
 </tr>
 </table>
 <h4>Usage Information</h4>
 <p>
 Here are some examples of usage: <blockquote>
 @code

  Object[] arguments = {
         Integer.valueOf(7), new Date(System.currentTimeMillis()),
         "a disturbance in the Force"};
  String result = MessageFormat.format(
         "At {1,time} on {1,date}, there was {2} on planet {0,number,integer}.",
         arguments);
  <em>
  Output:
  </em>
  At 12:30 PM on Jul 3, 2053, there was a disturbance in the Force on planet 7.
  
@endcode
 </blockquote>
 <p>
 Typically, the message format will come from resources, and the
 arguments will be dynamically set at runtime.
 <p>
 Example 2: <blockquote>
 @code

  Object[] testArgs = {Long.valueOf(3), "MyDisk"};
  MessageFormat form = new MessageFormat("The disk \"{1}\" contains {0} file(s).");
  System.out.println(form.format(testArgs));
  <em>
  Output with different testArgs:
  </em>
  The disk "MyDisk" contains 0 file(s).
  The disk "MyDisk" contains 1 file(s).
  The disk "MyDisk" contains 1,273 file(s).
  
@endcode
 </blockquote>
 <p>
 For more sophisticated patterns, you can use a <code>ChoiceFormat</code> to
 get output such as:
 <blockquote>
 @code

  MessageFormat form = new MessageFormat("The disk \"{1}\" contains {0}.");
  double[] filelimits = {0,1,2};
  String[] filepart = {"no files","one file","{0,number} files"};
  ChoiceFormat fileform = new ChoiceFormat(filelimits, filepart);
  form.setFormatByArgumentIndex(0, fileform);
  Object[] testArgs = {Long.valueOf(12373), "MyDisk"};
  System.out.println(form.format(testArgs));
  <em>
  Output (with different testArgs):
  </em>
  The disk "MyDisk" contains no files.
  The disk "MyDisk" contains one file.
  The disk "MyDisk" contains 1,273 files.
  
@endcode
 </blockquote> You can either do this programmatically, as in the above
 example, or by using a pattern (see <code>ChoiceFormat</code> for more
 information) as in: <blockquote>
 @code

  form.applyPattern("There {0,choice,0#are no files|1#is one file|1&lt;are {0,number,integer} files}.");
  
@endcode
 </blockquote>
 <p>
 <strong>Note:</strong> As we see above, the string produced by a
 <code>ChoiceFormat</code> in <code>MessageFormat</code> is treated
 specially; occurances of '{' are used to indicated subformats, and cause
 recursion. If you create both a <code>MessageFormat</code> and
 <code>ChoiceFormat</code> programmatically (instead of using the string
 patterns), then be careful not to produce a format that recurses on itself,
 which will cause an infinite loop.
 <p>
 When a single argument is parsed more than once in the string, the last match
 will be the final result of the parsing. For example:
 <blockquote>
 @code

  MessageFormat mf = new MessageFormat("{0,number,#.##}, {0,number,#.#}");
  Object[] objs = {new Double(3.1415)};
  String result = mf.format(objs);
  // result now equals "3.14, 3.1"
  objs = null;
  objs = mf.parse(result, new ParsePosition(0));
  // objs now equals {new Double(3.1)}
  
@endcode
 </blockquote>
 <p>
 Likewise, parsing with a <code>MessageFormat</code> object using patterns
 containing multiple occurrences of the same argument would return the last
 match. For example:
 <blockquote>
 @code

  MessageFormat mf = new MessageFormat("{0}, {0}, {0}");
  String forParsing = "x, y, z";
  Object[] objs = mf.parse(forParsing, new ParsePosition(0));
  // result now equals {new String("z")}
  
@endcode
 </blockquote>
 <h4><a name="synchronization">Synchronization</a></h4>
 <p>
 Message formats are not synchronized. It is recommended to create separate
 format instances for each thread. If multiple threads access a format
 concurrently, it must be synchronized externally.
 */
@interface JavaTextMessageFormat : JavaTextFormat

#pragma mark Public

/*!
 @brief Constructs a new <code>MessageFormat</code> using the specified pattern and
 the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param template_
 the pattern.
 @throws IllegalArgumentException
 if the pattern cannot be parsed.
 */
- (instancetype)initWithNSString:(NSString *)template_;

/*!
 @brief Constructs a new <code>MessageFormat</code> using the specified pattern and <code>locale</code>.
 @param template_
 the pattern.
 @param locale
 the locale.
 @throws IllegalArgumentException
 if the pattern cannot be parsed.
 */
- (instancetype)initWithNSString:(NSString *)template_
              withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Changes this <code>MessageFormat</code> to use the specified pattern.
 @param template_
 the new pattern.
 @throws IllegalArgumentException
 if the pattern cannot be parsed.
 */
- (void)applyPatternWithNSString:(NSString *)template_;

/*!
 @brief Returns a new instance of <code>MessageFormat</code> with the same pattern and
 formats as this <code>MessageFormat</code>.
 @return a shallow copy of this <code>MessageFormat</code>.
 */
- (id)clone;

/*!
 @brief Compares the specified object to this <code>MessageFormat</code> and indicates
 if they are equal.
 In order to be equal, <code>object</code> must be an
 instance of <code>MessageFormat</code> and have the same pattern.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this
 <code>MessageFormat</code>; <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Converts the specified objects into a string which it appends to the
 specified string buffer using the pattern of this message format.
 <p>
 If the <code>field</code> member of the specified <code>FieldPosition</code> is
 <code>MessageFormat.Field.ARGUMENT</code>, then the begin and end index of
 this field position is set to the location of the first occurrence of a
 message format argument. Otherwise, the <code>FieldPosition</code> is ignored.
 <p>
 Calling this method is equivalent to calling
 <blockquote>
 @code

  format((Object[])object, buffer, field)
  
@endcode
 </blockquote>
 @param object
 the object to format, must be an array of <code>Object</code>.
 @param buffer
 the target string buffer to append the formatted message to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 @throws ClassCastException
 if <code>object</code> is not an array of <code>Object</code>.
 */
- (JavaLangStringBuffer *)formatWithId:(id)object
              withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Converts the specified objects into a string which it appends to the
 specified string buffer using the pattern of this message format.
 <p>
 If the <code>field</code> member of the specified <code>FieldPosition</code> is
 <code>MessageFormat.Field.ARGUMENT</code>, then the begin and end index of
 this field position is set to the location of the first occurrence of a
 message format argument. Otherwise, the <code>FieldPosition</code> is ignored.
 @param objects
 the array of objects to format.
 @param buffer
 the target string buffer to append the formatted message to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 */
- (JavaLangStringBuffer *)formatWithNSObjectArray:(IOSObjectArray *)objects
                         withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                        withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Formats the supplied objects using the specified message format pattern.
 @param format the format string (see <code>java.util.Formatter.format</code>)
 @param args
 the list of arguments passed to the formatter. If there are
 more arguments than required by <code>format</code>,
 additional arguments are ignored.
 @return the formatted result.
 @throws IllegalArgumentException
 if the pattern cannot be parsed.
 */
+ (NSString *)formatWithNSString:(NSString *)format
               withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Formats the specified object using the rules of this message format and
 returns an <code>AttributedCharacterIterator</code> with the formatted message and
 attributes.
 The <code>AttributedCharacterIterator</code> returned also includes the
 attributes from the formats of this message format.
 @param object
 the object to format.
 @return an <code>AttributedCharacterIterator</code> with the formatted message and
 attributes.
 @throws IllegalArgumentException
 if the arguments in the object array cannot be formatted
 by this message format.
 */
- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;

/*!
 @brief Returns the <code>Format</code> instances used by this message format.
 @return an array of <code>Format</code> instances.
 */
- (IOSObjectArray *)getFormats;

/*!
 @brief Returns the formats used for each argument index.
 If an argument is
 placed more than once in the pattern string, then this returns the format
 of the last one.
 @return an array of formats, ordered by argument index.
 */
- (IOSObjectArray *)getFormatsByArgumentIndex;

/*!
 @brief Returns the locale used when creating formats.
 @return the locale used to create formats.
 */
- (JavaUtilLocale *)getLocale;

- (NSUInteger)hash;

/*!
 @brief Parses the message arguments from the specified string using the rules of
 this message format.
 @param string
 the string to parse.
 @return the array of <code>Object</code> arguments resulting from the parse.
 @throws ParseException
 if an error occurs during parsing.
 */
- (IOSObjectArray *)parseWithNSString:(NSString *)string;

/*!
 @brief Parses the message argument from the specified string starting at the
 index specified by <code>position</code>.
 If the string is successfully
 parsed then the index of the <code>ParsePosition</code> is updated to the
 index following the parsed text. On error, the index is unchanged and the
 error index of <code>ParsePosition</code> is set to the index where the error
 occurred.
 @param string
 the string to parse.
 @param position
 input/output parameter, specifies the start index in
 <code>string</code> from where to start parsing. If parsing is
 successful, it is updated with the index following the parsed
 text; on error, the index is unchanged and the error index is
 set to the index where the error occurred.
 @return the array of objects resulting from the parse, or <code>null</code> if
 there is an error.
 */
- (IOSObjectArray *)parseWithNSString:(NSString *)string
            withJavaTextParsePosition:(JavaTextParsePosition *)position;

/*!
 @brief Parses the message argument from the specified string starting at the
 index specified by <code>position</code>.
 If the string is successfully
 parsed then the index of the <code>ParsePosition</code> is updated to the
 index following the parsed text. On error, the index is unchanged and the
 error index of <code>ParsePosition</code> is set to the index where the error
 occurred.
 @param string
 the string to parse.
 @param position
 input/output parameter, specifies the start index in
 <code>string</code> from where to start parsing. If parsing is
 successful, it is updated with the index following the parsed
 text; on error, the index is unchanged and the error index is
 set to the index where the error occurred.
 @return the array of objects resulting from the parse, or <code>null</code> if
 there is an error.
 */
- (id)parseObjectWithNSString:(NSString *)string
    withJavaTextParsePosition:(JavaTextParsePosition *)position;

/*!
 @brief Sets the specified format used by this message format.
 @param offset
 the index of the format to change.
 @param format
 the <code>Format</code> that replaces the old format.
 */
- (void)setFormatWithInt:(jint)offset
      withJavaTextFormat:(JavaTextFormat *)format;

/*!
 @brief Sets the format used for the argument at index <code>argIndex</code> to
 <code>format</code>.
 @param argIndex
 the index of the format to set.
 @param format
 the format that will be set at index <code>argIndex</code>.
 */
- (void)setFormatByArgumentIndexWithInt:(jint)argIndex
                     withJavaTextFormat:(JavaTextFormat *)format;

/*!
 @brief Sets the formats used by this message format.
 @param formats
 an array of <code>Format</code>.
 */
- (void)setFormatsWithJavaTextFormatArray:(IOSObjectArray *)formats;

/*!
 @brief Sets the formats used for each argument.
 The <code>formats</code> array
 elements should be in the order of the argument indices.
 @param formats
 the formats in an array.
 */
- (void)setFormatsByArgumentIndexWithJavaTextFormatArray:(IOSObjectArray *)formats;

/*!
 @brief Sets the locale to use when creating <code>Format</code> instances.
 Changing
 the locale may change the behavior of <code>applyPattern</code>,
 <code>toPattern</code>, <code>format</code> and <code>formatToCharacterIterator</code>.
 @param locale
 the new locale.
 */
- (void)setLocaleWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the pattern of this message format.
 @return the pattern.
 */
- (NSString *)toPattern;

@end

J2OBJC_STATIC_INIT(JavaTextMessageFormat)

FOUNDATION_EXPORT void JavaTextMessageFormat_initWithNSString_withJavaUtilLocale_(JavaTextMessageFormat *self, NSString *template_, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextMessageFormat *new_JavaTextMessageFormat_initWithNSString_withJavaUtilLocale_(NSString *template_, JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextMessageFormat_initWithNSString_(JavaTextMessageFormat *self, NSString *template_);

FOUNDATION_EXPORT JavaTextMessageFormat *new_JavaTextMessageFormat_initWithNSString_(NSString *template_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *JavaTextMessageFormat_formatWithNSString_withNSObjectArray_(NSString *format, IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat)

/*!
 @brief The instances of this inner class are used as attribute keys in
 <code>AttributedCharacterIterator</code> that the
 <code>MessageFormat.formatToCharacterIterator(Object)</code> method returns.
 <p>
 There is no public constructor in this class, the only instances are the
 constants defined here.
 */
@interface JavaTextMessageFormat_Field : JavaTextFormat_Field

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>MessageFormat.Field</code> with the
 given field name.
 @param fieldName
 the field name.
 */
- (instancetype)initWithNSString:(NSString *)fieldName;

@end

J2OBJC_STATIC_INIT(JavaTextMessageFormat_Field)

FOUNDATION_EXPORT JavaTextMessageFormat_Field *JavaTextMessageFormat_Field_ARGUMENT_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextMessageFormat_Field, ARGUMENT_, JavaTextMessageFormat_Field *)

FOUNDATION_EXPORT void JavaTextMessageFormat_Field_initWithNSString_(JavaTextMessageFormat_Field *self, NSString *fieldName);

FOUNDATION_EXPORT JavaTextMessageFormat_Field *new_JavaTextMessageFormat_Field_initWithNSString_(NSString *fieldName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaTextMessageFormat_Field)

#endif // _JavaTextMessageFormat_H_
