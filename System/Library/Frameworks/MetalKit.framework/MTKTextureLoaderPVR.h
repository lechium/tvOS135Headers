/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

@interface MTKTextureLoaderPVR : MTKTextureLoaderData {

	unsigned _pvrFormat;
	unsigned _numSurfaces;
	NSData* _imageData;
	MTLPixelFormatInfo _pixelFormatInfo;

}
+(BOOL)isPVRFile:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)determineBlockSize:(unsigned long long*)arg1 blocksWide:(unsigned long long*)arg2 blocksHigh:(unsigned long long*)arg3 bytesPerBlock:(unsigned long long*)arg4 fromFormat:(unsigned)arg5 width:(unsigned long long)arg6 andHeight:(unsigned long long)arg7 ;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(BOOL)determineFormat:(unsigned)arg1 options:(id)arg2 ;
@end

