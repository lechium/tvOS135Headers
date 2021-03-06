//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLTransitMacMonitorProtocol-Protocol.h"

@class CLLocation, NSMutableArray, NSMutableSet, NSString;
@protocol CLTransitMacTileDataProviderProtocol, CLWifiServiceProtocol;

@interface CLTransitMacMonitor : CLIntersiloService <CLTransitMacMonitorProtocol>
{
    id <CLWifiServiceProtocol> _wifiServiceProxy;	// 8 = 0x8
    struct unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 16 = 0x10
    id <CLTransitMacTileDataProviderProtocol> _transitMacTileDataProviderProxy;	// 24 = 0x18
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::__1::default_delete<CLFilteredLocationController_Type::Client>> _locationClient;	// 32 = 0x20
    unsigned long long _currentState;	// 40 = 0x28
    NSMutableSet *_clients;	// 48 = 0x30
    NSMutableArray *_observedTransitAccessPointsCache;	// 56 = 0x38
    CLLocation *_mostRecentLocation;	// 64 = 0x40
}

+ (_Bool)isSupported;	// IMP=0x00000001007383bc
+ (id)getSilo;	// IMP=0x0000000100738300
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001007382dc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008a7fb0
- (id).cxx_construct;	// IMP=0x000000010073a2d0
- (void).cxx_destruct;	// IMP=0x000000010073a26c
@property(retain, nonatomic) CLLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
@property(retain, nonatomic) NSMutableArray *observedTransitAccessPointsCache; // @synthesize observedTransitAccessPointsCache=_observedTransitAccessPointsCache;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x000000010073a074
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00000001007399ac
- (void)processNewAccessPoints:(const vector_94cb9693 *)arg1 transitTileResults:(id)arg2;	// IMP=0x0000000100738f38
- (void)stopMonitoringTransitStateForClient:(byref id)arg1;	// IMP=0x0000000100738c30
- (void)startMonitoringTransitStateForClient:(byref id)arg1;	// IMP=0x0000000100738b28
- (void)endService;	// IMP=0x00000001007389b8
- (void)beginService;	// IMP=0x00000001007383c4
- (id)init;	// IMP=0x0000000100738378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

