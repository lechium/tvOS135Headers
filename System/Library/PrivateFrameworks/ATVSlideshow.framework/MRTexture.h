/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class EAGLContext, MRContextState;

@interface MRTexture : NSObject {

	EAGLContext* mParentGLContext;
	MRContextState* mInnerState;
	unsigned mWidth;
	unsigned mHeight;
	unsigned mTextureName;
	unsigned mTextureTarget;
	unsigned mPixelFormat;
	double mTimestamp;
	unsigned mFramebufferName;
	EAGLContext* mGLContext;
	int mMinFilter;
	int mMagFilter;
	int mWrapS;
	int mWrapT;
	float mBorderColor[4];
	BOOL mTextureNameIsNotOurs;

}

@property (readonly) MRContextState * innerState; 
@property (nonatomic,readonly) unsigned width; 
@property (nonatomic,readonly) unsigned height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) unsigned textureName; 
@property (nonatomic,readonly) unsigned textureTarget; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) unsigned framebufferName; 
@property (nonatomic,readonly) EAGLContext * glContext; 
@property (assign,nonatomic) int minFilter; 
@property (assign,nonatomic) int magFilter; 
@property (assign,nonatomic) int wrapS; 
@property (assign,nonatomic) int wrapT; 
-(void)dealloc;
-(void)finalize;
-(void)cleanup;
-(double)timestamp;
-(unsigned)width;
-(unsigned)height;
-(unsigned)pixelFormat;
-(void)setLabel:(id)arg1 ;
-(int)minFilter;
-(void)setMinFilter:(int)arg1 ;
-(int)magFilter;
-(void)setMagFilter:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned)textureTarget;
-(EAGLContext *)glContext;
-(void)setWrapS:(int)arg1 ;
-(void)setWrapT:(int)arg1 ;
-(int)wrapS;
-(int)wrapT;
-(unsigned)textureName;
-(MRContextState *)innerState;
-(unsigned)framebufferName;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 inGLContext:(id)arg2 options:(const SCD_Struct_MR19*)arg3 ;
-(id)initWithTextureName:(unsigned)arg1 textureTarget:(unsigned)arg2 size:(CGSize)arg3 inGLContext:(id)arg4 options:(const SCD_Struct_MR19*)arg5 ;
-(id)initWithData:(void*)arg1 width:(unsigned)arg2 height:(unsigned)arg3 rowBytes:(unsigned)arg4 inGLContext:(id)arg5 options:(const SCD_Struct_MR19*)arg6 ;
-(id)initWithDatas:(void*)arg1 dataCount:(unsigned long long)arg2 width:(unsigned)arg3 height:(unsigned)arg4 rowBytes:(unsigned)arg5 inGLContext:(id)arg6 options:(const SCD_Struct_MR19*)arg7 ;
-(id)initWithSize:(CGSize)arg1 inGLContext:(id)arg2 options:(const SCD_Struct_MR19*)arg3 ;
-(void)uploadData:(void*)arg1 rowBytes:(unsigned long long)arg2 toRect:(CGRect)arg3 ;
@end

