//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"
#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchPadManager : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver, BKHIDEventProcessor>
{
    NSObject<OS_dispatch_queue> *_touchPadQueue;	// 8 = 0x8
    NSMutableDictionary *_queue_currentTouchPads;	// 16 = 0x10
    BKIOHIDServiceMatcher *_touchPadMatcher;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000118dc
- (void).cxx_destruct;	// IMP=0x0000000100011420
- (void)_queue_sendCancelEventForTouchPad:(id)arg1;	// IMP=0x0000000100011144
- (void)_queue_handleEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0000000100010bd0
- (void)_queue_sendEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 toDestination:(id)arg3 dispatcher:(id)arg4;	// IMP=0x0000000100010838
- (void)_queue_touchPadsDetected:(id)arg1;	// IMP=0x0000000100010774
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x00000001000106a8
- (void)_queue_touchPadRemoved:(id)arg1;	// IMP=0x000000010001054c
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x00000001000104f8
- (void)sendCancelEventForAllDisplays;	// IMP=0x00000001000104a0
- (void)sendCancelEventForDisplay:(id)arg1;	// IMP=0x000000010001041c
- (long long)processEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0000000100010340
- (void)dealloc;	// IMP=0x00000001000102f0
- (id)init;	// IMP=0x00000001000100a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

