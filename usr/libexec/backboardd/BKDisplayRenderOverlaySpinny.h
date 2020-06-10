//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayBootUIRenderOverlay.h"

@class BKImageSequence, CAKeyframeAnimation;

@interface BKDisplayRenderOverlaySpinny : BKDisplayBootUIRenderOverlay
{
    unsigned long long _background;	// 8 = 0x8
    BKImageSequence *_imageSequence;	// 16 = 0x10
    CAKeyframeAnimation *_animation;	// 24 = 0x18
}

+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x0000000100006434
- (void).cxx_destruct;	// IMP=0x00000001000063f4
@property(nonatomic) unsigned long long background; // @synthesize background=_background;
- (id)_assetPrefix;	// IMP=0x00000001000063a0
- (_Bool)_useLightBackground;	// IMP=0x0000000100006338
- (void)_unloadSpinnyImageSequence;	// IMP=0x0000000100006278
- (id)_spinnyImageSequence;	// IMP=0x00000001000060fc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100006084
- (void)_setScale:(double)arg1;	// IMP=0x0000000100005fc4
- (void)_cleanUpContentLayer;	// IMP=0x0000000100005f70
- (id)_prepareContentLayerForPresentation:(id)arg1;	// IMP=0x0000000100005e1c
- (void)_stopAnimating;	// IMP=0x0000000100005e18
- (void)_startAnimating;	// IMP=0x0000000100005cdc
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0000000100005c74

@end
