/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSArray, NSSet, HMBulletinBoardNotification, NSUUID, _HMContext, NSString;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSArray* _cameraProfiles;
	NSArray* _associatedServices;
	NSSet* _cameraProfileUUIDs;
	NSSet* _associatedServiceUUIDs;
	HMBulletinBoardNotification* _bulletinBoardNotification;
	NSUUID* _uniqueIdentifier;
	NSUUID* _targetUUID;
	_HMContext* _context;
	NSString* _logID;

}

@property (nonatomic,retain) _HMContext * context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSSet * cameraProfileUUIDs;                                                    //@synthesize cameraProfileUUIDs=_cameraProfileUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * associatedServiceUUIDs;                                                //@synthesize associatedServiceUUIDs=_associatedServiceUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * cameraProfiles;                                                      //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,retain) NSArray * associatedServices;                                                  //@synthesize associatedServices=_associatedServices - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                    //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * logID;                                                       //@synthesize logID=_logID - In the implementation block
@property (nonatomic,__weak,readonly) HMBulletinBoardNotification * bulletinBoardNotification;              //@synthesize bulletinBoardNotification=_bulletinBoardNotification - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSString *)logID;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)_requestServiceGroup;
-(void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1 ;
-(void)handleConfigureNotification:(id)arg1 ;
-(void)setCameraProfileUUIDs:(NSSet *)arg1 ;
-(void)setAssociatedServiceUUIDs:(NSSet *)arg1 ;
-(void)_findObjects;
-(HMBulletinBoardNotification *)bulletinBoardNotification;
-(NSArray *)cameraProfiles;
-(NSSet *)cameraProfileUUIDs;
-(NSSet *)associatedServiceUUIDs;
-(void)setCameraProfiles:(NSArray *)arg1 ;
-(NSArray *)associatedServices;
-(void)setAssociatedServices:(NSArray *)arg1 ;
-(void)_callServiceGroupUpdate;
-(NSUUID *)targetUUID;
-(void)__configureWithContext:(id)arg1 ;
@end

