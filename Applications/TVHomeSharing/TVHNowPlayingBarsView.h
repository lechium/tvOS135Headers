//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVHNowPlayingBarsView : UIView
{
    float _repeatCount;	// 8 = 0x8
    NSArray *_barViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000319fc
@property(nonatomic) float repeatCount; // @synthesize repeatCount=_repeatCount;
@property(copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x0000000100031540
- (void)_removeAnimations;	// IMP=0x00000001000313f8
- (void)_addAnimations;	// IMP=0x00000001000313e4
- (void)_setBarViewHeights:(double)arg1;	// IMP=0x0000000100031264
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100031210
- (void)updateColorsWithUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100031030
- (void)resumeAnimating;	// IMP=0x0000000100030fac
- (void)stopAnimating;	// IMP=0x0000000100030f1c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100030ce4

@end
