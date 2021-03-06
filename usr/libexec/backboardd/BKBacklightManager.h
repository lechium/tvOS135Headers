//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKEventClientDelegate-Protocol.h"

@class BSMutableIntegerMap, BrightnessSystem, NSString;

@interface BKBacklightManager : NSObject <BKEventClientDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSMutableIntegerMap *_backlightClientPerPID;	// 16 = 0x10
    BrightnessSystem *_brightnessSystem;	// 24 = 0x18
    BrightnessSystem *_originalBrightnessSystem;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010002a58c
- (void).cxx_destruct;	// IMP=0x000000010002a320
@property(retain, nonatomic) BrightnessSystem *originalBrightnessSystem; // @synthesize originalBrightnessSystem=_originalBrightnessSystem;
@property(retain, nonatomic) BrightnessSystem *brightnessSystem; // @synthesize brightnessSystem=_brightnessSystem;
@property(retain, nonatomic) BSMutableIntegerMap *backlightClientPerPID; // @synthesize backlightClientPerPID=_backlightClientPerPID;
- (void)clientDied:(id)arg1;	// IMP=0x000000010002a24c
- (void)_registerPropertyChangeBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a1e8
- (void)_lock_reevaluteBrightnessFeatures;	// IMP=0x0000000100029f94
- (void)_lock_setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100029e94
- (void)setBacklightFeatures:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100029d6c
- (void)setBacklightLocked:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000100029b68
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100029ae8
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000100029a78
@property(readonly) _Bool isALSSupported;
- (id)init;	// IMP=0x00000001000299b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

