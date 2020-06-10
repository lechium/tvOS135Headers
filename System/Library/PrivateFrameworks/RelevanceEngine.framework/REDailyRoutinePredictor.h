/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REObservableSingleton.h>
#import <libobjc.A.dylib/REPeriodOfDayPredictorDelegate.h>

@protocol OS_dispatch_queue;
@class REPeriodOfDayPredictor, REUpNextTimer, NSObject, NSDateInterval, NSLock, NSNumber, NSString;

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate> {

	REPeriodOfDayPredictor* _periodOfDayPredictor;
	REUpNextTimer* _endMorningRoutineTimer;
	REUpNextTimer* _beginEveningRoutineTimer;
	REUpNextTimer* _endEveningRoutineTimer;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentRoutine;
	NSDateInterval* _currentRoutineInterval;
	NSLock* _routineLock;
	NSNumber* _overrideRoutineType;

}

@property (nonatomic,readonly) unsigned long long currentRoutineType; 
@property (nonatomic,readonly) NSDateInterval * currentRoutineInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_init;
-(id)_eveningRoutineIntervalForEvening:(id)arg1 ;
-(id)_morningRoutineIntervalForMorning:(id)arg1 ;
-(void)_updateCurrentRoutine;
-(void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1 ;
-(void)_queue_setupMorningBeginTimerIfNeeded;
-(void)_queue_setupEveningBeginTimerIfNeeded;
-(void)_queue_didEndMorningRoutine;
-(void)_queue_didEndEveningRoutine;
-(void)_queue_didBeginMorningRoutine;
-(void)_queue_didBeginEveningRoutine;
-(unsigned long long)currentRoutineType;
-(void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1 ;
-(NSDateInterval *)currentRoutineInterval;
-(id)routineIntervalForNextRoutine:(unsigned long long)arg1 ;
-(id)routineIntervalForPreviousRoutine:(unsigned long long)arg1 ;
-(void)_setOverrideRoutineType:(unsigned long long)arg1 ;
@end

