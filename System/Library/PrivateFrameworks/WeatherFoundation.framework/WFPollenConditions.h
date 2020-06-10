/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface WFPollenConditions : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _date;
	unsigned long long _timeOfDay;
	unsigned long long _grassIndex;
	unsigned long long _ragweedIndex;
	unsigned long long _treeIndex;

}

@property (nonatomic,retain) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long timeOfDay;                 //@synthesize timeOfDay=_timeOfDay - In the implementation block
@property (assign,nonatomic) unsigned long long grassIndex;                //@synthesize grassIndex=_grassIndex - In the implementation block
@property (assign,nonatomic) unsigned long long ragweedIndex;              //@synthesize ragweedIndex=_ragweedIndex - In the implementation block
@property (assign,nonatomic) unsigned long long treeIndex;                 //@synthesize treeIndex=_treeIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setTimeOfDay:(unsigned long long)arg1 ;
-(unsigned long long)timeOfDay;
-(void)setGrassIndex:(unsigned long long)arg1 ;
-(void)setRagweedIndex:(unsigned long long)arg1 ;
-(void)setTreeIndex:(unsigned long long)arg1 ;
-(unsigned long long)grassIndex;
-(unsigned long long)ragweedIndex;
-(unsigned long long)treeIndex;
@end

