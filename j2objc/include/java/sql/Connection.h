//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Connection.java
//

#ifndef _JavaSqlConnection_H_
#define _JavaSqlConnection_H_

#include "J2ObjC_header.h"
#include "java/lang/AutoCloseable.h"
#include "java/sql/Wrapper.h"

@class IOSIntArray;
@class IOSObjectArray;
@class JavaSqlSQLWarning;
@class JavaUtilProperties;
@protocol JavaSqlArray;
@protocol JavaSqlBlob;
@protocol JavaSqlCallableStatement;
@protocol JavaSqlClob;
@protocol JavaSqlDatabaseMetaData;
@protocol JavaSqlNClob;
@protocol JavaSqlPreparedStatement;
@protocol JavaSqlSQLXML;
@protocol JavaSqlSavepoint;
@protocol JavaSqlStatement;
@protocol JavaSqlStruct;
@protocol JavaUtilMap;

#define JavaSqlConnection_TRANSACTION_NONE 0
#define JavaSqlConnection_TRANSACTION_READ_COMMITTED 2
#define JavaSqlConnection_TRANSACTION_READ_UNCOMMITTED 1
#define JavaSqlConnection_TRANSACTION_REPEATABLE_READ 4
#define JavaSqlConnection_TRANSACTION_SERIALIZABLE 8

/*!
 @brief A connection represents a link from a Java application to a database.
 All SQL
 statements and results are returned within the context of a connection.
 Database statements that are executed within this context form a
 database session which forms one or more closed transactions. Especially in
 distributed applications, multiple concurrent connections may exist accessing
 the same values of the database. which may lead to the following phenomena
 (referred to as <i>transaction isolation levels</i>):
 <ul>
 <li><i>dirty reads</i>:<br>
 reading values from table rows that are not committed.</br></li>
 <li><i>non-repeatable reads</i>:<br>
 reading table rows more than once in a transaction but getting back different
 data because other transactions have altered the rows between the reads.</br></li>
 <li><i>phantom reads</i>:<br>
 retrieving additional "phantom" rows in the course of repeated table reads
 because other transactions have inserted additional rows that satisfy an
 SQL <code>WHERE</code> clause</br></li>
 </ul>
 */
@protocol JavaSqlConnection < JavaSqlWrapper, JavaLangAutoCloseable, NSObject, JavaObject >

/*!
 @brief Discards all warnings that may have arisen for this connection.
 Subsequent calls to <code>getWarnings()</code> will return <code>null</code>
 up until a new warning condition occurs.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (void)clearWarnings;

/*!
 @brief Causes the instant release of all database and driver connection
 resources associated with this object.
 Any subsequent invocations of this
 method have no effect.
 <p>
 It is strongly recommended that all connections are closed before they
 are dereferenced by the application ready for garbage collection.
 Although the <code>finalize</code> method of the connection closes the
 connection before garbage collection takes place, it is not advisable to
 leave the <code>close</code> operation to take place in this way. Mainly
 because undesired side-effects may appear.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (void)close;

/*!
 @brief Commits all of the changes made since the last <code>commit</code> or
 <code>rollback</code> of the associated transaction.
 All locks in the database
 held by this connection are also relinquished. Calling this operation on
 connection objects in <code>auto-commit</code> mode leads to an error.
 @throws SQLException
 if there is a problem accessing the database or if the target
 connection instance is in auto-commit mode.
 */
- (void)commit;

/*!
 @brief Returns a new instance of <code>Statement</code> for issuing SQL commands to
 the remote database.
 <p>
 <code>ResultSets</code> generated by the returned statement will default to
 type <code>ResultSet.TYPE_FORWARD_ONLY</code> and concurrency level <code>ResultSet.CONCUR_READ_ONLY</code>
 .
 @return a <code>Statement</code> object with default settings.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaSqlStatement>)createStatement;

/*!
 @brief Returns a new instance of <code>Statement</code> whose associated <code>ResultSet</code>
 s have the characteristics specified in the type and
 concurrency arguments.
 @param resultSetType
 one of the following type specifiers:
 <ul>
 <li><code>ResultSet.TYPE_SCROLL_SENSITIVE</code> </li> <li>
 <code>ResultSet.TYPE_SCROLL_INSENSITIVE</code> </li> <li>
 <code>ResultSet.TYPE_FORWARD_ONLY</code></li>
 </ul>
 @param resultSetConcurrency
 one of the following concurrency mode specifiers:
 <ul>
 <li><code>ResultSet.CONCUR_UPDATABLE</code></li> <li>
 <code>ResultSet.CONCUR_READ_ONLY</code></li>
 </ul>
 @return a new instance of <code>Statement</code> capable of manufacturing
 <code>ResultSet</code>s that satisfy the specified <code>resultSetType</code>
  and <code>resultSetConcurrency</code> values.
 @throws SQLException
 if there is a problem accessing the database
 */
