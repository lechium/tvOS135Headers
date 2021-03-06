/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString;

@interface MPFuture : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _finalized;
	id _result;
	id _error;
	NSObject*<OS_dispatch_queue> _lazyBlockQueue;
	/*^block*/id _lazySyncBlock;
	/*^block*/id _lazyAsyncBlock;
	NSMapTable* _successBlocks;
	NSMapTable* _failureBlocks;
	NSMapTable* _completionBlocks;
	BOOL _finished;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;              //@synthesize finished=_finished - In the implementation block
+(id)calloutQueue;
+(id)futureWithName:(id)arg1 result:(id)arg2 ;
+(id)futureWithName:(id)arg1 error:(id)arg2 ;
+(id)futureWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)futureWithName:(id)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
+(id)futureWithName:(id)arg1 asyncBlock:(/*^block*/id)arg2 ;
+(id)futureWithName:(id)arg1 asyncBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 ;
-(BOOL)isFinished;
-(id)result:(id*)arg1 ;
-(id)onSuccess:(/*^block*/id)arg1 ;
-(id)onSuccess:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onFailure:(/*^block*/id)arg1 ;
-(id)onFailure:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)onCompletion:(/*^block*/id)arg1 ;
-(id)onCompletion:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_loadResultIfNeeded;
-(void)_onQueue_finalizeWithResult:(id)arg1 error:(id)arg2 ;
@end

