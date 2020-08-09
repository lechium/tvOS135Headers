//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, MAProgressNotification, MSUUpdateBrainAssetLoader, NSDate, NSTimer, PBSOSUpdateScanOptions, TVSStateMachine;
@protocol OS_dispatch_queue, PBOSSoftwareUpdateProcessDelegate;

@interface PBOSSoftwareUpdateProcess : NSObject
{
    _Bool _needToCancelMSUOperation;	// 8 = 0x8
    _Bool _assetIsLarge;	// 9 = 0x9
    _Bool _downloadAssetWithDiscretionaryPriority;	// 10 = 0xa
    _Bool _isApplyingRecheckedUpdate;	// 11 = 0xb
    _Bool _sentDownloadFinishedCallback;	// 12 = 0xc
    _Bool _userConfirmedApplyAtCheckTime;	// 13 = 0xd
    float _lastMSUPercentCompleted;	// 16 = 0x10
    id <PBOSSoftwareUpdateProcessDelegate> _delegate;	// 24 = 0x18
    unsigned long long _action;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    TVSStateMachine *_machine;	// 48 = 0x30
    unsigned long long _deferredAction;	// 56 = 0x38
    PBSOSUpdateScanOptions *_scanOptions;	// 64 = 0x40
    MAAsset *_asset;	// 72 = 0x48
    NSDate *_assetReleaseDate;	// 80 = 0x50
    MSUUpdateBrainAssetLoader *_brainLoader;	// 88 = 0x58
    NSTimer *_slowUpdateTimer;	// 96 = 0x60
    MAProgressNotification *_lastDownloadProgressNotification;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_spaceClearingQueue;	// 112 = 0x70
}

