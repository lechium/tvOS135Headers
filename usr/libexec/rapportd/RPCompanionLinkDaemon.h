//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPMessageable-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUWiFiManager, NSData, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPMediaControlDaemon, RPSiriDaemon, RPTextInputDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject <NSXPCListenerDelegate, RPMessageable, RPSubDaemonable>
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSMutableDictionary *_bleDevices;	// 32 = 0x20
    SFDeviceDiscovery *_bleActionDiscovery;	// 40 = 0x28
    unsigned int _bleActionDiscoveryID;	// 48 = 0x30
    SFDeviceDiscovery *_bleDiscovery;	// 56 = 0x38
    unsigned long long _bleDiscoveryControlFlags;	// 64 = 0x40
    _Bool _bleDiscoveryForce;	// 72 = 0x48
    unsigned int _bleDiscoveryID;	// 76 = 0x4c
    _Bool _bleDiscoveryScreenOff;	// 80 = 0x50
    SFService *_bleNeedsCLinkAdvertiser;	// 88 = 0x58
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 96 = 0x60
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 104 = 0x68
    unsigned int _bleNeedsCLinkScannerID;	// 112 = 0x70
    NSMutableDictionary *_bleClientConnections;	// 120 = 0x78
    CUBLEServer *_bleServer;	// 128 = 0x80
    NSMutableSet *_bleServerConnections;	// 136 = 0x88
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 144 = 0x90
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 152 = 0x98
    _Bool _bonjourAWDLAdvertiserForce;	// 160 = 0xa0
    NSMutableDictionary *_bonjourAWDLDevices;	// 168 = 0xa8
    CUBonjourBrowser *_bonjourBrowser;	// 176 = 0xb0
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 184 = 0xb8
    _Bool _bonjourBrowserAWDLForce;	// 192 = 0xc0
    unsigned long long _bonjourReevaluateNextTicks;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 208 = 0xd0
    NSData *_btAdvAddrData;	// 216 = 0xd8
    NSString *_btAdvAddrStr;	// 224 = 0xe0
    CUSystemMonitor *_btAdvAddrMonitor;	// 232 = 0xe8
    _Bool _prefBTPipeEnabled;	// 240 = 0xf0
    CUBluetoothScalablePipe *_btPipe;	// 248 = 0xf8
    RPConnection *_btPipeConnection;	// 256 = 0x100
    unsigned int _cnxIDLast;	// 264 = 0x108
    NSString *_deviceAuthTagStr;	// 272 = 0x110
    NSData *_discoveryNonceData;	// 280 = 0x118
    SFClient *_duetSyncClient;	// 288 = 0x120
    _Bool _disabled;	// 296 = 0x128
    NSMutableDictionary *_interestEvents;	// 304 = 0x130
    NSMutableDictionary *_interestPeers;	// 312 = 0x138
    _Bool _invalidateCalled;	// 320 = 0x140
    _Bool _invalidateDone;	// 321 = 0x141
    _Bool _fixedSoundBoardNameIssue;	// 322 = 0x142
    NSData *_homeKitAuthTag;	// 328 = 0x148
    _Bool _homeKitForceGetIdentity;	// 336 = 0x150
    _Bool _homeKitGettingIdentity;	// 337 = 0x151
    NSData *_homeKitIRK;	// 344 = 0x158
    NSData *_homeKitLTPK;	// 352 = 0x160
    CUHomeKitManager *_homeKitManager;	// 360 = 0x168
    NSData *_homeKitRotatingID;	// 368 = 0x170
    _Bool _homeKitWaiting;	// 376 = 0x178
    CUNetLinkManager *_netLinkManager;	// 384 = 0x180
    _Bool _mediaRemoteIDGetting;	// 392 = 0x188
    _Bool _mediaRouteIDGetting;	// 393 = 0x189
    _Bool _miscStarted;	// 394 = 0x18a
    NSObject<OS_os_transaction> *_osTransaction;	// 400 = 0x190
    RPConnection *_personalCnx;	// 408 = 0x198
    NSMutableDictionary *_registeredEvents;	// 416 = 0x1a0
    NSMutableSet *_registeredProfileIDs;	// 424 = 0x1a8
    NSMutableDictionary *_registeredRequests;	// 432 = 0x1b0
    unsigned int _sessionIDLast;	// 440 = 0x1b8
    _Bool _serverBonjourInfraPairing;	// 444 = 0x1bc
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 448 = 0x1c0
    NSUserDefaults *_soundBoardPrefs;	// 456 = 0x1c8
    _Bool _soundBoardUserLeader;	// 464 = 0x1d0
    _Bool _soundBoardUserLeaderKVO;	// 465 = 0x1d1
    unsigned long long _startTicks;	// 472 = 0x1d8
    unsigned long long _startTicksFull;	// 480 = 0x1e0
    RPConnection *_stereoCnx;	// 488 = 0x1e8
    CUSystemMonitor *_systemMonitor;	// 496 = 0x1f0
    NSMutableDictionary *_tcpClientConnections;	// 504 = 0x1f8
    NSMutableSet *_tcpServerConnections;	// 512 = 0x200
    CUTCPServer *_tcpServer;	// 520 = 0x208
    NSObject<OS_dispatch_source> *_tcpServerDisconnectTimer;	// 528 = 0x210
    NSMutableDictionary *_unauthDevices;	// 536 = 0x218
    NSData *_uniqueIDData;	// 544 = 0x220
    NSString *_uniqueIDStr;	// 552 = 0x228
    CUWiFiManager *_wifiManager;	// 560 = 0x230
    unsigned int _xidLast;	// 568 = 0x238
    NSMutableSet *_xpcConnections;	// 576 = 0x240
    NSXPCInterface *_xpcClientInterface;	// 584 = 0x248
    NSXPCInterface *_xpcServerInterface;	// 592 = 0x250
    NSXPCListener *_xpcListener;	// 600 = 0x258
    unsigned int _xpcLastID;	// 608 = 0x260
    NSMutableDictionary *_xpcMatchingMap;	// 616 = 0x268
    _Bool _prefAppSignIn;	// 624 = 0x270
    _Bool _prefBLEClient;	// 625 = 0x271
    _Bool _prefClientEnabled;	// 626 = 0x272
    _Bool _prefCommunal;	// 627 = 0x273
    _Bool _prefHomeKitConfigured;	// 628 = 0x274
    _Bool _prefHomeKitEnabled;	// 629 = 0x275
    _Bool _prefIPEnabled;	// 630 = 0x276
    unsigned int _prefMaxConnectionCount;	// 632 = 0x278
    _Bool _prefServerBonjourAlways;	// 636 = 0x27c
    _Bool _prefServerBonjourOpportunitistic;	// 637 = 0x27d
    _Bool _prefServerEnabled;	// 638 = 0x27e
    _Bool _prefServerShouldRun;	// 639 = 0x27f
    RPHIDDaemon *_hidDaemon;	// 640 = 0x280
    _Bool _prefHIDEnabled;	// 648 = 0x288
    RPMediaControlDaemon *_mediaControlDaemon;	// 656 = 0x290
    _Bool _prefMediaControlEnabled;	// 664 = 0x298
    RPSiriDaemon *_siriDaemon;	// 672 = 0x2a0
    _Bool _prefSiriEnabled;	// 680 = 0x2a8
    RPTextInputDaemon *_textInputDaemon;	// 688 = 0x2b0
    _Bool _prefTextInputEnabled;	// 696 = 0x2b8
    _Bool _prefTouchEnabled;	// 697 = 0x2b9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 704 = 0x2c0
    RPCompanionLinkDevice *_localDeviceInfo;	// 712 = 0x2c8
    NSMutableSet *_activeServers;	// 720 = 0x2d0
    NSMutableDictionary *_activeSessions;	// 728 = 0x2d8
}

