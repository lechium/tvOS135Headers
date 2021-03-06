//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLWifiLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLWifiLocationProviderAdapter : CLLocationProviderAdapter <CLWifiLocationProviderProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x00000001001b80e4
+ (id)getSilo;	// IMP=0x00000001001b7adc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b7ab8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010087ae74
- (void)requestLocationUpdateWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b7de0
- (void)allowLocalClientsInEmergency:(_Bool)arg1;	// IMP=0x00000001001b7ddc
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00000001001b7dd8
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x00000001001b7dd4
- (void)emergencyStateChange:(int)arg1;	// IMP=0x00000001001b7d78
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b7d3c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b7cf8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b7cc4
- (struct CLWifiLocationProvider *)adaptee;	// IMP=0x00000001001b7c88
- (void)endService;	// IMP=0x00000001001b7c64
- (void)beginService;	// IMP=0x00000001001b7b98
- (id)init;	// IMP=0x00000001001b7b54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

