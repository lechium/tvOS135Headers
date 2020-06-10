//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLBTLEBeaconProviderProtocol-Protocol.h"

@class NSString;

@interface CLBTLEBeaconProviderAdapter : CLNotifierServiceAdapter <CLBTLEBeaconProviderProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001007165b4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100716590
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008a74a8
- (_Bool)syncgetadvertiseSelfAsBeaconForRegion:(id)arg1 power:(int)arg2;	// IMP=0x0000000100716900
- (_Bool)syncgetRemoveProximityZone:(const struct ProximityZone *)arg1;	// IMP=0x00000001007168cc
- (_Bool)syncgetAddProximityZone:(const struct ProximityZone *)arg1;	// IMP=0x0000000100716898
- (void)stopScan;	// IMP=0x0000000100716874
- (void)startScan;	// IMP=0x0000000100716850
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100716814
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007167d0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010071679c
- (struct CLBTLEBeaconProvider *)adaptee;	// IMP=0x0000000100716760
- (void)endService;	// IMP=0x000000010071673c
- (void)beginService;	// IMP=0x0000000100716670
- (id)init;	// IMP=0x000000010071662c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
