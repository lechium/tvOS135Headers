/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTextureSource : NSObject {

	id _mtlTextureCache;
	id _glTextureCache;
	 _size;

}
-(void)dealloc;
-(void)setSize:;
-(double)nextFrameTime;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(_C3DRendererContext*)rendererContextForTextureSourceWithEngineContext:(C3DEngineContextRef)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)_textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(id)glTextureCache;
-(void)setGlTextureCache:(id)arg1 ;
-(BOOL)supportsMetal;
-(id)MTLTextureCache;
-(void)setMTLTextureCache:(id)arg1 ;
-(BOOL)prefersGL3;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(1)textureSize;
@end

