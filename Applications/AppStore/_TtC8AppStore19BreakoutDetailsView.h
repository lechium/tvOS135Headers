//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore17DynamicTypeButton;

@interface _TtC8AppStore19BreakoutDetailsView : UIView
{
    MISSING_TYPE *wordmarkView;	// 8 = 0x8
    MISSING_TYPE *badgeLabel;	// 16 = 0x10
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *descriptionLabel;	// 32 = 0x20
    MISSING_TYPE *backgroundMaterialView;	// 40 = 0x28
    MISSING_TYPE *callToActionButton;	// 48 = 0x30
    MISSING_TYPE *offerButton;	// 56 = 0x38
    MISSING_TYPE *config;	// 64 = 0x40
    MISSING_TYPE *detailTextAlignment;	// 321 = 0x141
    MISSING_TYPE *detailBackgroundStyle;	// 322 = 0x142
    MISSING_TYPE *badge;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x00000001000d5ca8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000d5c48
@property(nonatomic, readonly) _TtC8AppStore17DynamicTypeButton *accessibilityCallToActionButton;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityDescriptionLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityBadgeLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000d5b68
- (void)layoutSubviews;	// IMP=0x00000001000d57d4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000d5240
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000001000d519c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000d4ad4

@end
