//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/MemoryHandler.java
//

#ifndef _JavaUtilLoggingMemoryHandler_H_
#define _JavaUtilLoggingMemoryHandler_H_

#include "J2ObjC_header.h"
#include "java/util/logging/Handler.h"

@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogRecord;

/*!
 @brief A <code>Handler</code> put the description of log events into a cycled memory
 buffer.
 <p>
 Mostly this <code>MemoryHandler</code> just puts the given <code>LogRecord</code> into
 the internal buffer and doesn't perform any formatting or any other process.
 When the buffer is full, the earliest buffered records will be discarded.
 <p>
 Every <code>MemoryHandler</code> has a target handler, and push action can be
 triggered so that all buffered records will be output to the target handler
 and normally the latter will publish the records. After the push action, the
 buffer will be cleared.
 <p>
 The push method can be called directly, but will also be called automatically
 if a new <code>LogRecord</code> is added that has a level greater than or
 equal to than the value defined for the property
 java.util.logging.MemoryHandler.push.
 <p>
 <code>MemoryHandler</code> will read following <code>LogManager</code> properties for
 initialization, if given properties are not defined or has invalid values,
 default value will be used.
 <ul>
 <li>java.util.logging.MemoryHandler.filter specifies the <code>Filter</code>
 class name, defaults to no <code>Filter</code>.</li>
 <li>java.util.logging.MemoryHandler.level specifies the level for this
 <code>Handler</code>, defaults to <code>Level.ALL</code>.</li>
 <li>java.util.logging.MemoryHandler.push specifies the push level, defaults
 to level.SEVERE.</li>
 <li>java.util.logging.MemoryHandler.size specifies the buffer size in number
 of <code>LogRecord</code>, defaults to 1000.</li>
 <li>java.util.logging.MemoryHandler.target specifies the class of the target
 <code>Handler</code>, no default value, which means this property must be
 specified either by property setting or by constructor.</li>
 </ul>
 */
@interface JavaUtilLoggingMemoryHandler : JavaUtilLoggingHandler

#pragma mark Public

/*!
 @brief Default constructor, construct and init a <code>MemoryHandler</code> using
 <code>LogManager</code> properties or default values.
 @throws RuntimeException
 if property value are invalid and no default value could be
 used.
 */
- (instancetype)init;

/*!
 @brief Construct and init a <code>MemoryHandler</code> using given target, size and
 push level, other properties using <code>LogManager</code> properties or
 default values.
 @param target
 the given <code>Handler</code> to output
 @param size
 the maximum number of buffered <code>LogRecord</code>, greater than
 zero
 @param pushLevel
 the push level
 @throws IllegalArgumentException
 if <code>size <= 0</code>
 @throws RuntimeException
 if property value are invalid and no default value could be
 used.
 */
- (instancetype)initWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)target
                                       withInt:(jint)size
                      withJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)pushLevel;

/*!
 @brief Close this handler and target handler, free all associated resources.
 */
- (void)close;

/*!
 @brief Call target handler to flush any buffered output.
 Note that this doesn't
 cause this <code>MemoryHandler</code> to push.
 */
- (void)flush;

/*!
 @brief Return the push level.
 @return the push level
 */
- (JavaUtilLoggingLevel *)getPushLevel;

/*!
 @brief Check if given <code>LogRecord</code> would be put into this
 <code>MemoryHandler</code>'s internal buffer.
 <p>
 The given <code>LogRecord</code> is loggable if and only if it has appropriate
 level and it pass any associated filter's check.
 <p>
 Note that the push level is not used for this check.
 @param record
 the given <code>LogRecord</code>
 @return the given <code>LogRecord</code> if it should be logged, <code>false</code>
 if <code>LogRecord</code> is <code>null</code>.
 */
- (jboolean)isLoggableWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

/*!
 @brief Put a given <code>LogRecord</code> into internal buffer.
 If given record is
 not loggable, just return. Otherwise it is stored in the buffer.
 Furthermore if the record's level is not less than the push level, the
 push action is triggered to output all the buffered records to the target
 handler, and the target handler will publish them.
 @param record
 the log record
 */
- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

/*!
 @brief Triggers a push action to output all buffered records to the target handler,
 and the target handler will publish them.
 Then the buffer is cleared.
 */
- (void)push;

/*!
 @brief Set the push level.
 The push level is used to check the push action
 triggering. When a new <code>LogRecord</code> is put into the internal
 buffer and its level is not less than the push level, the push action
 will be triggered. Note that set new push level won't trigger push action.
 @param newLevel
 the new level to set.
 */
- (void)setPushLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingMemoryHandler)

FOUNDATION_EXPORT void JavaUtilLoggingMemoryHandler_init(JavaUtilLoggingMemoryHandler *self);

FOUNDATION_EXPORT JavaUtilLoggingMemoryHandler *new_JavaUtilLoggingMemoryHandler_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilLoggingMemoryHandler_initWithJavaUtilLoggingHandler_withInt_withJavaUtilLoggingLevel_(JavaUtilLoggingMemoryHandler *self, JavaUtilLoggingHandler *target, jint size, JavaUtilLoggingLevel *pushLevel);

FOUNDATION_EXPORT JavaUtilLoggingMemoryHandler *new_JavaUtilLoggingMemoryHandler_initWithJavaUtilLoggingHandler_withInt_withJavaUtilLoggingLevel_(JavaUtilLoggingHandler *target, jint size, JavaUtilLoggingLevel *pushLevel) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingMemoryHandler)

#endif // _JavaUtilLoggingMemoryHandler_H_
