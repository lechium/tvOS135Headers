//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView, _TVImageLoaderQueue;

@interface TVImageCrossfadeView : UIView
{
    NSTimer *_crossfadeTimer;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    _TVImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_artworkCatalogs;	// 32 = 0x20
    double _crossfadePeriod;	// 40 = 0x28
    double _crossfadeDuration;	// 48 = 0x30
    struct UIEdgeInsets _padding;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010009666c
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x0000000100096414
- (void)_loadNextImage:(id)arg1;	// IMP=0x00000001000963b8
- (void)_startTimer;	// IMP=0x0000000100096300
- (void)layoutSubviews;	// IMP=0x0000000100095dcc
- (void)didMoveToSuperview;	// IMP=0x0000000100095d64
- (void)dealloc;	// IMP=0x0000000100095d0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100095c34

@end

