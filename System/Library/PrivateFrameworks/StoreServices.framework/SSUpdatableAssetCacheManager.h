/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject {

	NSString* _clientIdentifier;

}
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)manifestsDirectoryURL;
-(id)currentManifestFileURL;
-(BOOL)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id*)arg2 ;
-(id)cacheRoot;
-(id)assetsDirectoryURL;
-(id)assetFileName:(id)arg1 ;
-(id)manifestFileName:(id)arg1 ;
-(id)manifestFileURL:(id)arg1 ;
-(id)validatePath:(id)arg1 ;
-(id)assetFileURL:(id)arg1 ;
-(id)allCachedManifests;
-(id)loadCurrentCachedManifest;
@end
