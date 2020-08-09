//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString, TVPImageLoaderQueue;

@interface TVPParadeView : UIView <CAAnimationDelegate>
{
    _Bool _pausedForResignActive;	// 8 = 0x8
    _Bool _paused;	// 9 = 0x9
    _Bool _shuffled;	// 10 = 0xa
    _Bool _inOrder;	// 11 = 0xb
    NSArray *_imageProxies;	// 16 = 0x10
    TVPImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_shuffledImageProxies;	// 32 = 0x20
    NSArray *_positionKeyframes;	// 40 = 0x28
    NSArray *_depthKeyframes;	// 48 = 0x30
    NSArray *_transformKeyframes;	// 56 = 0x38
    struct CGRect _animationBounds;	// 64 = 0x40
    struct CGRect _maximumImageBounds;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010000dbfc
@property(retain, nonatomic) NSArray *transformKeyframes; // @synthesize transformKeyframes=_transformKeyframes;
@property(retain, nonatomic) NSArray *depthKeyframes; // @synthesize depthKeyframes=_depthKeyframes;
@property(retain, nonatomic) NSArray *positionKeyframes; // @synthesize positionKeyframes=_positionKeyframes;
@property(nonatomic) struct CGRect maximumImageBounds; // @synthesize maximumImageBounds=_maximumImageBounds;
@property(nonatomic) struct CGRect animationBounds; // @synthesize animationBounds=_animationBounds;
@property(copy, nonatomic) NSArray *shuffledImageProxies; // @synthesize shuffledImageProxies=_shuffledImageProxies;
@property(retain, nonatomic) TVPImageLoaderQueue *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic, getter=isInOrder) _Bool inOrder; // @synthesize inOrder=_inOrder;
@property(nonatomic, getter=isShuffled) _Bool shuffled; // @synthesize shuffled=_shuffled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (id)_sublayerWithAnimation:(id)arg1;	// IMP=0x000000010000d934
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010000d7b8
- (void)_stopAnimations;	// IMP=0x000000010000d664
- (void)_updateAnimationForLayer:(id)arg1 timeOffset:(double)arg2;	// IMP=0x000000010000cf88
- (void)_updateAnimations;	// IMP=0x000000010000cdfc
- (void)_updateKeyframes;	// IMP=0x000000010000cac8
- (id)_createLayerForImage:(struct CGImage *)arg1;	// IMP=0x000000010000ca3c
- (id)_imageProxiesToLoad;	// IMP=0x000000010000ca0c
- (long long)_maximumImageCount;	// IMP=0x000000010000ca04
- (_Bool)isPreviewPaused;	// IMP=0x000000010000c930
- (void)setPreviewPaused:(_Bool)arg1;	// IMP=0x000000010000c924
- (void)_applicationDidFinishSuspensionNotification:(id)arg1;	// IMP=0x000000010000c428
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000010000c3d4
- (void)didMoveToSuperview;	// IMP=0x000000010000c380
- (void)layoutSubviews;	// IMP=0x000000010000c2d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000c08c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
