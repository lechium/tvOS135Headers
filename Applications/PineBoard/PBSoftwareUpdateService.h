//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBOSSoftwareUpdateProcessDelegate-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, NSTimer, PBSystemOverlayController, PCSimpleTimer, TVSBackgroundTask, TVSUIOSUpdateViewController;

@interface PBSoftwareUpdateService : NSObject <PBOSSoftwareUpdateProcessDelegate, PBSystemOverlayControllerDelegate, PBSystemUIManaging>
{
    _Bool _monitoringEnabled;	// 8 = 0x8
    _Bool _precheckingOSUpdateConditions;	// 9 = 0x9
    TVSBackgroundTask *_osSoftwareUpdateInitialCheckTask;	// 16 = 0x10
    TVSBackgroundTask *_osSoftwareUpdatePeriodicCheckTask;	// 24 = 0x18
    PCSimpleTimer *_darkWakeTimer;	// 32 = 0x20
    PCSimpleTimer *_updateDelayExpirationTimer;	// 40 = 0x28
    NSTimer *_vendorBagRefetchTimeoutTimer;	// 48 = 0x30
    CDUnknownBlockType _osSoftwareUpdateCheckResponse;	// 56 = 0x38
    PBSystemOverlayController *_overlayController;	// 64 = 0x40
    TVSUIOSUpdateViewController *_updateViewController;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000010016200c
- (void).cxx_destruct;	// IMP=0x000000010016dcc4
@property(readonly, nonatomic) TVSUIOSUpdateViewController *updateViewController; // @synthesize updateViewController=_updateViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(copy, nonatomic) CDUnknownBlockType osSoftwareUpdateCheckResponse; // @synthesize osSoftwareUpdateCheckResponse=_osSoftwareUpdateCheckResponse;
@property(nonatomic) __weak NSTimer *vendorBagRefetchTimeoutTimer; // @synthesize vendorBagRefetchTimeoutTimer=_vendorBagRefetchTimeoutTimer;
@property(retain, nonatomic) PCSimpleTimer *updateDelayExpirationTimer; // @synthesize updateDelayExpirationTimer=_updateDelayExpirationTimer;
@property(retain, nonatomic) PCSimpleTimer *darkWakeTimer; // @synthesize darkWakeTimer=_darkWakeTimer;
@property(retain, nonatomic) TVSBackgroundTask *osSoftwareUpdatePeriodicCheckTask; // @synthesize osSoftwareUpdatePeriodicCheckTask=_osSoftwareUpdatePeriodicCheckTask;
@property(retain, nonatomic) TVSBackgroundTask *osSoftwareUpdateInitialCheckTask; // @synthesize osSoftwareUpdateInitialCheckTask=_osSoftwareUpdateInitialCheckTask;
@property(nonatomic) _Bool precheckingOSUpdateConditions; // @synthesize precheckingOSUpdateConditions=_precheckingOSUpdateConditions;
@property(nonatomic) _Bool monitoringEnabled; // @synthesize monitoringEnabled=_monitoringEnabled;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)osUpdateProcessDidFinishApplyWithData:(id)arg1;	// IMP=0x000000010016d2fc
- (void)osUpdateProcessDidEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x000000010016cf40
- (void)osUpdateProcessDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x000000010016cae8
- (void)osUpdateProcessDidStartApplyWithData:(id)arg1;	// IMP=0x000000010016c674
- (void)osUpdateProcessDidStartRedownloadWithData:(id)arg1;	// IMP=0x000000010016c420
- (void)osUpdateProcessDidFinishDownloadWithData:(id)arg1;	// IMP=0x000000010016bdfc
- (void)osUpdateProcessDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x000000010016bbc0
- (void)osUpdateProcessDidStartDownloadWithData:(id)arg1;	// IMP=0x000000010016b96c
- (void)osUpdateProcessDidFinishCheckWithData:(id)arg1;	// IMP=0x000000010016af20
- (void)osUpdateProcessDidStartCheckWithData:(id)arg1;	// IMP=0x000000010016ace4
- (void)_didEncounterSlowUpdate;	// IMP=0x000000010016aba4
- (void)_dismiss;	// IMP=0x000000010016a974
- (void)_presentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016a6a4
- (void)_showOSUpdateUpToDateDialog:(_Bool)arg1;	// IMP=0x000000010016a404
- (void)_showOSUpdateError:(id)arg1 inDomain:(id)arg2 description:(id)arg3;	// IMP=0x0000000100169694
- (void)_showApplyConfirmationDialogWithData:(id)arg1;	// IMP=0x0000000100168874
- (void)_showOSUpdateDownloadAndApplyConfirmationForUpdate:(id)arg1 largeUpdate:(_Bool)arg2 assetIsDownloaded:(_Bool)arg3;	// IMP=0x0000000100168140
- (id)_versionForUpdate:(id)arg1;	// IMP=0x0000000100167ecc
- (void)_handleManagedConfigurationSettingsChangedNotification:(id)arg1;	// IMP=0x0000000100167e68
- (void)_handleDeviceWillWakeNotification:(id)arg1;	// IMP=0x0000000100167d2c
- (void)_handleDeviceWillSleepNotification:(id)arg1;	// IMP=0x0000000100167cc8
- (void)_handleOSUpdatePrefsDidChange;	// IMP=0x0000000100167c7c
- (void)_handlePineBoardPrefsDidChange;	// IMP=0x0000000100167af4
- (void)_precheckConditionsAndPerformAction:(unsigned long long)arg1;	// IMP=0x0000000100167608
- (_Bool)_isAtHomeSeedUser;	// IMP=0x0000000100167444
- (void)_startOSUpdateCheckForAction:(unsigned long long)arg1;	// IMP=0x000000010016721c
- (_Bool)_serverAllowsAutoApplyUpdates;	// IMP=0x00000001001667a8
- (void)_postVendorBagReloadContinueAutoApply;	// IMP=0x00000001001661c4
- (void)_reloadVendorBag;	// IMP=0x0000000100166010
- (void)_osUpdateDelayedUpdateExpirationTimerFired:(id)arg1;	// IMP=0x0000000100165f04
- (void)_scheduleOSUpdateCheckForExpiredDelay;	// IMP=0x0000000100165b04
- (void)_osUpdateDarkWakeTimerFired:(id)arg1;	// IMP=0x0000000100165884
- (void)_scheduleOSUpdateDarkWakeAt:(id)arg1;	// IMP=0x00000001001656cc
- (void)_cancelOSUpdateDarkWakeTimer;	// IMP=0x0000000100165618
- (void)_scheduleOSUpdateTimerForNextDarkWake;	// IMP=0x0000000100165284
- (void)_scheduleOSUpdateOnSleepCheck;	// IMP=0x0000000100164e24
- (void)_scheduleOSUpdateCheck;	// IMP=0x00000001001646f4
- (_Bool)_okToCheckForOSSoftwareUpdate;	// IMP=0x00000001001646a4
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100164608
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016456c
- (void)rebootDueToSlowUpdate;	// IMP=0x0000000100164500
- (void)notePlaybackStarted;	// IMP=0x0000000100164490
- (void)cancelOSSoftwareUpdate;	// IMP=0x0000000100164420
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x00000001001641c0
- (void)reallyPerformOSSoftwareRestore;	// IMP=0x0000000100164174
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000100163d7c
- (void)cancelDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000100163bfc
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x000000010016385c
- (void)reallyPerformMDMOSSoftwareUpdateCheck;	// IMP=0x000000010016380c
- (void)reallyPerformOSSoftwareUpdateCheck;	// IMP=0x00000001001637bc
- (void)checkForOSUpdatesWithOptions:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x00000001001635a8
- (void)isUpdate:(id)arg1 readyForInstallation:(CDUnknownBlockType)arg2;	// IMP=0x0000000100162fb0
- (void)isOSSoftwareUpdateRunning:(CDUnknownBlockType)arg1;	// IMP=0x0000000100162ed0
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x0000000100162e54
- (void)currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000100162a84
- (void)isOSSoftwareUpdateDownloading:(CDUnknownBlockType)arg1;	// IMP=0x00000001001629a4
- (void)isOSSoftwareUpdateChecking:(CDUnknownBlockType)arg1;	// IMP=0x00000001001628c4
- (void)startSoftwareUpdateMonitoring;	// IMP=0x00000001001626a4
- (id)init;	// IMP=0x0000000100162528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

