/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MRTransition.h>

@class NSMutableArray, MRImage;

@interface MRTransitionRevolutionsFlip : MRTransition {

	unsigned _numberOfTilesX;
	unsigned _numberOfTilesY;
	unsigned char _direction;
	NSMutableArray* _cubes;
	NSMutableArray* _cubeColumns;
	NSMutableArray* _cubeRows;
	int _flipDirection;
	long long _horizontalCubeCount;
	long long _verticalCubeCount;
	MRImage* _sourceImage;
	MRImage* _destinationImage;
	double _viewBaseWidth;
	double _viewBaseHeight;

}
-(void)cleanup;
-(void)setAttributes:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)releaseByTransitioner:(id)arg1 ;
-(void)setFlipDirection:(int)arg1 ;
-(void)setupCubesWithLocalAspectRatio:(float)arg1 ;
@end

