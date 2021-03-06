/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDSettingsBackingStoreController <NSObject>
@required
-(void)start;
-(void)registerForSettingsTransactions:(id)arg1;
-(id)settingTransactionWithName:(id)arg1;
-(void)runSettingTransaction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runSettingTransaction:(id)arg1 waitForCloudPush:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

