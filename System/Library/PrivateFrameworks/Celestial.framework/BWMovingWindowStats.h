/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStats.h>

@interface BWMovingWindowStats : BWStats {

	int _windowSize;
	int _numDataPoints;
	int _dataPointIndex;
	double* _dataPoints;

}

@property (nonatomic,readonly) int windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(double)max;
-(double)min;
-(void)addDataPoint:(double)arg1 ;
-(id)initWithWindowSize:(int)arg1 ;
-(int)windowSize;
@end

