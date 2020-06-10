/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFBlockControlCanceling.h>
#import <libobjc.A.dylib/PFBlockControlQueueing.h>
#import <libobjc.A.dylib/PFBlockControlDirectExecution.h>

@protocol OS_dispatch_group;
@class PFDispatchQueue, NSObject, NSString;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {

	PFDispatchQueue* _queue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_group> _workGroup;
	AQ _status;
	BOOL _executeOnDealloc;

}

@property (assign) BOOL executeOnDealloc;                           //@synthesize executeOnDealloc=_executeOnDealloc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BOOL)executeBlock;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)enqueue;
-(void)_execute;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)cancelBlock;
-(BOOL)dequeue;
-(void)notifyOnQueue:(id)arg1 whenFinished:(/*^block*/id)arg2 ;
-(void)waitForBlock;
-(BOOL)blockHasStarted;
-(BOOL)blockHasFinished;
-(BOOL)blockWasCanceled;
-(BOOL)enqueueWithDelay:(unsigned long long)arg1 ;
-(BOOL)groupNotify:(id)arg1 ;
-(BOOL)tryCancelBlock;
-(void)invoke:(unsigned long long)arg1 ;
-(unsigned long long)_shouldEnqueue;
-(BOOL)executeOnDealloc;
-(void)setExecuteOnDealloc:(BOOL)arg1 ;
@end

