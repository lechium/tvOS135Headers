/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBlurEffect.h>

@class _UIBackdropViewSettings, UIColor;

@interface _UICustomBlurEffect : UIBlurEffect {

	_UIBackdropViewSettings* _blurEffect;

}

@property (assign,nonatomic) double grayscaleTintLevel; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) BOOL lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor * colorTint; 
@property (assign,nonatomic) double colorTintAlpha; 
@property (assign,nonatomic) double colorBurnTintLevel; 
@property (assign,nonatomic) double colorBurnTintAlpha; 
@property (assign,nonatomic) double darkeningTintAlpha; 
@property (assign,nonatomic) double darkeningTintHue; 
@property (assign,nonatomic) double darkeningTintSaturation; 
@property (assign,nonatomic) BOOL darkenWithSourceOver; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturationDeltaFactor; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double zoom; 
+(id)effectWithStyle:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(double)blurRadius;
-(void)setColorTintAlpha:(double)arg1 ;
-(void)setColorTint:(UIColor *)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(id)effectSettings;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(double)grayscaleTintAlpha;
-(double)grayscaleTintLevel;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(BOOL)lightenGrayscaleWithSourceOver;
-(void)setLightenGrayscaleWithSourceOver:(BOOL)arg1 ;
-(UIColor *)colorTint;
-(double)colorBurnTintAlpha;
-(double)colorBurnTintLevel;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(double)darkeningTintAlpha;
-(BOOL)darkenWithSourceOver;
-(void)setDarkenWithSourceOver:(BOOL)arg1 ;
-(double)darkeningTintHue;
-(void)setDarkeningTintHue:(double)arg1 ;
-(double)darkeningTintSaturation;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(double)saturationDeltaFactor;
-(double)colorTintAlpha;
@end

