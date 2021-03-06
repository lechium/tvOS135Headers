//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLVehicleConnectionNotifierProtocol-Protocol.h"

@class NSString;

@interface CLVehicleConnectionNotifierAdapter : CLNotifierServiceAdapter <CLVehicleConnectionNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001005fa7b4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001005fa790
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010089cf0c
- (void)deliverAndReleaseNotification:(struct __CFUserNotification *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000001005fac0c
- (void)fetchIsDeviceVehicle:(id)arg1 deviceType:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001005fab34
- (struct CLVehicleConnection)syncgetMostRecentInVehicle;	// IMP=0x00000001005fab00
- (struct CLVehicleConnection)syncgetMostRecentVehicleConnection;	// IMP=0x00000001005faacc
- (void)fetchMostRecentConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001005faa50
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001005faa14
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001005fa9d0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001005fa99c
- (struct CLVehicleConnectionNotifier *)adaptee;	// IMP=0x00000001005fa960
- (void)endService;	// IMP=0x00000001005fa93c
- (void)beginService;	// IMP=0x00000001005fa870
- (id)init;	// IMP=0x00000001005fa82c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

