//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLTransitMacMonitorClientProtocol-Protocol.h"

@class NSString;

@interface CLVehicleStateNotifierTransitMacMonitorAdapter : NSObject <CLTransitMacMonitorClientProtocol>
{
    struct CLVehicleStateNotifier *_vehicleStateNotifier;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onTransitStateUpdate:(unsigned long long)arg1;	// IMP=0x0000000100791ec4
- (id)initWithVehicleStateNotifier:(struct CLVehicleStateNotifier *)arg1;	// IMP=0x0000000100791e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

