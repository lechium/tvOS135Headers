/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@class ARUISpriteTexture;

@interface ARUISpritesRenderer : NSObject {

	id<MTLBuffer> _spriteVertexBuffer;
	id<MTLBuffer> _spriteIndexBuffer;
	unsigned long long _numIndicies;
	SCD_Struct_AR2* _vertexAttributes;
	SCD_Struct_AR3* _uniforms;
	ARUISpriteTexture* _texture;

}

@property (assign,nonatomic) SCD_Struct_AR2* vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR3* uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
@property (nonatomic,retain) ARUISpriteTexture * texture;                   //@synthesize texture=_texture - In the implementation block
+(void)clearCaches;
-(void)dealloc;
-(SCD_Struct_AR2*)vertexAttributes;
-(void)setVertexAttributes:(SCD_Struct_AR2*)arg1 ;
-(void)setTexture:(ARUISpriteTexture *)arg1 ;
-(ARUISpriteTexture *)texture;
-(SCD_Struct_AR3*)uniforms;
-(void)setUniforms:(SCD_Struct_AR3*)arg1 ;
-(id)initWithDevice:(id)arg1 maximumRingCount:(unsigned long long)arg2 ;
-(void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
@end

