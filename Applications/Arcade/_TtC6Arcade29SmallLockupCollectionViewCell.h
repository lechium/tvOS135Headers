//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade22BaseCollectionViewCell.h"

@class MISSING_TYPE, _TtC6Arcade16DynamicTypeLabel;

@interface _TtC6Arcade29SmallLockupCollectionViewCell : _TtC6Arcade22BaseCollectionViewCell
{
    MISSING_TYPE *ordinalLabel;	// 176 = 0xb0
    MISSING_TYPE *titleLabel;	// 184 = 0xb8
    MISSING_TYPE *subtitleLabel;	// 192 = 0xc0
    MISSING_TYPE *priceLabel;	// 200 = 0xc8
    MISSING_TYPE *metrics;	// 208 = 0xd0
    MISSING_TYPE *isShowingSeeAll;	// 664 = 0x298
    MISSING_TYPE *artworkView;	// 672 = 0x2a0
    MISSING_TYPE *artworkBorderLayer;	// 680 = 0x2a8
}

- (void).cxx_destruct;	// IMP=0x00000001000b1034
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityPriceLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityOrdinalLabel;
- (void)prepareForReuse;	// IMP=0x00000001000b0f18
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000b0ca0
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000001000b0bbc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000b07e0
- (void)layoutSubviews;	// IMP=0x00000001000b0688
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b01fc

@end

