//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBAppCrossFadeAnimationTransaction, UIViewPropertyAnimator;

@interface PBDefaultAppAnimationTransaction : BSTransaction
{
    UIViewPropertyAnimator *_scalePropertyAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 16 = 0x10
    PBAppCrossFadeAnimationTransaction *_crossFadeTransaction;	// 24 = 0x18
    CDStruct_821c97ab _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100150a94
@property(readonly, nonatomic) PBAppCrossFadeAnimationTransaction *crossFadeTransaction; // @synthesize crossFadeTransaction=_crossFadeTransaction;
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *scalePropertyAnimator; // @synthesize scalePropertyAnimator=_scalePropertyAnimator;
@property(readonly, nonatomic) CDStruct_821c97ab context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x00000001001503f8
- (void)_startScaleAnimation;	// IMP=0x000000010014fdf4
- (void)_startCoordinatedAnimation;	// IMP=0x000000010014fc88
- (void)_startReduceMotionAnimation;	// IMP=0x000000010014fbb4
- (void)_didComplete;	// IMP=0x000000010014fa54
- (void)_willFailWithReason:(id)arg1;	// IMP=0x000000010014f8a0
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x000000010014f6ec
- (void)_begin;	// IMP=0x000000010014f520
- (_Bool)_canBeInterrupted;	// IMP=0x000000010014f504
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 isResigning:(_Bool)arg4;	// IMP=0x000000010014f330

@end
