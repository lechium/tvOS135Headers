//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface SRStarkCancelButton : UIButton
{
    UIView *_focusedView;	// 8 = 0x8
}

+ (void)_configureStylingForCancelButton:(id)arg1;	// IMP=0x000000010002eb44
+ (id)button;	// IMP=0x000000010002e5ac
- (void).cxx_destruct;	// IMP=0x000000010002f018
@property(retain, nonatomic) UIView *focusedView; // @synthesize focusedView=_focusedView;
- (void)_updateButton:(id)arg1 forFocusedState:(_Bool)arg2;	// IMP=0x000000010002ee14
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002eab4
- (void)layoutSubviews;	// IMP=0x000000010002e848
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002e750

@end

