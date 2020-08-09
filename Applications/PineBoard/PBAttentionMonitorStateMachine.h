//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBAttentionMonitorStateMachine : NSObject
{
    long long _state;	// 8 = 0x8
    _Bool _automaticEnabled;	// 16 = 0x10
    _Bool _enteredOnStateAutomatically;	// 17 = 0x11
    double _enabledOffset;	// 24 = 0x18
}

@property(nonatomic) double enabledOffset; // @synthesize enabledOffset=_enabledOffset;
- (void)_enterOffStateForced;	// IMP=0x00000001001df214
- (void)_enterOnStateForced;	// IMP=0x00000001001df1fc
- (void)_enterOffStateAutomatically;	// IMP=0x00000001001df1e4
- (void)_enterOnStateAutomatically;	// IMP=0x00000001001df1cc
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x00000001001df1b0
- (id)_logString;	// IMP=0x00000001001df0f4
@property(readonly, nonatomic) _Bool enteredOnStateAutomatically;
- (void)enterOffStateForced;	// IMP=0x00000001001def5c
- (void)enterOnStateForced;	// IMP=0x00000001001dede8
- (void)enterOffStateAutomatically;	// IMP=0x00000001001dec70
- (_Bool)adjustStateAutomatically;	// IMP=0x00000001001de918
- (void)automaticDisable;	// IMP=0x00000001001de7f0
- (void)automaticEnable;	// IMP=0x00000001001de6c4
@property(readonly, nonatomic, getter=isAutomaticEnabled) _Bool automaticEnabled;
- (void)_setStateOff;	// IMP=0x00000001001de578
- (void)_setStateOn;	// IMP=0x00000001001de3fc
@property(readonly, nonatomic) _Bool isOn;
@property(readonly, nonatomic) _Bool isOff;
- (id)init;	// IMP=0x00000001001de2ec

@end
