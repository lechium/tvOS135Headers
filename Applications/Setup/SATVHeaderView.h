//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface SATVHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIActivityIndicatorView *_activitiyIndicatorView;	// 24 = 0x18
    UIView *_activityIndicatorContainerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100091118
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activitiyIndicatorView; // @synthesize activitiyIndicatorView=_activitiyIndicatorView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)hideActivityIndicator;	// IMP=0x0000000100090fac
- (void)showActivityIndicator;	// IMP=0x0000000100090ed0
- (struct CGSize)_subtitleSizeForSize:(struct CGSize)arg1;	// IMP=0x0000000100090e4c
- (struct CGSize)_titleSizeForSize:(struct CGSize)arg1;	// IMP=0x0000000100090dc8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100090c70
- (id)viewForLastBaselineLayout;	// IMP=0x0000000100090c64
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000100090c58
- (void)layoutSubviews;	// IMP=0x00000001000909cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000903fc

@end

