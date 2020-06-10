/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSHashTable, NSObject, NSMutableArray, NSURL, CPLResetTracker, CPLChangeBatch, NSSet, NSDate, NSArray, CPLPlatformObject, CPLEngineLibrary, CPLEnginePushRepository, CPLEngineScopeStorage, CPLEngineScopeCleanupTasks, CPLEngineChangePipe, CPLEngineIDMapping, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineTransientRepository, CPLEngineResourceStorage, CPLEngineResourceDownloadQueue, CPLEngineOutgoingResources, CPLEngineRemappedDeletes, CPLEngineQuarantinedRecords, CPLEngineStatusCenter, CPLEngineDerivativesCache, NSString;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {

	NSHashTable* _storages;
	NSObject*<OS_dispatch_queue> _batchedTransactionsQueue;
	NSMutableArray* _batchedTransactions;
	BOOL _batchedTransactionDequeueIsScheduled;
	BOOL _dontDelayChangeSessionUpdate;
	NSURL* _resetEventsURL;
	NSMutableArray* _resetEvents;
	CPLResetTracker* _pendingTracker;
	CPLChangeBatch* _unacknowledgedBatch;
	BOOL _discardUnacknowledgedBatchOnTransactionFail;
	NSSet* _lastInvalidRecordScopedIdentifiers;
	NSDate* _lastInvalidRecordsDate;
	NSObject*<OS_dispatch_source> _pendingUpdateTimer;
	NSObject*<OS_dispatch_queue> _pendingUpdateQueue;
	double _pendingUpdateInterval;
	BOOL _unschedulePendingUpdateApplyOnWriteSuccess;
	BOOL _schedulePendingUpdateApplyOnWriteSuccess;
	BOOL _scheduleSetupOnWriteSuccess;
	BOOL _scheduleDisabledFeatureUpdateOnWriteSuccess;
	BOOL _schedulePullFromClient;
	NSObject*<OS_dispatch_queue> _shouldSyncScopeListQueue;
	BOOL _shouldEnableScopeListSyncOnWriteSuccess;
	NSArray* _disabledFeatures;
	BOOL _hasUpdatedDisabledFeatures;
	BOOL _isUpdatingDisabledFeatures;
	BOOL _shouldTriggerCompleteResetSyncAfterDisabledFeaturesUpdate;
	BOOL _shouldTriggerResetSyncAfterDisabledFeaturesUpdate;
	BOOL _shouldSyncScopeList;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineScopeStorage* _scopes;
	CPLEngineScopeCleanupTasks* _cleanupTasks;
	CPLEngineChangePipe* _pullQueue;
	CPLEngineIDMapping* _idMapping;
	CPLEngineClientCache* _clientCache;
	CPLEngineCloudCache* _cloudCache;
	CPLEngineTransientRepository* _transientPullRepository;
	CPLEngineResourceStorage* _resourceStorage;
	CPLEngineResourceDownloadQueue* _downloadQueue;
	CPLEngineOutgoingResources* _outgoingResources;
	CPLEngineRemappedDeletes* _remappedDeletes;
	CPLEngineQuarantinedRecords* _quarantinedRecords;
	CPLEngineStatusCenter* _statusCenter;
	CPLEngineDerivativesCache* _derivativesCache;
	unsigned long long _state;

}

