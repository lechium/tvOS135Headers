/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTransitTimeRange.h>

@class NSDate, NSString;

@interface _GEOTimeRange : NSObject <GEOTransitTimeRange> {

	GEOPBTransitTimeRange _pbTimeRange;
	GEOPDTimeRange _pdTimeRange;
	BOOL _usePB;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(double)startTime;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(BOOL)contains:(id)arg1 ;
-(id)initWithPDTimeRange:(GEOPDTimeRange)arg1 ;
-(id)initWithPBTimeRange:(GEOPBTransitTimeRange)arg1 ;
@end

