/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/BROperationClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BROperation : NSOperation <BROperationClient> {

	id _remoteOperation;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _uuid[16];
	id _executionTransation;
	BOOL _finished;
	BOOL _waitForRemoteToBeCancelled;
	BOOL _nonDiscretionary;

}

@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSObject*<BRCancellable> remoteOperation;                  //@synthesize remoteOperation=_remoteOperation - In the implementation block
@property (assign,nonatomic) BOOL waitForRemoteToBeCancelled;                           //@synthesize waitForRemoteToBeCancelled=_waitForRemoteToBeCancelled - In the implementation block
@property (assign,nonatomic) BOOL nonDiscretionary;                                     //@synthesize nonDiscretionary=_nonDiscretionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(oneway void)invalidate;
-(void)cancel;
-(void)start;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)remoteObject;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(BOOL)_finishIfCancelled;
-(void)_setRemoteOperation:(id)arg1 ;
-(BOOL)waitForRemoteToBeCancelled;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
-(oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2 ;
-(oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)finishIfCancelled;
-(NSObject*<BRCancellable>)remoteOperation;
-(void)setRemoteOperation:(NSObject*<BRCancellable>)arg1 ;
-(void)setWaitForRemoteToBeCancelled:(BOOL)arg1 ;
-(BOOL)nonDiscretionary;
-(void)setNonDiscretionary:(BOOL)arg1 ;
@end

