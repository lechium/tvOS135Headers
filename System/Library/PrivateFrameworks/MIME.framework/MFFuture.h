/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFPromisePrivate.h>
#import <libobjc.A.dylib/MFFuture.h>

@protocol MFFuture <MFCancelable>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(id)result:(id*)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)then:(/*^block*/id)arg1;
-(id)recover:(/*^block*/id)arg1;
-(id)map:(/*^block*/id)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2;
-(BOOL)tryCancel;
-(id)onScheduler:(id)arg1 then:(/*^block*/id)arg2;
-(id)onScheduler:(id)arg1 recover:(/*^block*/id)arg2;

@end


@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface MFFuture : NSObject <MFPromisePrivate, MFFuture> {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id completionHandlerAdapter; 
@property (readonly) id boolErrorCompletionHandlerAdapter; 
@property (readonly) id errorOnlyCompletionHandlerAdapter; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)chain:(id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)sequence:(id)arg1 ;
+(id)join:(id)arg1 ;
+(id)onScheduler:(id)arg1 futureWithBlock:(/*^block*/id)arg2 ;
+(id)_then:(id)arg1 withBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)_recover:(id)arg1 withBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)nullFuture;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_nts_isFinished;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)boolErrorCompletionHandlerAdapter;
-(id)map:(/*^block*/id)arg1 ;
-(id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)errorOnlyCompletionHandlerAdapter;
-(void)_finishWithFuture:(id)arg1 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(BOOL)tryCancel;
-(id)onScheduler:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)onScheduler:(id)arg1 recover:(/*^block*/id)arg2 ;
@end

