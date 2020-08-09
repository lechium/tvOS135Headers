//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SATVButton, SATVHeaderView, UILabel;
@protocol SATVChooseSetupMethodViewDelegate;

@interface SATVChooseSetupMethodView : UIView
{
    NSString *_automaticSetupFooterText;	// 8 = 0x8
    NSString *_manualSetupFooterText;	// 16 = 0x10
    id <SATVChooseSetupMethodViewDelegate> _delegate;	// 24 = 0x18
    SATVHeaderView *_headerView;	// 32 = 0x20
    SATVButton *_automaticSetupButton;	// 40 = 0x28
    SATVButton *_manualSetupButton;	// 48 = 0x30
    UILabel *_footerLabel;	// 56 = 0x38
    UIView *_lastPreferredFocusedButton;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000ff80
@property(retain, nonatomic) UIView *lastPreferredFocusedButton; // @synthesize lastPreferredFocusedButton=_lastPreferredFocusedButton;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) SATVButton *manualSetupButton; // @synthesize manualSetupButton=_manualSetupButton;
@property(retain, nonatomic) SATVButton *automaticSetupButton; // @synthesize automaticSetupButton=_automaticSetupButton;
@property(retain, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <SATVChooseSetupMethodViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *manualSetupFooterText; // @synthesize manualSetupFooterText=_manualSetupFooterText;
@property(copy, nonatomic) NSString *automaticSetupFooterText; // @synthesize automaticSetupFooterText=_automaticSetupFooterText;
- (void)_manualSetupButtonSelected;	// IMP=0x000000010000fe24
- (void)_automaticSetupButtonSelected;	// IMP=0x000000010000fddc
- (struct CGSize)_computeFramesForBounds:(struct CGRect)arg1 forCalculationOnly:(_Bool)arg2;	// IMP=0x000000010000f90c
- (void)_updateFooterText;	// IMP=0x000000010000f7bc
@property(copy, nonatomic) NSString *manualSetupButtonTitle;
@property(copy, nonatomic) NSString *automaticSetupButtonTitle;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
- (id)preferredFocusEnvironments;	// IMP=0x000000010000f20c
- (_Bool)canBecomeFocused;	// IMP=0x000000010000f188
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000f054
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010000f030
- (void)layoutSubviews;	// IMP=0x000000010000eff8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000eb78

@end

