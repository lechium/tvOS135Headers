//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TVPMusicNowPlayingBackgroundProvider-Protocol.h"

@class MISSING_TYPE, UIImage;

@interface TVMusicNowPlayingArtworkVisualizerView : UIView <TVPMusicNowPlayingBackgroundProvider>
{
    MISSING_TYPE *image;	// 8 = 0x8
    MISSING_TYPE *visualizer;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x00000001000d3274
- (void).cxx_destruct;	// IMP=0x00000001000d38e4
- (void)layoutSubviews;	// IMP=0x00000001000d3888
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000d36f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000d36d0
@property(nonatomic, readonly) UIView *view;
@property(nonatomic, retain) UIImage *image; // @synthesize image;
- (_Bool)isBlurDisabled;	// IMP=0x00000001000d31e8

// Remaining properties
@property(nonatomic, readonly) _Bool blurDisabled;

@end

