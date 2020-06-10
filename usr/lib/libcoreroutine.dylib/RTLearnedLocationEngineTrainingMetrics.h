/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableArray;

@interface RTLearnedLocationEngineTrainingMetrics : NSObject {

	BOOL _trainedVisits;
	NSDate* _trainVisitsStart;
	NSDate* _trainVisitsStop;
	double _intervalSinceLastAttempt;
	unsigned long long _locationsProcessed;
	double _maxIntervalBetweenLocations;
	NSMutableArray* _visits;
	NSMutableArray* _places;
	unsigned long long _visitCountDevice;
	unsigned long long _visitCountTotal;
	unsigned long long _placeCountDevice;
	unsigned long long _placeCountTotal;

}

@property (assign,nonatomic) BOOL trainedVisits;                                 //@synthesize trainedVisits=_trainedVisits - In the implementation block
@property (nonatomic,readonly) NSDate * trainVisitsStart;                        //@synthesize trainVisitsStart=_trainVisitsStart - In the implementation block
@property (nonatomic,readonly) NSDate * trainVisitsStop;                         //@synthesize trainVisitsStop=_trainVisitsStop - In the implementation block
@property (assign,nonatomic) double intervalSinceLastAttempt;                    //@synthesize intervalSinceLastAttempt=_intervalSinceLastAttempt - In the implementation block
@property (assign,nonatomic) unsigned long long locationsProcessed;              //@synthesize locationsProcessed=_locationsProcessed - In the implementation block
@property (assign,nonatomic) double maxIntervalBetweenLocations;                 //@synthesize maxIntervalBetweenLocations=_maxIntervalBetweenLocations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visits;                          //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSMutableArray * places;                          //@synthesize places=_places - In the implementation block
@property (assign,nonatomic) unsigned long long visitCountDevice;                //@synthesize visitCountDevice=_visitCountDevice - In the implementation block
@property (assign,nonatomic) unsigned long long visitCountTotal;                 //@synthesize visitCountTotal=_visitCountTotal - In the implementation block
@property (assign,nonatomic) unsigned long long placeCountDevice;                //@synthesize placeCountDevice=_placeCountDevice - In the implementation block
@property (assign,nonatomic) unsigned long long placeCountTotal;                 //@synthesize placeCountTotal=_placeCountTotal - In the implementation block
-(id)description;
-(id)init;
-(double)latency;
-(void)setTrainedVisits:(BOOL)arg1 ;
-(void)setIntervalSinceLastAttempt:(double)arg1 ;
-(void)setLocationsProcessed:(unsigned long long)arg1 ;
-(void)setMaxIntervalBetweenLocations:(double)arg1 ;
-(void)setVisitCountDevice:(unsigned long long)arg1 ;
-(void)setVisitCountTotal:(unsigned long long)arg1 ;
-(void)setPlaceCountDevice:(unsigned long long)arg1 ;
-(void)setPlaceCountTotal:(unsigned long long)arg1 ;
-(BOOL)trainedVisits;
-(double)intervalSinceLastAttempt;
-(unsigned long long)locationsProcessed;
-(double)maxIntervalBetweenLocations;
-(NSMutableArray *)visits;
-(NSMutableArray *)places;
-(unsigned long long)visitCountDevice;
-(unsigned long long)visitCountTotal;
-(unsigned long long)placeCountDevice;
-(unsigned long long)placeCountTotal;
-(void)submitVisit:(id)arg1 possibleMapItems:(id)arg2 selectedMapItem:(id)arg3 ;
-(void)submitPlace:(id)arg1 nearbyPlaces:(id)arg2 ;
-(void)startTrainingVisits;
-(void)stopTrainingVisits;
-(NSDate *)trainVisitsStart;
-(NSDate *)trainVisitsStop;
@end