+ (long long)_compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4;	// IMP=0x000000010004d3c4
+ (id)sharedProcess;	// IMP=0x0000000100035160
- (void).cxx_destruct;	// IMP=0x000000010004eaa8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *spaceClearingQueue; // @synthesize spaceClearingQueue=_spaceClearingQueue;
@property(retain, nonatomic) MAProgressNotification *lastDownloadProgressNotification; // @synthesize lastDownloadProgressNotification=_lastDownloadProgressNotification;
@property(nonatomic) float lastMSUPercentCompleted; // @synthesize lastMSUPercentCompleted=_lastMSUPercentCompleted;
@property(nonatomic) _Bool userConfirmedApplyAtCheckTime; // @synthesize userConfirmedApplyAtCheckTime=_userConfirmedApplyAtCheckTime;
@property(nonatomic) _Bool sentDownloadFinishedCallback; // @synthesize sentDownloadFinishedCallback=_sentDownloadFinishedCallback;
@property(nonatomic) _Bool isApplyingRecheckedUpdate; // @synthesize isApplyingRecheckedUpdate=_isApplyingRecheckedUpdate;
@property(nonatomic) _Bool downloadAssetWithDiscretionaryPriority; // @synthesize downloadAssetWithDiscretionaryPriority=_downloadAssetWithDiscretionaryPriority;
@property(nonatomic) _Bool assetIsLarge; // @synthesize assetIsLarge=_assetIsLarge;
@property(nonatomic) _Bool needToCancelMSUOperation; // @synthesize needToCancelMSUOperation=_needToCancelMSUOperation;
@property(retain, nonatomic) NSTimer *slowUpdateTimer; // @synthesize slowUpdateTimer=_slowUpdateTimer;
@property(retain, nonatomic) MSUUpdateBrainAssetLoader *brainLoader; // @synthesize brainLoader=_brainLoader;
@property(copy, nonatomic) NSDate *assetReleaseDate; // @synthesize assetReleaseDate=_assetReleaseDate;
@property(retain, nonatomic) MAAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) PBSOSUpdateScanOptions *scanOptions; // @synthesize scanOptions=_scanOptions;
@property(nonatomic) unsigned long long deferredAction; // @synthesize deferredAction=_deferredAction;
@property(retain, nonatomic) TVSStateMachine *machine; // @synthesize machine=_machine;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) __weak id <PBOSSoftwareUpdateProcessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_storeURLBagLoaded:(id)arg1;	// IMP=0x000000010004e3b8
- (id)_resultUserInfoWithError:(id)arg1;	// IMP=0x000000010004de9c
- (void)_slowUpdateTimerFired:(id)arg1;	// IMP=0x000000010004dcf4
- (void)_stopSlowUpdateTimer;	// IMP=0x000000010004dbd0
- (void)_startSlowUpdateTimer;	// IMP=0x000000010004d9f4
- (void)_clearInternalStateOnReturnToIdle;	// IMP=0x000000010004d8f4
- (id)_brainAssetDownloadOptions;	// IMP=0x000000010004d890
- (void)_continueWithSufficientSpaceFor:(id)arg1;	// IMP=0x000000010004d6d8
- (_Bool)_wasStartedByBackgroundCheck;	// IMP=0x000000010004d5c4
- (_Bool)_wasStartedForRestore;	// IMP=0x000000010004d580
- (_Bool)_isManagedAction;	// IMP=0x000000010004d328
- (void)_restoreAllPurgedApps;	// IMP=0x000000010004d118
- (long long)_purgeAppsWithBundleIDs:(id)arg1 spaceNeeded:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010004c838
- (void)_clearSpace:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004b920
- (void)_clearPrepareAndApplySpaceWithInstallationSize:(unsigned long long)arg1 andPadding:(unsigned long long)arg2;	// IMP=0x000000010004b168
- (void)_clearPrepareAndApplySpace;	// IMP=0x000000010004ad7c
- (void)_processBrainDownloadSpaceCheckResultForBrainSize:(long long)arg1 error:(id)arg2;	// IMP=0x000000010004a984
- (void)_clearBrainDownloadSpace;	// IMP=0x0000000100049f6c
- (void)_processDownloadSpaceCheckResultForRequiredSpace:(unsigned long long)arg1 hasSpace:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100049af4
- (void)_clearAssetDownloadSpace;	// IMP=0x0000000100049110
- (void)_forceRebootAfterCancel;	// IMP=0x0000000100048ea0
- (void)_cancelAndRebootDuringApply;	// IMP=0x0000000100048df0
- (void)_cancelUpdateDuringApply;	// IMP=0x0000000100048ad0
- (void)_cancelUpdateDuringDownload;	// IMP=0x000000010004851c
- (void)_cancelUpdatePreDownload;	// IMP=0x0000000100048194
- (void)_updateProgressStatus:(id)arg1;	// IMP=0x0000000100047e10
- (void)_handleBrainDownloadProgressCallbackWithState:(id)arg1 error:(id)arg2;	// IMP=0x0000000100046e7c
- (void)_handleAssetDownloadProgress:(id)arg1;	// IMP=0x000000010004660c
- (id)_downloadProgressPhaseForCurrentState;	// IMP=0x00000001000464cc
- (void)_prepareAndApplyUpdateThreadedWithImage:(id)arg1;	// IMP=0x00000001000441ec
- (void)_prepareAndApplyUpdate;	// IMP=0x0000000100043a24
- (void)_processPrepareAndApplySpaceCheckResultForRequiredSpace:(unsigned long long)arg1 andError:(id)arg2;	// IMP=0x00000001000436b4
- (void)_downloadBrain;	// IMP=0x0000000100043394
- (void)_processAssetDownloadFailureWithResult:(long long)arg1;	// IMP=0x0000000100043020
- (void)_processAssetDownloadSuccess;	// IMP=0x0000000100042cc0
- (void)_downloadAsset;	// IMP=0x0000000100042284
- (void)_sendCheckFinishedNotificationForUpdateAvailable:(_Bool)arg1 withError:(id)arg2;	// IMP=0x0000000100041c50
- (void)_sendCheckStartNotification;	// IMP=0x0000000100041b3c
- (_Bool)_goodTimeToDownloadUpdate;	// IMP=0x000000010004175c
- (void)_recheckForNewerUpdate;	// IMP=0x0000000100040f94
- (void)_foundAsset:(id)arg1 releaseDate:(id)arg2 error:(id)arg3;	// IMP=0x000000010004035c
- (void)_performCheck;	// IMP=0x000000010003f6e4
- (void)_purgePreviousAssets;	// IMP=0x000000010003f3d0
- (void)_registerHandlers;	// IMP=0x00000001000370ec
- (void)_processEvent:(id)arg1;	// IMP=0x0000000100037050
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100036ef0
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100036d90
- (void)rebootDueToSlowUpdate;	// IMP=0x0000000100036d48
- (void)cancelForReason:(unsigned long long)arg1;	// IMP=0x0000000100036cfc
- (void)resumeAfterDownload;	// IMP=0x0000000100036cb4
- (void)resumeAfterUpdateCheck;	// IMP=0x0000000100036c6c
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x0000000100036ac4
- (id)currentDownload;	// IMP=0x000000010003649c
- (_Bool)isRunning;	// IMP=0x0000000100036404
- (_Bool)isDownloadingUpdate;	// IMP=0x0000000100036360
- (_Bool)isCheckingForUpdate;	// IMP=0x00000001000362ec
- (_Bool)isInitializing;	// IMP=0x00000001000362a4
- (void)start;	// IMP=0x0000000100035d48
- (_Bool)configureForAction:(unsigned long long)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000359b8
- (void)dealloc;	// IMP=0x0000000100035984
- (id)init;	// IMP=0x0000000100035240

@end
