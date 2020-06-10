/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKSelectActionViewDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>

@protocol PKPaymentDataProvider, PKSelectActionViewControllerDelegate;
@class PKPerformActionPassView, PKPaymentPass, NSArray, PKSelectActionView, PKPaymentPassAction, PKPaymentWebService, NSString;

@interface PKSelectActionViewController : UIViewController <PKSelectActionViewDelegate, PKPerformActionViewControllerDelegate> {

	PKPerformActionPassView* _passView;
	PKPaymentPass* _pass;
	NSArray* _actions;
	unsigned long long _actionType;
	PKSelectActionView* _actionView;
	PKPaymentPassAction* _selectedAction;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKPaymentWebService* _webService;
	id<PKSelectActionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSelectActionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKSelectActionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKSelectActionViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_cancelButtonPressed:(id)arg1 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(void)_rightBarButtonPressed:(id)arg1 ;
-(void)_reloadActionView;
-(void)setRightBarButtonEnabled:(BOOL)arg1 ;
-(void)selectActionViewDidSelectAction:(id)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 ;
@end

