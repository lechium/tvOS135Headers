/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSASModelBase.h>

@interface MSASPersonModel : MSASModelBase {

	BOOL _shouldDownloadEarliestPhotosFirst;

}

@property (assign,nonatomic) BOOL shouldDownloadEarliestPhotosFirst;              //@synthesize shouldDownloadEarliestPhotosFirst=_shouldDownloadEarliestPhotosFirst - In the implementation block
-(id)initWithPersonID:(id)arg1 ;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(long long)dbQueueNextCommandSequenceNumber;
-(long long)dbQueueSmallestCommandSequenceNumber;
-(void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(void)enqueueCommandAtHeadOfQueue:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 sequenceNumber:(long long)arg6 ;
-(void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 pendingOnAssetCollectionGUID:(id)arg5 ;
-(void)dbQueueRequeuePendingCommandsWithQueryStatement:(sqlite3_stmtRef)arg1 deleteStatement:(sqlite3_stmtRef)arg2 ;
-(void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)arg1 ;
-(void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)arg1 ;
-(id)_commandWithMinimumIdentifier:(id)arg1 outParams:(id*)arg2 outCommandIdentifier:(long long*)arg3 outPersonID:(id*)arg4 outAlbumGUID:(id*)arg5 outAssetCollectionGUID:(id*)arg6 ;
-(id)commandAtHeadOfQueueOutParams:(id*)arg1 outCommandIdentifier:(long long*)arg2 outPersonID:(id*)arg3 outAlbumGUID:(id*)arg4 outAssetCollectionGUID:(id*)arg5 ;
-(id)commandWithMinimumIdentifier:(long long)arg1 outParams:(id*)arg2 outCommandIdentifier:(long long*)arg3 outPersonID:(id*)arg4 outAlbumGUID:(id*)arg5 outAssetCollectionGUID:(id*)arg6 ;
-(void)setParams:(id)arg1 forCommandWithIdentifier:(long long)arg2 ;
-(void)dbQueueRemoveCommandAtHeadOfQueue;
-(void)removeCommandIdentifier:(long long)arg1 ;
-(void)dbQueueRemoveCommandIdentifier:(long long)arg1 ;
-(void)dbQueueRemoveAllEntriesFromTable:(id)arg1 ;
-(void)purgeCompletionBlock:(/*^block*/id)arg1 ;
-(long long)countOfEnqueuedCommand:(id)arg1 ;
-(long long)countOfEnqueuedCommands;
-(BOOL)isAssetCollectionWithGUIDPending:(id)arg1 ;
-(BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)arg1 ;
-(void)addPendingAssetCollectionGUID:(id)arg1 albumGUID:(id)arg2 ;
-(void)requeuePendingAssetCollectionGUID:(id)arg1 ;
-(void)requeuePendingAssetCollectionsWithAlbumGUID:(id)arg1 ;
-(int)dbQueueAssetCountAlbumGUID:(id)arg1 inQueue:(id)arg2 ;
-(void)dbQueueSetErrorCount:(int)arg1 forGUID:(id)arg2 inQueue:(id)arg3 ;
-(void)dbQueueRemoveGUID:(id)arg1 fromQueue:(id)arg2 ;
-(BOOL)dbQueueIsGUIDQueued:(id)arg1 inQueue:(id)arg2 ;
-(long long)nextMMCSItemID;
-(void)enqueueAssetForDownload:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(int)assetsInDownloadQueue;
-(int)assetsInDownloadQueueAlbumGUID:(id)arg1 ;
-(id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 thumbnails:(BOOL)arg3 maxCount:(int)arg4 isInflight:(BOOL)arg5 ;
-(id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 maxCount:(int)arg3 ;
-(BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 ;
-(int)itemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 ;
-(void)setErrorCount:(int)arg1 forAssetInDownloadQueue:(id)arg2 ;
-(void)setInFlightAssets:(id)arg1 ;
-(void)removeAssetsFromDownloadQueue:(id)arg1 ;
-(void)enqueueAssetCollectionForUpload:(id)arg1 album:(id)arg2 ;
-(int)assetCollectionsInUploadQueue;
-(int)assetCollectionsInUploadQueueAlbumGUID:(id)arg1 ;
-(id)itemsForUpload;
-(id)nextItemsForUploadMaxCount:(int)arg1 ;
-(id)nextItemsForUploadAlbumGUID:(id)arg1 maxPriority:(int)arg2 maxCount:(int)arg3 ;
-(void)setErrorCount:(int)arg1 forAssetCollectionInUploadQueue:(id)arg2 ;
-(void)removeAssetCollectionsFromUploadQueue:(id)arg1 ;
-(BOOL)shouldDownloadEarliestPhotosFirst;
-(void)setShouldDownloadEarliestPhotosFirst:(BOOL)arg1 ;
@end

