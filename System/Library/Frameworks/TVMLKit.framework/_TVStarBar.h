/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSAttributedString;

@interface _TVStarBar : NSObject {

	unsigned long long _numStars;
	double _value;
	NSAttributedString* _countStr;
	double _barWidth;
	double _height;
	UIEdgeInsets _barMargin;

}

@property (assign,nonatomic) unsigned long long numStars;                //@synthesize numStars=_numStars - In the implementation block
@property (assign,nonatomic) double value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSAttributedString * countStr;              //@synthesize countStr=_countStr - In the implementation block
@property (assign,nonatomic) double barWidth;                            //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets barMargin;                     //@synthesize barMargin=_barMargin - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(unsigned long long)numStars;
-(void)setNumStars:(unsigned long long)arg1 ;
-(NSAttributedString *)countStr;
-(void)setCountStr:(NSAttributedString *)arg1 ;
-(double)barWidth;
-(void)setBarWidth:(double)arg1 ;
-(UIEdgeInsets)barMargin;
-(void)setBarMargin:(UIEdgeInsets)arg1 ;
@end

