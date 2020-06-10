/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATRemoteTaskOperation, NSArray;

@interface DMFBatchRequestOperation : CATOperation {

	CATOperationQueue* _queue;
	CATRemoteTaskOperation* _activityTransactionOperation;
	NSArray* _subOperations;

}

@property (nonatomic,retain) CATOperationQueue * queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CATRemoteTaskOperation * activityTransactionOperation;              //@synthesize activityTransactionOperation=_activityTransactionOperation - In the implementation block
@property (nonatomic,copy) NSArray * subOperations;                                              //@synthesize subOperations=_subOperations - In the implementation block
-(void)setQueue:(CATOperationQueue *)arg1 ;
-(CATOperationQueue *)queue;
-(void)setName:(id)arg1 ;
-(void)main;
-(BOOL)isAsynchronous;
-(CATRemoteTaskOperation *)activityTransactionOperation;
-(NSArray *)subOperations;
-(void)activityTransactionOperationDidStart:(id)arg1 ;
-(void)activityTransactionOperationDidFinish:(id)arg1 ;
-(id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2 ;
-(void)setActivityTransactionOperation:(CATRemoteTaskOperation *)arg1 ;
-(void)setSubOperations:(NSArray *)arg1 ;
@end

