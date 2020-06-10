/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;

}

@property (assign) int blendMode;                 //@synthesize blendMode=_blendMode - In the implementation block
@property (retain) CUIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign) double opacity;                //@synthesize opacity=_opacity - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(double)opacity;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)effectType;
@end

