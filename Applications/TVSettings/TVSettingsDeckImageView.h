//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface TVSettingsDeckImageView : UIView
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

- (void).cxx_destruct;	// IMP=0x00000001000abf78
@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic, getter=isInOrder) _Bool inOrderParade; // @synthesize inOrderParade=_inOrderParade;
@property(nonatomic, getter=isShuffled) _Bool shuffledParade; // @synthesize shuffledParade=_shuffledParade;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (unsigned long long)_viewTypeForNumberOfImages:(unsigned long long)arg1;	// IMP=0x00000001000abe2c
- (unsigned long long)_paradeThreshold;	// IMP=0x00000001000abe0c
- (void)_displayPlaceholderView;	// IMP=0x00000001000abb48
- (void)_fadeToBlack;	// IMP=0x00000001000aba50
- (void)_dissolveToPendingView;	// IMP=0x00000001000ab610
- (void)setInOrder:(_Bool)arg1;	// IMP=0x00000001000ab534
- (void)setShuffled:(_Bool)arg1;	// IMP=0x00000001000ab458
- (void)resume;	// IMP=0x00000001000ab3f0
- (_Bool)isPaused;	// IMP=0x00000001000ab378
- (void)pause;	// IMP=0x00000001000ab310
- (void)_scrollingParadeViewReadyNotification:(id)arg1;	// IMP=0x00000001000aaf84
- (void)_paradeViewReadyNotification:(id)arg1;	// IMP=0x00000001000aaeac
- (void)_legacyCrossfadeViewReadyNotification:(id)arg1;	// IMP=0x00000001000aadd8
- (void)_crossfadeViewReadyNotification:(id)arg1;	// IMP=0x00000001000aad04
- (void)layoutSubviews;	// IMP=0x00000001000aac78
- (void)dealloc;	// IMP=0x00000001000aabdc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000aa9cc

@end
