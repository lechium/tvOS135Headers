//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTableViewCell.h"

@class NSString, UISwitch;

@interface MTSwitchCell : MTTableViewCell
{
    CDUnknownBlockType _toggleChanged;	// 24 = 0x18
    NSString *_artworkKey;	// 32 = 0x20
    unsigned long long _maximumNumberOfTextLines;	// 40 = 0x28
    UISwitch *_toggle;	// 48 = 0x30
}

+ (id)titleFont;	// IMP=0x0000000100032990
- (void).cxx_destruct;	// IMP=0x0000000100032a60
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
@property(nonatomic) unsigned long long maximumNumberOfTextLines; // @synthesize maximumNumberOfTextLines=_maximumNumberOfTextLines;
@property(retain, nonatomic) NSString *artworkKey; // @synthesize artworkKey=_artworkKey;
@property(copy, nonatomic) CDUnknownBlockType toggleChanged; // @synthesize toggleChanged=_toggleChanged;
- (void)toggleChanged:(id)arg1;	// IMP=0x00000001000329b0
- (_Bool)_loadArtworkFromMemoryCache;	// IMP=0x000000010003289c
- (void)_asyncFetchArtworkDidLoadImage:(id)arg1 forArtworkKey:(id)arg2;	// IMP=0x00000001000327c4
- (void)_fetchArtworkInBackground;	// IMP=0x0000000100032454
- (void)_fetchArtwork;	// IMP=0x0000000100032370
- (void)_clearAndHideArtworkView;	// IMP=0x0000000100032318
- (id)_artworkView;	// IMP=0x000000010003230c
- (_Bool)_showsArtwork;	// IMP=0x00000001000322dc
- (void)_layoutContentViewSubviews;	// IMP=0x0000000100031f80
- (void)_updateSeparatorInsets;	// IMP=0x0000000100031e9c
@property(readonly, nonatomic) _Bool customiseLabelAndSeparatorInsets;
- (void)setupCell;	// IMP=0x0000000100031d24
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100031ca4
- (void)layoutSubviews;	// IMP=0x0000000100031c48
- (void)toggleOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100031ac4
- (void)toggleOn:(_Bool)arg1;	// IMP=0x0000000100031ab4

@end

