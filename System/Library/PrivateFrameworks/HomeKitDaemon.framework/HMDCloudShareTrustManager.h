/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBCloudZoneDelegate.h>
#import <libobjc.A.dylib/HMBLocalZoneDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareMessengerDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDataSource.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDelegate.h>
#import <libobjc.A.dylib/HMDDatabaseDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, OS_dispatch_queue, HMDDatabase;
@class NSObject, HMDCloudShareMessenger, HMBCloudZone, HMBLocalZone, HMDCloudShareParticipantsManager, HMFTimer, HMBShareUserID, NSString;

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate> {

	BOOL _ownedTrust;
	long long _configureState;
	id<HMDCloudShareTrustManagerDataSource> _dataSource;
	id<HMDCloudShareTrustManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id<HMDDatabase> _database;
	HMDCloudShareMessenger* _cloudShareMessenger;
	HMBCloudZone* _cloudZone;
	HMBLocalZone* _localZone;
	HMDCloudShareParticipantsManager* _cloudShareParticipantManager;
	HMFTimer* _requestInviteTimer;
	HMBShareUserID* _ownerCloudShareID;
	/*^block*/id _participantsManagerFactory;
	/*^block*/id _requestInviteTimerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (readonly) id<HMDDatabase> database;                                                   //@synthesize database=_database - In the implementation block
@property (readonly) HMDCloudShareMessenger * cloudShareMessenger;                               //@synthesize cloudShareMessenger=_cloudShareMessenger - In the implementation block
@property (getter=isOwnedTrust,readonly) BOOL ownedTrust;                                        //@synthesize ownedTrust=_ownedTrust - In the implementation block
@property (assign) long long configureState;                                                     //@synthesize configureState=_configureState - In the implementation block
@property (retain) HMBCloudZone * cloudZone;                                                     //@synthesize cloudZone=_cloudZone - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                     //@synthesize localZone=_localZone - In the implementation block
@property (retain) HMDCloudShareParticipantsManager * cloudShareParticipantManager;              //@synthesize cloudShareParticipantManager=_cloudShareParticipantManager - In the implementation block
@property (retain) HMFTimer * requestInviteTimer;                                                //@synthesize requestInviteTimer=_requestInviteTimer - In the implementation block
@property (retain) HMBShareUserID * ownerCloudShareID;                                           //@synthesize ownerCloudShareID=_ownerCloudShareID - In the implementation block
@property (copy) id participantsManagerFactory;                                                  //@synthesize participantsManagerFactory=_participantsManagerFactory - In the implementation block
@property (copy) id requestInviteTimerFactory;                                                   //@synthesize requestInviteTimerFactory=_requestInviteTimerFactory - In the implementation block
@property (__weak) id<HMDCloudShareTrustManagerDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDCloudShareTrustManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HMDCloudShareTrustManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDCloudShareTrustManagerDelegate>)arg1 ;
-(id<HMDDatabase>)database;
-(void)_configure;
-(void)configure;
-(id<HMDCloudShareTrustManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMDCloudShareTrustManagerDataSource>)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)attributeDescriptions;
-(HMBLocalZone *)localZone;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(HMBCloudZone *)cloudZone;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1 ;
-(void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3 ;
-(void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messengerDidReceiveInvitationRequest:(id)arg1 ;
-(void)database:(id)arg1 didCreateZoneWithName:(id)arg2 ;
-(void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 isOwnedTrust:(BOOL)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 shareMessenger:(id)arg5 ownerCloudShareID:(id)arg6 ;
-(void)homeDidBecomeTrustZoneCapable:(id)arg1 ;
-(long long)configureState;
-(void)setConfigureState:(long long)arg1 ;
-(HMDCloudShareMessenger *)cloudShareMessenger;
-(BOOL)isOwnedTrust;
-(void)_configureWithOwnedZone;
-(void)_configureWithSharedZone;
-(void)_configureWithFetchZoneResult:(id)arg1 error:(id)arg2 ;
-(void)_requestShareInvitationForSharedZone;
-(HMBShareUserID *)ownerCloudShareID;
-(void)_startRequestInviteTimer;
-(id)participantsManagerFactory;
-(void)setCloudShareParticipantManager:(HMDCloudShareParticipantsManager *)arg1 ;
-(HMDCloudShareParticipantsManager *)cloudShareParticipantManager;
-(void)_configureOwnerCloudShareIDWithCloudZone:(id)arg1 ;
-(void)setOwnerCloudShareID:(HMBShareUserID *)arg1 ;
-(void)_finishConfigure;
-(void)updateCurrentUserCloudShareID;
-(void)updateSharedUsersCloudShareIDs;
-(void)discoverUntrustedUsers;
-(void)_removeTrust;
-(void)_homeDidBecomeTrustZoneCapable:(id)arg1 ;
-(HMFTimer *)requestInviteTimer;
-(void)_didCreateZone;
-(void)_didRemoveZone;
-(id)requestInviteTimerFactory;
-(void)setRequestInviteTimer:(HMFTimer *)arg1 ;
-(void)_cancelRequestInviteTimer;
-(void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 isOwnedTrust:(BOOL)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 ownerCloudShareID:(id)arg5 ;
-(void)removeTrust;
-(void)setParticipantsManagerFactory:(id)arg1 ;
-(void)setRequestInviteTimerFactory:(id)arg1 ;
@end

