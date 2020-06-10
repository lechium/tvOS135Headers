/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIClientAccountPageViewController <NSObject>
@required
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2;
-(void)didFinishLoading;
-(void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2;
-(void)financeInterruptionResolved:(BOOL)arg1;
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
-(void)overrideRedeemCameraWithCompletion:(/*^block*/id)arg1;
-(void)setBridgedNavigationItemWithOptions:(id)arg1;
-(void)pushBridgedViewControllerAnimated:(BOOL)arg1 options:(id)arg2;
-(void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
-(void)presentBridgedViewController;
-(void)dismissBridgedViewController;

@end

