//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SATVPasscodeDigitViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton;
@protocol SATVIPEntryViewDelegate;

@interface SATVIPEntryView : UIView <SATVPasscodeDigitViewDelegate>
{
    id <SATVIPEntryViewDelegate> _delegate;	// 8 = 0x8
    NSArray *_digitViews;	// 16 = 0x10
    NSArray *_dotViews;	// 24 = 0x18
    NSString *_ipString;	// 32 = 0x20
    UIButton *_doneButton;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100058c20
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSString *ipString; // @synthesize ipString=_ipString;
@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) NSArray *digitViews; // @synthesize digitViews=_digitViews;
@property(nonatomic) __weak id <SATVIPEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_octetForBlockIndex:(unsigned long long)arg1;	// IMP=0x0000000100058afc
- (void)_updateDigitLimits;	// IMP=0x000000010005896c
- (void)doneButton:(id)arg1;	// IMP=0x00000001000588c8
- (void)passcodeDigitView:(id)arg1 didChangeText:(id)arg2;	// IMP=0x0000000100058780
- (void)passcodeDigitViewDidResignFirstResponder:(id)arg1;	// IMP=0x000000010005877c
- (void)passcodeDigitViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100058778
@property(copy, nonatomic) NSString *IPAddress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100058400
- (void)layoutSubviews;	// IMP=0x000000010005807c
- (id)preferredFocusEnvironments;	// IMP=0x0000000100058058
- (_Bool)canBecomeFocused;	// IMP=0x0000000100057fb8
- (id)initWithIPAddress:(id)arg1;	// IMP=0x0000000100057b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

