//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHListViewCell.h"

@class TVHKMediaEntityIdentifier, TVHMediaItemTitleView, TVHNowPlayingBarsView, UIImageView, UILabel;

@interface TVHMediaItemListViewCell : TVHListViewCell
{
    TVHKMediaEntityIdentifier *_mediaEntityIdentifier;	// 8 = 0x8
    TVHNowPlayingBarsView *_nowPlayingBarsView;	// 16 = 0x10
    TVHMediaItemTitleView *_titleView;	// 24 = 0x18
    UILabel *_durationLabel;	// 32 = 0x20
    UIImageView *_thumbnailImageView;	// 40 = 0x28
}

+ (id)_labelWithExistingLabel:(id)arg1;	// IMP=0x0000000100036130
- (void).cxx_destruct;	// IMP=0x0000000100036be8
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) TVHMediaItemTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TVHNowPlayingBarsView *nowPlayingBarsView; // @synthesize nowPlayingBarsView=_nowPlayingBarsView;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *mediaEntityIdentifier; // @synthesize mediaEntityIdentifier=_mediaEntityIdentifier;
- (void)_showNowPlayingBars:(_Bool)arg1;	// IMP=0x0000000100036a14
- (struct CGRect)_nowPlayingBarsFrameWithSuperview:(id)arg1;	// IMP=0x0000000100036958
- (struct CGRect)_nowPlayingBarsFrame;	// IMP=0x0000000100036940
- (void)_updateNowPlayingBars;	// IMP=0x0000000100036750
- (void)_stopObservingPlayer;	// IMP=0x0000000100036700
- (void)_startObservingPlayer;	// IMP=0x00000001000365f4
- (void)_handlePlayerPlaybackStateDidChange:(id)arg1;	// IMP=0x00000001000365e8
- (void)_handlePlayerCurrentMediaItemDidChange:(id)arg1;	// IMP=0x00000001000365dc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100036510
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100036384
- (void)prepareForReuse;	// IMP=0x00000001000362fc
- (void)layoutSubviews;	// IMP=0x0000000100036244
- (void)didMoveToSuperview;	// IMP=0x00000001000361f4
- (void)_nowPlayingBarsVisibilityDidChange:(_Bool)arg1;	// IMP=0x00000001000361f0
- (void)_updateColors;	// IMP=0x00000001000361ec
- (id)_nowPlayingBarsSuperview;	// IMP=0x0000000100036198
- (void)dealloc;	// IMP=0x0000000100035dd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100035d9c

@end

