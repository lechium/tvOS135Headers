//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x0000000100033b90
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100033a58
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x0000000100033914
+ (void)initialize;	// IMP=0x00000001000338dc
- (void).cxx_destruct;	// IMP=0x000000010003372c
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x0000000100033620
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x0000000100033618
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x0000000100033590
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000334e0
- (void)addObserver:(id)arg1;	// IMP=0x0000000100033450
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x0000000100033448
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x0000000100033440
- (_Bool)isBeingDebugged;	// IMP=0x0000000100033438
- (_Bool)isSuspended;	// IMP=0x0000000100033430
- (_Bool)canBeSuspended;	// IMP=0x0000000100033428
- (_Bool)isAwake;	// IMP=0x0000000100033420
- (_Bool)isForeground;	// IMP=0x0000000100033418
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0000000100033410
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x0000000100033324
- (_Bool)supportsWakes;	// IMP=0x00000001000332b0
- (id)containerURL;	// IMP=0x00000001000332a8
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001000331d8

@end

