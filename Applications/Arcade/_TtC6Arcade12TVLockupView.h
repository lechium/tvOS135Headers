//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC6Arcade16DynamicTypeLabel;

@interface _TtC6Arcade12TVLockupView : UIView
{
    MISSING_TYPE *artworkView;	// 8 = 0x8
    MISSING_TYPE *titleLabel;	// 16 = 0x10
    MISSING_TYPE *subtitleLabel;	// 24 = 0x18
    MISSING_TYPE *metrics;	// 32 = 0x20
    MISSING_TYPE *state;	// 168 = 0xa8
    MISSING_TYPE *pillOverlayView;	// 176 = 0xb0
    MISSING_TYPE *pillOverlayMetrics;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000010013813c
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityTitleLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100137f58
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100137b0c
- (void)layoutSubviews;	// IMP=0x0000000100137ae0
@property(nonatomic, readonly) struct CGRect jet_focusedFrame;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001377bc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010013779c

@end

