//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, CUUserNotificationSession, NEVPNConnection, NSData, NSMutableDictionary, NSURL, NSUUID, SDStatusMonitor, SFBLEScanner, SFDeviceDiscovery, SFDeviceRepairService, SFDeviceRepairSession, SFPINPairSession, SFService, SFWiFiHealthMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source, PBSMediaRemoteServiceInterface;

__attribute__((visibility("hidden")))
@interface SDSetupAgent : NSObject
{
    NSData *_bleAuthTagFilter;	// 8 = 0x8
    _Bool _clientEnabled;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    NSMutableDictionary *_devices;	// 32 = 0x20
    _Bool _hsa2Enabled;	// 40 = 0x28
    id <PBSMediaRemoteServiceInterface> _pbsMediaService;	// 48 = 0x30
    id _pinPairDialogToken;	// 56 = 0x38
    SFService *_pinPairService;	// 64 = 0x40
    SFPINPairSession *_pinPairSession;	// 72 = 0x48
    NSUUID *_pinPairUUID;	// 80 = 0x50
    int _profilesNotifyToken;	// 88 = 0x58
    _Bool _pwsAutoGrantingEnabled;	// 92 = 0x5c
    _Bool _pwsGrantingEnabled;	// 93 = 0x5d
    _Bool _scanEligible;	// 94 = 0x5e
    int _scanSeconds;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_scanTimer;	// 104 = 0x68
    _Bool _serverEnabled;	// 112 = 0x70
    NSURL *_setupURL;	// 120 = 0x78
    _Bool _shouldScan;	// 128 = 0x80
    SDStatusMonitor *_statusMonitor;	// 136 = 0x88
    CUSystemMonitor *_systemMonitor;	// 144 = 0x90
    NSMutableDictionary *_triggeredDevices;	// 152 = 0x98
    _Bool _triggeredUIAppleTVPair;	// 160 = 0xa0
    _Bool _triggeredUIAppleTVSetup;	// 161 = 0xa1
    _Bool _renableB238SetupAfterWiFi;	// 162 = 0xa2
    _Bool _triggeredUIB238Setup;	// 163 = 0xa3
    _Bool _triggeredUIiOSSetup;	// 164 = 0xa4
    _Bool _triggeredUIRepair;	// 165 = 0xa5
    _Bool _triggeredUITVLatencySetup;	// 166 = 0xa6
    CUUserNotificationSession *_unoteTVLatencySetup;	// 168 = 0xa8
    _Bool _triggeredUIWatchSetup;	// 176 = 0xb0
    _Bool _triggeredUIWHASetup;	// 177 = 0xb1
    NEVPNConnection *_vpnCnx;	// 184 = 0xb8
    unsigned long long _watchFastScanLastEndTicks;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_watchFastScanTimer;	// 200 = 0xc8
    NSMutableDictionary *_watchSetupDevices;	// 208 = 0xd0
    _Bool _watchMigrationEnabled;	// 216 = 0xd8
    unsigned long long _watchMigrationLastTicks;	// 224 = 0xe0
    _Bool _watchSetupEnabled;	// 232 = 0xe8
    SFBLEScanner *_watchSetupScanner;	// 240 = 0xf0
    _Bool _airplayActive;	// 248 = 0xf8
    int _airplayNotifyToken;	// 252 = 0xfc
    _Bool _cdpEnabled;	// 256 = 0x100
    int _cfuNotifyToken;	// 260 = 0x104
    int _iTunesNotifyToken;	// 264 = 0x108
    CUSystemMonitor *_manateeMonitor;	// 272 = 0x110
    _Bool _manateeProblem;	// 280 = 0x118
    unsigned long long _problemFlags;	// 288 = 0x120
    int _problemNotifyToken;	// 296 = 0x128
    _Bool _repairEnabled;	// 300 = 0x12c
    SFDeviceRepairService *_repairService;	// 304 = 0x130
    SFDeviceRepairSession *_repairSession;	// 312 = 0x138
    _Bool _repairSilent;	// 320 = 0x140
    NSObject<OS_dispatch_source> *_repairTimer;	// 328 = 0x148
    SFWiFiHealthMonitor *_wifiHealthMonitor;	// 336 = 0x150
    _Bool _wifiBad;	// 344 = 0x158
    _Bool _wifiBad8021x;	// 345 = 0x159
    _Bool _prefRepairAccounts;	// 346 = 0x15a
    _Bool _prefRepairHomeKit;	// 347 = 0x15b
    _Bool _prefRepairVPN;	// 348 = 0x15c
    _Bool _prefRepairWiFi;	// 349 = 0x15d
    _Bool _preventRepair;	// 350 = 0x15e
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 352 = 0x160
}

