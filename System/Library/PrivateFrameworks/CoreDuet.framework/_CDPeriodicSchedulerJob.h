/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _CDPeriodicSchedulerJob : NSObject {

	long long _period;
	double _interval;
	NSString* _jobName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	NSObject*<OS_xpc_object> _executionCriteria;
	BOOL _isHandlerAsynchronous;
	NSObject*<OS_xpc_object> _activity;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (retain) NSObject*<OS_xpc_object> activity;                         //@synthesize activity=_activity - In the implementation block
@property (readonly) long long period;                                        //@synthesize period=_period - In the implementation block
@property (readonly) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (readonly) NSString * jobName;                                      //@synthesize jobName=_jobName - In the implementation block
@property (readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
@property (readonly) BOOL isHandlerAsynchronous;                              //@synthesize isHandlerAsynchronous=_isHandlerAsynchronous - In the implementation block
+(id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 asynchronousHandler:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
+(id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(double)interval;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setExecutionCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)jobName;
-(long long)period;
-(id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 asynchronousHandler:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(NSObject*<OS_xpc_object>)executionCriteria;
-(BOOL)isHandlerAsynchronous;
@end

