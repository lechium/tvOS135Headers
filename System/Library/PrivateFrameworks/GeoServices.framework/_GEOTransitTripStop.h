/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitTripStop.h>

@protocol GEOTransitDeparture;
@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;

@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop> {

	NSTimeZone* _timeZone;
	unsigned long long _stationIdentifier;
	NSString* _transitName;
	NSArray* _labelItems;
	GEOLatLng* _location;
	GEOStyleAttributes* _styleAttributes;
	id<GEOTransitDeparture> _departure;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitDeparture> departure;                 //@synthesize departure=_departure - In the implementation block
@property (nonatomic,readonly) unsigned long long stationIdentifier; 
@property (nonatomic,readonly) GEOLatLng * location; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
+(id)transitTripStopsForPlaceData:(id)arg1 ;
-(NSString *)debugDescription;
-(NSTimeZone *)timeZone;
-(NSString *)displayName;
-(GEOLatLng *)location;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned long long)stationIdentifier;
-(id<GEOTransitDeparture>)departure;
-(id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2 ;
-(NSArray *)labelItems;
@end

