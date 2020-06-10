//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSDictionary, NSURL;
@protocol ASAssetMetadataUpdatePolicy, OS_dispatch_queue;

@interface ASAssetRepository : NSObject
{
    NSURL *_repositoryURL;	// 8 = 0x8
    NSURL *_supplementalAssetMetadataDirectoryURL;	// 16 = 0x10
    id <ASAssetMetadataUpdatePolicy> _updatePolicy;	// 24 = 0x18
    double _automaticMetadataUpdateIntervalOverride;	// 32 = 0x20
    NSDictionary *_assetTypeDescriptors;	// 40 = 0x28
    NSCache *_availableAssetsMetadataCache;	// 48 = 0x30
    NSCache *_installedAssetsMetadataCache;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    CDUnknownBlockType _assetUpdateAvailableHandler;	// 72 = 0x48
}

@property(copy, nonatomic) CDUnknownBlockType assetUpdateAvailableHandler; // @synthesize assetUpdateAvailableHandler=_assetUpdateAvailableHandler;
- (_Bool)importAssetTypeDescriptors:(id)arg1;	// IMP=0x0000000100038154
- (id)_assetTypeDescriptorsURL;	// IMP=0x000000010003813c
- (_Bool)updateAllStaleMetadata:(id *)arg1;	// IMP=0x0000000100037f74
- (void)scanCachedMetadataForUpdates;	// IMP=0x0000000100037e68
- (void)_updateAllStaleMetadata:(CDUnknownBlockType)arg1;	// IMP=0x00000001000379a4
- (double)timeUntilNextAutomaticMetadataUpdate;	// IMP=0x00000001000378e0
- (double)_timeUntilNextAutomaticMetadataUpdate;	// IMP=0x000000010003768c
- (double)_timeUntilNextAutomaticMetadataUpdateForAssetType:(id)arg1 withMetadata:(id)arg2;	// IMP=0x000000010003753c
- (void)_enumerateCachedMetadataUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037270
- (_Bool)writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100037104
- (_Bool)_writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100036f30
- (_Bool)validateAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100036da8
- (_Bool)removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100036b7c
- (_Bool)_removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000369b8
- (id)attributeForKey:(id)arg1 onAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000367e0
- (id)attributesForKeys:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100036508
- (id)attributeForKey:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100036448
- (id)_assetMatchingAttributes:(id)arg1 ofAssetType:(id)arg2 atIndex:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100036130
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100035fc0
- (_Bool)setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100035d74
- (_Bool)_setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100035a8c
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 onAsset:(id)arg3 ofAssetType:(id)arg4 error:(id *)arg5;	// IMP=0x00000001000357e4
- (id)installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100035668
- (id)_installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000354b0
- (_Bool)performDataMigrationAndReturnError:(id *)arg1;	// IMP=0x0000000100034f24
- (_Bool)enumerateInstalledAssetsOfAssetType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100034ddc
- (_Bool)enumerateInstalledAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000349dc
- (_Bool)_enumerateInstalledAssetsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000343e4
- (id)assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000342cc
- (id)_assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100033c4c
- (id)_metadataForAvailableAssetsOfAssetType:(id)arg1;	// IMP=0x0000000100033c00
- (void)resetRepositoryForAssetType:(id)arg1;	// IMP=0x0000000100033990
- (void)resetCaches;	// IMP=0x0000000100033928
- (void)_discardCachedAssetMetadata;	// IMP=0x00000001000338f0
- (void)_cacheAssetMetadata:(id)arg1 forAssetType:(id)arg2;	// IMP=0x0000000100033894
- (id)_cachedAssetMetadataForAssetType:(id)arg1;	// IMP=0x00000001000337dc
- (_Bool)_setInstalledAssetAttributes:(id)arg1 forAssetType:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000337c0
- (_Bool)_setInstalledAssetsMetadataValue:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000335dc
- (id)_installedAssetMetadataForAssetType:(id)arg1;	// IMP=0x0000000100033524
- (id)_supplementalAssetMetadataForAssetType:(id)arg1;	// IMP=0x0000000100033490
- (void)updateMetadataForAssetType:(id)arg1 overRide:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000333f0
- (void)_updateMetadataForAssetType:(id)arg1 overRide:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100033078
- (void)_downloadMetadataForAssetType:(id)arg1 fromURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000328c4
- (_Bool)_lastModifiedDateIsValid:(id)arg1;	// IMP=0x0000000100032894
- (void)_scanAssets:(id)arg1 forUpdatesForAssetType:(id)arg2;	// IMP=0x00000001000326a0
- (void)_findUpdatesForAssets:(id)arg1 withAvailableAssets:(id)arg2 usingDescriptor:(id)arg3;	// IMP=0x00000001000321c4
- (_Bool)_assetTypeDescriptorSupportsAutomaticAssetUpdates:(id)arg1;	// IMP=0x000000010003214c
- (id)_lastDownloadedDateForAssetMetadataType:(id)arg1 fromURL:(id)arg2;	// IMP=0x0000000100032080
- (id)lastDownloadedDateForAssetMetadataType:(id)arg1;	// IMP=0x000000010003200c
- (void)_downloadResourceAtURL:(id)arg1 withOptions:(id)arg2 ifNewerThan:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100031d94
- (int)_verifyAssetMetadata:(id)arg1;	// IMP=0x0000000100031d8c
- (id)_URLForInstalledAssetMetadataForAssetType:(id)arg1;	// IMP=0x0000000100031d4c
- (id)_URLForCachedAssetMetadataForAssetType:(id)arg1;	// IMP=0x0000000100031d0c
- (id)_remoteURLForAssetType:(id)arg1 relativeTo:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100031b90
- (id)_relativePathToMetadataForAssetType:(id)arg1 extension:(id)arg2;	// IMP=0x0000000100031b24
- (id)directoryURLForAssetsOfAssetType:(id)arg1;	// IMP=0x00000001000319ec
@property(readonly, nonatomic) NSArray *assetTypeDescriptors;
- (id)_assetTypeDescriptors;	// IMP=0x0000000100031878
- (id)_assetTypeDescriptorForAssetType:(id)arg1;	// IMP=0x0000000100031800
@property(nonatomic) double automaticMetadataUpdateIntervalOverride;
@property(retain, nonatomic) id <ASAssetMetadataUpdatePolicy> updatePolicy;
@property(copy, nonatomic) NSURL *supplementalAssetMetadataDirectoryURL;
- (id)getRepoState;	// IMP=0x0000000100031118
@property(copy, nonatomic) NSURL *repositoryURL;
- (void)dealloc;	// IMP=0x0000000100030eb8
- (id)initWithRepositoryURL:(id)arg1;	// IMP=0x0000000100030df0

@end

