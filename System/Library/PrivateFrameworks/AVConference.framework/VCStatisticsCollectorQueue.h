/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsCollectorQueue : NSObject {

	OpaqueFigThreadRef _thread;
	BOOL _isThreadRunning;
	BOOL _shouldBlockWhenFull;
	SCD_Struct_VC121 _messageQueue[100];
	int _firstMessageIndex;
	int _nextMessageIndex;
	int _maxQueueSize;
	int _almostFullQueueSize;
	/*^block*/id _messageHandler;
	opaque_pthread_mutex_t _queueMutex;
	opaque_pthread_cond_t _queueNotFullCondition;
	opaque_pthread_cond_t _queueNotEmptyCondition;
	opaque_pthread_mutex_t _waitMutex;
	opaque_pthread_cond_t _waitCondition;
	BOOL _shouldProcessMessageOnExternalThread;
	BOOL _shouldProcessMessageImmediately;
	unsigned _queueProcessWaitTimeMs;

}

@property (readonly) BOOL isThreadRunning;              //@synthesize isThreadRunning=_isThreadRunning - In the implementation block
@property (copy) id messageHandler;                     //@synthesize messageHandler=_messageHandler - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)setMessageHandler:(id)arg1 ;
-(BOOL)enqueue:(SCD_Struct_AV29)arg1 ;
-(id)messageHandler;
-(int)queueSize;
-(id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(BOOL)arg2 queueWaitTimeMs:(unsigned)arg3 useExternalThread:(BOOL)arg4 ;
-(BOOL)addStatisticsMessage:(SCD_Struct_AV29)arg1 ;
-(void)drainAndProcessAllStatistics;
-(void)stopThread;
-(BOOL)dequeue:(SCD_Struct_AV29*)arg1 ;
-(void)processMessage:(SCD_Struct_AV29)arg1 ;
-(BOOL)isQueueFull;
-(void)cancelWait;
-(void)waitBeforeProcessingQueue;
-(BOOL)isThreadRunning;
@end

