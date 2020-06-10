//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLSimulationControllerProtocol-Protocol.h"
#import "CLSimulationXPCServerInterface-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener;

@interface CLSimulationControllerAdapter : CLIntersiloService <CLSimulationControllerProtocol, NSXPCListenerDelegate, CLSimulationXPCServerInterface>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    struct CLSimulationController *_controller;	// 24 = 0x18
}

+ (id)getSilo;	// IMP=0x000000010040bad0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010040baac
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010088dcb8
@property(nonatomic) struct CLSimulationController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010040d1d8
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x000000010040d058
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;	// IMP=0x000000010040cec8
- (void)getFencesForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010040cd44
- (void)simulateSignificantLocationChange:(id)arg1;	// IMP=0x000000010040cbf8
- (void)simulateVisit:(id)arg1;	// IMP=0x000000010040cad0
- (void)setLocationTravellingSpeed:(double)arg1;	// IMP=0x000000010040c9a8
- (void)setLocationInterval:(double)arg1;	// IMP=0x000000010040c880
- (void)setIntermediateLocationDistance:(double)arg1;	// IMP=0x000000010040c758
- (void)setLocationRepeatBehavior:(unsigned char)arg1;	// IMP=0x000000010040c654
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;	// IMP=0x000000010040c510
- (void)clearSimulatedLocations;	// IMP=0x000000010040c4fc
- (void)appendSimulatedLocations:(id)arg1;	// IMP=0x000000010040c294
- (void)setSimulationScenario:(id)arg1;	// IMP=0x000000010040c22c
- (void)startLocationSimulation;	// IMP=0x000000010040c028
- (void)stopLocationSimulation;	// IMP=0x000000010040be18
- (void)shutdown;	// IMP=0x000000010040be14
- (void)endService;	// IMP=0x000000010040bde8
- (void)beginService;	// IMP=0x000000010040bb8c
- (id)init;	// IMP=0x000000010040bb48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

