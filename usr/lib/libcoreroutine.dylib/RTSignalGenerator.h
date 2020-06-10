/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class RTSignalGeneratorOptions, RTLocationManager, NSMutableArray;

@interface RTSignalGenerator : NSObject {

	RTSignalGeneratorOptions* _signalGeneratorOptions;
	RTLocationManager* _locationManager;
	unsigned long long _totalVisitLocationsGeneratedCount;
	unsigned long long _totalTransitionLocationsGeneratedCount;
	NSMutableArray* _generatedLocations;

}

@property (retain) NSMutableArray * generatedLocations;              //@synthesize generatedLocations=_generatedLocations - In the implementation block
+(void)injectSignalForSignalGeneratorOptions:(id)arg1 locationManager:(id)arg2 handler:(/*^block*/id)arg3 ;
+(double)angleOfLineBetweenCoordinate1:(CLLocationCoordinate2D)arg1 coordinate2:(CLLocationCoordinate2D)arg2 ;
+(double)perpendicularAngleForAngle:(double)arg1 ;
+(double)angleSweptFromStartAngle:(double)arg1 ToEndAngle:(double)arg2 ;
+(CLLocationCoordinate2D)averageCoordinateOfCoordinate1:(CLLocationCoordinate2D)arg1 coordinate2:(CLLocationCoordinate2D)arg2 ;
+(double)minSpeedToFilterHyperParameter;
+(double)arcDistanceForStartLocation:(id)arg1 endLocation:(id)arg2 centerLocation:(id)arg3 ;
+(id)locationBetweenLowerDistanceBound:(double)arg1 upperDistanceBound:(double)arg2 fromStartLocation:(id)arg3 endLocation:(id)arg4 betweenTargetLowLocation:(id)arg5 targetHighLocation:(id)arg6 ;
+(CLLocationCoordinate2D)coordinateAtDisplacement:(double)arg1 fromCenterCoordinate:(CLLocationCoordinate2D)arg2 atAngle:(double)arg3 ;
+(id)centerProducingArcBetweenLowerDistanceBound:(double)arg1 upperDistanceBound:(double)arg2 fromStartLocation:(id)arg3 endLocation:(id)arg4 examiningLatLongDisplacement:(double)arg5 fromIntersectingLocation:(id)arg6 atAngle:(double)arg7 ;
+(double)anglePerpendicularToLineBetweenLocation1:(id)arg1 location2:(id)arg2 ;
+(id)centerProducingArcBetweenLowerDistanceBound:(double)arg1 upperDistanceBound:(double)arg2 FromStartLocation:(id)arg3 endLocation:(id)arg4 ;
+(id)necessaryCenterOfArcBetweenStartLocation:(id)arg1 endLocation:(id)arg2 minimumSpeed:(double)arg3 ;
+(double)latLongDisplacementBetweenCoordinate1:(CLLocationCoordinate2D)arg1 coordinate2:(CLLocationCoordinate2D)arg2 ;
-(id)init;
-(id)generateLocations;
-(id)initWithSignalGeneratorOptions:(id)arg1 locationManager:(id)arg2 generatedLocations:(id)arg3 ;
-(unsigned long long)locationCountInStoreWithError:(id*)arg1 ;
-(id)transitionLocationsAlongArcBetweenStartLocation:(id)arg1 endLocation:(id)arg2 forCenterLocation:(id)arg3 ;
-(id)transitionLocationsBetweenStartLocation:(id)arg1 endLocation:(id)arg2 coordinateCalculationBlock:(/*^block*/id)arg3 ;
-(id)addGeneratedLocation:(id)arg1 forceInject:(BOOL)arg2 ;
-(id)initWithSignalGeneratorOptions:(id)arg1 locationManager:(id)arg2 ;
-(id)transitionLocationsBetweenStartLocation:(id)arg1 endLocation:(id)arg2 ;
-(id)locationsForVisit:(id)arg1 ;
-(NSMutableArray *)generatedLocations;
-(void)setGeneratedLocations:(NSMutableArray *)arg1 ;
@end

