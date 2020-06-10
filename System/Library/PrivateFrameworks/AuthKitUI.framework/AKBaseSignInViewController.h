/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKBasicLoginAnimateProtocol.h>

@protocol AKSignInViewControllerDelegate;
@class AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext, NSString;

@interface AKBaseSignInViewController : UIViewController <AKBasicLoginAnimateProtocol> {

	AKAppleIDAuthenticationController* _authenticationController;
	BOOL _usesDarkMode;
	BOOL _authInProgress;
	AKAppleIDAuthenticationInAppContext* _context;
	id<AKSignInViewControllerDelegate> _delegate;

}

@property (assign,getter=isAuthInProgress,nonatomic) BOOL authInProgress;                       //@synthesize authInProgress=_authInProgress - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMode;                                                 //@synthesize usesDarkMode=_usesDarkMode - In the implementation block
@property (retain) AKAppleIDAuthenticationInAppContext * context;                               //@synthesize context=_context - In the implementation block
@property (__weak) id<AKSignInViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKSignInViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKSignInViewControllerDelegate>)arg1 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(void)startAnimating;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)stopAnimating;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_isAccountModificationRestricted;
-(BOOL)_isSignInAllowed;
-(void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 withUsername:(id)arg2 password:(id)arg3 ;
-(void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUsesDarkMode:(BOOL)arg1 ;
-(BOOL)usesDarkMode;
-(void)_setPasswordFieldHiddenIfNeeded;
-(BOOL)isAuthInProgress;
-(BOOL)_canBeginAuthenticationWithOption:(unsigned long long)arg1 ;
-(void)setAuthInProgress:(BOOL)arg1 ;
-(void)_authenticateWithContext:(id)arg1 ;
-(void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2 ;
-(id)_initWithAuthController:(id)arg1 ;
@end

