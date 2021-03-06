/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSUIMappedImageCache;

@interface HFPosterFrameImageCache : NSObject {

	BSUIMappedImageCache* _imageCache;

}

@property (nonatomic,retain) BSUIMappedImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)keyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(id)init;
-(BSUIMappedImageCache *)imageCache;
-(void)setImageCache:(BSUIMappedImageCache *)arg1 ;
-(id)imageForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(void)purgeAllImages;
-(void)addImage:(id)arg1 forCameraClipIdentifierString:(id)arg2 withOffset:(float)arg3 ;
@end

