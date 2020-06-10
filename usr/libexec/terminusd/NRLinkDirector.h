//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRLinkDelegate-Protocol.h"
#import "NRLinkManagerBluetoothDelegate-Protocol.h"
#import "NRLinkManagerQuickRelayDelegate-Protocol.h"
#import "NRLinkManagerWiFiDelegate-Protocol.h"
#import "NRPhoneCallRelayAgentDelegate-Protocol.h"

@class NRDTestServer, NRLinkManagerBluetooth, NRLinkManagerFixedInterface, NRLinkManagerQuickRelay, NRLinkManagerWiFi, NRPhoneCallRelayAgent, NSMutableDictionary, NSMutableSet, NSString, NWAddressEndpoint;
@protocol OS_dispatch_queue;

@interface NRLinkDirector : NSObject <NRLinkDelegate, NRLinkManagerWiFiDelegate, NRLinkManagerBluetoothDelegate, NRLinkManagerQuickRelayDelegate, NRPhoneCallRelayAgentDelegate>
{
    _Bool _isFixedInterfaceMode;	// 8 = 0x8
    _Bool _isEnabled;	// 9 = 0x9
    _Bool _updatedMTU;	// 10 = 0xa
    NRLinkManagerBluetooth *_bluetoothManager;	// 16 = 0x10
    NRLinkManagerWiFi *_wifiManager;	// 24 = 0x18
    NRLinkManagerQuickRelay *_quickRelayManager;	// 32 = 0x20
    struct NEVirtualInterface_s *_virtualInterface;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NRLinkManagerFixedInterface *_fixedInterfaceManager;	// 56 = 0x38
    NRDTestServer *_testServer;	// 64 = 0x40
    NRPhoneCallRelayAgent *_phoneCallRelayAgent;	// 72 = 0x48
    NSMutableDictionary *_conductors;	// 80 = 0x50
    NSMutableSet *_orphanedDeviceMonitorConnections;	// 88 = 0x58
    NSMutableSet *_orphanedDevicePreferencesConnections;	// 96 = 0x60
}

