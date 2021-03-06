//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageDB.h"

@class NSMutableArray, NSMutableSet;

@interface NSURLStorageURLCacheDB : NSURLStorageDB
{
    struct sqlite3_stmt *_sqlUpdateReceiverDataStmt;	// 32 = 0x20
    struct sqlite3_stmt *_sqlInsertStmtResponse;	// 40 = 0x28
    struct sqlite3_stmt *_sqlInsertStmtBlobData;	// 48 = 0x30
    struct sqlite3_stmt *_sqlInsertStmtReceiverData;	// 56 = 0x38
    struct sqlite3_stmt *_sqlUpdateResponseStmt;	// 64 = 0x40
    struct sqlite3_stmt *_sqlUpdateBlobDataStmt;	// 72 = 0x48
    struct sqlite3_stmt *_sqlSelectStmt;	// 80 = 0x50
    struct sqlite3_stmt *_sqlSelectEntry_idAndRecevierDataForKeyStmt;	// 88 = 0x58
    struct sqlite3_stmt *_sqlSelectIsDataOnFSForEntry_IDStmt;	// 96 = 0x60
    struct sqlite3_stmt *_sqlSelectFileSystemFileForDeletionStmt;	// 104 = 0x68
    struct sqlite3_stmt *_sqlSelectTimeStmt;	// 112 = 0x70
    struct sqlite3_stmt *_sqlDeleteStmtResponse;	// 120 = 0x78
    struct sqlite3_stmt *_sqlDeleteStmtBlobData;	// 128 = 0x80
    struct sqlite3_stmt *_sqlDeleteStmtReceiverData;	// 136 = 0x88
    long long _schemaVersion;	// 144 = 0x90
    NSMutableArray *_entryIDsToDelete;	// 152 = 0x98
    unsigned char performTimeRelativeLookups;	// 160 = 0xa0
    unsigned char _performingShrink;	// 161 = 0xa1
    NSMutableSet *recentTimeStampLookups;	// 168 = 0xa8
    unsigned long long _currentFSBackedUsage;	// 176 = 0xb0
    unsigned long long _currentSQLiteDBUsage;	// 184 = 0xb8
    unsigned long long _currentTotalPersistentCacheUsage;	// 192 = 0xc0
    long long _minSizeForFileSystemBackedCacheItem;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000010000dc0c
@property unsigned char performingShrink; // @synthesize performingShrink=_performingShrink;
@property long long minSizeForFileSystemBackedCacheItem; // @synthesize minSizeForFileSystemBackedCacheItem=_minSizeForFileSystemBackedCacheItem;
@property unsigned long long currentTotalPersistentCacheUsage; // @synthesize currentTotalPersistentCacheUsage=_currentTotalPersistentCacheUsage;
@property unsigned long long currentSQLiteDBUsage; // @synthesize currentSQLiteDBUsage=_currentSQLiteDBUsage;
@property unsigned long long currentFSBackedUsage; // @synthesize currentFSBackedUsage=_currentFSBackedUsage;
@property unsigned char performTimeRelativeLookups; // @synthesize performTimeRelativeLookups;
@property(retain) NSMutableSet *recentTimeStampLookups; // @synthesize recentTimeStampLookups;
- (void)_activateSecureDelete;	// IMP=0x000000010000da60
- (void)writeUnlock;	// IMP=0x000000010000da58
- (void)writeLock;	// IMP=0x000000010000da50
- (void)commitTransaction_NoLock;	// IMP=0x000000010000da08
- (void)beginTransaction_NoLock;	// IMP=0x000000010000d9c0
- (void)_purgeAllFileSystemCacheData;	// IMP=0x000000010000d904
- (void)updateToCurrentSchema;	// IMP=0x000000010000d880
- (int)execSQLStatement:(const char *)arg1 onConnection:(struct sqlite3 *)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(_Bool)arg4;	// IMP=0x000000010000d6dc
- (int)stepSQLStatement:(struct sqlite3_stmt *)arg1 toCompletionWithRetry:(long long)arg2;	// IMP=0x000000010000d5f4
- (void)deleteAllResponses;	// IMP=0x000000010000d460
- (void)deleteResponsesSinceDate:(id)arg1;	// IMP=0x000000010000cf40
- (_Bool)deleteResponseForRequestWithKey:(id)arg1;	// IMP=0x000000010000caf4
- (id)copyAllPartitionNames;	// IMP=0x000000010000ca54
- (id)copyHostNamesForOptionalPartition:(id)arg1;	// IMP=0x000000010000c920
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;	// IMP=0x000000010000c44c
- (void)shrinkDB;	// IMP=0x000000010000c038
- (long long)getMinSizeForVMCachedResource;	// IMP=0x000000010000c02c
- (struct _entry_idAndRecevierDataInfo *)getEntryIDandReceiverDataForRequestKey:(const char *)arg1;	// IMP=0x000000010000be98
- (_Bool)writeDBwithCachedResponse_NoLock:(id)arg1 withKey:(id)arg2 taskManager:(id)arg3;	// IMP=0x000000010000a794
- (void)_ensureDBCapacityConstraints:(id)arg1;	// IMP=0x000000010000a68c
- (_Bool)_finalizeDBDeleteStatements;	// IMP=0x000000010000a5ac
- (_Bool)_finalizeDBSelectStatements;	// IMP=0x000000010000a54c
- (_Bool)_finalizeDBInsertUpdateStatements;	// IMP=0x000000010000a46c
- (_Bool)_finalizeWriteConnectionDBStatements;	// IMP=0x000000010000a42c
- (_Bool)_finalizeAllDBStatements;	// IMP=0x000000010000a3d8
- (_Bool)_prepareDBDeleteStatements;	// IMP=0x000000010000a26c
- (_Bool)_prepareDBSelectStatements;	// IMP=0x000000010000a14c
- (_Bool)_prepareDBInsertUpdateStatements;	// IMP=0x0000000100009ce0
- (_Bool)_prepareDBStatements;	// IMP=0x0000000100009c8c
- (_Bool)_setDBSchemaAndPragmas;	// IMP=0x00000001000095d0
- (_Bool)isSchemaCurrent;	// IMP=0x000000010000943c
- (unsigned long long)getcurrentTotalPersistentCacheUsage;	// IMP=0x00000001000093f8
- (void)updateSQLiteDBCacheUsageOnDisk;	// IMP=0x0000000100008f90
- (void)updateFSBackedCacheUsageOnDisk;	// IMP=0x0000000100008ea0
- (_Bool)openAndPrepareReadCacheDB;	// IMP=0x0000000100008e60
- (_Bool)openAndPrepareWriteCacheDB_NoLock;	// IMP=0x0000000100008d54
- (_Bool)openCacheDB;	// IMP=0x0000000100008c68
- (void)dealloc;	// IMP=0x0000000100008bec
- (void)cleanupWriteConnections_NoLock;	// IMP=0x0000000100008bb8
- (void)cleanupAndShutdown_Lock;	// IMP=0x0000000100008b6c
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 auditToken:(CDStruct_4c969caf)arg3 schemaCheck:(_Bool)arg4;	// IMP=0x0000000100008794
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2 auditToken:(CDStruct_4c969caf)arg3;	// IMP=0x0000000100008760
- (id)init;	// IMP=0x000000010000872c

@end

