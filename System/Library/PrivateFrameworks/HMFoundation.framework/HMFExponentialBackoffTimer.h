/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFTimer.h>

@interface HMFExponentialBackoffTimer : HMFTimer {

	BOOL _increasing;
	double _minimumTimeInterval;
	double _maximumTimeInterval;
	long long _exponentialFactor;

}

@property (getter=isIncreasing,nonatomic,readonly) BOOL increasing;              //@synthesize increasing=_increasing - In the implementation block
@property (nonatomic,readonly) double minimumTimeInterval;                       //@synthesize minimumTimeInterval=_minimumTimeInterval - In the implementation block
@property (nonatomic,readonly) double maximumTimeInterval;                       //@synthesize maximumTimeInterval=_maximumTimeInterval - In the implementation block
@property (nonatomic,readonly) long long exponentialFactor;                      //@synthesize exponentialFactor=_exponentialFactor - In the implementation block
-(double)timeInterval;
-(void)reset;
-(void)__fire;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)isIncreasing;
-(long long)exponentialFactor;
-(double)maximumTimeInterval;
-(double)minimumTimeInterval;
@end

