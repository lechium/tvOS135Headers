/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDSettingTransactionReceiverProtocol <NSObject>
@required
-(void)transactionSettingGroupModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transactionSettingModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transactionSettingConstraintModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transactionSettingGroupModelRemoved:(id)arg1 completion:(/*^block*/id)arg2;
-(void)transactionSettingModelRemoved:(id)arg1 completion:(/*^block*/id)arg2;
-(void)transactionSettingConstraintModelRemoved:(id)arg1 completion:(/*^block*/id)arg2;

@end

