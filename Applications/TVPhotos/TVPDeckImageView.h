//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface TVPDeckImageView : UIView
{
    UIView *_pendingDisplayView;	// 8 = 0x8
    unsigned long long _pendingViewType;	// 16 = 0x10
    UIView *_displayView;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    double _imageLoadTimeout;	// 48 = 0x30
    _Bool _shuffledParade;	// 56 = 0x38
    _Bool _inOrderParade;	// 57 = 0x39
    NSArray *_imageProxies;	// 64 = 0x40
    UIImage *_placeholderImage;	// 72 = 0x48
    unsigned long long _deckViewParadeType;	// 80 = 0x50
    double _cycleInterval;	// 88 = 0x58
    double _transitionDuration;	// 96 = 0x60
    double _newDataTransitionDuration;	// 104 = 0x68
    struct CGRect _imageFrame;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100089020
@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic, getter=isInOrder) _Bool inOrderParade; // @synthesize inOrderParade=_inOrderParade;
@property(nonatomic, getter=isShuffled) _Bool shuffledParade; // @synthesize shuffledParade=_shuffledParade;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (unsigned long long)_viewTypeForNumberOfImages:(long long)arg1;	// IMP=0x0000000100088ef0
- (unsigned long long)_paradeThreshold;	// IMP=0x0000000100088ee8
- (void)_displayPlaceholderView;	// IMP=0x0000000100088c64
- (void)_fadeToBlack;	// IMP=0x0000000100088b6c
- (void)_dissolveToPendingView;	// IMP=0x0000000100088704
- (void)setInOrder:(_Bool)arg1;	// IMP=0x0000000100088628
- (void)setShuffled:(_Bool)arg1;	// IMP=0x000000010008854c
- (void)resume;	// IMP=0x00000001000884e4
- (_Bool)isPaused;	// IMP=0x000000010008846c
- (void)pause;	// IMP=0x0000000100088404
- (void)_scrollingParadeViewReadyNotification:(id)arg1;	// IMP=0x00000001000880a8
- (void)_paradeViewReadyNotification:(id)arg1;	// IMP=0x0000000100087fd0
- (void)_crossfadeViewReadyNotification:(id)arg1;	// IMP=0x0000000100087efc
- (void)layoutSubviews;	// IMP=0x0000000100087e70
- (void)dealloc;	// IMP=0x0000000100087e0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100087c40

@end
