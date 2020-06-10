/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <NSCopying> {

	long long _type;
	HFCroppedWallpaperInfo* _cropInfo;
	NSString* _assetIdentifier;

}

@property (nonatomic,copy) HFCroppedWallpaperInfo * cropInfo;                //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIdentifier;              //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
+(CGSize)size;
+(CGSize)contentSizeForWallpaper;
+(id)customWallpaperWithAssetIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)assetIdentifier;
-(id)sliceIdentifierForVariant:(long long)arg1 ;
-(id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3 ;
-(HFCroppedWallpaperInfo *)cropInfo;
-(id)wallpaperIdentifier;
-(void)setCropInfo:(HFCroppedWallpaperInfo *)arg1 ;
@end

