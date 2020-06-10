/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, GEOLocation, GEORouteHypothesisIncident, NSError, NSString;

@interface GEORouteHypothesis : NSObject <NSSecureCoding> {

	NSDate* _generationDate;
	GEOLocation* _lastLocation;
	int _transportType;
	NSDate* _suggestedDepartureDate;
	double _estimatedTravelTime;
	unsigned long long _currentTrafficDensity;
	unsigned long long _historicTrafficDensity;
	GEORouteHypothesisIncident* _mostRelevantIncident;
	long long _travelState;
	BOOL _supportsLiveTraffic;
	NSError* _error;
	NSDate* _conservativeDepartureDate;
	NSDate* _aggressiveDepartureDate;
	double _conservativeTravelTime;
	double _aggressiveTravelTime;
	NSString* _routeName;
	NSString* _trafficDensityDescription;

}

@property (nonatomic,readonly) NSDate * generationDate;                                        //@synthesize generationDate=_generationDate - In the implementation block
@property (nonatomic,readonly) GEOLocation * lastLocation;                                     //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) int transportType;                                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedDepartureDate;                                //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (nonatomic,readonly) double estimatedTravelTime;                                     //@synthesize estimatedTravelTime=_estimatedTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned long long currentTrafficDensity;                       //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,readonly) unsigned long long historicTrafficDensity;                      //@synthesize historicTrafficDensity=_historicTrafficDensity - In the implementation block
@property (nonatomic,readonly) NSString * trafficDensityDescription; 
@property (nonatomic,copy,readonly) NSString * routeName;                                      //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesisIncident * mostRelevantIncident;              //@synthesize mostRelevantIncident=_mostRelevantIncident - In the implementation block
@property (nonatomic,readonly) long long travelState;                                          //@synthesize travelState=_travelState - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic;                                       //@synthesize supportsLiveTraffic=_supportsLiveTraffic - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDate * conservativeDepartureDate;                             //@synthesize conservativeDepartureDate=_conservativeDepartureDate - In the implementation block
@property (nonatomic,readonly) NSDate * aggressiveDepartureDate;                               //@synthesize aggressiveDepartureDate=_aggressiveDepartureDate - In the implementation block
@property (nonatomic,readonly) double conservativeTravelTime;                                  //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,readonly) double aggressiveTravelTime;                                    //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)supportsTravelState:(long long)arg1 forTransportType:(int)arg2 ;
+(id)_routeHypothesisErrorWithUnderlyingError:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(int)transportType;
-(void)setLastLocation:(GEOLocation *)arg1 ;
-(long long)travelState;
-(NSDate *)suggestedDepartureDate;
-(unsigned long long)currentTrafficDensity;
-(unsigned long long)historicTrafficDensity;
-(GEOLocation *)lastLocation;
-(BOOL)supportsLiveTraffic;
-(void)setSupportsLiveTraffic:(BOOL)arg1 ;
-(void)_clearHypothesisAndSetErrorWithCode:(long long)arg1 ;
-(void)_updateTravelStateHasArrived:(BOOL)arg1 isTraveling:(BOOL)arg2 travelScore:(double)arg3 isNavigating:(BOOL)arg4 isNavigatingToDestination:(BOOL)arg5 ;
-(double)estimatedTravelTime;
-(NSDate *)conservativeDepartureDate;
-(NSDate *)aggressiveDepartureDate;
-(NSDate *)generationDate;
-(void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)_updateTrafficIncidents:(id)arg1 ;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)_updateTrafficDensityDescription:(id)arg1 ;
-(void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg1 travelTimeWithTraffic:(double)arg2 conservativeTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 transportType:(int)arg5 ;
-(double)aggressiveTravelTime;
-(GEORouteHypothesisIncident *)mostRelevantIncident;
-(double)conservativeTravelTime;
-(NSString *)trafficDensityDescription;
@end

