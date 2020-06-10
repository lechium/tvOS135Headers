/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>

@interface PXGViewImageTexture : PXGImageTexture {

	BOOL _isOpaque;
	unsigned _orientation;
	CGImageRef _imageRef;

}

@property (nonatomic,readonly) CGImageRef imageRef;               //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)dealloc;
-(unsigned)orientation;
-(BOOL)isOpaque;
-(CGSize)pixelSize;
-(CGImageRef)imageRef;
-(int)presentationType;
-(id)initWithImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(long long)estimatedByteSize;
@end

