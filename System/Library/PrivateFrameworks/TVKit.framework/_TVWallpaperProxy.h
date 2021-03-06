/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface _TVWallpaperProxy : NSObject {

	NSString* _cacheKey;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) NSString * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) UIImage * image;                       //@synthesize image=_image - In the implementation block
+(void)initialize;
+(void)relinquishWallpaperProxy:(id)arg1 ;
+(id)acquireWallpaperProxyWithVariant:(long long)arg1 userInterfaceStyle:(long long)arg2 ;
+(id)_keyForWallpaperProxyWithVariant:(long long)arg1 style:(long long)arg2 ;
+(id)_wallpaperWithImage:(id)arg1 cacheKey:(id)arg2 ;
-(UIImage *)image;
-(NSString *)cacheKey;
@end

