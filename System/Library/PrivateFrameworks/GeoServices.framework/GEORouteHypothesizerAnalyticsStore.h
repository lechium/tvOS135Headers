/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {

	double _observedEarlyDeltaFromRequiredTimeToLeave;
	double _observedLateDeltaFromRequiredTimeToLeave;
	unsigned long long _hypothesizerRerouteCount;
	unsigned long long _etaUpdatesAfterEventStart;
	BOOL _etaUpdatesWereReported;
	unsigned long long _hypothesisCount;
	BOOL _stopped;
	unsigned long long _uiNotificationType;
	NSDate* _lastGenerationDate;

}

@property (assign,nonatomic) unsigned long long etaUpdatesAfterEventStart;              //@synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart - In the implementation block
@property (assign,nonatomic) BOOL etaUpdatesWereReported;                               //@synthesize etaUpdatesWereReported=_etaUpdatesWereReported - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didGenerateHypothesis;
-(unsigned long long)etaUpdatesAfterEventStart;
-(void)setEtaUpdatesAfterEventStart:(unsigned long long)arg1 ;
-(BOOL)etaUpdatesWereReported;
-(void)setEtaUpdatesWereReported:(BOOL)arg1 ;
-(void)didShowUI:(unsigned long long)arg1 ;
-(void)didReroute;
-(void)didStartMovingWithExpectedDepartureTime:(id)arg1 ;
-(void)didStopMoving;
-(void)didArriveWithExpectedArrivalTime:(id)arg1 ;
-(void)didStopHypothesizing;
@end

