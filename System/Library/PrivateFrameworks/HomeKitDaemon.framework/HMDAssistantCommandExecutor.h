/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMDAssistantCommand, HMFMessageDispatcher, NSObject, NSMutableArray, NSMutableDictionary, NSString, HMFTimer, HMFLogEventSession;

@interface HMDAssistantCommandExecutor : NSObject <HMFTimerDelegate> {

	HMDAssistantCommand* _initialCommand;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _actionResults;
	NSMutableDictionary* _pendingCommands;
	NSString* _clientValidity;
	HMFTimer* _executionTimer;
	/*^block*/id _completionHandler;
	HMFLogEventSession* _logEventSession;

}

@property (nonatomic,retain) HMDAssistantCommand * initialCommand;                //@synthesize initialCommand=_initialCommand - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionResults;                      //@synthesize actionResults=_actionResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingCommands;               //@synthesize pendingCommands=_pendingCommands - In the implementation block
@property (nonatomic,retain) NSString * clientValidity;                           //@synthesize clientValidity=_clientValidity - In the implementation block
@property (nonatomic,retain) HMFTimer * executionTimer;                           //@synthesize executionTimer=_executionTimer - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HMFLogEventSession * logEventSession;                //@synthesize logEventSession=_logEventSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)executorWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 ;
+(id)executorWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 logEventSession:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)_isValid;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_command;
-(NSMutableArray *)actionResults;
-(void)setActionResults:(NSMutableArray *)arg1 ;
-(NSString *)clientValidity;
-(void)setClientValidity:(NSString *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)pendingCommands;
-(void)setPendingCommands:(NSMutableDictionary *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMFLogEventSession *)logEventSession;
-(void)setLogEventSession:(HMFLogEventSession *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)initWithCommand:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 logEventSession:(id)arg4 ;
-(HMFTimer *)executionTimer;
-(void)_startExecutionTimer;
-(void)_reportFailure;
-(BOOL)_initialCommandIsMultipleActions;
-(HMDAssistantCommand *)initialCommand;
-(void)_executeCommand:(id)arg1 ;
-(void)_sendResponse:(id)arg1 ;
-(void)_accumulateActionResultsFromResponse:(id)arg1 command:(id)arg2 ;
-(void)_reportResults:(id)arg1 ;
-(void)setExecutionTimer:(HMFTimer *)arg1 ;
-(void)setInitialCommand:(HMDAssistantCommand *)arg1 ;
@end

