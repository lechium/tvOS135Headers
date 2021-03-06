/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGTextureProvider.h>

@class NSCache;

@interface PXGCGImageTextureProvider : PXGTextureProvider {

	NSCache* _imageCache;
	NSCache* _additionalInfoCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)invalidateCache;
-(void)requestCGImageWithCacheKey:(id)arg1 imageProvider:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg1 imageProvider:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cacheAdditionalInfo:(id)arg1 withKey:(id)arg2 ;
@end

