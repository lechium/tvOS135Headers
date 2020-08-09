//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAFilter, NSString, TVILocationLabelGradientLayer, UILabel;

@interface TVILocationLabelView : UIView
{
    NSString *_titleLabelText;	// 8 = 0x8
    NSString *_subtitleLabelText;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    CAFilter *_subtitleEdrFilter;	// 40 = 0x28
    TVILocationLabelGradientLayer *_gradientLayer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100013bb0
@property(retain, nonatomic) TVILocationLabelGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(readonly, nonatomic) CAFilter *subtitleEdrFilter; // @synthesize subtitleEdrFilter=_subtitleEdrFilter;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subtitleLabelText; // @synthesize subtitleLabelText=_subtitleLabelText;
@property(retain, nonatomic) NSString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
- (void)_setText:(id)arg1 onLabel:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000138bc
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100013624
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100013618
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001360c
- (void)setSubtitleLabelText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100013558
- (void)setTitleLabelText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000134a4
- (void)layoutSubviews;	// IMP=0x0000000100013438
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100012db0

@end
