/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMSignInDialogCustom.h>
#import <libobjc.A.dylib/ACMSignInDialogSimpleProtocol.h>

@class UIImage, UIImageView, NSString, UIView, UIToolbar, NSArray, UIColor;

@interface ACMSignInDialogSimple_Modern : ACMSignInDialogCustom <ACMSignInDialogSimpleProtocol> {

	UIImage* _logo;
	UIImageView* _logoView;
	NSString* _accountNameFieldPlaceholder;
	UIView* _container;
	UIToolbar* _toolbar;
	NSArray* _burButtonItems;

}

@property (nonatomic,readonly) UIImage * iForgotImage; 
@property (nonatomic,retain) UIToolbar * toolbar;                                 //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                              //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) NSArray * burButtonItems;                            //@synthesize burButtonItems=_burButtonItems - In the implementation block
@property (nonatomic,retain) UIView * container;                                  //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) double widgetConstraintMultiplier; 
@property (nonatomic,readonly) double widgetConstraintConstant; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (nonatomic,retain) UIImage * logo;                                      //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder;              //@synthesize accountNameFieldPlaceholder=_accountNameFieldPlaceholder - In the implementation block
-(void)dealloc;
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(void)loadView;
-(id)tintColor;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIToolbar *)toolbar;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)passwordField;
-(id)darkTextColor;
-(BOOL)prefersStatusBarHidden;
-(id)widget;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
-(id)accountNameField;
-(void)checkFields;
-(BOOL)canSignIn;
-(BOOL)standardViewController;
-(void)setAccountNameFieldPlaceholder:(NSString *)arg1 ;
-(BOOL)userNameFieldEditable;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)accountNameFieldPlaceholder;
-(Class)widgetClass;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setBurButtonItems:(NSArray *)arg1 ;
-(UIImage *)iForgotImage;
-(id)createCancelItem;
-(id)createIForgotItem;
-(NSArray *)burButtonItems;
-(void)buildConstraints;
-(void)buildWidgetContentGroupHorizontalConstraints;
-(void)buildWidgetContentGroupVerticalConstraints;
-(double)widgetConstraintMultiplier;
-(double)widgetConstraintConstant;
-(void)buildHorizontalConstraints;
-(void)buildVerticalConstraints;
-(BOOL)shouldManuallyChangeStatusBarStyle;
-(id)darkDisabledTextColor;
@end

