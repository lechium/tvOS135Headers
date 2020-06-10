/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererFormat.h>

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat {

	CGColorSpaceRef _overrideColorSpace;
	BOOL _opaque;
	long long _overrideBitsPerComponent;
	double _scale;
	long long _preferredRange;

}

@property (assign,setter=_setOverrideColorSpace:,getter=_overrideColorSpace,nonatomic) CGColorSpaceRef _overrideColorSpace; 
@property (assign,setter=_setOverrideBitsPerComponent:,getter=_overrideBitsPerComponent,nonatomic) long long _overrideBitsPerComponent;              //@synthesize overrideBitsPerComponent=_overrideBitsPerComponent - In the implementation block
@property (getter=_contextScale,nonatomic,readonly) double _contextScale; 
@property (assign,setter=_setWantsAlphaMask:,getter=_wantsAlphaMask,nonatomic) BOOL _wantsAlphaMask; 
@property (assign,setter=_setGrayscale:,getter=_grayscale,nonatomic) BOOL _grayscale; 
@property (assign,nonatomic) double scale;                                                                                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL opaque;                                                                                                            //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) BOOL prefersExtendedRange; 
@property (assign,nonatomic) long long preferredRange;                                                                                               //@synthesize preferredRange=_preferredRange - In the implementation block
+(id)defaultFormat;
+(id)preferredFormat;
+(id)formatForTraitCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)opaque;
-(BOOL)_grayscale;
-(BOOL)prefersExtendedRange;
-(void)setPrefersExtendedRange:(BOOL)arg1 ;
-(void)setPreferredRange:(long long)arg1 ;
-(void)_setOverrideColorSpace:(CGColorSpaceRef)arg1 ;
-(void)_setOverrideBitsPerComponent:(long long)arg1 ;
-(CGColorSpaceRef)_overrideColorSpace;
-(long long)_overrideBitsPerComponent;
-(long long)preferredRange;
-(BOOL)_wantsAlphaMask;
-(double)_contextScale;
-(void)_setWantsAlphaMask:(BOOL)arg1 ;
-(void)_setGrayscale:(BOOL)arg1 ;
@end