- (id<JavaSqlStatement>)createStatementWithInt:(jint)resultSetType
                                       withInt:(jint)resultSetConcurrency;

/*!
 @brief Returns a new instance of <code>Statement</code> whose associated
 <code>ResultSet</code>s will have the characteristics specified in the
 type, concurrency and holdability arguments.
 @param resultSetType
 one of the following type specifiers:
 <ul>
 <li><code>ResultSet.TYPE_SCROLL_SENSITIVE</code></li>
 <li><code>ResultSet.TYPE_SCROLL_INSENSITIVE</code></li>
 <li><code>ResultSet.TYPE_FORWARD_ONLY</code></li>
 </ul>
 @param resultSetConcurrency
 one of the following concurrency mode specifiers:
 <ul>
 <li><code>ResultSet.CONCUR_UPDATABLE</code></li>
 <li><code>ResultSet.CONCUR_READ_ONLY</code></li>
 </ul>
 @param resultSetHoldability
 one of the following holdability mode specifiers:
 <ul>
 <li><code>ResultSet.HOLD_CURSORS_OVER_COMMIT</code></li>
 <li><code>ResultSet.CLOSE_CURSORS_AT_COMMIT</code></li>
 </ul>
 @return a new instance of <code>Statement</code> capable of
 manufacturing <code>ResultSet</code>s that satisfy the
 specified <code>resultSetType</code>,
 <code>resultSetConcurrency</code> and
 <code>resultSetHoldability</code> values.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaSqlStatement>)createStatementWithInt:(jint)resultSetType
                                       withInt:(jint)resultSetConcurrency
                                       withInt:(jint)resultSetHoldability;

/*!
 @brief Returns a <code>boolean</code> indicating whether or not this connection is in
 the <code>auto-commit</code> operating mode.
 @return <code>true</code> if <code>auto-commit</code> is on, otherwise <code>false</code>
 .
 @throws SQLException
 if there is a problem accessing the database.
 */
- (jboolean)getAutoCommit;

/*!
 @brief Gets this <code>Connection</code> object's current catalog name.
 @return the catalog name. <code>null</code> if there is no catalog
 name.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (NSString *)getCatalog;

/*!
 @brief Returns the holdability property that any <code>ResultSet</code> produced by
 this instance will have.
 @return one of the following holdability mode specifiers:
 <ul>
 <li><code>ResultSet.HOLD_CURSORS_OVER_COMMIT</code></li> <li>
 <code>ResultSet.CLOSE_CURSORS_AT_COMMIT</code></li>
 </ul>
 @throws SQLException
 if there is a problem accessing the a database.
 */
- (jint)getHoldability;

/*!
 @brief Gets the metadata about the database referenced by this connection.
 The
 returned <code>DatabaseMetaData</code> describes the database topography,
 available stored procedures, SQL syntax and so on.
 @return a <code>DatabaseMetaData</code> object containing the database
 description.
 @throws SQLException
 if there is a problem accessing the a database.
 */
- (id<JavaSqlDatabaseMetaData>)getMetaData;

/*!
 @brief Returns the transaction isolation level for this connection.
 @return the transaction isolation value.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (jint)getTransactionIsolation;

/*!
 @brief Returns the type mapping associated with this <code>Connection</code> object.
 The type mapping must be set on the application level.
 @return the Type Map as a <code>java.util.Map</code>.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaUtilMap>)getTypeMap;

/*!
 @brief Gets the first instance of any <code>SQLWarning</code> objects that may have
 been created in the use of this connection.
 If at least one warning has
 occurred then this operation returns the first one reported. A <code>null</code>
  indicates that no warnings have occurred.
 <p>
 By invoking the <code>SQLWarning.getNextWarning()</code> method of the
 returned <code>SQLWarning</code> object it is possible to obtain all of
 this connection's warning objects.
 @return the first warning as an SQLWarning object (may be <code>null</code>).
 @throws SQLException
 if there is a problem accessing the database or if the call
 has been made on a connection which has been previously
 closed.
 */
