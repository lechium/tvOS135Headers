//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@interface _HBIconProgressFractionTransition : _HBIconProgressTransition
{
    double _targetFraction;	// 8 = 0x8
}

+ (id)newTransitionToFraction:(double)arg1;	// IMP=0x000000010004a9a8
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x000000010004aafc
- (void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2;	// IMP=0x000000010004aa94
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x000000010004aa7c
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x000000010004a9f8
- (void)updateToFraction:(double)arg1;	// IMP=0x000000010004a9e8

@end
