/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTMotionActivityManager, NSDate, NSString;

@interface RTVisitPipelineModuleMotionActivityCluster : NSObject <RTVisitPipelineModule> {

	RTMotionActivityManager* _motionActivityManager;
	NSDate* _lastProcessedDate;

}

@property (nonatomic,retain) NSDate * lastProcessedDate;              //@synthesize lastProcessedDate=_lastProcessedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)process:(id)arg1 ;
-(id)initWithMotionActivityManager:(id)arg1 ;
-(id)activitiesWithinDateInterval:(id)arg1 error:(id*)arg2 ;
-(id)automotiveDateIntervalsWithinDateInterval:(id)arg1 activities:(id)arg2 ;
-(id)motionActivityVisitClustersFromVisitCluster:(id)arg1 automotiveDateIntervals:(id)arg2 ;
-(id)motionActivityVisitClustersFromVisitCluster:(id)arg1 error:(id*)arg2 ;
-(NSDate *)lastProcessedDate;
-(void)setLastProcessedDate:(NSDate *)arg1 ;
@end

