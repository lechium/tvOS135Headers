/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WFTimeTriggerLogic : NSObject {

	NSDate* _currentSunriseTime;
	NSDate* _currentSunsetTime;

}

@property (nonatomic,retain) NSDate * currentSunriseTime;              //@synthesize currentSunriseTime=_currentSunriseTime - In the implementation block
@property (nonatomic,retain) NSDate * currentSunsetTime;               //@synthesize currentSunsetTime=_currentSunsetTime - In the implementation block
+(id)sharedInstance;
-(void)setCurrentSunsetTime:(NSDate *)arg1 ;
-(void)setCurrentSunriseTime:(NSDate *)arg1 ;
-(id)nextFireDateForTrigger:(id)arg1 ;
-(id)triggersFromTriggers:(id)arg1 thatShouldFireAtDate:(id)arg2 ;
-(id)adjustedTime:(id)arg1 byOffset:(unsigned long long)arg2 ;
-(NSDate *)currentSunriseTime;
-(NSDate *)currentSunsetTime;
@end

