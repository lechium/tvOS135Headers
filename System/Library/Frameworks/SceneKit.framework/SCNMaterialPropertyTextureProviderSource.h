/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>
#import <libobjc.A.dylib/SCNMaterialPropertyTextureProviderHelper.h>

@protocol MTLTexture, SCNMaterialPropertyTextureProvider;
@class NSString;

@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource <SCNMaterialPropertyTextureProviderHelper> {

	id<MTLTexture> _texture;
	C3DEngineContextRef _engineContext;
	id<SCNMaterialPropertyTextureProvider> _textureProvider;

}

@property (nonatomic,retain) id<SCNMaterialPropertyTextureProvider> textureProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(id)cachedTextureWithURL:(id)arg1 token:(id*)arg2 ;
-(void)setTextureProvider:(id<SCNMaterialPropertyTextureProvider>)arg1 ;
-(id<SCNMaterialPropertyTextureProvider>)textureProvider;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
@end
