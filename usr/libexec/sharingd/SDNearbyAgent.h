//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class CUBluetoothClient, CUSystemMonitor, IDSService, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPIdentity, SDStatusMonitor, SFBLEAdvertiser, SFBLEPipe, SFBLEScanner, SFSystemService, WPNearby;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDNearbyAgent : NSObject <IDSServiceDelegate>
{
    _Bool _activated;	// 8 = 0x8
    _Bool _activityCarPlayRegistered;	// 9 = 0x9
    int _activityLevelNotifyToken;	// 12 = 0xc
    unsigned char _activityLevel;	// 16 = 0x10
    _Bool _activityMonitorStarted;	// 17 = 0x11
    _Bool _activityMultipleUsersRegistered;	// 18 = 0x12
    int _activityPollSeconds;	// 20 = 0x14
    int _activityRecentSeconds;	// 24 = 0x18
    _Bool _activityScreenOn;	// 28 = 0x1c
    NSObject<OS_dispatch_source> *_activityTimer;	// 32 = 0x20
    _Bool _activityUIUnlocked;	// 40 = 0x28
    _Bool _activityUserActive;	// 41 = 0x29
    NSData *_bleAdvertisingAddress;	// 48 = 0x30
    NSData *_bleAudioRoutingScoreEncryptedData;	// 56 = 0x38
    NSData *_bleAuthTagOverride;	// 64 = 0x40
    NSMutableDictionary *_bleConnections;	// 72 = 0x48
    _Bool _bleDiagnosticAdvSuppressLogged;	// 80 = 0x50
    NSMutableSet *_bleDiagnosticModeClients;	// 88 = 0x58
    NSData *_bleHotspotEncryptedData;	// 96 = 0x60
    SFBLEAdvertiser *_bleNearbyActionAdvertiser;	// 104 = 0x68
    _Bool _bleNearbyActionAdvertiseActive;	// 112 = 0x70
    _Bool _bleNearbyActionAdvertiseDisabled;	// 113 = 0x71
    NSObject<OS_dispatch_source> *_bleNearbyActionAdvertiseLingerTimer;	// 120 = 0x78
    NSMutableDictionary *_bleNearbyActionDevices;	// 128 = 0x80
    _Bool _bleNearbyActionRSSILog;	// 136 = 0x88
    _Bool _bleNearbyActionScanAlways;	// 137 = 0x89
    _Bool _bleNearbyActionScanNever;	// 138 = 0x8a
    SFBLEScanner *_bleNearbyActionScanner;	// 144 = 0x90
    _Bool _bleNearbyInfoAdvertiseAlways;	// 152 = 0x98
    _Bool _bleNearbyInfoAdvertiseDisabled;	// 153 = 0x99
    double _bleNearbyInfoAdvertiseLingerSecs;	// 160 = 0xa0
    SFBLEAdvertiser *_bleNearbyInfoAdvertiser;	// 168 = 0xa8
    _Bool _bleNearbyInfoAdvertised;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_bleNearbyInfoAdvertiseLingerTimer;	// 184 = 0xb8
    _Bool _bleNearbyInfoAirDropUsable;	// 192 = 0xc0
    NSMutableDictionary *_bleNearbyInfoDevices;	// 200 = 0xc8
    _Bool _bleNearbyInfoRSSILog;	// 208 = 0xd0
    _Bool _bleNearbyInfoWiFiP2P;	// 209 = 0xd1
    SFBLEScanner *_bleNearbyInfoScanner;	// 216 = 0xd8
    WPNearby *_bleWPNearby;	// 224 = 0xe0
    _Bool _bleProximityEnabled;	// 232 = 0xe8
    NSDictionary *_bleProximityInfo;	// 240 = 0xf0
    NSDictionary *_bleProximityInfoOverride;	// 248 = 0xf8
    SFBLEScanner *_bleProximityPairingScanner;	// 256 = 0x100
    _Bool _bleProximityRSSILog;	// 264 = 0x108
    _Bool _btPipeEnabled;	// 265 = 0x109
    _Bool _btPipeForced;	// 266 = 0x10a
    SFBLEPipe *_btPipe;	// 272 = 0x110
    _Bool _caEnabled;	// 280 = 0x118
    int _caForce;	// 284 = 0x11c
    unsigned int _caMessageNoScans;	// 288 = 0x120
    unsigned int _caMessageScans;	// 292 = 0x124
    _Bool _caPhoneCalls;	// 296 = 0x128
    NSMutableSet *_caRequests;	// 304 = 0x130
    _Bool _caScanIfVeryActive;	// 312 = 0x138
    _Bool _caSingleDevice;	// 313 = 0x139
    NSData *_contactHashesCached;	// 320 = 0x140
    _Bool _contactHashesEnabled;	// 328 = 0x148
    unsigned long long _ddFastScanLastEndTicks;	// 336 = 0x150
    NSObject<OS_dispatch_source> *_ddFastScanTimer;	// 344 = 0x158
    NSMutableDictionary *_ddNearbyActionDevices;	// 352 = 0x160
    _Bool _ddNearbyActionEnabled;	// 360 = 0x168
    _Bool _ddNearbyActionScreenOff;	// 361 = 0x169
    NSMutableDictionary *_ddNearbyInfoDevices;	// 368 = 0x170
    _Bool _ddNearbyInfoEnabled;	// 376 = 0x178
    _Bool _ddNearbyInfoScreenOff;	// 377 = 0x179
    NSMutableDictionary *_ddProximityPairingDevices;	// 384 = 0x180
    _Bool _ddProximityPairingEnabled;	// 392 = 0x188
    _Bool _ddProximityPairingScreenOff;	// 393 = 0x189
    NSMutableSet *_ddRequests;	// 400 = 0x190
    unsigned long long _familyFlags;	// 408 = 0x198
    int _familyNotifyToken;	// 416 = 0x1a0
    int _idsAppleTVCountCache;	// 420 = 0x1a4
    NSArray *_idsBluetoothDevicesArray;	// 424 = 0x1a8
    NSSet *_idsBluetoothDevicesSet;	// 432 = 0x1b0
    NSArray *_idsBluetoothDeviceIDsForLEPipe;	// 440 = 0x1b8
    NSSet *_idsBluetoothDeviceIDsForMe;	// 448 = 0x1c0
    NSMutableDictionary *_idsBTtoIDSInfoMap;	// 456 = 0x1c8
    int _idsContinuityDeviceCountCache;	// 464 = 0x1d0
    NSArray *_idsDeviceArray;	// 472 = 0x1d8
    NSDictionary *_idsDeviceBTDictionary;	// 480 = 0x1e0
    int _idsHasActiveWatchCache;	// 488 = 0x1e8
    int _idsHomePodCountCache;	// 492 = 0x1ec
    int _idsIsSignedInCache;	// 496 = 0x1f0
    int _idsMacCountCache;	// 500 = 0x1f4
    int _idsShouldAdvertiseNearbyInfo;	// 504 = 0x1f8
    int _idsShouldEncryptActivityLevel;	// 508 = 0x1fc
    IDSService *_idsService;	// 512 = 0x200
    _Bool _logProxAdvFields;	// 520 = 0x208
    NSUUID *_remoteAppServiceUUID;	// 528 = 0x210
    NSMutableDictionary *_services;	// 536 = 0x218
    NSMutableDictionary *_sessions;	// 544 = 0x220
    NSMutableDictionary *_setupSessions;	// 552 = 0x228
    double _startTime;	// 560 = 0x230
    SDStatusMonitor *_statusMonitor;	// 568 = 0x238
    CUSystemMonitor *_systemMonitor;	// 576 = 0x240
    SFSystemService *_systemService;	// 584 = 0x248
    _Bool _unlockAdvertiseAlways;	// 592 = 0x250
    _Bool _unlockAdvertiseAggressive;	// 593 = 0x251
    _Bool _unlockAdvertiseEnabled;	// 594 = 0x252
    _Bool _unlockAdvertiseBackground;	// 595 = 0x253
    _Bool _unlockAdvertiseWatch;	// 596 = 0x254
    _Bool _unlockAdvertiseWatchLocked;	// 597 = 0x255
    NSObject<OS_dispatch_source> *_unlockTestClientTimer;	// 600 = 0x258
    NSMutableDictionary *_idDevices;	// 608 = 0x260
    _Bool _idEnabled;	// 616 = 0x268
    int _idIdentitiesChangedNotifyToken;	// 620 = 0x26c
    NSArray *_idIdentityArray;	// 624 = 0x270
    NSObject<OS_dispatch_source> *_idMaintenanceTimer;	// 632 = 0x278
    _Bool _systemWillPowerDown;	// 640 = 0x280
    _Bool _autoUnlockActive;	// 641 = 0x281
    _Bool _boostNearbyInfo;	// 642 = 0x282
    int _audioRoutingScore;	// 644 = 0x284
    unsigned int _hotspotInfo;	// 648 = 0x288
    NSData *_bleAuthTag;	// 656 = 0x290
    CUBluetoothClient *_btConnectedDeviceMonitor;	// 664 = 0x298
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 672 = 0x2a0
    RPIdentity *_idSelfIdentity;	// 680 = 0x2a8
}

