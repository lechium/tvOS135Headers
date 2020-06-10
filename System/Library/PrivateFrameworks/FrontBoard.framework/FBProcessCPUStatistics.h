/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class BSMachPortTaskNameRight;

@interface FBProcessCPUStatistics : NSObject {

	BSMachPortTaskNameRight* _taskNameRight;
	FBProcessTimes _times;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) double totalElapsedTime; 
@property (nonatomic,readonly) double totalElapsedUserTime; 
@property (nonatomic,readonly) double totalElapsedSystemTime; 
@property (nonatomic,readonly) double totalElapsedIdleTime; 
-(void)dealloc;
-(id)initWithTaskNameRight:(id)arg1 ;
-(void)update;
-(double)totalElapsedTime;
-(id)descriptionForCrashReport;
-(double)_elapsedCPUTime;
-(void)_lock_getApplicationCPUTimesForUser:(out double*)arg1 system:(out double*)arg2 idle:(out double*)arg3 ;
-(void)_hostwideUserElapsedCPUTime:(out double*)arg1 systemElapsedCPUTime:(out double*)arg2 idleElapsedCPUTime:(out double*)arg3 ;
-(double)totalElapsedUserTime;
-(double)totalElapsedSystemTime;
-(double)totalElapsedIdleTime;
@end

