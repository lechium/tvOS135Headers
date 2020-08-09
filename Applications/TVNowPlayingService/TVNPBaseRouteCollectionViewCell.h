//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, NSNumber, NSString, TVNPNowPlayingProgressView, TVNPNowPlayingSliderView, TVNPRoutingMusicBarsView, UIImageView, UILabel, UILayoutGuide, UIView, _UIFloatingContentView;

@interface TVNPBaseRouteCollectionViewCell : UICollectionViewCell
{
    _Bool _isFocused;	// 8 = 0x8
    _Bool _allowsGrouping;	// 9 = 0x9
    _Bool _displayAsSelected;	// 10 = 0xa
    _Bool _showingVolumeSlider;	// 11 = 0xb
    _Bool _enabled;	// 12 = 0xc
    NSString *_titleText;	// 16 = 0x10
    NSString *_subtitleText;	// 24 = 0x18
    unsigned long long _deviceType;	// 32 = 0x20
    unsigned long long _musicBarState;	// 40 = 0x28
    NSNumber *_volumeLevel;	// 48 = 0x30
    _UIFloatingContentView *_floatingContentView;	// 56 = 0x38
    UIView *_backgroundColorView;	// 64 = 0x40
    UIImageView *_iconView;	// 72 = 0x48
    UIImageView *_checkmarkView;	// 80 = 0x50
    TVNPRoutingMusicBarsView *_musicBarsView;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    UILabel *_subtitleLabel;	// 104 = 0x68
    TVNPNowPlayingProgressView *_volumeProgressView;	// 112 = 0x70
    TVNPNowPlayingSliderView *_volumeSliderView;	// 120 = 0x78
    UILayoutGuide *_layoutGuide;	// 128 = 0x80
    NSMutableArray *_volatileContraints;	// 136 = 0x88
}

+ (id)_volumeImage:(_Bool)arg1;	// IMP=0x0000000100010ab4
+ (id)_iconImageForDeviceType:(unsigned long long)arg1 focused:(_Bool)arg2;	// IMP=0x000000010001073c
+ (void)_configureFloatingContentViewAppearance;	// IMP=0x000000010000f104
- (void).cxx_destruct;	// IMP=0x0000000100010d00
@property(readonly, nonatomic) NSMutableArray *volatileContraints; // @synthesize volatileContraints=_volatileContraints;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isShowingVolumeSlider) _Bool showingVolumeSlider; // @synthesize showingVolumeSlider=_showingVolumeSlider;
@property(readonly, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(readonly, nonatomic) TVNPNowPlayingSliderView *volumeSliderView; // @synthesize volumeSliderView=_volumeSliderView;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *volumeProgressView; // @synthesize volumeProgressView=_volumeProgressView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) TVNPRoutingMusicBarsView *musicBarsView; // @synthesize musicBarsView=_musicBarsView;
@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) unsigned long long musicBarState; // @synthesize musicBarState=_musicBarState;
@property(nonatomic) _Bool displayAsSelected; // @synthesize displayAsSelected=_displayAsSelected;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool allowsGrouping; // @synthesize allowsGrouping=_allowsGrouping;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)_checkmarkImage:(_Bool)arg1 focused:(_Bool)arg2;	// IMP=0x00000001000108ac
- (void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100010164
- (unsigned long long)_controlStateForCell;	// IMP=0x00000001000100cc
- (void)_addInitialConstraints;	// IMP=0x000000010000f260
- (void)volumeSliderValueChanged:(id)arg1;	// IMP=0x000000010000f100
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000010000ead4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000e9e8
- (void)updateConstraints;	// IMP=0x000000010000e1c0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010000e0e4
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010000e0e0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000dff4
- (void)prepareForReuse;	// IMP=0x000000010000df70
- (id)preferredFocusEnvironments;	// IMP=0x000000010000dec8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000d804

@end

