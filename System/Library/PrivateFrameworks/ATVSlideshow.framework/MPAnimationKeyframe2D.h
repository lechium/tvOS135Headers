/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe2D : MPAnimationKeyframe {

	CGPoint _point;

}

@property (assign,nonatomic) CGPoint point;              //@synthesize point=_point - In the implementation block
+(id)keyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
+(id)keyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(id)initKeyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)keyframe;
@end