+ (id)sharedCompanionLinkDaemon;	// IMP=0x00000001000094b0
- (void).cxx_destruct;	// IMP=0x0000000100026a94
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000100026a58
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x00000001000269dc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100026444
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x0000000100026120
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025c4c
- (void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100025050
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3;	// IMP=0x0000000100024cf0
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000246d8
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x000000010002463c
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x0000000100024290
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100023fac
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100023efc
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100023e5c
- (void)deregisterRequestID:(id)arg1;	// IMP=0x0000000100023dbc
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023bf4
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023a2c
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x0000000100023698
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100022d54
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100022cb8
- (void)deregisterEventID:(id)arg1;	// IMP=0x0000000100022c18
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022a50
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x000000010002255c
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x00000001000220d8
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x00000001000215b0
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x00000001000212c4
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x0000000100020e88
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x0000000100020c98
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x0000000100020b58
- (void)_homeKitEnsureStopped;	// IMP=0x0000000100020a9c
- (void)_homeKitEnsureStarted;	// IMP=0x0000000100020574
- (void)_textInputEnsureStopped;	// IMP=0x00000001000204dc
- (void)_textInputEnsureStarted;	// IMP=0x00000001000203a4
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x000000010001f6c4
- (void)_siriEnsureStopped;	// IMP=0x000000010001f62c
- (void)_siriEnsureStarted;	// IMP=0x000000010001f4f4
- (void)_reachabilityEnsureStopped;	// IMP=0x000000010001f468
- (void)_reachabilityEnsureStarted;	// IMP=0x000000010001f394
- (void)_personalDeviceUpdate;	// IMP=0x000000010001f034
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001ee5c
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ec34
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e7cc
- (void)_miscEnsureStopped;	// IMP=0x000000010001e74c
- (void)_miscEnsureStarted;	// IMP=0x000000010001e340
- (void)_mediaRouteIDGet;	// IMP=0x000000010001e03c
- (void)_mediaRemoteIDGet;	// IMP=0x000000010001dd1c
- (void)_mediaControlEnsureStopped;	// IMP=0x000000010001dc84
- (void)_mediaControlEnsureStarted;	// IMP=0x000000010001dab8
- (void)_localDeviceCleanup;	// IMP=0x000000010001da48
- (void)_localDeviceUpdate;	// IMP=0x000000010001c8f0
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x000000010001c780
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x000000010001c494
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x000000010001bf3c
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x000000010001bd08
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x000000010001ba80
- (void)_hidEnsureStopped;	// IMP=0x000000010001b9e8
- (void)_hidEnsureStarted;	// IMP=0x000000010001b8b0
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b744
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b320
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x000000010001b11c
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x000000010001afb8
- (id)_findConnectionByID:(id)arg1;	// IMP=0x000000010001adf0
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x000000010001aac0
- (void)_duetSyncEnsureStopped;	// IMP=0x000000010001aa28
- (void)_duetSyncEnsureStarted;	// IMP=0x000000010001a94c
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x000000010001a878
- (void)_disconnectUnpairedDevices;	// IMP=0x000000010001a564
- (void)_disconnectUnauthConnections;	// IMP=0x000000010001a3d0
- (void)_disconnectRemovedSharedHomeDevices;	// IMP=0x000000010001a0bc
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x0000000100019d84
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x00000001000199d0
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x00000001000196c0
- (int)_airPlayLeaderStateUncached;	// IMP=0x0000000100019414
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00000001000192c8
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x0000000100019104
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100018cd0
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100018980
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x0000000100018740
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x00000001000186f8
- (void)_btPipeConnectionStart;	// IMP=0x0000000100018220
- (void)_btPipeHandleStateChanged;	// IMP=0x0000000100018120
- (void)_btPipeEnsureStopped;	// IMP=0x000000010001806c
- (void)_btPipeEnsureStarted;	// IMP=0x0000000100017cdc
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x0000000100017c64
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x00000001000177bc
- (void)_bleServerEnsureStopped;	// IMP=0x0000000100017620
- (void)_bleServerEnsureStarted;	// IMP=0x00000001000173a0
- (void)_serverTCPRemovePersistentConnectionsIfNeeded:(_Bool)arg1;	// IMP=0x0000000100016ff0
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x0000000100016d8c
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x0000000100016d14
- (void)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x0000000100016774
- (void)_serverTCPEnsureStopped;	// IMP=0x00000001000165c0
- (void)_serverTCPEnsureStarted;	// IMP=0x000000010001638c
- (void)_serverBTAddressChanged;	// IMP=0x000000010001620c
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x0000000100016174
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x0000000100016028
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x0000000100015e3c
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x0000000100015d74
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x0000000100015ad0
- (void)_serverBonjourUpdateTXT;	// IMP=0x00000001000156c8
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x000000010001556c
- (id)_serverBonjourAuthTagString;	// IMP=0x00000001000154ac
- (void)_serverBonjourEnsureStopped;	// IMP=0x0000000100015414
- (void)_serverBonjourEnsureStarted;	// IMP=0x0000000100015218
- (_Bool)_serverBonjourShouldRun;	// IMP=0x00000001000151b0
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x0000000100015034
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x0000000100014dd4
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x0000000100014d28
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x0000000100014c60
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x0000000100014864
- (void)_serverEnsureStopped;	// IMP=0x0000000100014800
- (void)_serverEnsureStarted;	// IMP=0x00000001000146ec
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00000001000145b0
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x000000010001447c
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x0000000100014348
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0000000100013fbc
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x0000000100013ebc
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100013624
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x00000001000134c0
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000126ec
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x0000000100012014
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x0000000100011f08
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x000000010001176c
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x0000000100011638
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x0000000100011584
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x0000000100011340
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x000000010001110c
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x0000000100010d88
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x0000000100010b7c
- (void)_clientBonjourFoundUnauthDevice:(id)arg1;	// IMP=0x0000000100010848
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x0000000100010598
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x000000010000fcbc
- (void)_clientBonjourEnsureStopped;	// IMP=0x000000010000fc0c
- (void)_clientBonjourEnsureStarted;	// IMP=0x000000010000f954
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x000000010000f7d0
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x000000010000f738
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x000000010000f4b4
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010000f180
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1;	// IMP=0x000000010000ec8c
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x000000010000ebc4
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x000000010000e6dc
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x000000010000e6d4
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x000000010000e604
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x000000010000e118
- (void)_clientEnsureStopped;	// IMP=0x000000010000e064
- (void)_clientEnsureStarted;	// IMP=0x000000010000df5c
- (void)_updateForXPCServerChange;	// IMP=0x000000010000dd2c
- (void)_updateForXPCClientChange;	// IMP=0x000000010000d968
- (void)_updateAssertions;	// IMP=0x000000010000d6a0
- (void)_update;	// IMP=0x000000010000d1a8
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x000000010000cf2c
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010000cdb4
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ca7c
- (void)prefsChanged;	// IMP=0x000000010000c044
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010000bb24
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010000b978
- (void)_invalidated;	// IMP=0x000000010000b844
- (void)_invalidate;	// IMP=0x000000010000b52c
- (void)invalidate;	// IMP=0x000000010000b4c4
- (void)_activate;	// IMP=0x000000010000b26c
- (void)activate;	// IMP=0x000000010000b1ec
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100009590
- (id)init;	// IMP=0x000000010000951c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

