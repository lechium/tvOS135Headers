//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SATVHeaderView;

@interface SATVLanguageHeaderView : UIView
{
    SATVHeaderView *_visibleHeaderView;	// 8 = 0x8
    SATVHeaderView *_hiddenHeaderView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005c994
@property(retain, nonatomic) SATVHeaderView *hiddenHeaderView; // @synthesize hiddenHeaderView=_hiddenHeaderView;
@property(retain, nonatomic) SATVHeaderView *visibleHeaderView; // @synthesize visibleHeaderView=_visibleHeaderView;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 languageCode:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000010005be7c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010005be10
- (void)layoutSubviews;	// IMP=0x000000010005bd18
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005bbd4

@end

