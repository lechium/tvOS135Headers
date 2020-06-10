//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDelayedSerialQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sourceQueue;	// 24 = 0x18
    _Bool _draining;	// 32 = 0x20
}

- (void)drainAndExecuteOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030b78
- (void)resumeAfterDelay:(int)arg1;	// IMP=0x0000000100030ac4
- (void)suspend;	// IMP=0x0000000100030948
- (void)dealloc;	// IMP=0x00000001000308f0
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100030880

@end

