//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockNotificationsObserver-Protocol.h"
#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSUUID, SFAutoUnlockDevice, SFBLEScanner;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockSuggestionManager : NSObject <SDAutoUnlockTransportClient, SDAutoUnlockNotificationsObserver>
{
    _Bool _foundFirstPeer;	// 8 = 0x8
    NSString *_suggestedDeviceID;	// 16 = 0x10
    NSString *_setupRetryDeviceID;	// 24 = 0x18
    SFAutoUnlockDevice *_lastSuccessfulDevice;	// 32 = 0x20
    SFBLEScanner *_scanner;	// 40 = 0x28
    NSMutableArray *_foundPeers;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_scanTimer;	// 56 = 0x38
    NSArray *_currentBluetoothIDs;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_serviceTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_deviceTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_setupRetryDeviceTimer;	// 88 = 0x58
    NSMutableArray *_suggestedPeers;	// 96 = 0x60
    SFAutoUnlockDevice *_suggestedPeer;	// 104 = 0x68
    NSUUID *_suggestionManagerSessionID;	// 112 = 0x70
    SFAutoUnlockDevice *_setupRetryDevice;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_suggestionManagerQueue;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010017c870
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suggestionManagerQueue; // @synthesize suggestionManagerQueue=_suggestionManagerQueue;
@property(retain, nonatomic) SFAutoUnlockDevice *setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(retain, nonatomic) NSUUID *suggestionManagerSessionID; // @synthesize suggestionManagerSessionID=_suggestionManagerSessionID;
@property(retain, nonatomic) SFAutoUnlockDevice *suggestedPeer; // @synthesize suggestedPeer=_suggestedPeer;
@property(retain, nonatomic) NSMutableArray *suggestedPeers; // @synthesize suggestedPeers=_suggestedPeers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *setupRetryDeviceTimer; // @synthesize setupRetryDeviceTimer=_setupRetryDeviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *deviceTimer; // @synthesize deviceTimer=_deviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *serviceTimer; // @synthesize serviceTimer=_serviceTimer;
@property(retain, nonatomic) NSArray *currentBluetoothIDs; // @synthesize currentBluetoothIDs=_currentBluetoothIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) NSMutableArray *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) SFBLEScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) _Bool foundFirstPeer; // @synthesize foundFirstPeer=_foundFirstPeer;
@property(retain, nonatomic) SFAutoUnlockDevice *lastSuccessfulDevice; // @synthesize lastSuccessfulDevice=_lastSuccessfulDevice;
@property(copy, nonatomic) NSString *setupRetryDeviceID; // @synthesize setupRetryDeviceID=_setupRetryDeviceID;
@property(copy, nonatomic) NSString *suggestedDeviceID; // @synthesize suggestedDeviceID=_suggestedDeviceID;
- (void)_systemHasPoweredOn;	// IMP=0x000000010017c6dc
- (void)_systemWillSleep;	// IMP=0x000000010017c674
- (_Bool)alwaysShowSetupRetry;	// IMP=0x000000010017c64c
- (id)testDeviceID;	// IMP=0x000000010017c630
- (_Bool)ignoreBackOff;	// IMP=0x000000010017c608
- (_Bool)suggestionsEnabled;	// IMP=0x000000010017c5e0
- (void)setRetriedSetup;	// IMP=0x000000010017c58c
- (_Bool)retriedSetup;	// IMP=0x000000010017c494
- (void)loadSuggestedPeers;	// IMP=0x000000010017c3c4
- (void)setFeatureSuggestedForDeviceID:(id)arg1;	// IMP=0x000000010017c210
- (_Bool)featureSuggestedForDeviceID:(id)arg1;	// IMP=0x000000010017c198
- (void)updateDefaultsForDeviceID:(id)arg1;	// IMP=0x000000010017be08
- (_Bool)canSuggestForDeviceID:(id)arg1;	// IMP=0x000000010017bba8
- (_Bool)shouldSendRequestsForDeviceID:(id)arg1;	// IMP=0x000000010017ba5c
- (void)watchAvailableForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010017ba4c
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x000000010017b6d4
- (void)sendStartAdvertisingToDeviceID:(id)arg1;	// IMP=0x000000010017b4f8
- (void)invalidateScanTimer;	// IMP=0x000000010017b420
- (void)restartScanTimer:(unsigned long long)arg1;	// IMP=0x000000010017b234
- (void)invalidateScanner;	// IMP=0x000000010017b0f0
- (void)handleFoundPeer:(id)arg1;	// IMP=0x000000010017acd8
- (void)startScanningForIDSDeviceIDs:(id)arg1;	// IMP=0x000000010017a4dc
- (void)invalidateServiceTimer;	// IMP=0x000000010017a404
- (void)restartServiceTimer:(unsigned long long)arg1;	// IMP=0x000000010017a200
- (void)invalidateSuggestionService;	// IMP=0x000000010017a19c
- (void)updateSuggestionService;	// IMP=0x000000010017a12c
- (void)invalidateSuggestedDeviceTimer;	// IMP=0x000000010017a054
- (void)restartSuggestedDeviceTimer:(long long)arg1;	// IMP=0x0000000100179e2c
- (void)postSuggestionNotification;	// IMP=0x0000000100179ca0
- (void)postNotificationIfNeeded;	// IMP=0x0000000100179aac
- (void)invalidateSetupRetryDeviceTimer;	// IMP=0x00000001001799d4
- (void)restartSetupRetryDeviceTimer:(long long)arg1;	// IMP=0x00000001001797ac
- (void)setupRetryNotificationDismissed;	// IMP=0x00000001001796c0
- (void)setupRetryNotificationSetUpSelected;	// IMP=0x00000001001796bc
- (void)setupRetryIfNeeded;	// IMP=0x000000010017947c
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x00000001001793b8
- (void)triggerDevicesIfNeeded;	// IMP=0x00000001001793b4
- (void)handleTestSuggestion;	// IMP=0x00000001001792bc
- (void)addObservers;	// IMP=0x0000000100179220
- (id)init;	// IMP=0x0000000100179104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

