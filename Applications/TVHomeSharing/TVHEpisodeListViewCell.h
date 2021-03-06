//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaItemListViewCell.h"

@class UIImageView, UILabel, UIView;

@interface TVHEpisodeListViewCell : TVHMediaItemListViewCell
{
    UIImageView *_playedStateBadgeImageView;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UIView *_progressBarView;	// 32 = 0x20
    UILabel *_delimiterLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001fb00
@property(retain, nonatomic) UILabel *delimiterLabel; // @synthesize delimiterLabel=_delimiterLabel;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIImageView *playedStateBadgeImageView; // @synthesize playedStateBadgeImageView=_playedStateBadgeImageView;
- (double)_imageViewXWithImageViewWidth:(double)arg1 contentViewWidth:(double)arg2 isRTL:(_Bool)arg3;	// IMP=0x000000010001f728
- (id)_imageView;	// IMP=0x000000010001f6c4
- (_Bool)_shouldShowImageView;	// IMP=0x000000010001f688
- (void)_showImageView:(_Bool)arg1;	// IMP=0x000000010001f5fc
- (void)_updateImageViewState;	// IMP=0x000000010001f5c4
- (void)_layoutSecondRowLabel:(id)arg1 withXPos:(double)arg2 yPos:(double)arg3 height:(double)arg4 width:(double)arg5 isRTL:(_Bool)arg6 contentViewWidth:(double)arg7;	// IMP=0x000000010001f518
- (void)layoutSubviews;	// IMP=0x000000010001eea8
- (void)_nowPlayingBarsVisibilityDidChange:(_Bool)arg1;	// IMP=0x000000010001ee9c
- (id)_nowPlayingBarsSuperview;	// IMP=0x000000010001ee48
- (void)_updateColors;	// IMP=0x000000010001ec50
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000010001e0dc

@end

