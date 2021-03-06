/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSAuthenticateTask.h>

@protocol AMSBagProtocol;
@class UIViewController;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask {

	id<AMSBagProtocol> _bag;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                                     //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(UIViewController *)presentingViewController;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)performAuthentication;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 ;
-(id)_updateAccountWithAuthKit:(id)arg1 error:(id*)arg2 ;
-(void)_handleDialogForFailedAuthenticationWithError:(id)arg1 ;
@end

