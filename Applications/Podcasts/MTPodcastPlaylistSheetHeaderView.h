//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISwitch;

@interface MTPodcastPlaylistSheetHeaderView : UIView
{
    UIView *_separator;	// 8 = 0x8
    UISwitch *_switch;	// 16 = 0x10
    UILabel *_title;	// 24 = 0x18
    _Bool _on;	// 32 = 0x20
    CDUnknownBlockType _action;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000dab58
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void)buttonTapped:(id)arg1;	// IMP=0x00000001000daa60
- (void)layoutSubviews;	// IMP=0x00000001000da73c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000da430

@end

