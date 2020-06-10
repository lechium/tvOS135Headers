//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface BKDisplayBrightnessInterface : NSObject
{
    int _numPendingTransactions;	// 8 = 0x8
    _Bool _commitPending;	// 12 = 0xc
    float _systemDisplayBrightness;	// 16 = 0x10
    _Bool _shouldRestoreSystemBrightness;	// 20 = 0x14
    id _notificationObserver;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010005677c
- (void).cxx_destruct;	// IMP=0x0000000100056714
- (int)displayBrightnessCurve;	// IMP=0x0000000100056708
- (float)displayBrightness;	// IMP=0x00000001000566fc
- (void)setAutoBrightnessEnabled:(_Bool)arg1;	// IMP=0x000000010005669c
- (void)setDisplayBrightnessCurve:(int)arg1;	// IMP=0x0000000100056644
- (void)restoreSystemDisplayBrightness;	// IMP=0x0000000100056508
- (float)systemDisplayBrightness;	// IMP=0x00000001000564bc
- (void)setDisplayBrightness:(float)arg1 permanently:(_Bool)arg2;	// IMP=0x0000000100056410
- (void)_lock_commitDisplayBrightness;	// IMP=0x000000010005633c
- (void)synchronizeALSPreferencesAndDisplayBrightness;	// IMP=0x00000001000562dc
- (void)_endUpdateTransaction:(id)arg1;	// IMP=0x00000001000560fc
- (void)_beginUpdateTransaction:(id)arg1;	// IMP=0x0000000100055fec
- (void)_postDisplayBrightnessChangedForUIKit;	// IMP=0x0000000100055f54
- (void)_lock_addBrightnessObserver;	// IMP=0x0000000100055e94
- (void)_lock_removeBrightnessObserver;	// IMP=0x0000000100055e24
- (void)dealloc;	// IMP=0x0000000100055d3c
- (id)init;	// IMP=0x0000000100055c04

@end

