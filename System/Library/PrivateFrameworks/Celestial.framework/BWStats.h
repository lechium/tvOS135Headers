/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface BWStats : NSObject {

	double _multiplier;
	NSString* _unitDesignator;
	long long _numberOfSamples;
	double _min;
	double _max;
	double _sumX;
	double _sumXX;

}

@property (assign,nonatomic) double multiplier;                        //@synthesize multiplier=_multiplier - In the implementation block
@property (nonatomic,copy) NSString * unitDesignator;                  //@synthesize unitDesignator=_unitDesignator - In the implementation block
@property (nonatomic,readonly) long long numberOfSamples;              //@synthesize numberOfSamples=_numberOfSamples - In the implementation block
@property (nonatomic,readonly) double min;                             //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                             //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) double average; 
@property (nonatomic,readonly) double standardDeviation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(double)multiplier;
-(void)setMultiplier:(double)arg1 ;
-(double)max;
-(double)min;
-(double)standardDeviation;
-(long long)numberOfSamples;
-(double)average;
-(void)setUnitDesignator:(NSString *)arg1 ;
-(void)addDataPoint:(double)arg1 ;
-(NSString *)unitDesignator;
-(id)initWithStats:(id)arg1 ;
-(void)removeDataPoint:(double)arg1 ;
@end
