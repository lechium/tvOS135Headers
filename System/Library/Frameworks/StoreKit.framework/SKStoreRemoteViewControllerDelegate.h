/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKStoreRemoteViewControllerDelegate <NSObject>
@optional
-(void)storeRemoteViewControllerDidDismiss;
-(void)storeRemoteViewControllerTerminatedWithError:(id)arg1;

@required
-(void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
-(void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;

@end

