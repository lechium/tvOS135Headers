/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFWallpaper, HFWallpaperSlice;

@interface HFWallpaperEditCollection : NSObject {

	HFWallpaper* _wallpaper;
	HFWallpaperSlice* _originalSlice;
	HFWallpaperSlice* _processedSlice;

}

@property (nonatomic,readonly) HFWallpaper * wallpaper;                        //@synthesize wallpaper=_wallpaper - In the implementation block
@property (nonatomic,readonly) HFWallpaperSlice * originalSlice;               //@synthesize originalSlice=_originalSlice - In the implementation block
@property (nonatomic,readonly) HFWallpaperSlice * processedSlice;              //@synthesize processedSlice=_processedSlice - In the implementation block
-(id)description;
-(HFWallpaper *)wallpaper;
-(HFWallpaperSlice *)originalSlice;
-(HFWallpaperSlice *)processedSlice;
-(id)initWithWallpaper:(id)arg1 originalSlice:(id)arg2 processedSlice:(id)arg3 ;
@end
