//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHCachingImageManager, PHImageRequestOptions, PHLivePhotoRequestOptions, PHVideoRequestOptions;

@interface TVPCachingManager : NSObject
{
    PHCachingImageManager *_cachingImageManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005857c
@property(retain, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(readonly, nonatomic) PHVideoRequestOptions *autoloopVideoRequestOptions;
@property(readonly, nonatomic) PHImageRequestOptions *animatedImageRequestOptions;
@property(readonly, nonatomic) PHLivePhotoRequestOptions *livePhotoRequestOptions;
@property(readonly, nonatomic) PHImageRequestOptions *requestOptions;
@property(readonly, nonatomic) long long contentMode;
@property(readonly, nonatomic) struct CGSize targetSize;
- (void)stopPrefetchingAssets;	// IMP=0x00000001000584f0
- (void)startPrefetchingAssets;	// IMP=0x00000001000584ec
- (int)requestAutoloopVideoForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005838c
- (int)requestAnimatedImageForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005822c
- (int)requestLivePhotoForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005808c
- (int)requestImageForAsset:(id)arg1 processingHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3 assetSize:(struct CGSize)arg4;	// IMP=0x0000000100057e38
- (int)requestImageForAsset:(id)arg1 processingHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100057db4
- (void)cancelImageRequest:(int)arg1;	// IMP=0x0000000100057d6c
@property(nonatomic) _Bool allowsCachingHighQualityImages;
- (id)init;	// IMP=0x0000000100057c74

@end
