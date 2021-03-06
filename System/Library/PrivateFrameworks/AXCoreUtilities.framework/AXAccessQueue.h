/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AXAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	unsigned long long _specialBehaviors;

}

@property (nonatomic,copy) NSString * threadLocalStorageKey;                            //@synthesize threadLocalStorageKey=_threadLocalStorageKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (assign,nonatomic) unsigned long long specialBehaviors;                       //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (nonatomic,readonly) BOOL behavesAsMainQueue; 
@property (nonatomic,readonly) BOOL behavesWithoutErrorReporting; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)mainAccessQueue;
+(id)backgroundAccessQueue;
-(id)description;
-(id)init;
-(NSString *)label;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(BOOL)arg3 ;
-(void)performAsynchronousWritingBlock:(/*^block*/id)arg1 ;
-(BOOL)canWriteInCurrentExecutionThread;
-(void)performSynchronousWritingBlock:(/*^block*/id)arg1 ;
-(void)performAsynchronousReadingBlock:(/*^block*/id)arg1 ;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(BOOL)canReadInCurrentExecutionThread;
-(void)performSynchronousReadingBlock:(/*^block*/id)arg1 ;
-(BOOL)canOnlyReadInCurrentExecutionThread;
-(id)_initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 specialBehaviors:(unsigned long long)arg3 ;
-(void)setSpecialBehaviors:(unsigned long long)arg1 ;
-(void)setThreadLocalStorageKey:(NSString *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)behavesAsMainQueue;
-(unsigned long long)specialBehaviors;
-(void)_performBlock:(/*^block*/id)arg1 withDispatchFunction:(/*function pointer*/void*)arg2 synchronously:(BOOL)arg3 accessQueueContext:(unsigned long long)arg4 ;
-(unsigned long long)_accessQueueContextInCurrentExecutionThread;
-(BOOL)behavesWithoutErrorReporting;
-(NSString *)threadLocalStorageKey;
@end

