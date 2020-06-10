/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval;

@interface RTLocationStoreMetricOptions : NSObject {

	NSDateInterval* _dateInterval;
	double _uncertaintyThreshold;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) double uncertaintyThreshold;                //@synthesize uncertaintyThreshold=_uncertaintyThreshold - In the implementation block
-(id)description;
-(id)init;
-(NSDateInterval *)dateInterval;
-(id)initWithDateInterval:(id)arg1 uncertaintyThreshold:(double)arg2 ;
-(double)uncertaintyThreshold;
@end