- (JavaSqlSQLWarning *)getWarnings;

/*!
 @brief Returns a <code>boolean</code> indicating whether or not this connection is in
 the <code>closed</code> state.
 The <code>closed</code> state may be entered into as
 a consequence of a successful invocation of the <code>close()</code> method
 or else if an error has occurred that prevents the connection from
 functioning normally.
 @return <code>true</code> if closed, otherwise <code>false</code>.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (jboolean)isClosed;

/*!
 @brief Returns a <code>boolean</code> indicating whether or not this connection is
 currently in the <code>read-only</code> state.
 @return <code>true</code> if in read-only state, otherwise <code>false</code>.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (jboolean)isReadOnly;

/*!
 @brief Returns a string representation of the input SQL statement
 <code>sql</code> expressed in the underlying system's native SQL
 syntax.
 @param sql
 the JDBC form of an SQL statement.
 @return the SQL statement in native database format.
 @throws SQLException
 if there is a problem accessing the database
 */
- (NSString *)nativeSQLWithNSString:(NSString *)sql;

/*!
 @brief Returns a new instance of <code>CallableStatement</code> that may be used for
 making stored procedure calls to the database.
 @param sql
 the SQL statement that calls the stored function
 @return a new instance of <code>CallableStatement</code> representing the SQL
 statement. <code>ResultSet</code>s emitted from this <code>CallableStatement</code>
  will default to type
 <code>ResultSet.TYPE_FORWARD_ONLY</code> and concurrency
 <code>ResultSet.CONCUR_READ_ONLY</code>.
 @throws SQLException
 if a problem occurs accessing the database.
 */
- (id<JavaSqlCallableStatement>)prepareCallWithNSString:(NSString *)sql;

/*!
 @brief Returns a new instance of <code>CallableStatement</code> that may be used for
 making stored procedure calls to the database.
 <code>ResultSet</code>s emitted
 from this <code>CallableStatement</code> will satisfy the specified <code>resultSetType</code>
  and <code>resultSetConcurrency</code> values.
 @param sql
 the SQL statement
 @param resultSetType
 one of the following type specifiers:
 <ul>
 <li><code>ResultSet.TYPE_SCROLL_SENSITIVE</code></li>
 <li><code>ResultSet.TYPE_SCROLL_INSENSITIVE</code></li>
 <li><code>ResultSet.TYPE_FORWARD_ONLY</code></li>
 </ul>
 @param resultSetConcurrency
 one of the following concurrency mode specifiers:
 <ul>
 <li><code>ResultSet.CONCUR_READ_ONLY</code></li>
 <li><code>ResultSet.CONCUR_UPDATABLE</code></li>
 </ul>
 @return a new instance of <code>CallableStatement</code> representing the
 precompiled SQL statement. <code>ResultSet</code>s emitted from this
 <code>CallableStatement</code> will satisfy the specified <code>resultSetType</code>
  and <code>resultSetConcurrency</code> values.
 @throws SQLException
 if a problem occurs accessing the database
 */
- (id<JavaSqlCallableStatement>)prepareCallWithNSString:(NSString *)sql
                                                withInt:(jint)resultSetType
                                                withInt:(jint)resultSetConcurrency;

/*!
 @brief Returns a new instance of <code>CallableStatement</code> that may be used for
 making stored procedure calls to the database.
 <code>ResultSet</code>s created
 from this <code>CallableStatement</code> will have characteristics determined
 by the specified type, concurrency and holdability arguments.
 @param sql
 the SQL statement
 @param resultSetType
 one of the following type specifiers:
 <ul>
 <li><code>ResultSet.TYPE_SCROLL_SENSITIVE</code></li>
 <li><code>ResultSet.TYPE_SCROLL_INSENSITIVE</code></li>
 <li><code>ResultSet.TYPE_FORWARD_ONLY</code></li>
 </ul>
 @param resultSetConcurrency
 one of the following concurrency mode specifiers:
 <ul>
 <li><code>ResultSet.CONCUR_READ_ONLY</code></li>
 <li><code>ResultSet.CONCUR_UPDATABLE</code></li>
 </ul>
 @param resultSetHoldability
 one of the following holdability mode specifiers:
 <ul>
 <li><code>ResultSet.HOLD_CURSORS_OVER_COMMIT</code></li>
 <li><code>ResultSet.CLOSE_CURSORS_AT_COMMIT</code></li>
 </ul>
 @return a new instance of <code>CallableStatement</code> representing the
 precompiled SQL statement. <code>ResultSet</code>s emitted from this
 <code>CallableStatement</code> will satisfy the specified <code>resultSetType</code>
 , <code>resultSetConcurrency</code> and <code>resultSetHoldability</code>
  values.
 @throws SQLException
 if a problem occurs accessing the database.
 */
