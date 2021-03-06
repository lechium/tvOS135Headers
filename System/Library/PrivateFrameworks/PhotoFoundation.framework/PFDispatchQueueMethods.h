/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFDispatchQueueMethods
@required
-(void)resume;
-(void)suspend;
-(unsigned)qualityOfService;
-(const char*)label;
-(BOOL)assertOnQueue;
-(void)dispatchAsync:(/*^block*/id)arg1;
-(void)dispatchSync:(/*^block*/id)arg1;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(void)dispatchAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(BOOL)assertNotOnQueue;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellable:(/*^block*/id)arg1;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(id)extensionMatching:(/*^block*/id)arg1;
-(void)dispatchBarrierSync:(/*^block*/id)arg1;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2;
-(void*)getSpecific:(void*)arg1;
-(BOOL)assertQueueBarrier;
-(void)dispatchBarrierAsyncWithCurrentQOS:(/*^block*/id)arg1;

@end