+ (id)copySharedLinkDirector;	// IMP=0x000000010006aba0
- (void).cxx_destruct;	// IMP=0x000000010006aa10
@property(retain, nonatomic) NSMutableSet *orphanedDevicePreferencesConnections; // @synthesize orphanedDevicePreferencesConnections=_orphanedDevicePreferencesConnections;
@property(retain, nonatomic) NSMutableSet *orphanedDeviceMonitorConnections; // @synthesize orphanedDeviceMonitorConnections=_orphanedDeviceMonitorConnections;
@property(retain, nonatomic) NSMutableDictionary *conductors; // @synthesize conductors=_conductors;
@property(retain, nonatomic) NRPhoneCallRelayAgent *phoneCallRelayAgent; // @synthesize phoneCallRelayAgent=_phoneCallRelayAgent;
@property(nonatomic) _Bool updatedMTU; // @synthesize updatedMTU=_updatedMTU;
@property(retain, nonatomic) NRDTestServer *testServer; // @synthesize testServer=_testServer;
@property(retain, nonatomic) NRLinkManagerFixedInterface *fixedInterfaceManager; // @synthesize fixedInterfaceManager=_fixedInterfaceManager;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isFixedInterfaceMode; // @synthesize isFixedInterfaceMode=_isFixedInterfaceMode;
@property(nonatomic) struct NEVirtualInterface_s *virtualInterface; // @synthesize virtualInterface=_virtualInterface;
@property(retain, nonatomic) NRLinkManagerQuickRelay *quickRelayManager; // @synthesize quickRelayManager=_quickRelayManager;
@property(retain, nonatomic) NRLinkManagerWiFi *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) NRLinkManagerBluetooth *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
- (void)removeTerminusPrefixDropPolicy;	// IMP=0x000000010006a4ec
- (void)addTerminusPrefixDropPolicy;	// IMP=0x000000010006a074
- (void)measureBTLatencyForNRUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100069e44
- (void)setMPKLLoggingWithEnabled:(_Bool)arg1;	// IMP=0x0000000100069dfc
- (void)updateDeviceMonitorConnectionsForNRUUID:(id)arg1;	// IMP=0x0000000100069d20
- (void)removeDevicePreferencesManagerConnection:(id)arg1;	// IMP=0x00000001000699b0
- (void)setPolicyTrafficClasses:(id)arg1 forConnection:(id)arg2 nrUUID:(id)arg3;	// IMP=0x00000001000697b4
- (void)setLinkPreferences:(id)arg1 forConnection:(id)arg2 nrUUID:(id)arg3;	// IMP=0x00000001000695b8
- (void)removeDeviceSetupInProgressConnection:(id)arg1;	// IMP=0x0000000100069248
- (void)addDeviceSetupInProgressConnection:(id)arg1 nrUUID:(id)arg2;	// IMP=0x00000001000690d0
- (void)removeDeviceMonitorConnection:(id)arg1;	// IMP=0x0000000100068d60
- (void)addDeviceMonitorConnection:(id)arg1 nrUUID:(id)arg2;	// IMP=0x0000000100068b88
- (void)apsIsConnected:(_Bool)arg1;	// IMP=0x00000001000689f0
- (void)deviceHasPhoneCallRelayRequest:(_Bool)arg1;	// IMP=0x0000000100068814
- (void)pipeDidConnectForNRUUID:(_Bool)arg1 nrUUID:(id)arg2;	// IMP=0x00000001000686f0
- (void)linkPeerIsAsleep:(id)arg1 isAsleep:(_Bool)arg2;	// IMP=0x000000010006854c
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x0000000100068388
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x0000000100068210
- (void)linkIsSuspended:(id)arg1;	// IMP=0x0000000100068098
- (void)linkIsReady:(id)arg1;	// IMP=0x0000000100067f10
- (void)linkIsAvailable:(id)arg1;	// IMP=0x0000000100067d98
- (void)setWiFiRangeExtensionAllowedForTesting:(_Bool)arg1;	// IMP=0x0000000100067c18
- (void)setFixedInterfaceModeWithEnabled:(_Bool)arg1 interfaceName:(id)arg2 peerAddress:(id)arg3;	// IMP=0x0000000100067b04
- (void)enableCloudLink:(_Bool)arg1;	// IMP=0x0000000100067850
- (unsigned int)cancelAllLinks;	// IMP=0x00000001000676b0
- (id)copyDeviceMonitorStatusForNRUUID:(id)arg1 replyDict:(id)arg2;	// IMP=0x0000000100067574
- (id)copyPrimaryLinkForNRUUID:(id)arg1;	// IMP=0x0000000100067450
@property(readonly, nonatomic) NWAddressEndpoint *localWiFiEndpoint;
- (void)setLinkRequirementsForNRUUID:(id)arg1 inputBPS:(unsigned int)arg2 outputBPS:(unsigned int)arg3 packetsPS:(unsigned int)arg4;	// IMP=0x000000010006733c
- (void)checkEnabledDevices;	// IMP=0x00000001000666f4
- (void)handleAlwaysOnWiFiQueryComplete;	// IMP=0x0000000100066574
- (void)reportEvent:(int)arg1;	// IMP=0x0000000100066564
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x00000001000664d0
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x00000001000664c0
- (id)copyStatusString;	// IMP=0x0000000100065ed8
- (void)setupCatchAllInterfaceIfApplicable;	// IMP=0x0000000100065524
- (void)removeCatchAllInterface;	// IMP=0x00000001000653a8
- (void)refreshCompanionProxyAgent;	// IMP=0x000000010006524c
- (void)setupManagers;	// IMP=0x0000000100064e54
- (id)name;	// IMP=0x0000000100064e48
- (void)checkStarted;	// IMP=0x0000000100064df4
- (void)cancelDirector;	// IMP=0x0000000100064940
- (void)restartDirector;	// IMP=0x00000001000648c0
- (void)startDirector;	// IMP=0x00000001000644cc
- (id)initDirector;	// IMP=0x0000000100064308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
