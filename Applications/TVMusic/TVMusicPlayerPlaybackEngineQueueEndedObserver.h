//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPCPlaybackEngineEventObserving-Protocol.h"

@class NSString;

@interface TVMusicPlayerPlaybackEngineQueueEndedObserver : NSObject <MPCPlaybackEngineEventObserving>
{
}

- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;	// IMP=0x0000000100069fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

