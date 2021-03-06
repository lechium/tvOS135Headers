/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Routine/Routine-Structs.h>
@class GEOLocationShifter;

@interface RTLocationShifter : NSObject {

	GEOLocationShifter* _geoLocationShifter;

}
+(BOOL)isLocationShiftRequiredForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)init;
-(void)shiftCoordinate:(CLLocationCoordinate2D)arg1 accuracy:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)shiftLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)shiftedLocation:(id)arg1 allowNetwork:(BOOL)arg2 error:(id*)arg3 ;
@end

