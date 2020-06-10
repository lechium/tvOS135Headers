/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBCloudZoneRebuilder.h>

@class NAFuture, HMBCloudZoneRebuilderStatus, HMFUnfairLock, CKRecord, NSUUID, HMFTimer, HMBCloudZone, NSString;

@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMFTimerDelegate, HMFLogging, HMBCloudZoneRebuilder> {

	HMBCloudZoneRebuilderStatus* _rebuilderStatus;
	NAFuture* _rebuildCompleteFuture;
	HMFUnfairLock* _propertyLock;
	CKRecord* _previousSentinelRebuildRecord;
	NSUUID* _lastRebuildUUID;
	HMFTimer* _uploadMonitorWatchdogTimer;
	HMBCloudZone* _cloudZone;

}

@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                                           //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) CKRecord * previousSentinelRebuildRecord;                                 //@synthesize previousSentinelRebuildRecord=_previousSentinelRebuildRecord - In the implementation block
@property (nonatomic,retain) NSUUID * lastRebuildUUID;                                                 //@synthesize lastRebuildUUID=_lastRebuildUUID - In the implementation block
@property (nonatomic,retain) HMFTimer * uploadMonitorWatchdogTimer;                                    //@synthesize uploadMonitorWatchdogTimer=_uploadMonitorWatchdogTimer - In the implementation block
@property (assign,nonatomic,__weak) HMBCloudZone * cloudZone;                                          //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) NAFuture * rebuildCompleteFuture;                                         //@synthesize rebuildCompleteFuture=_rebuildCompleteFuture - In the implementation block
@property (copy) HMBCloudZoneRebuilderStatus * rebuilderStatus;                                        //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
+(id)logCategory;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)rebuild;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(HMBCloudZone *)cloudZone;
-(HMFUnfairLock *)propertyLock;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(NAFuture *)rebuildCompleteFuture;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(BOOL)isZoneRebuildInProgress;
-(void)handleZoneChanged;
-(id)initWithCloudZone:(id)arg1 ;
-(void)setRebuilderStatus:(HMBCloudZoneRebuilderStatus *)arg1 ;
-(HMFTimer *)uploadMonitorWatchdogTimer;
-(void)setUploadMonitorWatchdogTimer:(HMFTimer *)arg1 ;
-(void)setLastRebuildUUID:(NSUUID *)arg1 ;
-(NSUUID *)lastRebuildUUID;
-(void)setRebuildCompleteFuture:(NAFuture *)arg1 ;
-(CKRecord *)previousSentinelRebuildRecord;
-(void)setPreviousSentinelRebuildRecord:(CKRecord *)arg1 ;
@end