- (id<JavaSqlCallableStatement>)prepareCallWithNSString:(NSString *)sql
                                                withInt:(jint)resultSetType
                                                withInt:(jint)resultSetConcurrency
                                                withInt:(jint)resultSetHoldability;

/*!
 @brief Returns a new instance of <code>PreparedStatement</code> that may be used any
 number of times to execute parameterized requests on the database server.
 <p>
 Subject to JDBC driver support, this operation will attempt to send the
 precompiled version of the statement to the database. If
 the driver does not support precompiled statements, the statement will
 not reach the database server until it is executed. This distinction
 determines the moment when <code>SQLException</code>s get raised.
 <p>
 By default, <code>ResultSet</code>s from the returned object will be
 <code>ResultSet.TYPE_FORWARD_ONLY</code> type with a
 <code>ResultSet.CONCUR_READ_ONLY</code> mode of concurrency.
 @param sql
 the SQL statement.
 @return the <code>PreparedStatement</code> containing the supplied SQL
 statement.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)sql;

/*!
 @brief Creates a default <code>PreparedStatement</code> that can retrieve
 automatically generated keys.
 Parameter <code>autoGeneratedKeys</code> may be
 used to tell the driver whether such keys should be made accessible.
 This is only relevant when the <code>sql</code> statement is an <code>insert</code>
 statement.
 <p>
 An SQL statement which may have <code>IN</code> parameters can be stored and
 precompiled in a <code>PreparedStatement</code>. The <code>PreparedStatement</code>
 can then be then be used to execute the statement multiple times in an
 efficient way.
 <p>
 Subject to JDBC driver support, this operation will attempt to send the
 precompiled version of the statement to the database. If
 the driver does not support precompiled statements, the statement will
 not reach the database server until it is executed. This distinction
 determines the moment when <code>SQLException</code>s get raised.
 <p>
 By default, <code>ResultSet</code>s from the returned object will be
 <code>ResultSet.TYPE_FORWARD_ONLY</code> type with a
 <code>ResultSet.CONCUR_READ_ONLY</code> mode of concurrency.
 @param sql
 the SQL statement.
 @param autoGeneratedKeys
 one of the following generated key options:
 <ul>
 <li><code>Statement.RETURN_GENERATED_KEYS</code></li>
 <li><code>Statement.NO_GENERATED_KEYS</code></li>
 </ul>
 @return a new <code>PreparedStatement</code> instance representing the input
 SQL statement.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)sql
                                                     withInt:(jint)autoGeneratedKeys;

/*!
 @brief Creates a default <code>PreparedStatement</code> that can retrieve the
 auto-generated keys designated by a supplied array.
 If <code>sql</code> is an
 SQL <code>INSERT</code> statement, the parameter <code>columnIndexes</code> is expected
 to hold the index values for each column in the statement's intended
 database table containing the autogenerated-keys of interest. Otherwise
 <code>columnIndexes</code> is ignored.
 <p>
 Subject to JDBC driver support, this operation will attempt to send the
 precompiled version of the statement to the database. If
 the driver does not support precompiled statements, the statement will
 not reach the database server until it is executed. This distinction
 determines the moment when <code>SQLException</code>s get raised.
 <p>
 By default, <code>ResultSet</code>s from the returned object will be
 <code>ResultSet.TYPE_FORWARD_ONLY</code> type with a
 <code>ResultSet.CONCUR_READ_ONLY</code> concurrency mode.
 @param sql
 the SQL statement.
 @param columnIndexes
 the indexes of the columns for which auto-generated keys
 should be made available.
 @return the PreparedStatement containing the supplied SQL statement.
 @throws SQLException
 if a problem occurs accessing the database.
 */
