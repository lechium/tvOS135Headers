//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlayer.h>

@interface HBTopShelfPlayer : TVPPlayer
{
    _Bool _isStoppedForThermalShutdown;	// 8 = 0x8
}

- (void)_thermalShutdownEnabledDidChangeNotification:(id)arg1;	// IMP=0x000000010009288c
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100092880
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000001000927c8
- (void)play;	// IMP=0x0000000100092784
- (void)dealloc;	// IMP=0x000000010009270c
- (id)init;	// IMP=0x00000001000924ac

@end