+ (id)sharedNearbyAgent;	// IMP=0x000000010019ab90
- (void).cxx_destruct;	// IMP=0x00000001001bcc5c
@property(readonly, nonatomic) RPIdentity *idSelfIdentity; // @synthesize idSelfIdentity=_idSelfIdentity;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CUBluetoothClient *btConnectedDeviceMonitor; // @synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor;
@property(nonatomic) _Bool boostNearbyInfo; // @synthesize boostNearbyInfo=_boostNearbyInfo;
@property(readonly, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(nonatomic) int audioRoutingScore; // @synthesize audioRoutingScore=_audioRoutingScore;
@property(nonatomic) _Bool autoUnlockActive; // @synthesize autoUnlockActive=_autoUnlockActive;
- (void)_testPipePing;	// IMP=0x00000001001bca94
- (void)testPipePing;	// IMP=0x00000001001bca2c
- (void)_systemHasPoweredOn;	// IMP=0x00000001001bc9bc
- (void)_systemWillSleep;	// IMP=0x00000001001bc948
- (void)unlockStopTestServer;	// IMP=0x00000001001bc8e8
- (void)unlockStartTestServer;	// IMP=0x00000001001bc888
- (void)unlockStopTestClient;	// IMP=0x00000001001bc7fc
- (void)unlockStartTestClientWithDevice:(id)arg1;	// IMP=0x00000001001bc474
- (void)unlockUpdateAdvertising:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x00000001001bc298
- (void)_unlockDeviceFilterChangedForRequest:(id)arg1;	// IMP=0x00000001001bbe6c
- (void)_unlockApproveBluetoothIDsChanged:(id)arg1;	// IMP=0x00000001001bbcc4
- (void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3;	// IMP=0x00000001001bb9f4
- (void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001bb848
- (void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001bb7d8
- (void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001bb6c0
- (void)_stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x00000001001bb5a4
- (void)stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x00000001001bb50c
- (void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00000001001bb2a4
- (void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00000001001bb1f8
- (int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4;	// IMP=0x00000001001babcc
- (int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2;	// IMP=0x00000001001ba878
- (int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4 session:(id)arg5;	// IMP=0x00000001001ba124
- (int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3;	// IMP=0x00000001001b9c14
- (int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2;	// IMP=0x00000001001b9744
- (int)_setupHandleCreateSession:(id)arg1 data:(id)arg2;	// IMP=0x00000001001b91dc
- (int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4;	// IMP=0x00000001001b8554
- (void)sessionSendResponse:(id)arg1 session:(id)arg2;	// IMP=0x00000001001b84fc
- (void)sessionSendRequest:(id)arg1 session:(id)arg2;	// IMP=0x00000001001b82ac
- (void)sessionSendEvent:(id)arg1 session:(id)arg2;	// IMP=0x00000001001b7e40
- (void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x00000001001b7c50
- (void)sessionStop:(id)arg1;	// IMP=0x00000001001b7a00
- (int)sessionStart:(id)arg1;	// IMP=0x00000001001b7498
- (void)serviceSendResponse:(id)arg1 service:(id)arg2;	// IMP=0x00000001001b7440
- (void)serviceSendRequest:(id)arg1 service:(id)arg2;	// IMP=0x00000001001b71f0
- (void)serviceSendEvent:(id)arg1 service:(id)arg2;	// IMP=0x00000001001b7198
- (void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x00000001001b6ffc
- (void)serviceStop:(id)arg1;	// IMP=0x00000001001b6ec8
- (int)serviceStart:(id)arg1;	// IMP=0x00000001001b6c1c
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000001001b685c
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00000001001b6794
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00000001001b6664
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001001b655c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00000001001b6470
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000001001b635c
- (int)_idsShouldEncryptActivityLevel;	// IMP=0x00000001001b6160
- (_Bool)_idsShouldAdvertiseNearbyInfo;	// IMP=0x00000001001b5e54
- (void)_idsMeDeviceChanged;	// IMP=0x00000001001b5cbc
- (int)_idsMacCount;	// IMP=0x00000001001b5b3c
- (_Bool)idsIsSignedIn;	// IMP=0x00000001001b5864
- (int)_idsHomePodCount;	// IMP=0x00000001001b56a8
- (_Bool)_idsHasActiveWatch;	// IMP=0x00000001001b54a8
- (void)idsDevicesAppendDescription:(id *)arg1;	// IMP=0x00000001001b4c9c
- (id)idsDeviceForBluetoothDeviceID:(id)arg1;	// IMP=0x00000001001b4a7c
- (id)_idsDeviceArrayLocked;	// IMP=0x00000001001b49dc
- (id)idsDeviceArray;	// IMP=0x00000001001b4970
- (int)_idsContinuityDeviceCount;	// IMP=0x00000001001b4814
- (id)_idsBluetoothDeviceIDsForSMSRelay;	// IMP=0x00000001001b4648
- (id)_idsBluetoothDeviceIDsForSharingLocked;	// IMP=0x00000001001b44bc
- (id)_idsBluetoothDeviceIDsForSharing;	// IMP=0x00000001001b4450
- (id)idsBluetoothDeviceIDsForWatches;	// IMP=0x00000001001b4290
- (id)idsBluetoothDeviceIDsForSharing;	// IMP=0x00000001001b41cc
- (id)_idsBluetoothDeviceIDsForMe;	// IMP=0x00000001001b3ef4
- (id)_idsBluetoothDeviceIDsForLEPipe;	// IMP=0x00000001001b3c8c
- (id)idsBluetoothDeviceIDsForLEPipe;	// IMP=0x00000001001b3c00
- (id)_idsBluetoothDeviceIDsForiMessage;	// IMP=0x00000001001b3a68
- (id)_idsBluetoothDeviceIDsForHomePods;	// IMP=0x00000001001b38a8
- (id)idsBluetoothDeviceIDsForAppleTVs;	// IMP=0x00000001001b36e8
- (int)_idsAppleTVCount;	// IMP=0x00000001001b3568
- (void)idsAddCachedIDSIdentifierToDevice:(id)arg1;	// IMP=0x00000001001b33d0
- (void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2;	// IMP=0x00000001001b2fd0
- (void)_idsEnsureStopped;	// IMP=0x00000001001b2ee0
- (void)_idsEnsureStarted;	// IMP=0x00000001001b2e1c
- (unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x00000001001b2c70
- (void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x00000001001b2a74
- (void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x00000001001b2878
- (_Bool)_identificationIdentifyDevice:(id)arg1;	// IMP=0x00000001001b257c
- (void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2;	// IMP=0x00000001001b2190
- (void)_identificationReIdentify;	// IMP=0x00000001001b1f38
- (void)_identificationMaintenanceTimer;	// IMP=0x00000001001b1cb4
- (void)_identificationHandleDiscoveryStop;	// IMP=0x00000001001b1bc8
- (void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000001001b1b04
- (void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000001001b1088
- (void)_identificationGetIdentities;	// IMP=0x00000001001b0b10
- (void)_identificationEnsureStopped;	// IMP=0x00000001001b0a50
- (void)_identificationEnsureStarted;	// IMP=0x00000001001b0894
- (void)diagnosticMockLost:(id)arg1;	// IMP=0x00000001001b07f4
- (void)diagnosticMockFound:(id)arg1;	// IMP=0x00000001001b0754
- (void)diagnosticMockChanged:(id)arg1;	// IMP=0x00000001001b06b0
- (void)diagnosticBLEModeStop:(id)arg1;	// IMP=0x00000001001b0608
- (void)diagnosticBLEModeStart:(id)arg1;	// IMP=0x00000001001b053c
- (void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2;	// IMP=0x00000001001b0394
- (void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned int)arg3;	// IMP=0x00000001001afcd4
- (void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2;	// IMP=0x00000001001af998
- (void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2;	// IMP=0x00000001001af1dc
- (void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(_Bool)arg2 reason:(id)arg3;	// IMP=0x00000001001aef94
- (void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3;	// IMP=0x00000001001aebf0
- (void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2;	// IMP=0x00000001001aea00
- (void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2;	// IMP=0x00000001001ae978
- (void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2;	// IMP=0x00000001001ae904
- (void)deviceDiscoveryRequestUpdate:(id)arg1;	// IMP=0x00000001001ae3f0
- (void)deviceDiscoveryRequestStop:(id)arg1;	// IMP=0x00000001001ae0bc
- (void)_deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x00000001001adacc
- (void)deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x00000001001ada34
- (void)coordinatedAlertRequestCancel:(id)arg1;	// IMP=0x00000001001ad98c
- (void)coordinatedAlertRequestFinish:(id)arg1;	// IMP=0x00000001001ace2c
- (void)coordinatedAlertRequestStart:(id)arg1;	// IMP=0x00000001001ac490
- (void)nearbyDidUpdateState:(id)arg1;	// IMP=0x00000001001ac2f4
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00000001001ac144
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x00000001001ab858
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;	// IMP=0x00000001001ab4d8
- (unsigned int)_bleProximityUpdateNearbyInfoDevice:(id)arg1;	// IMP=0x00000001001ab380
- (unsigned int)_bleProximityUpdateNearbyActionDevice:(id)arg1;	// IMP=0x00000001001ab204
- (unsigned int)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1;	// IMP=0x00000001001aac68
- (long long)bleProximityRSSIThreshold:(id)arg1;	// IMP=0x00000001001aabb8
- (long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2;	// IMP=0x00000001001aa964
- (id)bleProximityRSSIEstimatorInfo;	// IMP=0x00000001001aa924
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3;	// IMP=0x00000001001aa340
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2;	// IMP=0x00000001001aa24c
- (id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x00000001001aa128
- (id)bleProximityInfo;	// IMP=0x00000001001a75a8
- (void)bleProximityEstimatorsResetDeviceClose;	// IMP=0x00000001001a73b0
- (id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x00000001001a7344
- (void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2;	// IMP=0x00000001001a6a38
- (void)_bleUpdateAuthTagIfNeeded;	// IMP=0x00000001001a6858
- (void)_bleAdvertisingAddressChanged;	// IMP=0x00000001001a6630
- (void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x00000001001a6320
- (void)_btPipeEnsureStopped;	// IMP=0x00000001001a6288
- (void)_btPipeEnsureStarted;	// IMP=0x00000001001a6058
- (_Bool)_bleProximityPairingScannerShouldScan;	// IMP=0x00000001001a5fec
- (void)_bleProximityPairingScannerEnsureStopped;	// IMP=0x00000001001a5df0
- (void)_bleProximityPairingScannerEnsureStarted;	// IMP=0x00000001001a56dc
- (_Bool)_bleNearbyInfoScannerShouldScan;	// IMP=0x00000001001a54dc
- (void)_bleNearbyInfoScannerEnsureStopped;	// IMP=0x00000001001a52e8
- (void)_bleNearbyInfoScannerEnsureStarted;	// IMP=0x00000001001a4c94
- (int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(_Bool)arg5;	// IMP=0x00000001001a3ebc
- (void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2;	// IMP=0x00000001001a3d7c
- (int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(_Bool *)arg3;	// IMP=0x00000001001a3af0
- (int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4;	// IMP=0x00000001001a2f28
- (void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3;	// IMP=0x00000001001a25ac
- (void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1;	// IMP=0x00000001001a2378
- (_Bool)_bleNearbyInfoAdvertiserLingerIfNeeded;	// IMP=0x00000001001a2328
- (unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1;	// IMP=0x00000001001a2148
- (void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1;	// IMP=0x00000001001a1ebc
- (void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1;	// IMP=0x00000001001a1c08
- (void)_bleNearbyInfoAdvertiserUpdate;	// IMP=0x00000001001a1298
- (_Bool)_bleNearbyInfoAdvertiserShouldAdvertise;	// IMP=0x00000001001a1080
- (void)_bleNearbyInfoAdvertiserEnsureStopped;	// IMP=0x00000001001a0fcc
- (void)_bleNearbyInfoAdvertiserEnsureStarted;	// IMP=0x00000001001a0f10
- (_Bool)_bleNearbyActionScannerShouldScan;	// IMP=0x00000001001a0d00
- (void)_bleNearbyActionScannerEnsureStopped;	// IMP=0x00000001001a0b0c
- (void)_bleNearbyActionScannerEnsureStarted;	// IMP=0x00000001001a0504
- (_Bool)_bleNearbyActionAdvertiserShouldAdvertise;	// IMP=0x00000001001a04c0
- (void)_bleNearbyActionAdvertiserEnsureStopped;	// IMP=0x00000001001a0408
- (void)_bleNearbyActionAdvertiserEnsureStarted;	// IMP=0x000000010019f658
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010019f574
- (void)_activityMonitorWatchWristStateChanged:(id)arg1;	// IMP=0x000000010019f458
- (void)_activityMonitorUpdateUserActive:(_Bool)arg1;	// IMP=0x000000010019f420
- (void)_activityMonitorUILockStatusChanged:(id)arg1;	// IMP=0x000000010019f2d8
- (void)_activityMonitorScreenStateChanged:(id)arg1;	// IMP=0x000000010019f198
- (void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1;	// IMP=0x000000010019f074
- (double)_activityMonitorLastUserEventDelta;	// IMP=0x000000010019f04c
- (void)_activityMonitorCarPlayStatusChanged:(id)arg1;	// IMP=0x000000010019ef28
- (unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(_Bool *)arg1 recentUserActivity:(_Bool *)arg2;	// IMP=0x000000010019ec7c
- (void)_activityMonitorUpdate;	// IMP=0x000000010019eb00
- (void)_activityMonitorEnsureStopped;	// IMP=0x000000010019e9cc
- (void)_activityMonitorEnsureStarted;	// IMP=0x000000010019e8b0
- (void)_update;	// IMP=0x000000010019e5c0
- (void)update;	// IMP=0x000000010019e590
- (void)prefsChanged;	// IMP=0x000000010019d560
- (void)_handleAppleIDChanged:(id)arg1;	// IMP=0x000000010019d468
- (void)_handleAirDropDiscoverableModeChanged:(id)arg1;	// IMP=0x000000010019d380
- (void)_invalidate;	// IMP=0x000000010019ce40
- (void)invalidate;	// IMP=0x000000010019cdd8
- (void)_activate;	// IMP=0x000000010019c67c
- (void)activate;	// IMP=0x000000010019c608
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010019ac78
- (id)sharedNearbyPipe;	// IMP=0x000000010019ac04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

