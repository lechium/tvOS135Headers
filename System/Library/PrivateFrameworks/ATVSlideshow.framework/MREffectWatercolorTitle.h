/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectWatercolorTitle : MREffect {

	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	MRCroppingSprite* mTextSprite;

}
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
@end
