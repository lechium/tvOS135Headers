/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODirectionServiceTicket.h>

@class GEODirectionsRequest, GEOComposedRoute, NSArray, NSNumber, NSDictionary, GEODirectionsRequester, NSString;

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {

	GEODirectionsRequest* _request;
	BOOL _isReroute;
	GEOComposedRoute* _originalRoute;
	NSArray* _waypoints;
	BOOL _isDoom;
	NSNumber* _requestPriority;
	BOOL _active;
	BOOL _canceled;
	NSDictionary* _userInfo;
	GEODirectionsRequester* _directionsRequester;

}

@property (assign,nonatomic) BOOL isReroute;                                                   //@synthesize isReroute=_isReroute - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * originalRoute;                                 //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                                              //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) BOOL active;                                                    //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                                  //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) NSNumber * requestPriority;                                         //@synthesize requestPriority=_requestPriority - In the implementation block
@property (assign,nonatomic) BOOL isDoom;                                                      //@synthesize isDoom=_isDoom - In the implementation block
@property (assign,nonatomic,__weak) GEODirectionsRequester * directionsRequester;              //@synthesize directionsRequester=_directionsRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEODirectionsRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(NSString *)description;
-(GEODirectionsRequest *)request;
-(void)cancel;
-(void)setRequestPriority:(NSNumber *)arg1 ;
-(NSNumber *)requestPriority;
-(BOOL)canceled;
-(BOOL)active;
-(GEOComposedRoute *)originalRoute;
-(void)setOriginalRoute:(GEOComposedRoute *)arg1 ;
-(NSArray *)waypoints;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)setWaypoints:(NSArray *)arg1 ;
-(BOOL)isReroute;
-(GEODirectionsRequester *)directionsRequester;
-(BOOL)isDoom;
-(id)initWithRequest:(id)arg1 directionsRequester:(id)arg2 ;
-(void)setDirectionsRequester:(GEODirectionsRequester *)arg1 ;
-(void)setIsReroute:(BOOL)arg1 ;
-(void)setIsDoom:(BOOL)arg1 ;
@end

