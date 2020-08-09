//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SATVActivityIndicatorViewController, SATVLoginView, TVSStateMachine, UISystemInputViewController;

@interface SATVCloudLoginViewController : UIViewController
{
    NSString *_organizationName;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_customPrompt;	// 32 = 0x20
    TVSStateMachine *_loginStateMachine;	// 40 = 0x28
    UISystemInputViewController *_systemInputViewController;	// 48 = 0x30
    SATVLoginView *_loginView;	// 56 = 0x38
    SATVActivityIndicatorViewController *_activityIndicatorViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100057ab0
@property(retain, nonatomic) SATVActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) TVSStateMachine *loginStateMachine; // @synthesize loginStateMachine=_loginStateMachine;
@property(retain, nonatomic) NSString *customPrompt; // @synthesize customPrompt=_customPrompt;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
- (void)_authenticateWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100057944
- (void)_crossFadeLoginViewWithChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000100057768
- (void)_setUsernamePlaceholder;	// IMP=0x0000000100057688
- (void)_setPasswordPlaceholder;	// IMP=0x00000001000575a8
- (void)_showPasswordScreen;	// IMP=0x00000001000571c0
- (void)_showUsernameScreen;	// IMP=0x0000000100056cb8
- (void)_reloadForStateChange;	// IMP=0x0000000100056b54
- (void)_setTextFieldText:(id)arg1;	// IMP=0x0000000100056ac4
- (void)_clearTextField;	// IMP=0x0000000100056a5c
- (id)_textFieldText;	// IMP=0x00000001000569c8
- (void)_hideLoginView;	// IMP=0x0000000100056914
- (void)_hideActivityIndicator;	// IMP=0x0000000100056790
- (void)_showActivityIndicator;	// IMP=0x000000010005667c
- (void)_updatePreferredFocusedViewForGridLayoutGuide;	// IMP=0x00000001000564c0
- (void)_textDidChange;	// IMP=0x00000001000563b8
- (void)_menuSelected;	// IMP=0x0000000100056370
- (void)_continueButtonSelected;	// IMP=0x0000000100056328
- (void)_setControlTargets;	// IMP=0x00000001000562ac
- (void)_setViewsForInitialState;	// IMP=0x0000000100055d4c
- (void)_registerStateMachineEvents;	// IMP=0x000000010005589c
- (void)_setupSystemInputViewController;	// IMP=0x00000001000556e8
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x0000000100055638
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000100055630
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x0000000100055628
- (id)preferredFocusEnvironments;	// IMP=0x00000001000555b0
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000554b8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000553e4
- (void)viewDidLoad;	// IMP=0x000000010005511c
- (void)loadView;	// IMP=0x0000000100054f74
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100054ee4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100054e14

@end
