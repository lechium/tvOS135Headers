/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTKTextureLoaderData : NSObject {

	NSString* _imageOrigin;
	unsigned long long _numArrayElements;
	unsigned long long _numFaces;
	unsigned long long _numMipmapLevels;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _depth;
	unsigned long long _textureType;
	unsigned long long _pixelFormat;

}

@property (nonatomic,retain) NSString * imageOrigin;                           //@synthesize imageOrigin=_imageOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long numArrayElements;              //@synthesize numArrayElements=_numArrayElements - In the implementation block
@property (assign,nonatomic) unsigned long long numFaces;                      //@synthesize numFaces=_numFaces - In the implementation block
@property (assign,nonatomic) unsigned long long numMipmapLevels;               //@synthesize numMipmapLevels=_numMipmapLevels - In the implementation block
@property (assign,nonatomic) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long depth;                         //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) unsigned long long textureType;                   //@synthesize textureType=_textureType - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)depth;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)pixelFormat;
-(unsigned long long)textureType;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)numFaces;
-(void)setNumFaces:(unsigned long long)arg1 ;
-(void)setNumMipmapLevels:(unsigned long long)arg1 ;
-(void)setImageOrigin:(NSString *)arg1 ;
-(void)setNumArrayElements:(unsigned long long)arg1 ;
-(unsigned long long)numMipmapLevels;
-(unsigned long long)numArrayElements;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(NSString *)imageOrigin;
@end

