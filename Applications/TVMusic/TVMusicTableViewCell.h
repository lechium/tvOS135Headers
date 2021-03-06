//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVTableViewCell.h"

@class UIImage, UIView;

@interface TVMusicTableViewCell : TVTableViewCell
{
    UIImage *_accessoryImage;	// 8 = 0x8
    UIView *_badgeView;	// 16 = 0x10
    long long _placeholderAssetType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100023954
@property(nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
- (void)_updatePlaceholderImageIfNeeded;	// IMP=0x00000001000238d0
- (void)_setAccessoryViewColor;	// IMP=0x0000000100023854
- (void)_setAccessoryViewWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2;	// IMP=0x00000001000236e4
- (_Bool)_isFocusedInDarkMode;	// IMP=0x000000010002366c
- (id)_focusedInDarkModeTextLabelColor;	// IMP=0x00000001000235f0
- (id)_defaultDetailTextLabelColor;	// IMP=0x00000001000235dc
- (id)_defaultTextLabelColor;	// IMP=0x00000001000235c8
- (id)_detailTextLabelColor;	// IMP=0x0000000100023574
- (id)_textLabelColor;	// IMP=0x0000000100023520
- (void)_updateColorsWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2;	// IMP=0x0000000100023438
- (void)_updateColors;	// IMP=0x00000001000233bc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000232f0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100023278
- (void)setAccessoryView:(id)arg1;	// IMP=0x0000000100023178
- (void)layoutSubviews;	// IMP=0x0000000100022ca4

@end

