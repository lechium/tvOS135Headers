/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKAssetRepairOperationUtilities : NSObject
+(id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2 ;
+(BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg1 ;
+(BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg1 ;
+(BOOL)errorIsRetriableInNearFuture:(id)arg1 ;
+(id)createRepairOperationGroupWithName:(id)arg1 ;
+(id)createRepairContainerFromContainer:(id)arg1 ;
+(void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4 ;
+(id)uploadRequestMetadataFromRepairRecord:(id)arg1 ;
@end

