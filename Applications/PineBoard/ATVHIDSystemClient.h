//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAssertion, NSArray, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_btKeyboardHIDSystemClient;	// 16 = 0x10
    NSArray *_normalEventRouters;	// 24 = 0x18
    BKSAssertion *_dispatchingRulesAssertion;	// 32 = 0x20
    SSIndicatorLight *_sil;	// 40 = 0x28
}

+ (_Bool)_buttonEvent:(struct __IOHIDEvent *)arg1 containsUsage:(long long)arg2;	// IMP=0x00000001000c6844
+ (_Bool)isRemoteAppEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c67fc
+ (_Bool)isCECButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c67b4
+ (_Bool)isIRRemoteButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c676c
+ (_Bool)isBluetoothKeyboardButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c66f8
+ (id)sharedInstance;	// IMP=0x00000001000c5fe4
- (void).cxx_destruct;	// IMP=0x00000001000c94f4
- (void)enableNormalEventRouting;	// IMP=0x00000001000c937c
- (void)enableSleepEventRouting;	// IMP=0x00000001000c91cc
- (void)disableAllEventRouting;	// IMP=0x00000001000c901c
- (id)_routingRulesThatIgnoreEvents;	// IMP=0x00000001000c8e10
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x00000001000c8d34
- (void)flashSILMorseCode:(id)arg1;	// IMP=0x00000001000c8ca4
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c8a50
- (void)setSILState_Off;	// IMP=0x00000001000c8a0c
- (void)setSILState_On;	// IMP=0x00000001000c89c8
- (void)_setSILState_On:(id)arg1;	// IMP=0x00000001000c8704
- (void)_setSILState_Off:(id)arg1;	// IMP=0x00000001000c8440
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c82b8
- (void)_processConsumerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c8190
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c8140
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c7d94
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c7cd4
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000c77f4
- (void)setupHIDEventRouters;	// IMP=0x00000001000c6920
- (void)dealloc;	// IMP=0x00000001000c6620
- (void)_startKeyboardHIDClient;	// IMP=0x00000001000c63bc
- (int)_init;	// IMP=0x00000001000c614c
- (id)init;	// IMP=0x00000001000c6040

@end

