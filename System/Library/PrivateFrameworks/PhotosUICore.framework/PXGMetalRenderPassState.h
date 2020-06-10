/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer, MTLDevice;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGMetalRenderPassState : NSObject {

	unsigned* _spriteIndexes;
	{?=}* _textureInfos;
	id<MTLBuffer> _spriteIndexesMetalBuffer;
	id<MTLBuffer> _spriteTextureInfosMetalBuffer;
	id<MTLDevice> _device;
	long long _capacity;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long capacity;                                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned* spriteIndexes;                                  //@synthesize spriteIndexes=_spriteIndexes - In the implementation block
@property (nonatomic,readonly) {? textureInfos;                                          //@synthesize textureInfos=_textureInfos - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> spriteIndexesMetalBuffer;                   //@synthesize spriteIndexesMetalBuffer=_spriteIndexesMetalBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> spriteTextureInfosMetalBuffer;              //@synthesize spriteTextureInfosMetalBuffer=_spriteTextureInfosMetalBuffer - In the implementation block
-(id)description;
-(long long)capacity;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 capacity:(long long)arg2 ;
-(unsigned*)spriteIndexes;
-({?)textureInfos;
-(id<MTLBuffer>)spriteIndexesMetalBuffer;
-(id<MTLBuffer>)spriteTextureInfosMetalBuffer;
@end

