//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTReachabilityObserver-Protocol.h"
#import "MZKeyValueStoreControllerDelegate-Protocol.h"

@class MTUniversalPlaybackPositionDataSource, MZKeyValueStoreController, MZUniversalPlaybackPositionStore, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface MTSyncController : NSObject <MZKeyValueStoreControllerDelegate, MTReachabilityObserver>
{
    double _lastOperation;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    _Bool _isRunning;	// 24 = 0x18
    _Bool _uppSyncDirtyFlag;	// 25 = 0x19
    _Bool _resyncWhenDone;	// 26 = 0x1a
    _Bool _resettingToInitialState;	// 27 = 0x1b
    MZUniversalPlaybackPositionStore *_UPPStore;	// 32 = 0x20
    MTUniversalPlaybackPositionDataSource *_UPPDataSource;	// 40 = 0x28
    unsigned long long _backgroundTask;	// 48 = 0x30
    NSOperationQueue *_queue;	// 56 = 0x38
    MZKeyValueStoreController *_cloudSyncController;	// 64 = 0x40
}

+ (_Bool)hasAccountChangedSinceLastSync;	// IMP=0x00000001000c9670
+ (void)resetAccountIdentifierForLastSync;	// IMP=0x00000001000c9660
+ (void)setAccountIdentifierForLastSync:(id)arg1;	// IMP=0x00000001000c9488
+ (id)accountIdentifierForLastSync;	// IMP=0x00000001000c9424
+ (void)resetPlaylistSyncVersion;	// IMP=0x00000001000c93f0
+ (void)setPlaylistSyncVersion:(id)arg1;	// IMP=0x00000001000c9310
+ (id)playlistSyncVersion;	// IMP=0x00000001000c9268
+ (void)resetPodcastSyncVersion;	// IMP=0x00000001000c9218
+ (void)setPodcastSyncVersion:(id)arg1;	// IMP=0x00000001000c90a4
+ (id)podcastSyncVersion;	// IMP=0x00000001000c8ffc
+ (void)resetMetadataToInitialState;	// IMP=0x00000001000c814c
+ (void)mergeArray:(id)arg1 fromArray:(id)arg2 properties:(id)arg3 lookupKey:(id)arg4 updateBlock:(CDUnknownBlockType)arg5 insertBlock:(CDUnknownBlockType)arg6 deleteBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000001000c7b5c
+ (_Bool)isUserLoggedIn;	// IMP=0x00000001000c6578
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c4798
+ (id)sharedInstance;	// IMP=0x00000001000c46c8
- (void).cxx_destruct;	// IMP=0x00000001000c9a5c
@property(nonatomic) _Bool resettingToInitialState; // @synthesize resettingToInitialState=_resettingToInitialState;
@property(nonatomic) _Bool resyncWhenDone; // @synthesize resyncWhenDone=_resyncWhenDone;
@property(retain, nonatomic) MZKeyValueStoreController *cloudSyncController; // @synthesize cloudSyncController=_cloudSyncController;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic) _Bool uppSyncDirtyFlag; // @synthesize uppSyncDirtyFlag=_uppSyncDirtyFlag;
@property(retain, nonatomic) MTUniversalPlaybackPositionDataSource *UPPDataSource; // @synthesize UPPDataSource=_UPPDataSource;
@property(retain, nonatomic) MZUniversalPlaybackPositionStore *UPPStore; // @synthesize UPPStore=_UPPStore;
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x00000001000c9980
- (void)updateAccountForLastSync;	// IMP=0x00000001000c9860
- (_Bool)hasAccountChangedSinceLastSync;	// IMP=0x00000001000c9844
- (_Bool)hasPlaylistSyncVersion;	// IMP=0x00000001000c93b4
@property(retain, nonatomic) NSString *playlistSyncVersion; // @dynamic playlistSyncVersion;
- (_Bool)hasPodcastSyncVersion;	// IMP=0x00000001000c91dc
- (_Bool)needsInitialSync;	// IMP=0x00000001000c9148
@property(retain, nonatomic) NSString *podcastSyncVersion; // @dynamic podcastSyncVersion;
- (void)_onQueueResetToInitialState:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c878c
- (_Bool)resetToInitialStateForced:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c82a8
- (_Bool)resetToInitialStateForced:(_Bool)arg1;	// IMP=0x00000001000c8298
- (_Bool)resetToInitialStateIfNeeded;	// IMP=0x00000001000c8288
- (_Bool)isPrivateListeningModeChanged;	// IMP=0x00000001000c8144
- (_Bool)resetToInitialStateIfIncomplete;	// IMP=0x00000001000c8010
- (id)expandFeedUrls:(id)arg1;	// IMP=0x00000001000c79c0
- (void)scheduleEpisodeStateGetWithFeedUrls:(id)arg1;	// IMP=0x00000001000c779c
- (void)scheduleEpisodeStatePutWithFeedUrls:(id)arg1;	// IMP=0x00000001000c7578
- (void)enableAssetDeletionIfPossible:(unsigned long long)arg1;	// IMP=0x00000001000c7574
- (void)enableAssetDeletionIfPossible;	// IMP=0x00000001000c7570
- (void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2;	// IMP=0x00000001000c7488
- (void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3;	// IMP=0x00000001000c7380
- (_Bool)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000001000c7194
- (void)syncKeyValues;	// IMP=0x00000001000c7034
- (void)syncTermsVersion;	// IMP=0x00000001000c6e34
- (void)syncPlaylists:(int)arg1;	// IMP=0x00000001000c6c30
- (void)syncSubscriptions:(int)arg1;	// IMP=0x00000001000c6980
- (void)syncSubscriptions;	// IMP=0x00000001000c68ac
- (void)syncEverything;	// IMP=0x00000001000c6858
- (_Bool)canScheduleSyncRequest;	// IMP=0x00000001000c6618
- (_Bool)isUserLoggedIn;	// IMP=0x00000001000c655c
- (_Bool)UPPEnabled;	// IMP=0x00000001000c64b8
- (void)performUniversalPlaybackPositionSync;	// IMP=0x00000001000c62d4
- (id)subscriptionKeys;	// IMP=0x00000001000c6268
- (void)dealloc;	// IMP=0x00000001000c612c
- (id)operationInQueueWithType:(int)arg1;	// IMP=0x00000001000c5fdc
@property(readonly, nonatomic) _Bool isSyncing;
- (void)setIsRunning:(_Bool)arg1;	// IMP=0x00000001000c5eb4
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void)addOperation:(id)arg1;	// IMP=0x00000001000c59a4
- (void)startBackgroundTask;	// IMP=0x00000001000c5750
- (void)applicationWillEnterForeground;	// IMP=0x00000001000c5744
- (void)endBackgroundTask;	// IMP=0x00000001000c5654
- (void)applicationDidEnterBackground;	// IMP=0x00000001000c55c4
- (void)operationFinished:(id)arg1;	// IMP=0x00000001000c5208
- (void)start;	// IMP=0x00000001000c48c4
- (id)init;	// IMP=0x00000001000c47b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

