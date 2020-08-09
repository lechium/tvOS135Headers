//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, UILayoutGuide, UITapGestureRecognizer, UIVisualEffectView, _UIFloatingContentView;

@interface PBPIPControlButton : UIControl
{
    _Bool _isFocused;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_titleText;	// 24 = 0x18
    UILayoutGuide *_buttonLayoutGuide;	// 32 = 0x20
    _UIFloatingContentView *_floatingContentView;	// 40 = 0x28
    UIVisualEffectView *_floatingContentEffectView;	// 48 = 0x30
    UIImageView *_contentImageView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UITapGestureRecognizer *_selectGestureRecognizer;	// 72 = 0x48
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x00000001000b504c
- (void).cxx_destruct;	// IMP=0x00000001000b6778
@property(readonly, nonatomic) UITapGestureRecognizer *selectGestureRecognizer; // @synthesize selectGestureRecognizer=_selectGestureRecognizer;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(readonly, nonatomic) UIVisualEffectView *floatingContentEffectView; // @synthesize floatingContentEffectView=_floatingContentEffectView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(readonly) UILayoutGuide *buttonLayoutGuide; // @synthesize buttonLayoutGuide=_buttonLayoutGuide;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000b614c
- (unsigned long long)_controlStateForView;	// IMP=0x00000001000b6048
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000b5e4c
- (void)_selectGestureChanged:(id)arg1;	// IMP=0x00000001000b5d4c
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000b5bec
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000b5a8c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000b5930
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000b58a8
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001000b57d4
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001000b57bc
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000b5770
- (id)preferredFocusEnvironments;	// IMP=0x00000001000b56c0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000b555c
- (void)useFocusedAppearance;	// IMP=0x00000001000b5518
- (_Bool)canBecomeFocused;	// IMP=0x00000001000b5354
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b37bc

@end

