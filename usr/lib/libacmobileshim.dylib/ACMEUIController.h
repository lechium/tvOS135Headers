/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACMSignInDialogDelegate.h>
#import <libobjc.A.dylib/ACMExternalUIControllerProtocol.h>

@protocol ACMSignInDialogProtocol, ACMUIControllerDelegate, ACMBaseAuthenticationRequest;
@class UIImage, UIColor, NSString, NSMutableSet, ACMAppleConnectImplComponents, UIView;

@interface ACMEUIController : NSObject <ACMSignInDialogDelegate, ACMExternalUIControllerProtocol> {

	id<ACMSignInDialogProtocol> _signInDialog;
	NSMutableSet* _shownAlerts;
	BOOL _widgetEnabled;
	BOOL _shouldAuthenticateOnUserInput;
	id<ACMUIControllerDelegate> _delegate;
	id<ACMBaseAuthenticationRequest> _request;
	unsigned long long _signInStyle;
	UIImage* _logoImage;
	UIColor* _backgroundColor;
	NSString* _accountNameFieldPlaceholder;
	NSString* _widgetAccountLabel;
	id _signInButton;
	id _cancelButton;
	long long _widgetPasswordReturnKeyType;
	CGPoint _widgetPosition;

}

@property (nonatomic,retain) id<ACMSignInDialogProtocol> signInDialog;               //@synthesize signInDialog=_signInDialog - In the implementation block
@property (nonatomic,retain) NSMutableSet * shownAlerts;                             //@synthesize shownAlerts=_shownAlerts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) ACMAppleConnectImplComponents * components; 
@property (assign,nonatomic) id<ACMUIControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isWidgetEnabled,nonatomic) BOOL widgetEnabled;              //@synthesize widgetEnabled=_widgetEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isWidgetShown; 
@property (nonatomic,retain) id<ACMBaseAuthenticationRequest> request;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long signInDialogContentStyle; 
@property (readonly) UIView * managerApprovalDialogSummaryView; 
@property (assign,nonatomic) unsigned long long signInStyle;                         //@synthesize signInStyle=_signInStyle - In the implementation block
@property (nonatomic,retain) UIImage * logoImage;                                    //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder;                 //@synthesize accountNameFieldPlaceholder=_accountNameFieldPlaceholder - In the implementation block
@property (assign,nonatomic) CGPoint widgetPosition;                                 //@synthesize widgetPosition=_widgetPosition - In the implementation block
@property (nonatomic,retain) NSString * widgetAccountLabel;                          //@synthesize widgetAccountLabel=_widgetAccountLabel - In the implementation block
@property (nonatomic,retain) id signInButton;                                        //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) id cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) long long widgetPasswordReturnKeyType;                  //@synthesize widgetPasswordReturnKeyType=_widgetPasswordReturnKeyType - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput;                     //@synthesize shouldAuthenticateOnUserInput=_shouldAuthenticateOnUserInput - In the implementation block
@property (assign,nonatomic) NSString * password; 
-(id)init;
-(void)dealloc;
-(id<ACMUIControllerDelegate>)delegate;
-(void)setDelegate:(id<ACMUIControllerDelegate>)arg1 ;
-(NSString *)password;
-(id<ACMBaseAuthenticationRequest>)request;
-(void)setRequest:(id<ACMBaseAuthenticationRequest>)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(ACMAppleConnectImplComponents *)components;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)cancelButton;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setCancelButton:(id)arg1 ;
-(id)signInButton;
-(void)setSignInButton:(id)arg1 ;
-(UIImage *)logoImage;
-(void)setLogoImage:(UIImage *)arg1 ;
-(BOOL)isWidgetShown;
-(void)setWidgetEnabled:(BOOL)arg1 ;
-(BOOL)useAlertView;
-(void)setWidgetPosition:(CGPoint)arg1 ;
-(void)setWidgetAccountLabel:(NSString *)arg1 ;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1 ;
-(void)setAccountNameFieldPlaceholder:(NSString *)arg1 ;
-(void)setSignInStyle:(unsigned long long)arg1 ;
-(void)showSignInWidgetWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideSignInWidgetWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelSignInWidget;
-(void)showAlertWithAlertMessage:(id)arg1 buttonTitle:(id)arg2 cancelButtonTitle:(id)arg3 errorTag:(long long)arg4 ;
-(unsigned long long)signInDialogContentStyle;
-(unsigned long long)signInStyle;
-(UIView *)managerApprovalDialogSummaryView;
-(void)setShownAlerts:(NSMutableSet *)arg1 ;
-(id<ACMSignInDialogProtocol>)signInDialog;
-(void)setSignInDialog:(id<ACMSignInDialogProtocol>)arg1 ;
-(NSString *)accountNameFieldPlaceholder;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(BOOL)shouldAuthenticateOnUserInput;
-(id)createAlertDialog;
-(BOOL)useCustomWidget;
-(id)createCustomWidget;
-(id)createStandardWidget;
-(NSMutableSet *)shownAlerts;
-(void)onIForgot:(id)arg1 ;
-(void)onSignIn:(id)arg1 ;
-(void)onSignInCancel:(id)arg1 ;
-(void)signInDialogWillBecomeEnabled;
-(void)signInDialogDidBecomeEnabled;
-(void)signInDialogWillBecomeDisabled;
-(void)signInDialogDidBecomeDisabled;
-(BOOL)isWidgetEnabled;
-(void)onManageAppleID:(id)arg1 ;
-(Class)standardSignInClass;
-(Class)customSignInClass;
-(Class)iTunesSignInClass;
-(Class)signInWidgetClass;
@end

