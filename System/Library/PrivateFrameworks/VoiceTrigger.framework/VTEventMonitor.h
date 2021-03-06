/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface VTEventMonitor : NSObject {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)notifyObserver:(id)arg1 ;
-(void)_stopMonitoring;
-(void)enumerateObserversInQueue:(/*^block*/id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
@end

