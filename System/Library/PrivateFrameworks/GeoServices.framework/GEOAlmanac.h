/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject {

	GEOAlmanacRiseTransitSet* _previousRiseTransitSet;
	GEOAlmanacRiseTransitSet* _currentRiseTransitSet;
	GEOAlmanacRiseTransitSet* _nextRiseTransitSet;

}

@property (nonatomic,readonly) BOOL isDayLight; 
@property (nonatomic,readonly) NSDate * previousSunrise; 
@property (nonatomic,readonly) NSDate * previousTransit; 
@property (nonatomic,readonly) NSDate * previousSunset; 
@property (nonatomic,readonly) NSDate * sunrise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * sunset; 
@property (nonatomic,readonly) NSDate * nextSunrise; 
@property (nonatomic,readonly) NSDate * nextTransit; 
@property (nonatomic,readonly) NSDate * nextSunset; 
-(id)description;
-(NSDate *)transit;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE32)arg1 altitudeInDegrees:(double)arg2 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE32)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE32)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 ;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 date:(id)arg4 ;
-(NSDate *)previousSunrise;
-(NSDate *)previousSunset;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(NSDate *)nextSunrise;
-(NSDate *)nextSunset;
-(BOOL)isDayLightForDate:(id)arg1 ;
-(id)sortedTimesForDate:(id)arg1 ;
-(NSDate *)previousTransit;
-(NSDate *)nextTransit;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE32)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE32)arg1 time:(double)arg2 ;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 ;
-(BOOL)isDayLight;
-(BOOL)isDayLightForTime:(double)arg1 ;
@end

