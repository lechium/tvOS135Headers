//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC8AppStore11ArtworkView, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore15SmallLockupView : UIView
{
    MISSING_TYPE *artworkView;	// 8 = 0x8
    MISSING_TYPE *titleLabel;	// 16 = 0x10
    MISSING_TYPE *subtitleLabel;	// 24 = 0x18
    MISSING_TYPE *metrics;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000a0dc8
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC8AppStore11ArtworkView *accessibilityArtworkView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000a0c94
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000a0aa0
- (void)layoutSubviews;	// IMP=0x00000001000a0a74
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000a0850
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a0830

@end