- (id<JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)sql
                                                withIntArray:(IOSIntArray *)columnIndexes;

/*!
 @brief Creates a <code>PreparedStatement</code> that generates <code>ResultSet</code>s
 with the specified values of <code>resultSetType</code> and <code>resultSetConcurrency</code>
 .
 @param sql
 the SQL statement. It can contain one or more <code>'?'</code>
 <code>IN</code> parameter placeholders.
 @param resultSetType
 one of the following type specifiers:
 <ul>
 <li><code>ResultSet.TYPE_SCROLL_SENSITIVE</code></li>
 <li><code>ResultSet.TYPE_SCROLL_INSENSITIVE</code></li>
 <li><code>ResultSet.TYPE_FORWARD_ONLY</code></li>
 </ul>
 @param resultSetConcurrency
 one of the following concurrency mode specifiers:
 <ul>
 <li><code>ResultSet.CONCUR_READ_ONLY</code></li>
 <li><code>ResultSet.CONCUR_UPDATABLE</code></li>
 </ul>
 @return a new instance of <code>PreparedStatement</code> containing the SQL
 statement <code>sql</code>. <code>ResultSet</code>s emitted from this
 <code>PreparedStatement</code> will satisfy the specified <code>resultSetType</code>
  and <code>resultSetConcurrency</code> values.
 @throws SQLException
 if a problem occurs accessing the database.
 */
- (id<JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)sql
                                                     withInt:(jint)resultSetType
                                                     withInt:(jint)resultSetConcurrency;

/*!
 @brief Creates a <code>PreparedStatement</code> that generates <code>ResultSet</code>s
 with the specified type, concurrency and holdability
 @param sql
 the SQL statement. It can contain one or more <code>'?' IN</code>
 parameter placeholders.
 @param resultSetType
 one of the following type specifiers:
 <ul>
 <li><code>ResultSet.TYPE_SCROLL_SENSITIVE</code></li>
 <li><code>ResultSet.TYPE_SCROLL_INSENSITIVE</code></li>
 <li><code>ResultSet.TYPE_FORWARD_ONLY</code></li>
 </ul>
 @param resultSetConcurrency
 one of the following concurrency mode specifiers:
 <ul>
 <li><code>ResultSet.CONCUR_READ_ONLY</code></li>
 <li><code>ResultSet.CONCUR_UPDATABLE</code></li>
 </ul>
 @param resultSetHoldability
 one of the following holdability mode specifiers:
 <ul>
 <li><code>ResultSet.HOLD_CURSORS_OVER_COMMIT</code></li>
 <li><code>ResultSet.CLOSE_CURSORS_AT_COMMIT</code></li>
 </ul>
 @return a new instance of <code>PreparedStatement</code> containing the SQL
 statement <code>sql</code>. <code>ResultSet</code>s emitted from this
 <code>PreparedStatement</code> will satisfy the specified <code>resultSetType</code>
 , <code>resultSetConcurrency</code> and <code>resultSetHoldability</code>
  values.
 @throws SQLException
 if a problem occurs accessing the database.
 */
- (id<JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)sql
                                                     withInt:(jint)resultSetType
                                                     withInt:(jint)resultSetConcurrency
                                                     withInt:(jint)resultSetHoldability;

/*!
 @brief Creates a default <code>PreparedStatement</code> that can retrieve the
 auto-generated keys designated by a supplied array.
 If <code>sql</code> is an
 SQL <code>INSERT</code> statement, <code>columnNames</code> is expected to hold the
 names of each column in the statement's associated database table
 containing the autogenerated-keys of interest. Otherwise <code>columnNames</code>
  is ignored.
 <p>
 Subject to JDBC driver support, this operation will attempt to send the
 precompiled version of the statement to the database. Alternatively, if
 the driver is not capable of handling precompiled statements, the
 statement will not reach the database server until it is executed. This
 will have a bearing on precisely <i>when</i> <code>SQLException</code>
 instances get raised.
 <p>
 By default, ResultSets from the returned object will be
 <code>ResultSet.TYPE_FORWARD_ONLY</code> type with a
 <code>ResultSet.CONCUR_READ_ONLY</code> concurrency mode.
 @param sql
 the SQL statement.
 @param columnNames
 the names of the columns for which auto-generated keys should
 be made available.
 @return the PreparedStatement containing the supplied SQL statement.
 @throws SQLException
 if a problem occurs accessing the database.
 */
