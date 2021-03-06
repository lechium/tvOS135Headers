/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKTexture.h>

@interface SKMutableTexture : SKTexture {

	IOSurfaceRef _ioSurface;
	BOOL _ioSurfaceBacked;
	CGSize _textureSize;
	void* _pixelData;
	unsigned long long _pixelDataLength;
	int _pixelFormat;

}
+(id)mutableTextureWithSize:(CGSize)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
-(shared_ptr<jet_texture>*)_backingTexture;
-(void)modifyPixelDataWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ioSurfaceBacked:(BOOL)arg2 pixelFormat:(int)arg3 ;
-(id)initWithSize:(CGSize)arg1 pixelFormat:(int)arg2 ;
@end

