/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLEngineScopeStorage, NSMutableSet, NSMutableDictionary, NSMutableArray, CPLChangeBatch, CPLEngineStore, CPLPushChangeTasks, NSDate, NSSet, NSArray, NSDictionary;

@interface CPLPushSessionTracker : NSObject {

	CPLEngineScopeStorage* _scopes;
	NSMutableSet* _unquarantinedRecordScopedIdentifiers;
	NSMutableDictionary* _incomingBatchRecordPerScopedIdentifiers;
	NSMutableDictionary* _storedClientRecords;
	NSMutableDictionary* _storedCloudRecords;
	NSMutableArray* _addedRecords;
	NSMutableArray* _updatedRecords;
	NSMutableArray* _deletedRecordScopedIdentifiers;
	NSMutableArray* _changesWithResourceChanges;
	NSMutableDictionary* _fullRecords;
	NSMutableDictionary* _resourcesToUpload;
	BOOL _checkScopeIdentifier;
	NSMutableSet* _validScopeIdentifiers;
	NSMutableSet* _invalidScopeIdentifiers;
	BOOL _diffedBatchCanLowerQuota;
	BOOL _expandHasBeenSuccessful;
	BOOL _diffHasBeenSuccessful;
	BOOL _applyHasBeenSuccessful;
	CPLChangeBatch* _incomingBatch;
	CPLEngineStore* _store;
	CPLChangeBatch* _expandedBatch;
	CPLPushChangeTasks* _pushChangeTasks;
	CPLChangeBatch* _diffedBatch;
	unsigned long long _ignoredRecordCount;
	NSDate* _now;

}

@property (nonatomic,readonly) CPLChangeBatch * incomingBatch;                            //@synthesize incomingBatch=_incomingBatch - In the implementation block
@property (nonatomic,readonly) CPLEngineStore * store;                                    //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLChangeBatch * expandedBatch;                            //@synthesize expandedBatch=_expandedBatch - In the implementation block
@property (nonatomic,readonly) NSSet * unquarantinedRecordScopedIdentifiers;              //@synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers - In the implementation block
@property (nonatomic,readonly) CPLPushChangeTasks * pushChangeTasks;                      //@synthesize pushChangeTasks=_pushChangeTasks - In the implementation block
@property (nonatomic,readonly) BOOL hasPushChangeTasks; 
@property (nonatomic,readonly) CPLChangeBatch * diffedBatch;                              //@synthesize diffedBatch=_diffedBatch - In the implementation block
@property (nonatomic,readonly) NSArray * addedRecords; 
@property (nonatomic,readonly) NSArray * updatedRecords; 
@property (nonatomic,readonly) NSArray * deletedRecordScopedIdentifiers; 
@property (nonatomic,readonly) NSDictionary * resourcesToUpload; 
@property (nonatomic,readonly) unsigned long long ignoredRecordCount;                     //@synthesize ignoredRecordCount=_ignoredRecordCount - In the implementation block
@property (nonatomic,readonly) BOOL diffedBatchCanLowerQuota;                             //@synthesize diffedBatchCanLowerQuota=_diffedBatchCanLowerQuota - In the implementation block
@property (nonatomic,copy) NSDate * now;                                                  //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) BOOL expandHasBeenSuccessful;                              //@synthesize expandHasBeenSuccessful=_expandHasBeenSuccessful - In the implementation block
@property (nonatomic,readonly) BOOL diffHasBeenSuccessful;                                //@synthesize diffHasBeenSuccessful=_diffHasBeenSuccessful - In the implementation block
@property (nonatomic,readonly) BOOL applyHasBeenSuccessful;                               //@synthesize applyHasBeenSuccessful=_applyHasBeenSuccessful - In the implementation block
-(NSDate *)now;
-(CPLEngineStore *)store;
-(NSArray *)updatedRecords;
-(NSArray *)addedRecords;
-(NSArray *)deletedRecordScopedIdentifiers;
-(NSSet *)unquarantinedRecordScopedIdentifiers;
-(id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasPushChangeTasks;
-(BOOL)knowsClientRecordWithScopedIdentifier:(id)arg1 ;
-(id)_resourceIdentitiesFromChange:(id)arg1 ;
-(id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)arg1 ;
-(id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg1 ;
-(BOOL)checkScopeIdentifier:(id)arg1 ;
-(id)storedClientRecordWithLocalScopedIdentifier:(id)arg1 ;
-(BOOL)hasClientRecordWithLocalScopedIdentifier:(id)arg1 ;
-(id)storedCloudRecordWithLocalScopedIdentifier:(id)arg1 ;
-(BOOL)hasCloudRecordWithLocalScopedIdentifier:(id)arg1 ;
-(id)_realChangeFromChange:(id)arg1 comparedToStoredRecord:(id)arg2 changeType:(unsigned long long)arg3 ;
-(BOOL)computeExpandedBatchWithError:(id*)arg1 ;
-(BOOL)computeDiff;
-(void)enumerateDiffWithBlock:(/*^block*/id)arg1 ;
-(id)deletedRecordIdentifiers;
-(NSDictionary *)resourcesToUpload;
-(BOOL)applyChangesToClientCacheWithError:(id*)arg1 ;
-(BOOL)shouldCancelSyncSessionTryingToUploadChange:(id)arg1 ;
-(CPLChangeBatch *)incomingBatch;
-(CPLChangeBatch *)expandedBatch;
-(CPLPushChangeTasks *)pushChangeTasks;
-(CPLChangeBatch *)diffedBatch;
-(unsigned long long)ignoredRecordCount;
-(BOOL)diffedBatchCanLowerQuota;
-(void)setNow:(NSDate *)arg1 ;
-(BOOL)expandHasBeenSuccessful;
-(BOOL)diffHasBeenSuccessful;
-(BOOL)applyHasBeenSuccessful;
@end

