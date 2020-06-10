/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue, HMDEventDelegate;
@class HMDEventTrigger, NSObject, HMFMessageDispatcher, HMDHome, NSUUID, NSString, NSSet;

@interface HMDEvent : HMFObject <NSSecureCoding, HMFDumpState, HMDHomeMessageReceiver, HMFLogging, HMDBackingStoreObjectProtocol> {

	BOOL _endEvent;
	HMDEventTrigger* _eventTrigger;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	id<HMDEventDelegate> _delegate;
	HMDHome* _home;
	NSUUID* _uuid;
	NSString* _triggerType;
	NSString* _logString;
	unsigned long long _activationType;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) id<HMDEventDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) HMDEventTrigger * eventTrigger;                           //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * triggerType;                                        //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,retain) NSString * logString;                                            //@synthesize logString=_logString - In the implementation block
@property (getter=isEndEvent,nonatomic,readonly) BOOL endEvent;                               //@synthesize endEvent=_endEvent - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;                               //@synthesize activationType=_activationType - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMDEventDelegate>)delegate;
-(void)setDelegate:(id<HMDEventDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_setup;
-(BOOL)isActive;
-(NSUUID *)uuid;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)triggerType;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)dumpState;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDEventTrigger *)eventTrigger;
-(void)_updateTriggerType;
-(void)setEventTrigger:(HMDEventTrigger *)arg1 ;
-(BOOL)isEndEvent;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSString *)logString;
-(id)emptyModelObject;
-(void)_registerForMessages;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)metricData;
-(unsigned long long)activationType;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(void)setActivationType:(unsigned long long)arg1 ;
-(void)setLogString:(NSString *)arg1 ;
@end

