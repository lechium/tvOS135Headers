/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet;

@interface _PXGAssetImageCacheEntry : NSObject {

	unsigned _imageOrientation;
	NSMutableIndexSet* _requestIDs;
	id<PXDisplayAsset> _asset;
	CGImageRef _image;

}

@property (nonatomic,readonly) NSMutableIndexSet * requestIDs;              //@synthesize requestIDs=_requestIDs - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> asset;                      //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGImageRef image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned imageOrientation;                     //@synthesize imageOrientation=_imageOrientation - In the implementation block
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(unsigned)imageOrientation;
-(void)setImageOrientation:(unsigned)arg1 ;
-(id<PXDisplayAsset>)asset;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(NSMutableIndexSet *)requestIDs;
@end
