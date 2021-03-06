/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSObject, NSDate;

@interface AMSUIWebFlowTimeout : NSObject {

	/*^block*/id _enqueuedBlock;
	/*^block*/id _block;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startTime;
	double _timeout;
	double _timeRemaining;

}

@property (nonatomic,copy) id enqueuedBlock;                                  //@synthesize enqueuedBlock=_enqueuedBlock - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double timeRemaining;                            //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSLock *)lock;
-(void)setTimeout:(double)arg1 ;
-(NSDate *)startTime;
-(void)start;
-(double)timeout;
-(void)setStartTime:(NSDate *)arg1 ;
-(double)pause;
-(id)block;
-(void)reset;
-(void)_lock:(/*^block*/id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)enqueuedBlock;
-(void)setEnqueuedBlock:(id)arg1 ;
@end