@property (nonatomic,readonly) BOOL hasPendingResetSync; 
@property (assign,nonatomic) unsigned long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSArray * storages; 
@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;                             //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (readonly) BOOL shouldSyncScopeList;                                                      //@synthesize shouldSyncScopeList=_shouldSyncScopeList - In the implementation block
@property (nonatomic,readonly) CPLEnginePushRepository * pushRepository;                            //@synthesize pushRepository=_pushRepository - In the implementation block
@property (nonatomic,readonly) BOOL pushRepositoryIsFull; 
@property (nonatomic,readonly) CPLEngineScopeStorage * scopes;                                      //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,readonly) CPLEngineScopeCleanupTasks * cleanupTasks;                           //@synthesize cleanupTasks=_cleanupTasks - In the implementation block
@property (nonatomic,readonly) CPLEngineChangePipe * pullQueue;                                     //@synthesize pullQueue=_pullQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineIDMapping * idMapping;                                      //@synthesize idMapping=_idMapping - In the implementation block
@property (nonatomic,readonly) CPLEngineClientCache * clientCache;                                  //@synthesize clientCache=_clientCache - In the implementation block
@property (nonatomic,readonly) CPLEngineCloudCache * cloudCache;                                    //@synthesize cloudCache=_cloudCache - In the implementation block
@property (nonatomic,readonly) CPLEngineTransientRepository * transientPullRepository;              //@synthesize transientPullRepository=_transientPullRepository - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceStorage * resourceStorage;                          //@synthesize resourceStorage=_resourceStorage - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceDownloadQueue * downloadQueue;                      //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineOutgoingResources * outgoingResources;                      //@synthesize outgoingResources=_outgoingResources - In the implementation block
@property (nonatomic,readonly) CPLEngineRemappedDeletes * remappedDeletes;                          //@synthesize remappedDeletes=_remappedDeletes - In the implementation block
@property (nonatomic,readonly) CPLEngineQuarantinedRecords * quarantinedRecords;                    //@synthesize quarantinedRecords=_quarantinedRecords - In the implementation block
@property (nonatomic,readonly) CPLEngineStatusCenter * statusCenter;                                //@synthesize statusCenter=_statusCenter - In the implementation block
@property (readonly) NSDate * libraryCreationDate; 
@property (nonatomic,readonly) id corruptionInfo; 
@property (nonatomic,readonly) CPLEngineDerivativesCache * derivativesCache;                        //@synthesize derivativesCache=_derivativesCache - In the implementation block
@property (nonatomic,readonly) BOOL shouldGenerateDerivatives; 
@property (nonatomic,readonly) NSArray * disabledFeatures; 
@property (nonatomic,readonly) BOOL shouldUpdateDisabledFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                                  //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)storageNames;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id)userIdentifier;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)_canWrite;
-(void)performBarrier;
-(id)libraryVersion;
-(CPLEngineScopeStorage *)scopes;
-(CPLPlatformObject *)platformObject;
-(NSDate *)libraryCreationDate;
-(unsigned long long)libraryOptions;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)componentName;
-(id)initWithEngineLibrary:(id)arg1 ;
-(NSArray *)storages;
-(void)registerStorage:(id)arg1 ;
-(void)_loadResetEvents;
-(void)_storeResetEvent:(id)arg1 scopeIdentifier:(id)arg2 date:(id)arg3 pending:(BOOL)arg4 cause:(id)arg5 ;
-(void)_storeResetEvent:(id)arg1 scopeIdentifier:(id)arg2 date:(id)arg3 cause:(id)arg4 ;
-(void)noteResetSyncFinished;
-(BOOL)hasPendingResetSync;
-(id)_resetEventsDescriptions;
-(id)_resetEventsJSON;
-(BOOL)_resetGlobalStateWithError:(id*)arg1 ;
-(BOOL)_resetLocalSyncStateWithCause:(id)arg1 scope:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(BOOL)_resetCompleteSyncStateWithCause:(id)arg1 scope:(id)arg2 error:(id*)arg3 ;
-(BOOL)_resetCompleteSyncStateIncludingIDMappingWithCause:(id)arg1 scope:(id)arg2 error:(id*)arg3 ;
-(BOOL)_resetSyncAnchorWithCause:(id)arg1 scope:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetLocalSyncStateWithCause:(id)arg1 date:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetCompleteSyncStateIncludingIDMappingWithCause:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSyncAnchorWithCause:(id)arg1 error:(id*)arg2 ;
-(void)noteOtherResetEvent:(id)arg1 cause:(id)arg2 ;
-(void)noteInvalidRecordScopedIdentifiersInPushSession:(id)arg1 ;
-(void)_performTransaction:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_commitWriteTransaction:(id)arg1 commitError:(id)arg2 ;
-(id)performWriteTransactionWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scheduleBatchedTransactionsLocked;
-(void)_reallyPerformBatchedTransactionsLocked;
-(void)performBatchedWriteTransactionWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBatchedWriteTransactionBarrier;
-(BOOL)storeLibraryVersion:(id)arg1 withError:(id*)arg2 ;
-(BOOL)updateLibraryOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_shouldSyncScopeListWithOptions:(unsigned long long)arg1 ;
-(void)_updateShouldSyncScopeList:(BOOL)arg1 ;
-(BOOL)shouldSyncScopeList;
-(id)createNewLibraryVersion;
-(BOOL)pushRepositoryIsFull;
-(BOOL)storeUserIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)lastQuarantineCountReportDate;
-(BOOL)storeLastQuarantineCountReportDate:(id)arg1 error:(id*)arg2 ;
-(id)clientCacheIdentifier;
-(BOOL)storeClientIsInSyncWithClientCacheWithError:(id*)arg1 ;
-(BOOL)isClientInSyncWithClientCache;
-(id)corruptionInfo;
-(BOOL)shouldGenerateDerivatives;
-(BOOL)_applyPendingUpdate:(id)arg1 error:(id*)arg2 ;
-(void)_reallySchedulePendingUpdateApply;
-(void)_reallyUnschedulePendingUpdateApply;
-(void)_schedulePendingUpdateApply;
-(void)_unschedulePendingUpdateApply;
-(BOOL)storeChangeSessionUpdate:(id)arg1 error:(id*)arg2 ;
-(BOOL)beginChangeSession:(id)arg1 withLibraryVersion:(id)arg2 resetTracker:(id)arg3 error:(id*)arg4 ;
-(BOOL)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg1 error:(id*)arg2 ;
-(BOOL)forceApplyPendingChangeSessionUpdateWithError:(id*)arg1 ;
-(BOOL)hasPendingChangeSessionUpdate;
-(BOOL)checkExpectedLibraryVersion:(id)arg1 error:(id*)arg2 ;
-(void)keepUnacknowledgedBatch:(id)arg1 ;
-(void)dropUnacknowledgedBatch;
-(id)unacknowledgedChangeWithLocalScopedIdentifier:(id)arg1 ;
-(id)_storedDisabledFeatures;
-(BOOL)updateDisabledFeatures:(id)arg1 didReset:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)isFeatureDisabled:(id)arg1 ;
-(NSArray *)disabledFeatures;
-(BOOL)shouldUpdateDisabledFeatures;
-(BOOL)setShouldUpdateDisabledFeaturesWithError:(id*)arg1 ;
-(id)localResourceForCloudResource:(id)arg1 recordClass:(Class*)arg2 ;
-(id)derivativesFilter;
-(BOOL)storeDerivativesFilter:(id)arg1 error:(id*)arg2 ;
-(void)wipeStoreAtNextOpeningWithReason:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_currentTransaction;
-(void)_setTransactionOnCurrentThread:(id)arg1 ;
-(void)_removeTransactionOnCurrentThread:(id)arg1 ;
-(BOOL)_canRead;
-(void)assertCanWrite;
-(void)assertCanRead;
-(CPLEngineLibrary *)engineLibrary;
-(CPLEnginePushRepository *)pushRepository;
-(CPLEngineScopeCleanupTasks *)cleanupTasks;
-(CPLEngineChangePipe *)pullQueue;
-(CPLEngineIDMapping *)idMapping;
-(CPLEngineClientCache *)clientCache;
-(CPLEngineCloudCache *)cloudCache;
-(CPLEngineTransientRepository *)transientPullRepository;
-(CPLEngineResourceStorage *)resourceStorage;
-(CPLEngineResourceDownloadQueue *)downloadQueue;
-(CPLEngineOutgoingResources *)outgoingResources;
-(CPLEngineRemappedDeletes *)remappedDeletes;
-(CPLEngineQuarantinedRecords *)quarantinedRecords;
-(CPLEngineStatusCenter *)statusCenter;
-(CPLEngineDerivativesCache *)derivativesCache;
@end

