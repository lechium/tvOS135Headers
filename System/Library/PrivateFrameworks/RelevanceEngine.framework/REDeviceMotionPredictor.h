/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REDeviceMotionPredictorProperties.h>

@class CMMotionActivityManager, REUpNextScheduler, CMMotionActivity;

@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties> {

	CMMotionActivityManager* _activityManager;
	REUpNextScheduler* _scheduler;
	CMMotionActivity* _lastActivity;
	BOOL _stationary;
	unsigned long long _motionType;

}

@property (getter=isStationary) BOOL stationary;                                       //@synthesize stationary=_stationary - In the implementation block
@property (assign) unsigned long long motionType;                                      //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) CMMotionActivityManager * activityManager; 
+(id)supportedFeatures;
-(id)_init;
-(void)resume;
-(void)pause;
-(BOOL)isStationary;
-(void)setStationary:(BOOL)arg1 ;
-(unsigned long long)motionType;
-(void)setMotionType:(unsigned long long)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_updateWithActivity:(id)arg1 ;
-(CMMotionActivityManager *)activityManager;
@end

