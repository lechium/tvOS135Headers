//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDBackgroundActivitySchedulerInterface-Protocol.h"

@class NSBackgroundActivityScheduler, NSString;

@interface NRDBackgroundActivitySchedulerServerImpl : NSObject <NRDBackgroundActivitySchedulerInterface>
{
    NSBackgroundActivityScheduler *_scheduler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100008104
@property(readonly, nonatomic) NSBackgroundActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void)set_appRefresh:(_Bool)arg1;	// IMP=0x00000001000080ec
- (void)_isAppRefresh:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008090
- (void)setCheckInHandler:(id)arg1;	// IMP=0x0000000100007b14
- (void)_setAdditionalXPCActivityProperties:(id)arg1;	// IMP=0x0000000100007ad4
- (void)setDelay:(double)arg1;	// IMP=0x0000000100007ac4
- (void)delay:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007a6c
- (void)setPreregistered:(_Bool)arg1;	// IMP=0x0000000100007a5c
- (void)preregistered:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007a00
- (void)shouldDefer:(CDUnknownBlockType)arg1;	// IMP=0x00000001000079a4
- (void)invalidate;	// IMP=0x0000000100007994
- (void)scheduleWithRemoteableBlock:(id)arg1;	// IMP=0x00000001000073c8
- (void)setTolerance:(double)arg1;	// IMP=0x00000001000073b8
- (void)tolerance:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007360
- (void)setInterval:(double)arg1;	// IMP=0x0000000100007350
- (void)setRepeats:(_Bool)arg1;	// IMP=0x0000000100007340
- (void)interval:(CDUnknownBlockType)arg1;	// IMP=0x00000001000072e8
- (void)repeats:(CDUnknownBlockType)arg1;	// IMP=0x000000010000728c
- (void)setQualityOfService:(long long)arg1;	// IMP=0x000000010000727c
- (void)qualityOfService:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007220
- (void)identifier:(CDUnknownBlockType)arg1;	// IMP=0x00000001000071b0
- (void)dealloc;	// IMP=0x0000000100007164
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001000070ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

