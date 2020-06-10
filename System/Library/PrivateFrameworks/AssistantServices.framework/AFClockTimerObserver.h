/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClockItemStorageDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, MTTimerManager, AFClockTimerSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;

@interface AFClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _listeners;
	MTTimerManager* _timerManager;
	AFClockTimerSnapshot* _timerSnapshot;
	AFClockItemStorage* _timerStorage;
	NSMutableOrderedSet* _notifiedFiringTimerIDs;
	NSUUID* _timersChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_tearDown;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4 ;
-(void)_setUp;
-(void)_fetchTimersForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_timerSnapshot;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)timersAdded:(id)arg1 ;
-(void)timersUpdated:(id)arg1 ;
-(void)timersRemoved:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)firingTimerChanged:(id)arg1 ;
-(void)firingTimerDismissed:(id)arg1 ;
-(void)stateReset:(id)arg1 ;
-(void)timersChanged:(id)arg1 ;
-(void)_handleFetchTimersForReason:(id)arg1 result:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleFetchTimersForReason:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getTimerSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getFiringTimerIDsWithCompletion:(/*^block*/id)arg1 ;
@end

