/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource {

	CALayer* _layer;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(void)dealloc;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL*)arg6 ;
-(id)layerToFocusForRenderedLayer:(id)arg1 ;
-(void)_resizeLayer:(id)arg1 toSize:(CGSize)arg2 updateLayer:(BOOL)arg3 updateTransform:(BOOL)arg4 caRenderer:(id)arg5 ;
-(float)clearValue;
-(double)__renderLayerUsingMetal:(id)arg1 withCARenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL*)arg6 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(CGSize)layerSizeInPixels;
-(C3DTextureRef)_textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(C3DEngineContextRef)arg3 sampler:(_C3DTextureSampler*)arg4 ;
-(BOOL)supportsMetal;
-(BOOL)prefersGL3;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)layerContentsScaleFactor;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
@end

