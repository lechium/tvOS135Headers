/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMXPCClient, HMFMessageDispatcher, NSUUID, NSString;

@interface HMClientConnection : NSObject <HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	HMXPCClient* _xpcClient;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) HMXPCClient * xpcClient;                                         //@synthesize xpcClient=_xpcClient - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)sharedInstance;
+(BOOL)areHomesConfigured;
+(id)siriHomeIdentifier;
+(BOOL)areAnyAccessoriesConfigured;
+(BOOL)areAnySpeakersConfigured;
+(BOOL)areAnyTelevisionAccessoriesConfigured;
-(id)init;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)_registerToDaemon;
-(void)_start;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)initWithNoValidation;
-(HMXPCClient *)xpcClient;
-(void)_reportResultsTohandler:(/*^block*/id)arg1 ;
-(void)sendSiriCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestSiriSyncDataWithValidity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setXpcClient:(HMXPCClient *)arg1 ;
@end

