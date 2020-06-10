//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

@class NSArray;

@interface NESMPersonalDNSSession : NESMSession
{
    NSArray *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010006c01c
@property(retain) NSArray *settings; // @synthesize settings=_settings;
- (void)updatePolicies:(_Bool)arg1 agent:(_Bool)arg2;	// IMP=0x000000010006be38
- (void)dealloc;	// IMP=0x000000010006bdec
- (void)uninstall;	// IMP=0x000000010006bd00
- (void)install;	// IMP=0x000000010006bbd0
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x000000010006ba2c
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x000000010006b920
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010006b818
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010006b6f8
- (_Bool)shouldBeIdleForStatus:(int)arg1;	// IMP=0x000000010006b6dc
- (int)type;	// IMP=0x000000010006b6d4
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010006b45c

@end

