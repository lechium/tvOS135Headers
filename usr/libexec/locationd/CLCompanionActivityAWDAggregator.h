//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLCompanionActivityAWDAggregatorServiceProtocol-Protocol.h"

@class NSString;

@interface CLCompanionActivityAWDAggregator : CLIntersiloService <CLCompanionActivityAWDAggregatorServiceProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x000000010030abc4
- (struct MotionFitnessDaily)syncgetActivityStats;	// IMP=0x000000010030abcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