+ (id)sharedSetupAgent;	// IMP=0x000000010005fc58
- (void).cxx_destruct;	// IMP=0x000000010006c7cc
@property(nonatomic) _Bool preventRepair; // @synthesize preventRepair=_preventRepair;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testUITVLatencySetup:(id)arg1;	// IMP=0x000000010006c55c
- (void)testUIAppleTVSetup:(id)arg1;	// IMP=0x000000010006c308
- (void)testSetupUIWHA:(id)arg1;	// IMP=0x000000010006c008
- (void)testSetupUIWatch:(id)arg1;	// IMP=0x000000010006beb4
- (void)testSetupUIPasswordSharing:(id)arg1;	// IMP=0x000000010006bc44
- (void)testSetupUIiOS:(id)arg1;	// IMP=0x000000010006ba78
- (void)testSetupUIB238:(id)arg1;	// IMP=0x000000010006b608
- (void)testRepairUI:(id)arg1;	// IMP=0x000000010006b3e8
- (void)testPINHide;	// IMP=0x000000010006b380
- (void)testPINShow:(id)arg1;	// IMP=0x000000010006b2e8
- (void)testPairUI:(id)arg1;	// IMP=0x000000010006b094
- (void)testNFCUI:(id)arg1;	// IMP=0x000000010006af28
- (void)testHomeKitDeviceDetected:(id)arg1;	// IMP=0x000000010006ae00
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010006aca4
- (void)_repairVPNError:(id)arg1;	// IMP=0x000000010006abd4
- (void)_repairUpdateIDSCache;	// IMP=0x000000010006ab28
- (void)_repairSilentProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x000000010006a8e0
- (void)_repairSilentStart:(id)arg1;	// IMP=0x000000010006a734
- (void)_repairProblemFlagsChanged;	// IMP=0x000000010006a638
- (void)_repairProblemCheck;	// IMP=0x000000010006a58c
- (void)_repairHandleManateeChanged;	// IMP=0x000000010006a504
- (void)_repairHandleCompletion;	// IMP=0x000000010006a45c
- (void)_repairHandleCFUItems:(id)arg1;	// IMP=0x0000000100069eb4
- (void)_repairHandleCFUItemsChanged;	// IMP=0x0000000100069c4c
- (void)_repairEnsuredStopped;	// IMP=0x0000000100069a88
- (void)_repairEnsuredStarted;	// IMP=0x0000000100068c24
- (void)_pwsHandleProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0000000100068a24
- (void)_pwsHandleUserResponse:(int)arg1 device:(id)arg2 info:(id)arg3;	// IMP=0x00000001000689ac
- (void)_pinPairHandleHidePIN;	// IMP=0x0000000100068914
- (void)_pinPairHandleShowPIN:(id)arg1;	// IMP=0x000000010006845c
- (void)_pinPairHandleRequest:(id)arg1;	// IMP=0x0000000100067ff0
- (void)_ensureServerStopped;	// IMP=0x0000000100067e68
- (void)_ensureServerStarted;	// IMP=0x0000000100067a38
- (void)_wifiStateChanged;	// IMP=0x000000010006798c
- (void)_watchStartMigration:(id)arg1;	// IMP=0x00000001000677e8
- (id)_watchMigrating:(id)arg1;	// IMP=0x00000001000674d4
- (void)_watchFound:(id)arg1;	// IMP=0x0000000100066f80
- (void)_watchFastScanStop;	// IMP=0x0000000100066ec0
- (void)_watchFastScanStartIfAllowed:(id)arg1;	// IMP=0x0000000100066d58
- (void)_uiStopIfNeededWithDevice:(id)arg1;	// IMP=0x0000000100066ce0
- (void)_uiStartForMacWithDevice:(id)arg1 label:(id)arg2 extraInfo:(id)arg3;	// IMP=0x0000000100066c44
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 extraInfo:(id)arg5;	// IMP=0x0000000100066bd8
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 unlessApps:(id)arg5 extraInfo:(id)arg6;	// IMP=0x0000000100066b3c
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 label:(id)arg3 unlessApps:(id)arg4 extraInfo:(id)arg5;	// IMP=0x0000000100066a8c
- (void)_uiStartWiFiPasswordSharing:(id)arg1;	// IMP=0x00000001000667c4
- (void)_uiStartTVLatencySetup:(id)arg1 extraInfo:(id)arg2;	// IMP=0x0000000100066760
- (void)_uiStartTVLatencyBanner:(id)arg1;	// IMP=0x00000001000663b4
- (void)_uiStartSetupWHA:(id)arg1;	// IMP=0x0000000100066390
- (void)_uiStartSetupWatch:(id)arg1;	// IMP=0x000000010006623c
- (void)_uiStartSetupiOS:(id)arg1 autoStart:(_Bool)arg2;	// IMP=0x0000000100066088
- (void)_uiStartSetupB238:(id)arg1 extraInfo:(id)arg2;	// IMP=0x0000000100066024
- (void)_uiStartRepair:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x0000000100065f08
- (void)_uiStartPair:(id)arg1 extraInfo:(id)arg2;	// IMP=0x0000000100065e28
- (void)_uiStartHomeKitDeviceDetectedWithURL:(id)arg1;	// IMP=0x0000000100065ce8
- (void)_uiStartAppleTVSetup:(id)arg1 extraInfo:(id)arg2;	// IMP=0x0000000100065c84
- (_Bool)_uiShowing;	// IMP=0x0000000100065c7c
- (void)_uiLockStatusChanged;	// IMP=0x0000000100065b58
- (_Bool)_shouldOfferPassword:(id)arg1;	// IMP=0x0000000100065644
- (void)_screenStateChanged;	// IMP=0x0000000100065520
- (_Bool)_screenLocked;	// IMP=0x00000001000653cc
- (void)_scanTimerFired;	// IMP=0x0000000100065330
- (void)_resetTriggers;	// IMP=0x00000001000652ec
- (void)_iTunesAccountsChanged;	// IMP=0x0000000100065258
- (void)_hsa2Changed;	// IMP=0x00000001000651b4
- (void)_appleAccountSignIn:(id)arg1;	// IMP=0x00000001000650cc
- (void)_postDeviceSetupNotificationForDevice:(id)arg1 present:(_Bool)arg2;	// IMP=0x0000000100064e94
- (void)_launchAppWithMachServiceName:(id)arg1;	// IMP=0x0000000100064c04
- (void)_deviceLost:(id)arg1;	// IMP=0x0000000100064aa4
- (void)_deviceFound:(id)arg1;	// IMP=0x00000001000636e8
- (void)_ensureClientStopped;	// IMP=0x000000010006348c
- (void)_ensureClientStarted;	// IMP=0x0000000100062770
- (void)_update;	// IMP=0x00000001000626d0
@property(readonly, nonatomic) _Bool uiShowing;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000623a8
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062148
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062044
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061d18
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100061c04
- (_Bool)reenableProxCardType:(unsigned char)arg1;	// IMP=0x0000000100061a7c
- (void)prefsChanged;	// IMP=0x0000000100061254
- (void)_openSetupURL:(id)arg1;	// IMP=0x00000001000611dc
- (void)openSetupURL:(id)arg1;	// IMP=0x0000000100061164
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060e90
- (void)_invalidate;	// IMP=0x0000000100060de8
- (void)invalidate;	// IMP=0x0000000100060d80
- (void)_activate;	// IMP=0x0000000100060c0c
- (void)activate;	// IMP=0x0000000100060ba4
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010005fe98
- (id)description;	// IMP=0x000000010005fe88
- (void)dealloc;	// IMP=0x000000010005fd4c
- (id)init;	// IMP=0x000000010005fccc

@end

