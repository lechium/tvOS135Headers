/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFNetworkListDelegate <NSObject>
@required
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg1;
-(BOOL)networkListViewControllerIsManagedAppleID:(id)arg1;
-(void)networkListViewControllerDidAppear:(id)arg1;
-(void)networkListViewControllerDidDisappear:(id)arg1;
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg1;
-(BOOL)networkListViewControllerCurrentPowerState:(id)arg1;
-(BOOL)networkListViewControllerWAPIEnabled:(id)arg1;
-(long long)networkListViewControllerAutoInstantHotspotOption:(id)arg1;
-(void)networkListViewController:(id)arg1 showSettingsForNetwork:(id)arg2;
-(void)networkListViewControllerDidTapOtherNetwork:(id)arg1;
-(void)networkListViewController:(id)arg1 didTapRecord:(id)arg2;
-(void)networkListViewController:(id)arg1 userDidChangePower:(BOOL)arg2;
-(void)networkListViewController:(id)arg1 setWAPIEnabled:(BOOL)arg2;
-(void)networkListViewController:(id)arg1 setAutoInstantOption:(long long)arg2;
-(void)networkListViewControllerDidFinish:(id)arg1;

@end
