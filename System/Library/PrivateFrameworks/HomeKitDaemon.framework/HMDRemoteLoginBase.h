/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDAppleMediaAccessory, HMDRemoteLoginHandler, NSString, NSObject, HMFMessageDispatcher, NSSet;

@interface HMDRemoteLoginBase : HMFObject <HMFLogging, HMDHomeMessageReceiver> {

	NSUUID* _uuid;
	HMDAppleMediaAccessory* _accessory;
	HMDRemoteLoginHandler* _remoteLoginHandler;
	NSString* _logString;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDAppleMediaAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDRemoteLoginHandler * remoteLoginHandler;              //@synthesize remoteLoginHandler=_remoteLoginHandler - In the implementation block
@property (nonatomic,readonly) NSString * logString;                                           //@synthesize logString=_logString - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDAppleMediaAccessory *)accessory;
-(HMDRemoteLoginHandler *)remoteLoginHandler;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)registerForMessages;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSString *)logString;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3 ;
@end

