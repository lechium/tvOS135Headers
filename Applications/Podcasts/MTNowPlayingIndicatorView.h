//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor;

@interface MTNowPlayingIndicatorView : UIControl
{
    NSMutableArray *_levelViews;	// 8 = 0x8
    _Bool bufferingShouldDisplayAsPaused;	// 16 = 0x10
    _Bool _showsLevelGutters;	// 17 = 0x11
    double _interLevelSpacing;	// 24 = 0x18
    double _levelCornerRadius;	// 32 = 0x20
    double _levelWidth;	// 40 = 0x28
    double _maximumLevelHeight;	// 48 = 0x30
    double _minimumLevelHeight;	// 56 = 0x38
    long long _numberOfLevels;	// 64 = 0x40
    long long _playbackState;	// 72 = 0x48
    long long _bounceStyle;	// 80 = 0x50
    UIColor *_levelGuttersColor;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001001d7498
@property(retain, nonatomic) UIColor *levelGuttersColor; // @synthesize levelGuttersColor=_levelGuttersColor;
@property(nonatomic) _Bool showsLevelGutters; // @synthesize showsLevelGutters=_showsLevelGutters;
@property(nonatomic) long long bounceStyle; // @synthesize bounceStyle=_bounceStyle;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) long long numberOfLevels; // @synthesize numberOfLevels=_numberOfLevels;
@property(nonatomic) double minimumLevelHeight; // @synthesize minimumLevelHeight=_minimumLevelHeight;
@property(nonatomic) double maximumLevelHeight; // @synthesize maximumLevelHeight=_maximumLevelHeight;
@property(nonatomic) double levelWidth; // @synthesize levelWidth=_levelWidth;
@property(nonatomic) double levelCornerRadius; // @synthesize levelCornerRadius=_levelCornerRadius;
@property(nonatomic) double interLevelSpacing; // @synthesize interLevelSpacing=_interLevelSpacing;
- (_Bool)canBecomeFocused;	// IMP=0x00000001001d73d0
- (double)_fixedSeedValueForBarIndex:(unsigned long long)arg1;	// IMP=0x00000001001d73ac
- (double)_randomSeedValueForBar;	// IMP=0x00000001001d7374
- (double)_seedValueForBarIndex:(unsigned long long)arg1;	// IMP=0x00000001001d7318
- (void)_updateLevelAnimations;	// IMP=0x00000001001d64c4
- (void)_reloadLevelViews;	// IMP=0x00000001001d61d4
- (void)_bufferTimerFired;	// IMP=0x00000001001d6110
- (void)_removeAllAnimations:(_Bool)arg1;	// IMP=0x00000001001d5e84
- (void)tintColorDidChange;	// IMP=0x00000001001d5cf4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001d5c90
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001001d5b44
- (void)layoutSubviews;	// IMP=0x00000001001d5954
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001d580c

@end

