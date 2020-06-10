/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNLocationDetails, NSArray, GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceRecordingData : NSObject <NSSecureCoding> {

	MNLocationDetails* _initialUserLocationDetails;
	NSArray* _waypoints;
	GEODirectionsRequest* _initialDirectionsRequest;
	GEODirectionsResponse* _initialDirectionsResponse;
	NSError* _initialDirectionsRequestError;
	double _initialDirectionsRequestTimestamp;
	double _initialDirectionsResponseTimestamp;

}

@property (nonatomic,retain) MNLocationDetails * initialUserLocationDetails;                 //@synthesize initialUserLocationDetails=_initialUserLocationDetails - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                                            //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * initialDirectionsRequest;                //@synthesize initialDirectionsRequest=_initialDirectionsRequest - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * initialDirectionsResponse;              //@synthesize initialDirectionsResponse=_initialDirectionsResponse - In the implementation block
@property (nonatomic,retain) NSError * initialDirectionsRequestError;                        //@synthesize initialDirectionsRequestError=_initialDirectionsRequestError - In the implementation block
@property (assign,nonatomic) double initialDirectionsRequestTimestamp;                       //@synthesize initialDirectionsRequestTimestamp=_initialDirectionsRequestTimestamp - In the implementation block
@property (assign,nonatomic) double initialDirectionsResponseTimestamp;                      //@synthesize initialDirectionsResponseTimestamp=_initialDirectionsResponseTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)waypoints;
-(void)setWaypoints:(NSArray *)arg1 ;
-(MNLocationDetails *)initialUserLocationDetails;
-(GEODirectionsRequest *)initialDirectionsRequest;
-(GEODirectionsResponse *)initialDirectionsResponse;
-(NSError *)initialDirectionsRequestError;
-(double)initialDirectionsRequestTimestamp;
-(double)initialDirectionsResponseTimestamp;
-(void)setInitialDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(void)setInitialDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(void)setInitialDirectionsRequestError:(NSError *)arg1 ;
-(void)setInitialDirectionsRequestTimestamp:(double)arg1 ;
-(void)setInitialDirectionsResponseTimestamp:(double)arg1 ;
-(void)setInitialUserLocationDetails:(MNLocationDetails *)arg1 ;
@end

