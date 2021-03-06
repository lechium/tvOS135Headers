/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSKeyedObservable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _observersByKey;

}
-(void)addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_observersForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 callOutQueue:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

