/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_DASActivityGroupScheduler.h>
#import <libobjc.A.dylib/_DASActivitySchedulerIntrospecting.h>
#import <libobjc.A.dylib/_DASActivityBackgroundLaunchScheduler.h>
#import <libobjc.A.dylib/_DASActivityMetering.h>
#import <libobjc.A.dylib/_DASActivityBackgroundTasksScheduler.h>

@protocol OS_dispatch_queue, OS_os_log, _DASActivityBackgroundTasksSchedulerDelegate;
@class NSXPCConnection, NSXPCListenerEndpoint, NSMutableDictionary, _DASSubmissionRateLimiter, NSObject, NSString;

@interface _DASScheduler : NSObject <NSXPCListenerDelegate, _DASActivityGroupScheduler, _DASActivitySchedulerIntrospecting, _DASActivityBackgroundLaunchScheduler, _DASActivityMetering, _DASActivityBackgroundTasksScheduler> {

	BOOL _interrupted;
	int _resubmitToken;
	NSXPCConnection* _xpcConnection;
	NSXPCListenerEndpoint* _endpoint;
	NSMutableDictionary* _submittedActivities;
	NSMutableDictionary* _delayedStartTasks;
	NSMutableDictionary* _startedActivities;
	NSMutableDictionary* _activityToDataMap;
	_DASSubmissionRateLimiter* _rateLimiter;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _connectionCreationQueue;
	NSObject*<OS_dispatch_queue> _runQueue;
	NSObject*<OS_os_log> _dasFrameworkLog;
	id<_DASActivityBackgroundTasksSchedulerDelegate> _backgroundTaskSchedulerDelegate;

}

@property (retain) NSXPCConnection * xpcConnection;                                                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                                                     //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                                                     //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,nonatomic) int resubmitToken;                                                                                    //@synthesize resubmitToken=_resubmitToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * submittedActivities;                                                            //@synthesize submittedActivities=_submittedActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delayedStartTasks;                                                              //@synthesize delayedStartTasks=_delayedStartTasks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * startedActivities;                                                              //@synthesize startedActivities=_startedActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityToDataMap;                                                              //@synthesize activityToDataMap=_activityToDataMap - In the implementation block
@property (nonatomic,retain) _DASSubmissionRateLimiter * rateLimiter;                                                              //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionCreationQueue;                                                 //@synthesize connectionCreationQueue=_connectionCreationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> runQueue;                                                                //@synthesize runQueue=_runQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> dasFrameworkLog;                                                                 //@synthesize dasFrameworkLog=_dasFrameworkLog - In the implementation block
@property (assign,nonatomic,__weak) id<_DASActivityBackgroundTasksSchedulerDelegate> backgroundTaskSchedulerDelegate;              //@synthesize backgroundTaskSchedulerDelegate=_backgroundTaskSchedulerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedScheduler;
+(id)log;
+(id)scheduler;
+(id)schedulerWithEndpoint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)submitActivity:(id)arg1 inGroupWithName:(id)arg2 ;
-(void)submitActivity:(id)arg1 ;
-(void)activityCanceled:(id)arg1 ;
-(void)activityCompleted:(id)arg1 ;
-(void)updateActivity:(id)arg1 withParameters:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)currentConnection;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)policies;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(_DASSubmissionRateLimiter *)rateLimiter;
-(void)setRateLimiter:(_DASSubmissionRateLimiter *)arg1 ;
-(void)submitActivity:(id)arg1 inGroup:(id)arg2 ;
-(void)submitActivities:(id)arg1 ;
-(void)createActivityGroup:(id)arg1 ;
-(NSMutableDictionary *)submittedActivities;
-(void)setSubmittedActivities:(NSMutableDictionary *)arg1 ;
-(void)handleEligibleActivities:(/*^block*/id)arg1 ;
-(void)activityStarted:(id)arg1 ;
-(void)runActivitiesWithDelayedStart:(id)arg1 ;
-(void)runActivities:(id)arg1 ;
-(void)suspendActivities:(id)arg1 ;
-(void)cancelActivities:(id)arg1 ;
-(void)activity:(id)arg1 runWithoutHonoringPolicies:(id)arg2 ;
-(void)activity:(id)arg1 blockedOnPolicies:(id)arg2 ;
-(void)handleLaunchFromDaemonForActivities:(id)arg1 ;
-(void)willExpireBGTaskActivities:(id)arg1 ;
-(void)forceRunActivities:(id)arg1 ;
-(void)setBalance:(double)arg1 forBudgetWithName:(id)arg2 ;
-(void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2 ;
-(void)enterTestModeWithParameters:(id)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2 ;
-(void)activityStartedWithParameters:(id)arg1 ;
-(void)activityStoppedWithParameters:(id)arg1 ;
-(void)getPendingTaskRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)dasFrameworkLog;
-(void)setupXPCConnectionWithEndpoint:(id)arg1 ;
-(id<_DASActivityBackgroundTasksSchedulerDelegate>)backgroundTaskSchedulerDelegate;
-(NSObject*<OS_dispatch_queue>)connectionCreationQueue;
-(void)unprotectedEstablishDaemonConnectionIfInterrupted;
-(void)resubmitRunningActivities;
-(void)resubmitPendingStartActivities;
-(void)resubmitPendingActivities;
-(void)connectToDaemon:(BOOL)arg1 ;
-(BOOL)submitActivityInternal:(id)arg1 ;
-(void)submitActivitiesInternal:(id)arg1 ;
-(void)handleRescindedActivity:(id)arg1 ;
-(void)handleNoLongerRunningActivities:(id)arg1 ;
-(void)updateBytesConsumedForActivity:(id)arg1 downloadedOnWifi:(unsigned long long)arg2 downloadedOnCell:(unsigned long long)arg3 uploadedOnWifi:(unsigned long long)arg4 uploadedOnCell:(unsigned long long)arg5 ;
-(NSObject*<OS_dispatch_queue>)runQueue;
-(id)runningActivities;
-(id)delayedRunningActivities;
-(id)runningGroupActivities;
-(BOOL)deferActivities:(id)arg1 ;
-(id)scoresForActivityWithName:(id)arg1 ;
-(id)activityRunStatistics;
-(id)currentPredictions;
-(double)remainingBalanceForBudgetWithName:(id)arg1 ;
-(id)blockingPoliciesWithParameters:(id)arg1 ;
-(void)pauseWithParameters:(id)arg1 ;
-(void)setBackgroundTasksSchedulerDelegate:(id)arg1 ;
-(id)submitTaskRequest:(id)arg1 ;
-(void)cancelTaskRequestWithIdentifier:(id)arg1 ;
-(void)cancelAllTaskRequests;
-(void)completeTaskRequest:(id)arg1 ;
-(id)submittedTaskState;
-(int)resubmitToken;
-(void)setResubmitToken:(int)arg1 ;
-(NSMutableDictionary *)delayedStartTasks;
-(void)setDelayedStartTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)startedActivities;
-(void)setStartedActivities:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activityToDataMap;
-(void)setActivityToDataMap:(NSMutableDictionary *)arg1 ;
-(void)setConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRunQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDasFrameworkLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setBackgroundTaskSchedulerDelegate:(id<_DASActivityBackgroundTasksSchedulerDelegate>)arg1 ;
@end

