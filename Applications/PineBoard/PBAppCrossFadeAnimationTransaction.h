//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;

@interface PBAppCrossFadeAnimationTransaction : BSTransaction
{
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 8 = 0x8
    CDStruct_a697a85d _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100152660
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) CDStruct_a697a85d context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x0000000100152190
- (void)_willFailWithReason:(id)arg1;	// IMP=0x0000000100152010
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x0000000100151e90
- (void)_begin;	// IMP=0x0000000100151d70
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100151d54
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x0000000100151bac

@end

