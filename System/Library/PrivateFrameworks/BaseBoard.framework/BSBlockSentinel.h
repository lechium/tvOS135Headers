/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BSAction, NSObject;

@interface BSBlockSentinel : NSObject {

	BSAction* _sentinelAction;
	/*^block*/id _handler;
	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _explicitQueue;

}
+(id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(/*^block*/id)arg3 ;
+(id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2 ;
+(id)sentinelWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)sentinelWithQueue:(id)arg1 signalHandler:(/*^block*/id)arg2 ;
+(id)sentinelWithExceptionReason:(id)arg1 ;
-(BOOL)signal;
-(id)initWithCount:(unsigned long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)signalWithContext:(id)arg1 ;
-(void)_performSynchronously:(/*^block*/id)arg1 ;
@end
