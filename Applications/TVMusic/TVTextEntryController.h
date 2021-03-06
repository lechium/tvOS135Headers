//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISystemInputViewControllerDelegate-Protocol.h"

@class NSString, UILabel, UISystemInputViewController, UITextField, UIView, _TVTextEntryTextField;
@protocol TVTextEntryControllerDelegate;

@interface TVTextEntryController : UIViewController <UISystemInputViewControllerDelegate>
{
    _TVTextEntryTextField *_textField;	// 8 = 0x8
    UIView *_topAccessoryView;	// 16 = 0x10
    UIView *_bottomAccessoryView;	// 24 = 0x18
    _Bool _isTouchEnabled;	// 32 = 0x20
    UIView *_preferredFocusedView;	// 40 = 0x28
    _Bool _hideAccessoryViews;	// 48 = 0x30
    id <TVTextEntryControllerDelegate> _delegate;	// 56 = 0x38
    UILabel *_textFieldHeaderLabel;	// 64 = 0x40
    UISystemInputViewController *_systemInputViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000a64d8
@property(readonly, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(readonly, nonatomic) UILabel *textFieldHeaderLabel; // @synthesize textFieldHeaderLabel=_textFieldHeaderLabel;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TVTextEntryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool textFieldAllowsFocus;
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000001000a63c0
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;	// IMP=0x00000001000a63b0
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(_Bool)arg2;	// IMP=0x00000001000a6318
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x00000001000a6310
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x00000001000a6308
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000a5d7c
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000001000a5d3c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000a5c40
- (id)preferredFocusEnvironments;	// IMP=0x00000001000a5b70
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000001000a5b10
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000a5ab4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a5a58
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000a5a00
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000001000a5818
- (void)viewDidLoad;	// IMP=0x00000001000a56c8
- (void)loadView;	// IMP=0x00000001000a55f0
- (void)dealloc;	// IMP=0x00000001000a5348
- (id)init;	// IMP=0x00000001000a5334
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a50ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

