/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface RTNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _observersMap;

}

@property (nonatomic,retain) NSMutableDictionary * observersMap;              //@synthesize observersMap=_observersMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)postNotification:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)removeAllObservers;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(void)postNotification:(id)arg1 toObserver:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)removeObserver:(id)arg1 fromNotification:(id)arg2 ;
-(unsigned long long)getNumberOfObservers:(id)arg1 ;
-(NSMutableDictionary *)observersMap;
-(BOOL)observer:(id)arg1 observingNotificationName:(id)arg2 ;
-(void)setObserversMap:(NSMutableDictionary *)arg1 ;
@end

