/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKColorPalette.h>

@class NSArray;

@interface GKImageColorPalette : GKColorPalette {

	unsigned _hueSpread;
	unsigned _saturationSpread;
	unsigned _brightnessSpread;
	unsigned _grayscaleSpread;
	HSVColor* _imageHSVMap;
	CGSize _imageSize;
	double _borderPercentageForBorderDetection;
	unsigned _hueHistogram[360];
	unsigned _saturationHistogram[256];
	unsigned _brightnessHistogram[256];
	NSArray* _bubbleColors;

}

@property (retain) NSArray * bubbleColors;              //@synthesize bubbleColors=_bubbleColors - In the implementation block
-(void)reset;
-(id)initWithImage:(id)arg1 ;
-(void)clearMainHistograms;
-(void)clearSaturationAndBrightnessHistograms;
-(void)iterateOverPixelsWithBlock:(/*^block*/id)arg1 forHue:(unsigned)arg2 ;
-(unsigned)weightHistogram:(unsigned*)arg1 size:(unsigned)arg2 spread:(unsigned)arg3 ;
-(void)setBubbleColors:(NSArray *)arg1 ;
-(void)generateHSVMapWithContext:(CGContextRef)arg1 ;
-(void)findBrightColors;
-(BOOL)analyzeImage:(CGImageRef)arg1 ;
-(void)printHistogram:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(NSArray *)bubbleColors;
@end
