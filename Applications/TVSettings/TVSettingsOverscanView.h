//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TVSettingsOverscanView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UILabel *_actionSafeLabel;	// 24 = 0x18
    UILabel *_fullscreenLabel;	// 32 = 0x20
    NSString *_actionSafeText;	// 40 = 0x28
    NSString *_fullscreenText;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008e330
@property(copy, nonatomic) NSString *fullscreenText; // @synthesize fullscreenText=_fullscreenText;
@property(copy, nonatomic) NSString *actionSafeText; // @synthesize actionSafeText=_actionSafeText;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010008dfb4
- (void)layoutSubviews;	// IMP=0x000000010008dc40
@property(copy, nonatomic) NSString *instructionText;
@property(copy, nonatomic) NSString *titleText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008d698

@end