- (id<JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)sql
                                           withNSStringArray:(IOSObjectArray *)columnNames;

/*!
 @brief Releases the specified <code>savepoint</code> from the present transaction.
 Once removed,
 the <code>Savepoint</code> is considered invalid and should not be referenced
 further.
 @param savepoint
 the object targeted for removal.
 @throws SQLException
 if there is a problem with accessing the database or if
 <code>savepoint</code> is considered not valid in this
 transaction.
 */
- (void)releaseSavepointWithJavaSqlSavepoint:(id<JavaSqlSavepoint>)savepoint;

/*!
 @brief Rolls back all updates made so far in this transaction and
 relinquishes all acquired database locks.
 It is an error to invoke this
 operation when in auto-commit mode.
 @throws SQLException
 if there is a problem with the database or if the method is
 called while in auto-commit mode of operation.
 */
- (void)rollback;

/*!
 @brief Undoes all changes made after the supplied <code>Savepoint</code> object was
 set.
 This method should only be used when auto-commit mode is disabled.
 @param savepoint
 the Savepoint to roll back to
 @throws SQLException
 if there is a problem accessing the database.
 */
- (void)rollbackWithJavaSqlSavepoint:(id<JavaSqlSavepoint>)savepoint;

/*!
 @brief Sets this connection's auto-commit mode <code>on</code> or <code>off</code>.
 <p>
 Putting a Connection into auto-commit mode means that all associated SQL
 statements are run and committed as separate transactions.
 By contrast, setting auto-commit to <code>off</code> means that associated SQL
 statements get grouped into transactions that need to be completed by
 explicit calls to either the <code>commit()</code> or <code>rollback()</code>
 methods.
 <p>
 Auto-commit is the default mode for new connection instances.
 <p>
 When in this mode, commits will automatically occur upon successful SQL
 statement completion or upon successful completion of an execute.
 Statements are not considered successfully completed until all associated
 <code>ResultSet</code>s and output parameters have been obtained or closed.
 <p>
 Calling this operation during an uncommitted transaction will result in
 it being committed.
 @param autoCommit
 <code>boolean</code> indication of whether to put the target
 connection into auto-commit mode (<code>true</code>) or not (
 <code>false</code>).
 @throws SQLException
 if there is a problem accessing the database.
 */
- (void)setAutoCommitWithBoolean:(jboolean)autoCommit;

/*!
 @brief Sets the catalog name for this connection.
 This is used to select a
 subspace of the database for future work. If the driver does not support
 catalog names, this method is ignored.
 @param catalog
 the catalog name to use.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (void)setCatalogWithNSString:(NSString *)catalog;

/*!
 @brief Sets the holdability of the <code>ResultSet</code>s created by this Connection.
 @param holdability
 one of the following holdability mode specifiers:
 <ul>
 <li><code>ResultSet.CLOSE_CURSORS_AT_COMMIT</code></li>
 <li><code>ResultSet.HOLD_CURSORS_OVER_COMMIT</code></li>
 <li>
 </ul>
 @throws SQLException
 if there is a problem accessing the database
 */
- (void)setHoldabilityWithInt:(jint)holdability;

/*!
 @brief Sets this connection to read-only mode.
 <p>
 This serves as a hint to the driver, which can enable database
 optimizations.
 @param readOnly
 <code>true</code> to set the Connection to read only mode. <code>false</code>
  disables read-only mode.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (void)setReadOnlyWithBoolean:(jboolean)readOnly;

/*!
 @brief Creates an unnamed <code>Savepoint</code> in the current transaction.
 @return a <code>Savepoint</code> object for this savepoint.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaSqlSavepoint>)setSavepoint;

/*!
 @brief Creates a named <code>Savepoint</code> in the current transaction.
 @param name
 the name to use for the new <code>Savepoint</code>.
 @return a <code>Savepoint</code> object for this savepoint.
 @throws SQLException
 if there is a problem accessing the database.
 */
- (id<JavaSqlSavepoint>)setSavepointWithNSString:(NSString *)name;

