//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC6Arcade22BaseCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *isShadowEnabled;	// 9 = 0x9
    MISSING_TYPE *shadowRadius;	// 16 = 0x10
    MISSING_TYPE *shadowOffset;	// 56 = 0x38
    MISSING_TYPE *shadowColor;	// 120 = 0x78
    MISSING_TYPE *shadowOpacity;	// 144 = 0x90
    MISSING_TYPE *hasTiltMotionEffectsAttached;	// 161 = 0xa1
    MISSING_TYPE *$__lazy_storage_$_tiltMotionEffectGroup;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000100063b14
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100063a14
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000638fc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000636fc
- (void)prepareForReuse;	// IMP=0x0000000100063680
@property(nonatomic, readonly) struct CGRect jet_focusedFrame;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100063450
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100061ed4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100061eb4

@end
