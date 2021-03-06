/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKCompactNavigationContainedNavigationController.h>

@protocol UIViewControllerTransitioningDelegate;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {

	PKPaymentAuthorizationLayout* _layout;
	PKPaymentAuthorizationServiceViewController* _authorizationViewController;
	id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;

}

@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;                   //@synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationServiceViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
-(id)init;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_backgroundColorForModalFormSheet;
-(id)initWithLayoutStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(PKPaymentAuthorizationServiceViewController *)authorizationViewController;
-(id<UIViewControllerTransitioningDelegate>)paymentTransitioningDelegate;
-(void)setPaymentTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
@end

