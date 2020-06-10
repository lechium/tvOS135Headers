/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BSSerializedRequestQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _conditionBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)_enqueueSerialConditionalRequest:(/*^block*/id)arg1 ;
-(id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(/*^block*/id)arg3 ;
-(void)enqueueRequest:(/*^block*/id)arg1 ;
-(void)enqueueAsyncRequest:(/*^block*/id)arg1 ;
@end
