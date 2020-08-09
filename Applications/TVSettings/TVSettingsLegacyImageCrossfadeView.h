//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView, _TVSettingsImageLoaderQueue;

@interface TVSettingsLegacyImageCrossfadeView : UIView
{
    NSArray *_imageProxies;	// 8 = 0x8
    double _crossfadePeriod;	// 16 = 0x10
    double _crossfadeDuration;	// 24 = 0x18
    double _rotationAngleDegrees;	// 32 = 0x20
    _TVSettingsImageLoaderQueue *_loaderQueue;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    NSTimer *_crossfadeTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010001a398
@property(retain, nonatomic) NSTimer *crossfadeTimer; // @synthesize crossfadeTimer=_crossfadeTimer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) _TVSettingsImageLoaderQueue *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic) double rotationAngleDegrees; // @synthesize rotationAngleDegrees=_rotationAngleDegrees;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x000000010001a0ec
- (void)_loadNextImage:(id)arg1;	// IMP=0x000000010001a044
- (void)_startTimer;	// IMP=0x0000000100019f8c
- (struct CGSize)_maximumImageSize;	// IMP=0x0000000100019f4c
- (void)layoutSubviews;	// IMP=0x000000010001994c
- (void)didMoveToSuperview;	// IMP=0x00000001000198e4
- (void)dealloc;	// IMP=0x000000010001988c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000197b8

@end
