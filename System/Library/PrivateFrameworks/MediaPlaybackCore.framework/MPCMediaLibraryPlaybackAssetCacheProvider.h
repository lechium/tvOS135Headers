/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPCModelPlaybackAssetCacheProviding.h>

@class MPMediaLibrary, NSString;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {

	MPMediaLibrary* _mediaLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1 ;
+(id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1 ;
+(id)deviceLibraryProviderWithUserIdentity:(id)arg1 ;
-(void)getPlaybackAssetCacheDestinationURL:(id*)arg1 purchaseBundleDestinationURL:(id*)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5 ;
-(void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithMediaLibrary:(id)arg1 ;
@end

