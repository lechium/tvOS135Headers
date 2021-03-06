/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NAFuture, HMBCloudZoneRebuilderStatus;


@protocol HMBCloudZoneRebuilder
@property (nonatomic,readonly) NAFuture * rebuildCompleteFuture; 
@property (copy,readonly) HMBCloudZoneRebuilderStatus * rebuilderStatus; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
@required
-(void)rebuild;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(NAFuture *)rebuildCompleteFuture;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(BOOL)isZoneRebuildInProgress;
-(void)handleZoneChanged;

@end