/*!
 @brief Sets the transaction isolation level for this Connection.
 <p>
 If this method is called during a transaction, the results are
 implementation defined.
 @param level
 the new transaction isolation level to use from the following
 list of possible values:
 <ul>
 <li><code>TRANSACTION_READ_COMMITTED</code>
 <li><code>TRANSACTION_READ_UNCOMMITTED</code>
 <li><code>TRANSACTION_REPEATABLE_READ</code>
 <li><code>TRANSACTION_SERIALIZABLE</code>
 </ul>
 @throws SQLException
 if there is a problem with the database or if the value of
 <code>level</code> is not one of the expected constant values.
 */
- (void)setTransactionIsolationWithInt:(jint)level;

/*!
 @brief Sets the <code>TypeMap</code> for this connection.
 The input <code>map</code>
 should contain mappings between complex Java and SQL types.
 @param map
 the new type map.
 @throws SQLException
 if there is a problem accessing the database or if <code>map</code>
  is not an instance of <code>Map</code>.
 */
- (void)setTypeMapWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Returns a new empty Clob.
 @throws SQLException if this connection is closed, or there's a problem creating a new clob.
 */
- (id<JavaSqlClob>)createClob;

/*!
 @brief Returns a new empty Blob.
 @throws SQLException if this connection is closed, or there's a problem creating a new blob.
 */
- (id<JavaSqlBlob>)createBlob;

/*!
 @brief Returns a new empty NClob.
 @throws SQLException if this connection is closed, or there's a problem creating a new nclob.
 */
- (id<JavaSqlNClob>)createNClob;

/*!
 @brief Returns a new empty SQLXML.
 @throws SQLException if this connection is closed, or there's a problem creating a new XML.
 */
- (id<JavaSqlSQLXML>)createSQLXML;

/*!
 @brief Returns true if this connection is still open and valid, false otherwise.
 @param timeout number of seconds to wait for a response before giving up and returning false,
 0 to wait forever
 @throws SQLException if <code>timeout < 0</code>
 */
- (jboolean)isValidWithInt:(jint)timeout;

/*!
 @brief Sets the client info property <code>name</code> to <code>value</code>.
 A value of null clears the
 client info property.
 @throws SQLClientInfoException if this connection is closed, or there's a problem setting
 the property.
 */
- (void)setClientInfoWithNSString:(NSString *)name
                     withNSString:(NSString *)value;

/*!
 @brief Replaces all client info properties with the name/value pairs from <code>properties</code>.
 All existing properties are removed. If an exception is thrown, the resulting state of
 this connection's client info properties is undefined.
 @throws SQLClientInfoException if this connection is closed, or there's a problem setting
 a property.
 */
- (void)setClientInfoWithJavaUtilProperties:(JavaUtilProperties *)properties;

/*!
 @brief Returns the value corresponding to the given client info property, or null if unset.
 @throws SQLClientInfoException if this connection is closed, or there's a problem getting
 the property.
 */
- (NSString *)getClientInfoWithNSString:(NSString *)name;

/*!
 @brief Returns a <code>Properties</code> object containing all client info properties.
 @throws SQLClientInfoException if this connection is closed, or there's a problem getting
 a property.
 */
- (JavaUtilProperties *)getClientInfo;

/*!
 @brief Returns a new <code>Array</code> containing the given <code>elements</code>.
 @param typeName the SQL name of the type of the array elements
 @throws SQLClientInfoException if this connection is closed, or there's a problem creating
 the array.
 */
- (id<JavaSqlArray>)createArrayOfWithNSString:(NSString *)typeName
                            withNSObjectArray:(IOSObjectArray *)elements;

/*!
 @brief Returns a new <code>Struct</code> containing the given <code>attributes</code>.
 @param typeName the SQL name of the type of the struct attributes
 @throws SQLClientInfoException if this connection is closed, or there's a problem creating
 the array.
 */
- (id<JavaSqlStruct>)createStructWithNSString:(NSString *)typeName
                            withNSObjectArray:(IOSObjectArray *)attributes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlConnection)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlConnection, TRANSACTION_NONE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlConnection, TRANSACTION_READ_COMMITTED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlConnection, TRANSACTION_READ_UNCOMMITTED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlConnection, TRANSACTION_REPEATABLE_READ, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlConnection, TRANSACTION_SERIALIZABLE, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlConnection)

#endif // _JavaSqlConnection_H_
