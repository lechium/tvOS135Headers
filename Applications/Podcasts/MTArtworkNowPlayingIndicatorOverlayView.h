//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTNowPlayingIndicatorView, MTVibrantImageView, UIImage;

@interface MTArtworkNowPlayingIndicatorOverlayView : UIView
{
    UIImage *_artworkImage;	// 8 = 0x8
    MTVibrantImageView *_vibrantImageView;	// 16 = 0x10
    MTNowPlayingIndicatorView *_barsView;	// 24 = 0x18
    UIView *_dimmingView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000f8918
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(readonly, nonatomic) MTVibrantImageView *vibrantImageView; // @synthesize vibrantImageView=_vibrantImageView;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void)_updateBarMetricsForArtworkSize:(struct CGSize)arg1;	// IMP=0x00000001000f866c
- (id)_blurredArtworkForArtwork:(id)arg1;	// IMP=0x00000001000f8578
- (_Bool)canBecomeFocused;	// IMP=0x00000001000f8570
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000f8558
- (void)layoutSubviews;	// IMP=0x00000001000f8490
@property(readonly, nonatomic) _Bool playing;
@property(nonatomic) long long playbackState;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000f8148

@end

