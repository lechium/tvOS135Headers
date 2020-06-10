//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDXPCAppleIDAuthInterface-Protocol.h"
#import "SDXPCClientInterface-Protocol.h"
#import "SDXPCCoordinatedAlertsInterface-Protocol.h"
#import "SDXPCDeviceDiscoveryInterface-Protocol.h"
#import "SDXPCDiagnosticsInterface-Protocol.h"
#import "SDXPCNFCTagReaderInterface-Protocol.h"
#import "SDXPCProximityClientInterface-Protocol.h"
#import "SDXPCRemoteAutoFillSessionInterface-Protocol.h"
#import "SDXPCRemoteInteractionSessionInterface-Protocol.h"
#import "SDXPCServiceInterface-Protocol.h"
#import "SDXPCSessionInterface-Protocol.h"
#import "SDXPCUserNotificationInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection, SDXPCServer, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFProximityClient, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFService, SFSession, SFUserAlert;

__attribute__((visibility("hidden")))
@interface SDXPCConnection : NSObject <SDXPCAppleIDAuthInterface, SDXPCClientInterface, SDXPCCoordinatedAlertsInterface, SDXPCDeviceDiscoveryInterface, SDXPCDiagnosticsInterface, SDXPCNFCTagReaderInterface, SDXPCProximityClientInterface, SDXPCRemoteAutoFillSessionInterface, SDXPCRemoteInteractionSessionInterface, SDXPCServiceInterface, SDXPCSessionInterface, SDXPCUserNotificationInterface>
{
    SFRemoteAutoFillSessionHelper *_afsHelper;	// 8 = 0x8
    NSMutableSet *_assertions;	// 16 = 0x10
    SFCoordinatedAlertRequest *_caRequest;	// 24 = 0x18
    SFDeviceDiscovery *_ddRequest;	// 32 = 0x20
    _Bool _diagnosticBLEModeStarted;	// 40 = 0x28
    _Bool _entitledBluetoothUserInteraction;	// 41 = 0x29
    _Bool _entitledClient;	// 42 = 0x2a
    _Bool _entitledCoordinatedAlerts;	// 43 = 0x2b
    _Bool _entitledDeviceDiscovery;	// 44 = 0x2c
    _Bool _entitledDiagnostics;	// 45 = 0x2d
    _Bool _entitledProximityClient;	// 46 = 0x2e
    _Bool _entitledRemoteInteractionSession;	// 47 = 0x2f
    _Bool _entitledService;	// 48 = 0x30
    _Bool _entitledSession;	// 49 = 0x31
    SFUserAlert *_notification;	// 56 = 0x38
    NSString *_preventExitForLocaleReason;	// 64 = 0x40
    SFProximityClient *_proxClient;	// 72 = 0x48
    SFRemoteInteractionSession *_riSession;	// 80 = 0x50
    SFService *_service;	// 88 = 0x58
    SFSession *_session;	// 96 = 0x60
    SDXPCServer *_server;	// 104 = 0x68
    _Bool _unlockTestClientStarted;	// 112 = 0x70
    NSXPCConnection *_xpcCnx;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010011f064
- (void)userNotificationPresent:(id)arg1;	// IMP=0x000000010011efec
- (void)sessionSendResponse:(id)arg1;	// IMP=0x000000010011eec4
- (void)sessionSendRequest:(id)arg1;	// IMP=0x000000010011ed9c
- (void)sessionSendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x000000010011ebcc
- (void)sessionSendEvent:(id)arg1;	// IMP=0x000000010011eaa4
- (void)sessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011e370
- (void)serviceSendResponse:(id)arg1;	// IMP=0x000000010011e258
- (void)serviceSendRequest:(id)arg1;	// IMP=0x000000010011e140
- (void)serviceSendFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x000000010011dfa4
- (void)serviceSendEvent:(id)arg1;	// IMP=0x000000010011de8c
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x000000010011dd58
- (void)serviceUpdate:(id)arg1;	// IMP=0x000000010011dc34
- (void)serviceActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011d1f0
- (void)remoteInteractionSessionSendPayload:(id)arg1;	// IMP=0x000000010011d0e0
- (void)remoteInteractionSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011cb88
- (void)proximityClientRequestScannerTimerReset;	// IMP=0x000000010011c96c
- (void)proximityClientUpdateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011c754
- (void)proximityClientProvideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010011c534
- (void)proximityClientDismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c338
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x000000010011c1d0
- (void)proximityClientActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011b830
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011b580
- (void)diagnosticUnlockTestServer;	// IMP=0x000000010011b4a0
- (void)diagnosticUnlockTestClientWithDevice:(id)arg1;	// IMP=0x000000010011b3b4
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011ac08
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;	// IMP=0x000000010011ab60
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;	// IMP=0x000000010011aab8
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011a948
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011a808
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100119d9c
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100119b78
- (void)bluetoothUserInteraction;	// IMP=0x0000000100119acc
- (void)deviceDiscoveryFastScanCancel:(id)arg1;	// IMP=0x0000000100119a74
- (void)deviceDiscoveryFastScanTrigger:(id)arg1;	// IMP=0x0000000100119a1c
- (void)deviceDiscoveryUpdate:(id)arg1;	// IMP=0x00000001001195c0
- (void)deviceDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100119070
- (void)coordinatedAlertsRequestFinish;	// IMP=0x0000000100118fb8
- (void)coordinatedAlertsRequestStart:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118c80
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100118a14
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118950
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118778
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x0000000100118720
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001186a8
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001185bc
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001184ac
- (void)setAudioRoutingScore:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118388
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x00000001001181d4
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x0000000100118030
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100117fb8
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100117ebc
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100117b0c
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x0000000100117a34
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001179bc
- (void)preheatXPCConnection;	// IMP=0x000000010011795c
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011776c
- (void)_getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100116aac
- (void)_getPeopleInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011639c
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001161cc
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100116104
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001154f4
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100115334
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001151c8
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100115060
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100114ef8
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100114ba0
- (void)accountForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001149bc
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100114804
- (void)_invalidateAssertions;	// IMP=0x00000001001144b8
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x0000000100114150
- (void)autoFillHelperUserNotificationDidDismiss:(id)arg1;	// IMP=0x000000010011402c
- (void)autoFillHelperUserNotificationDidActivate:(id)arg1;	// IMP=0x0000000100113f08
- (void)autoFillHelperTryPIN:(id)arg1;	// IMP=0x0000000100113de4
- (void)autoFillHelperDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x0000000100113c80
- (void)autoFillHelperActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001137f4
- (int)_entitledService:(id)arg1 state:(_Bool *)arg2;	// IMP=0x00000001001136c8
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;	// IMP=0x0000000100113570
- (void)connectionInvalidated;	// IMP=0x0000000100113250
- (id)initWithServer:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x00000001001131ac

@end
