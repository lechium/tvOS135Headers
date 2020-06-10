/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface INWatchdogTimer : NSObject {

	double _interval;
	NSObject*<OS_dispatch_source> _timerSource;
	BOOL _isStopped;
	double _remainingInterval;
	double _startTime;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(void)cancel;
-(void)start;
-(void)stop;
-(void)_reset;
-(void)_start;
-(void)_cancel;
-(void)_stop;
-(BOOL)isCanceled;
-(BOOL)_isCanceled;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)_cancelIfNotAlreadyCanceled;
@end
