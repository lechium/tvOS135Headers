/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRCroppingSprite;

@interface MREffectFramedSlide : MREffect {

	MRCroppingSprite* mSprite;
	BOOL mHasInnerRect;
	BOOL mHasOuterRect;
	BOOL mIsPlayable;
	BOOL mIsPlaying;
	BOOL mIsPressed;

}
+(void)initialize;
-(id)init;
-(void)_cleanup;
-(void)setAttributes:(id)arg1 ;
-(BOOL)isOpaque;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isNative3D;
-(void)setLiveAttributes:(id)arg1 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)_renderImage:(id)arg1 withFrame:(id)arg2 atTime:(double)arg3 inContext:(id)arg4 withArguments:(id)arg5 ;
@end

