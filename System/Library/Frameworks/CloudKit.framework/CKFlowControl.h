/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSDate;

@interface CKFlowControl : NSObject {

	unsigned long long _budgetCap;
	double _regenerationPerSecond;
	unsigned long long _totalSamples;
	double _totalCost;
	double _budget;
	double _maximumThrottleTime;
	NSError* _lastReportableError;
	NSDate* _lastRegeneration;

}

@property (nonatomic,retain) NSError * lastReportableError;              //@synthesize lastReportableError=_lastReportableError - In the implementation block
@property (assign) double budget;                                        //@synthesize budget=_budget - In the implementation block
@property (retain) NSDate * lastRegeneration;                            //@synthesize lastRegeneration=_lastRegeneration - In the implementation block
@property (assign) unsigned long long budgetCap;                         //@synthesize budgetCap=_budgetCap - In the implementation block
@property (assign) double regenerationPerSecond;                         //@synthesize regenerationPerSecond=_regenerationPerSecond - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;                 //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
+(id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(id)description;
-(void)setBudgetCap:(unsigned long long)arg1 ;
-(void)setBudget:(double)arg1 ;
-(void)setRegenerationPerSecond:(double)arg1 ;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(void)setLastRegeneration:(NSDate *)arg1 ;
-(id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(void)regenerate;
-(double)budget;
-(double)_secondsUntilBudgetLimitationRemovedNoRegen;
-(unsigned long long)budgetCap;
-(double)regenerationPerSecond;
-(double)maximumThrottleTime;
-(NSDate *)lastRegeneration;
-(void)setLastReportableError:(NSError *)arg1 ;
-(void)expendWithCost:(double)arg1 reportableError:(id)arg2 ;
-(id)CKPropertiesDescription;
-(double)secondsUntilBudgetLimitationRemoved;
-(BOOL)isLimited;
-(BOOL)attemptBudgetedExpenditureWithCost:(double)arg1 ;
-(NSError *)lastReportableError;
@end

