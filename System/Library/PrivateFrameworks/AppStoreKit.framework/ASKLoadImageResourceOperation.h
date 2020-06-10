/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@protocol ASKResourceDataConsumer, OS_dispatch_queue;
@class NSURLSessionDataTask, NSObject;

@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation {

	NSURLSessionDataTask* _task;
	id<ASKResourceDataConsumer> _dataConsumer;
	NSObject*<OS_dispatch_queue> _dataConsumerQueue;

}

@property (nonatomic,readonly) NSURLSessionDataTask * task;                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<ASKResourceDataConsumer> dataConsumer;                    //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dataConsumerQueue;              //@synthesize dataConsumerQueue=_dataConsumerQueue - In the implementation block
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)URLSession;
+(id)dataConsumerQueue;
-(void)cancel;
-(void)start;
-(NSURLSessionDataTask *)task;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)setQueuePriority:(long long)arg1 ;
-(id<ASKResourceDataConsumer>)dataConsumer;
-(void)didFinishTaskWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dataConsumerQueue;
-(id)initWithURLRequest:(id)arg1 URLSession:(id)arg2 dataConsumer:(id)arg3 dataConsumerQueue:(id)arg4 ;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 ;
@end

