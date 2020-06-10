/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface CSOpportuneSpeakBehaviorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyWillStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 option:(id)arg3 ;
-(void)notifyDidStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 ;
-(void)notifyWillStopStream:(id)arg1 ;
-(void)notifyDidStopStream:(id)arg1 ;
@end

