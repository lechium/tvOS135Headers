/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TVSettingKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _TSKSliceLayer : CALayer {

	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double startAngle; 
@property (assign,nonatomic) double endAngle; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(UIColor *)fillColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end

