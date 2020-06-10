/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
@class NSString, NSLock, NSArray, NSMutableArray, TVSBackgroundTask, NSObject, NSNumberFormatter, TVSStateMachine;

@interface TVCKSyncingKeyValueStore : NSObject {

	NSString* _domain;
	NSString* _databaseDirectory;
	NSLock* _conflictResolversLock;
	NSArray* _conflictResolvers;
	int _conflictDetectionType;
	NSMutableArray* _pendingCompletionBlocks;
	TVSBackgroundTask* _periodicCleanupTask;
	id _activeAccountOrNull;
	NSObject*<OS_dispatch_queue> _dbQueue;
	sqlite3Ref _db;
	sqlite3_stmtRef _dbStmtValueForKey;
	sqlite3_stmtRef _dbStmtSelectDirty;
	sqlite3_stmtRef _dbStmtSelectAllKeys;
	sqlite3_stmtRef _dbStmtInsertReplaceStmt;
	sqlite3_stmtRef _dbStringForKeyStmt;
	sqlite3_stmtRef _dbSetStringForKeyStmt;
	NSNumberFormatter* _dbNumberFormatter;
	TVSStateMachine* _syncEngineStateMachine;
	double _lastSyncTimestamp;

}
+(id)defaultSyncingKeyValueStore;
+(id)_dbDataFromBlobForStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
+(id)_dbStringFromTextForStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
+(id)_dbNumberFromIntegerForStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
-(void)dealloc;
-(id)allKeys;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_synchronize;
-(id)objectsForKeys:(id)arg1 ;
-(id)_databasePath;
-(void)_resetForRetailWithCompletion:(/*^block*/id)arg1 ;
-(void)setObjectsInDictionary:(id)arg1 ;
-(void)_addConflictResolver:(/*^block*/id)arg1 forKeyPrefix:(id)arg2 ;
-(BOOL)_initializeKeyValueStoreCache;
-(BOOL)_syncEngineInitialize;
-(void)_syncEngineSetNeedsSync;
-(void)_deleteCleanRowsNotUpdatedSince:(id)arg1 ;
-(id)initWithDomain:(id)arg1 cacheDirectory:(id)arg2 conflictResolvers:(id)arg3 ;
-(void)_syncEngineDidAccessKeyValueStore;
-(void)_willAccessKeyValueStore;
-(id)_dbDataValuesForKeys:(id)arg1 ;
-(id)_objectsForKeys:(id)arg1 ;
-(id)_dbAllKeys;
-(void)_dbSetDataValues:(id)arg1 ;
-(void)_dbSetNumber:(id)arg1 forKey:(id)arg2 ;
-(id)ActiveStoreAccountBinding;
-(void)updateBoundActiveStoreAccount;
-(id)_dbDirtyValues;
-(/*^block*/id)_conflictResolverForKey:(id)arg1 ;
-(id)_dbStringForKey:(id)arg1 ;
-(id)_dirtySyncItems;
-(id)_dbNumberForKey:(id)arg1 ;
-(void)_dbSetString:(id)arg1 forKey:(id)arg2 ;
-(void)_dbClearAllDirtyFlags;
-(void)_dbTransaction:(/*^block*/id)arg1 ;
-(void)_syncWithServer:(id)arg1 version:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dropAllTables;
-(id)_newSyncEngineStateMachine;
-(BOOL)_deleteKeyValueStoreCache;
-(id)_dbNumberFormatter;
-(void)tvs_bindActiveStoreAccountBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
@end

