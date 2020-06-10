/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSUUID;

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fNumberOfSteps;
	NSNumber* fDistance;
	NSNumber* fFloorsAscended;
	NSNumber* fFloorsDescended;
	NSNumber* fRecordId;
	NSNumber* fCurrentPace;
	NSNumber* fCurrentCadence;
	NSDate* fFirstStepTime;
	NSNumber* fActiveTime;
	NSUUID* fSourceId;
	NSNumber* fIsOdometerDistance;
	NSNumber* fIsOdometerPace;
	NSNumber* fNumberOfPushes;
	NSNumber* fWorkoutType;
	NSNumber* fElevationAscended;
	NSNumber* fElevationDescended;
	NSNumber* fDistanceSource;

}

@property (nonatomic,readonly) long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSNumber * numberOfPushes; 
@property (nonatomic,readonly) NSNumber * workoutType; 
@property (nonatomic,readonly) NSNumber * elevationAscended; 
@property (nonatomic,readonly) NSNumber * elevationDescended; 
@property (nonatomic,readonly) NSNumber * distanceSource; 
@property (nonatomic,readonly) NSDate * firstStepTime; 
@property (nonatomic,readonly) NSNumber * activeTime; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * numberOfSteps; 
@property (nonatomic,readonly) NSNumber * distance; 
@property (nonatomic,readonly) NSNumber * floorsAscended; 
@property (nonatomic,readonly) NSNumber * floorsDescended; 
@property (nonatomic,readonly) NSNumber * currentPace; 
@property (nonatomic,readonly) NSNumber * currentCadence; 
@property (nonatomic,readonly) NSNumber * averageActivePace; 
+(BOOL)supportsSecureCoding;
+(id)maxPedometerEntries;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSNumber *)distance;
-(long long)recordId;
-(NSUUID *)sourceId;
-(NSNumber *)elevationAscended;
-(NSNumber *)elevationDescended;
-(NSNumber *)workoutType;
-(NSNumber *)numberOfSteps;
-(NSNumber *)numberOfPushes;
-(NSNumber *)floorsAscended;
-(NSNumber *)floorsDescended;
-(NSNumber *)activeTime;
-(NSDate *)firstStepTime;
-(NSNumber *)currentPace;
-(NSNumber *)currentCadence;
-(BOOL)isOdometerDistance;
-(BOOL)isOdometerPace;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 firstStepTime:(double)arg10 activeTime:(id)arg11 sourceId:(id)arg12 isOdometerDistance:(id)arg13 isOdometerPace:(id)arg14 pushes:(int)arg15 workoutType:(int)arg16 elevationAscended:(id)arg17 elevationDescended:(id)arg18 distanceSource:(int)arg19 ;
-(NSNumber *)averageActivePace;
-(NSNumber *)distanceSource;
@end

