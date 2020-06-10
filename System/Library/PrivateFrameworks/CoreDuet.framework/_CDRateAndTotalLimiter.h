/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	long long _totalCount;
	long long _currentTotal;

}

@property (assign) long long currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
@property (readonly) long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(id)description;
-(long long)totalCount;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3 ;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)credit;
-(BOOL)debited;
-(long long)currentTotal;
-(void)setCurrentTotal:(long long)arg1 ;
@end
