//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSMutableArray, NSString, SDAutoUnlockWiFiRequest;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockWiFiManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _awdlStartFailed;	// 8 = 0x8
    _Bool _awdlStarting;	// 9 = 0x9
    _Bool _awdlTimerFired;	// 10 = 0xa
    NSObject<OS_dispatch_source> *_awdlTimer;	// 16 = 0x10
    id _awdlNetwork;	// 24 = 0x18
    SDAutoUnlockWiFiRequest *_currentRequest;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    NSMutableArray *_wifiRequestQueue;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x0000000100150468
- (void).cxx_destruct;	// IMP=0x00000001001527ec
@property(retain, nonatomic) NSMutableArray *wifiRequestQueue; // @synthesize wifiRequestQueue=_wifiRequestQueue;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) SDAutoUnlockWiFiRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool awdlTimerFired; // @synthesize awdlTimerFired=_awdlTimerFired;
@property(nonatomic) _Bool awdlStarting; // @synthesize awdlStarting=_awdlStarting;
@property(nonatomic) _Bool awdlStartFailed; // @synthesize awdlStartFailed=_awdlStartFailed;
@property(retain) id awdlNetwork; // @synthesize awdlNetwork=_awdlNetwork;
@property(retain) NSObject<OS_dispatch_source> *awdlTimer; // @synthesize awdlTimer=_awdlTimer;
- (void)_handleNetworkStoppedWithError:(long long)arg1;	// IMP=0x00000001001526d8
- (void)handleNetworkStoppedWithError:(long long)arg1;	// IMP=0x0000000100152678
- (void)_handleNetworkStarted:(struct __WiFiNetwork *)arg1 error:(long long)arg2;	// IMP=0x000000010015233c
- (void)handleNetworkStarted:(struct __WiFiNetwork *)arg1 error:(long long)arg2;	// IMP=0x00000001001522cc
- (void)handleAWDLTimerFired;	// IMP=0x0000000100152198
- (void)invalidateAWDLTimer;	// IMP=0x00000001001520c0
- (void)restartAWDLTimer;	// IMP=0x0000000100151ebc
- (void)_handleAWDLDisabledIfNeeded;	// IMP=0x0000000100151d6c
- (void)_stopAWDL;	// IMP=0x0000000100151b90
- (void)_startAWDLWithInfo:(id)arg1;	// IMP=0x0000000100151808
- (void)locationManager:(id)arg1 rangingDidFailForPeer:(id)arg2 withError:(id)arg3;	// IMP=0x00000001001516c4
- (void)locationManager:(id)arg1 didRangePeers:(id)arg2;	// IMP=0x0000000100151598
- (void)_disableRangeable;	// IMP=0x0000000100151398
- (void)_enableRangeableIfNeeded;	// IMP=0x0000000100151168
- (void)_startRanging;	// IMP=0x0000000100150f80
- (void)_invalidateCurrentRequest;	// IMP=0x0000000100150edc
- (void)_processRequestQueue;	// IMP=0x0000000100150bd8
- (void)cancelWiFiRequest:(id)arg1;	// IMP=0x00000001001508c0
- (_Bool)addWiFiRequest:(id)arg1;	// IMP=0x00000001001507c4
- (void)_removeObservers;	// IMP=0x0000000100150774
- (void)_addObservers;	// IMP=0x0000000100150770
- (void)_createWiFiObserver;	// IMP=0x000000010015076c
- (void)_createLocationManager;	// IMP=0x00000001001505b0
- (void)start;	// IMP=0x0000000100150538
- (id)init;	// IMP=0x00000001001504d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

