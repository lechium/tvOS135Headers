/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TADisplayOnCalculator : NSObject {

	BOOL _useBudget;
	double _budgetRemaining;
	NSDate* _startTime;
	NSDate* _evaluatedUntil;

}

@property (nonatomic,readonly) NSDate * evaluatedUntil;              //@synthesize evaluatedUntil=_evaluatedUntil - In the implementation block
-(NSDate *)evaluatedUntil;
-(void)completeDisplayOnWithEndDate:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 ;
-(double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3 ;
-(id)initWithStartTime:(id)arg1 budget:(double)arg2 ;
@end

