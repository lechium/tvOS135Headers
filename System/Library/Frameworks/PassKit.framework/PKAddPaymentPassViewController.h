/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPaymentPassViewControllerDelegate;
@class PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation, PKRemoteAddPaymentPassViewController;

@interface PKAddPaymentPassViewController : UIViewController {

	id<PKAddPaymentPassViewControllerDelegate> _delegate;
	PKAddPaymentPassRequestConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteAddPaymentPassViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPaymentPass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotate;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(long long)modalTransitionStyle;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
