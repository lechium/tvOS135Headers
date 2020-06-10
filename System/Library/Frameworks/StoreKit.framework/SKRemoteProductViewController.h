/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientProductPageViewController.h>

@class SKStoreProductViewController, NSString;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {

	SKStoreProductViewController* _productViewController;

}

@property (assign,nonatomic,__weak) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinish;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2 ;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(void)setStatusBarStyle:(id)arg1 animated:(id)arg2 ;
-(void)didFinishWithResult:(id)arg1 ;
-(void)didFinishDismissal;
-(void)didReceiveTitle:(id)arg1 ;
-(void)loadDidFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)presentPageWithRequest:(id)arg1 animated:(id)arg2 ;
-(void)promptForStarRating;
-(SKStoreProductViewController *)productViewController;
@end
