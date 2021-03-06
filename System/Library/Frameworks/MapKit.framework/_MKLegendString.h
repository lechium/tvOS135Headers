/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString;

@interface _MKLegendString : CALayer {

	CTLineRef _line;
	double _baselineDistanceFromBottom;
	NSAttributedString* _string;

}

@property (nonatomic,retain) NSAttributedString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) double baselineDistanceFromBottom;              //@synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom - In the implementation block
-(id)init;
-(void)dealloc;
-(NSAttributedString *)string;
-(void)setString:(NSAttributedString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)sizeToFit;
-(double)baselineDistanceFromBottom;
@end

