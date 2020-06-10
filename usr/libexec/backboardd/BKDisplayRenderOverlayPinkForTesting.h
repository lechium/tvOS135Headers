//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

@class CAContext, CALayer;

@interface BKDisplayRenderOverlayPinkForTesting : BKDisplayRenderOverlay
{
    CAContext *_context;	// 8 = 0x8
    CALayer *_layer;	// 16 = 0x10
}

+ (void)doItHide;	// IMP=0x000000010004eb58
+ (void)doItShow;	// IMP=0x000000010004ea80
+ (void)doItShowKernel;	// IMP=0x000000010004e958
+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x000000010004e880
- (void).cxx_destruct;	// IMP=0x000000010004e840
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x000000010004e50c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010004e420
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x000000010004e3bc
- (void)_freeze;	// IMP=0x000000010004e3b8
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x000000010004df2c
- (_Bool)disablesDisplayUpdates;	// IMP=0x000000010004df24
- (void)dealloc;	// IMP=0x000000010004decc
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010004de70

@end
