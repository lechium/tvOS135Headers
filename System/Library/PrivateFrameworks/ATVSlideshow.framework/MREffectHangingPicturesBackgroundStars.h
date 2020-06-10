/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundStars : MREffect {

	SCD_Struct_MR13* mStars;
	float* mStarsVertices;
	float* mStarsTexCoords;
	float* mStarsAttributes;
	MRImageProvider* mBackgroundImageProvider;
	MRImageProvider* mStarImageProvider;

}
+(void)initialize;
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_initStars;
@end
