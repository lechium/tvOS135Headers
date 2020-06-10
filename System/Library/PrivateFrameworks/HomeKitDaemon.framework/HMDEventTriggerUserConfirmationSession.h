/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEventTriggerSession.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class HMDEventTriggerExecutionSession, HMDEventTriggerDevice, HMDTriggerConfirmationTimer, HomeKitEventTriggerUserConfirmationReceiverSessionEvent, NSMutableArray, NSString, NSUUID, NSSet;

@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver> {

	HMDEventTriggerExecutionSession* _executionSession;
	HMDEventTriggerDevice* _requestingDevice;
	HMDTriggerConfirmationTimer* _userResponseTimer;
	HomeKitEventTriggerUserConfirmationReceiverSessionEvent* _metricEvent;
	NSMutableArray* _metricSendEvents;

}

@property (assign,nonatomic,__weak) HMDEventTriggerExecutionSession * executionSession;                          //@synthesize executionSession=_executionSession - In the implementation block
@property (nonatomic,readonly) HMDEventTriggerDevice * requestingDevice;                                         //@synthesize requestingDevice=_requestingDevice - In the implementation block
@property (nonatomic,retain) HMDTriggerConfirmationTimer * userResponseTimer;                                    //@synthesize userResponseTimer=_userResponseTimer - In the implementation block
@property (nonatomic,retain) HomeKitEventTriggerUserConfirmationReceiverSessionEvent * metricEvent;              //@synthesize metricEvent=_metricEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * metricSendEvents;                                                  //@synthesize metricSendEvents=_metricSendEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
-(void)dealloc;
-(void)timerDidFire:(id)arg1 ;
-(void)_registerForMessages;
-(void)userDidConfirmExecute:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExecutionSession:(HMDEventTriggerExecutionSession *)arg1 ;
-(HMDEventTriggerExecutionSession *)executionSession;
-(id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5 ;
-(void)createBulletinNotification;
-(HomeKitEventTriggerUserConfirmationReceiverSessionEvent *)metricEvent;
-(NSMutableArray *)metricSendEvents;
-(void)_handleUserPermissionRemoveDialogRequest:(id)arg1 ;
-(void)_handleUserPermissionRemoteResponse:(id)arg1 ;
-(void)_createBulletinNotification;
-(void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2 ;
-(void)setMetricEvent:(HomeKitEventTriggerUserConfirmationReceiverSessionEvent *)arg1 ;
-(void)setUserResponseTimer:(HMDTriggerConfirmationTimer *)arg1 ;
-(HMDTriggerConfirmationTimer *)userResponseTimer;
-(void)_userResponse:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDEventTriggerDevice *)requestingDevice;
-(void)_sessionComplete;
-(void)askForUserPermission:(id)arg1 ;
-(void)_removeUserDialog:(id)arg1 ;
-(void)setMetricSendEvents:(NSMutableArray *)arg1 ;
@end

