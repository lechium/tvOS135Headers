/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_group;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSError, NSURL, NSDictionary, NSMutableArray, NSMapTable, NSString;

@interface GEOSQLiteDB : NSObject {

	NSObject*<OS_os_log> _log;
	sqlite3Ref _db;
	NSError* _lastError;
	NSURL* _databaseFileURL;
	int _sqliteFlags;
	NSDictionary* _pragmas;
	/*^block*/id _setupBlock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _externalFilesQueue;
	NSObject*<OS_dispatch_group> _externalFilesGroup;
	NSMutableArray* _externalFilesActiveChannels;
	NSMapTable* _preparedStatements;
	BOOL _isInTransaction;
	BOOL _isTemporaryInMemoryDatabase;
	BOOL _didEncounterExternalResourceErrorInTransaction;
	NSMutableArray* _filesAddedDuringTransaction;
	NSMutableArray* _filesDeletedDuringTransaction;
	NSMapTable* _virtualTables;
	SCD_Union_GE88 _didTearDown;

}

@property (nonatomic,readonly) sqlite3Ref sqliteDB; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> isolationQueue; 
@property (nonatomic,readonly) NSString * dbFilePath; 
@property (nonatomic,readonly) NSError * lastError; 
@property (nonatomic,readonly) BOOL isDBReady; 
@property (nonatomic,readonly) NSObject*<OS_os_log> log; 
@property (nonatomic,readonly) NSDictionary * pragmas; 
@property (assign,nonatomic) long long user_version; 
+(BOOL)renameAllDBFilesFrom:(id)arg1 to:(id)arg2 ;
+(id)defaultPragmas;
+(id)_findAllDBFilesForURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)_closeDB;
-(BOOL)vacuum;
-(long long)lastInsertRowID;
-(BOOL)dropAllTables;
-(NSObject*<OS_os_log>)log;
-(void)tearDown;
-(id)initWithQueueName:(const char*)arg1 logFacility:(const char*)arg2 dbFilePath:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(/*^block*/id)arg6 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(long long)user_version;
-(sqlite3Ref)sqliteDB;
-(void)setUser_version:(long long)arg1 ;
-(long long)int64ForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(id)stringForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(BOOL)reportSQLiteErrorCode:(int)arg1 method:(id)arg2 error:(id*)arg3 ;
-(BOOL)statementForKey:(id)arg1 statementBlock:(/*^block*/id)arg2 ;
-(BOOL)createTable:(const char*)arg1 withDrop:(const char*)arg2 ;
-(BOOL)prepareStatement:(const char*)arg1 forKey:(id)arg2 ;
-(BOOL)bindInt64Parameter:(const char*)arg1 toValue:(long long)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)executeStatement:(id)arg1 statementBlock:(/*^block*/id)arg2 ;
-(BOOL)bindTextParameter:(const char*)arg1 toValue:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)executeInTransaction:(/*^block*/id)arg1 ;
-(void)executeAsync:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(id)initWithQueueName:(const char*)arg1 log:(id)arg2 databaseFileURL:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(/*^block*/id)arg6 ;
-(int)intForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(id)UUIDForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(BOOL)deleteExternalResourceAtURL:(id)arg1 error:(id*)arg2 ;
-(void)executeAsync:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)bindIntParameter:(const char*)arg1 toValue:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(id)blobForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(BOOL)moveExternalResourceAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)bindBlobNoCopyParameter:(const char*)arg1 toValue:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)bindParameter:(const char*)arg1 toUUID:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)bindNullParameter:(const char*)arg1 inStatement:(sqlite3_stmtRef)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllDBFiles;
-(BOOL)setup;
-(void)_execute:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)executeSync:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)_openAndConfigureWithRetryIfCorrupt;
-(void)_debug_unlockDB:(id)arg1 ;
-(void)_debug_lockDB:(id)arg1 ;
-(int)_openAndConfigure;
-(BOOL)_deleteAllDatabaseFilesIfCorrupt:(int)arg1 ;
-(int)_openDatabaseFile;
-(int)_setPragmas;
-(void)_createParentDirectory;
-(BOOL)_deleteAllDBFiles;
-(NSDictionary *)pragmas;
-(id)getTablesLike:(id)arg1 ;
-(BOOL)dropTablesLike:(id)arg1 ;
-(void)_deleteAndReopenDatabaseIfCorrupt:(int)arg1 ;
-(BOOL)_bindParameter:(const char*)arg1 inStatement:(sqlite3_stmtRef)arg2 error:(id*)arg3 withBinder:(/*^block*/id)arg4 ;
-(BOOL)_waitForAllTransactionExternalResources;
-(id)_blobForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 noCopy:(BOOL)arg3 ;
-(void)_writeTransactionExternalResourceWithData:(id)arg1 toURL:(id)arg2 ;
-(NSString *)dbFilePath;
-(NSError *)lastError;
-(BOOL)isDBReady;
-(BOOL)registerVirtualTable:(id)arg1 ;
-(BOOL)unregisterVirtualTable:(id)arg1 ;
-(id)getAllTables;
-(void)clearStatement:(id)arg1 ;
-(sqlite3_stmtRef)statementForKey:(id)arg1 ;
-(BOOL)bindBlobParameter:(const char*)arg1 toValue:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)bindZeroBlobParameter:(const char*)arg1 length:(unsigned long long)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)bindRealParameter:(const char*)arg1 toValue:(double)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)executeStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(double)doubleForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(id)noCopyBlobForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(BOOL)writeExternalResourceWithData:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeBlobData:(id)arg1 toTable:(const char*)arg2 column:(const char*)arg3 rowID:(long long)arg4 error:(id*)arg5 ;
-(void)_channelCleanupFailedWithError:(int)arg1 ;
-(void)_channelEncounteredError:(int)arg1 ;
-(void)_doneWritingToChannel:(id)arg1 ;
@end

