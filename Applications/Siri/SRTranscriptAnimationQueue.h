//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFQueue.h>

@interface SRTranscriptAnimationQueue : AFQueue
{
}

- (id)nextNonPinningAnimationForTranscriptItem:(id)arg1;	// IMP=0x0000000100020d28
- (id)dequeueAllAnimations;	// IMP=0x0000000100020d1c
- (id)dequeNextAnimation;	// IMP=0x0000000100020d10
- (id)nextAnimation;	// IMP=0x0000000100020d04
- (void)enqueueAnimations:(id)arg1;	// IMP=0x0000000100020cf8
- (void)enqueueAnimation:(id)arg1;	// IMP=0x0000000100020cec

@end
