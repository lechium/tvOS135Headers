/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface OKProgressArcLayer : CALayer {

	double _radius;
	double _startAngle;
	double _endAngle;
	double _lineWidth;

}

@property (assign,nonatomic) double radius;                  //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double startAngle;              //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) double endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) double lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)endAngle;
-(double)startAngle;
-(void)setStartAngle:(double)arg1 ;
-(void)setEndAngle:(double)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end

