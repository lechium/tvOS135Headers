/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AKAppleIDAuthenticationInAppContext, UIStackView, UIButton, UIView;

@interface AKBasicLoginOptionsViewController : UIViewController {

	/*^block*/id _createIDAction;
	/*^block*/id _forgotAction;
	AKAppleIDAuthenticationInAppContext* _context;
	UIStackView* _optionsStack;
	UIButton* _forgotButton;
	UIButton* _createButton;
	UIView* _privacyView;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) UIStackView * optionsStack;                                                  //@synthesize optionsStack=_optionsStack - In the implementation block
@property (retain) UIButton * forgotButton;                                                     //@synthesize forgotButton=_forgotButton - In the implementation block
@property (retain) UIButton * createButton;                                                     //@synthesize createButton=_createButton - In the implementation block
@property (retain) UIView * privacyView;                                                        //@synthesize privacyView=_privacyView - In the implementation block
@property (nonatomic,copy) id createIDAction;                                                   //@synthesize createIDAction=_createIDAction - In the implementation block
@property (nonatomic,copy) id forgotAction;                                                     //@synthesize forgotAction=_forgotAction - In the implementation block
-(id)init;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)viewDidLoad;
-(UIButton *)createButton;
-(UIButton *)forgotButton;
-(void)_configureButtonForFontAdjustment:(id)arg1 ;
-(void)_configureOptionsStack;
-(id)forgotAction;
-(id)createIDAction;
-(UIView *)privacyView;
-(UIStackView *)optionsStack;
-(void)forgotPressed:(id)arg1 ;
-(void)createPressed:(id)arg1 ;
-(void)_addPrivacyView:(id)arg1 ;
-(void)setCreateIDAction:(id)arg1 ;
-(void)setForgotAction:(id)arg1 ;
-(void)setOptionsStack:(UIStackView *)arg1 ;
-(void)setForgotButton:(UIButton *)arg1 ;
-(void)setCreateButton:(UIButton *)arg1 ;
-(void)setPrivacyView:(UIView *)arg1 ;
@end

