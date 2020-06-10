/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORegionalResourceTileData, GEOResourceManifestConfiguration, GEOResourceLoader;

@interface _GEORegionalResourcesTileLoader : NSObject {

	GEORegionalResourceTileData* _tile;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOResourceLoader* _resourceLoader;
	os_unfair_lock_s _lock;
	GEOTileKey _tileKey;

}

@property (nonatomic,readonly) GEOTileKey* tileKeyPtr; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(unsigned long long)arg4 finished:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(GEOTileKey*)tileKeyPtr;
@end
