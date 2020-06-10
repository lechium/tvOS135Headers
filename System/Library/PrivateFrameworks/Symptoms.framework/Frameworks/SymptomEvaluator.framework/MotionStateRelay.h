/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CMMotionActivityManager, NSOperationQueue;

@interface MotionStateRelay : NSObject {

	NSObject*<OS_dispatch_queue> _alarmQueue;
	unsigned _currentMotion;
	BOOL _isStationary;
	BOOL _isMoving;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _alarmOperationQueue;

}

@property (nonatomic,readonly) unsigned currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
@property (nonatomic,readonly) BOOL isStationary;                   //@synthesize isStationary=_isStationary - In the implementation block
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+(BOOL)automaticallyNotifiesObserversOfIsStationary;
-(id)init;
-(void)dealloc;
-(void)stopActivityUpdates;
-(BOOL)isMoving;
-(void)transitionToState:(unsigned)arg1 ;
-(BOOL)isStationary;
-(void)unsubscribe;
-(void)subscribe;
-(void)initializeEngine;
-(void)destroyEngine;
-(void)stopMotionMonitoring;
-(void)startMotionMonitoring;
-(void)startActivityUpdates;
-(id)motionStateString:(unsigned)arg1 ;
-(unsigned)currentMotion;
@end

