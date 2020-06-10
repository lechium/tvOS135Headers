//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKProximitySensorHardwareBase.h"

@class BKIOHIDService;

@interface BKDiscreteProximitySensorHardware : BKProximitySensorHardwareBase
{
    _Bool _pocketTouchesExpected;	// 8 = 0x8
    BKIOHIDService *_proximityService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000454bc
@property(retain) BKIOHIDService *proximityService; // @synthesize proximityService=_proximityService;
- (id)lowLevelDescriptionForMode:(long long)arg1 pocketTouchesExpected:(_Bool)arg2;	// IMP=0x0000000100045494
- (void)reallySetMode:(long long)arg1 pocketTouchesExpected:(_Bool)arg2;	// IMP=0x0000000100045490
- (void)reallyResetCalibration;	// IMP=0x000000010004548c
- (_Bool)isValidEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0000000100045418
@property(readonly, nonatomic) _Bool shouldUseDiscreteService;
- (_Bool)_alwaysUseDiscreteService;	// IMP=0x0000000100045360
- (id)init;	// IMP=0x000000010004532c

@end
