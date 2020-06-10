/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSTimer.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, PCPersistentTimer;

@interface BSPersistentTimer : NSObject <BSTimer> {

	double _fireInterval;
	NSString* _serviceIdentifier;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	/*^block*/id _handler;
	os_unfair_lock_s _lock;
	PCPersistentTimer* _timer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isScheduled,nonatomic,readonly) BOOL scheduled; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double fireInterval; 
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(double)startTime;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)schedule;
-(BOOL)isScheduled;
-(double)fireInterval;
-(id)initWithFireInterval:(double)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_createTimerWithInterval:(double)arg1 serviceIdentifier:(id)arg2 ;
-(void)_timerFired:(id)arg1 ;
@end

