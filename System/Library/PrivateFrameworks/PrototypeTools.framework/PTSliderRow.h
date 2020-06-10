/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@interface PTSliderRow : PTSRow {

	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(id)minValue:(double)arg1 maxValue:(double)arg2 ;
@end

