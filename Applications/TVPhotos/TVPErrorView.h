//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TVPErrorView : UIView
{
    NSString *_errorTitle;	// 8 = 0x8
    NSString *_errorMessage;	// 16 = 0x10
    UILabel *_errorTitleLabel;	// 24 = 0x18
    UILabel *_errorMessageLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100006fd4
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100006eb8
- (void)layoutSubviews;	// IMP=0x0000000100006c88
- (void)_updateLabels;	// IMP=0x0000000100006b90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000684c

@end

