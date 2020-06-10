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

@class NSUUID, NSDate;

@interface CMSkiData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	double fRunDistance;
	double fRunAvgSpeed;
	double fRunMaxSpeed;
	double fRunSlope;
	double fRunElevationDescent;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) double runDistance; 
@property (nonatomic,readonly) double runAvgSpeed; 
@property (nonatomic,readonly) double runMaxSpeed; 
@property (nonatomic,readonly) double runSlope; 
@property (nonatomic,readonly) double runElevationDescent; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSUUID *)sessionId;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(id)initWithSessionId:(id)arg1 ;
-(double)runDistance;
-(double)runElevationDescent;
-(double)runAvgSpeed;
-(double)runMaxSpeed;
-(double)runSlope;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 runDistance:(double)arg6 runAvgSpeed:(double)arg7 runMaxSpeed:(double)arg8 runSlope:(double)arg9 runElevationDescent:(double)arg10 ;
-(id)initWithSkiEntry:(const CLSkiEntry*)arg1 ;
-(void)convertToSkiEntry:(CLSkiEntry*)arg1 ;
@end

