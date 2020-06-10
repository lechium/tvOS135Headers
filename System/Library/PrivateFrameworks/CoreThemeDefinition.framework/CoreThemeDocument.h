/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDPersistentDocument.h>

@protocol TDAssetManagementDelegate, TDCustomAssetProvider;
@class NSMutableDictionary, TDHistorian, TDThreadMOCOrganizer, NSManagedObjectModel, NSString, NSMutableArray, TDCatalogGlobals, NSMutableSet, TDDeviceTraits, NSUUID, NSURL;

@interface CoreThemeDocument : TDPersistentDocument {

	NSMutableDictionary* constantArrayControllers;
	NSMutableDictionary* cachedConstantArrays;
	long long cachedMaxIdentifierInUse;
	TDHistorian* m_historian;
	TDThreadMOCOrganizer* m_mocOrganizer;
	NSManagedObjectModel* m_managedObjectModel;
	NSString* pathToRepresentedDocument;
	NSString* _relativePathToProductionData;
	NSString* _targetPlatform;
	NSMutableDictionary* _packableRenditions;
	NSMutableDictionary* _explicitlyPackedIdentifiers;
	NSMutableDictionary* _explicitlyPackedPackings;
	NSMutableDictionary* _explicitlyPackedContents;
	BOOL m_didMigrate;
	int _updateVersionMetadataState;
	NSString* _minimumDeploymentVersion;
	int _majorVersion;
	int _minorVersion;
	int _patchVersion;
	NSMutableArray* _deviceTraits;
	renditionkeyfmt* _keyFormat;
	TDCatalogGlobals* _catalogGlobals;
	NSMutableArray* _cachedAppearances;
	NSMutableSet* _cachedUnknownAppearanceIds;
	NSMutableArray* _cachedLocalizations;
	NSMutableSet* _cachedUnknownLocalizationIds;
	NSMutableArray* _cachedModelAssets;
	BOOL _donotstoreDocumentChecksum;
	id<TDAssetManagementDelegate> _assetManagementDelegate;
	id<TDCustomAssetProvider> _customAssetProvider;

}

@property (copy) NSString * pathToRepresentedDocument; 
@property (assign,nonatomic) id<TDAssetManagementDelegate> assetManagementDelegate;              //@synthesize assetManagementDelegate=_assetManagementDelegate - In the implementation block
@property (assign,nonatomic) id<TDCustomAssetProvider> customAssetProvider;                      //@synthesize customAssetProvider=_customAssetProvider - In the implementation block
@property (nonatomic,retain) TDDeviceTraits * optimizeForDeviceTraits; 
@property (nonatomic,copy) NSString * minimumDeploymentVersion;                                  //@synthesize minimumDeploymentVersion=_minimumDeploymentVersion - In the implementation block
@property (nonatomic,readonly) int majorVersion; 
@property (nonatomic,readonly) int minorVersion; 
@property (nonatomic,readonly) int patchVersion; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (assign) long long targetPlatform; 
@property (readonly) TDCatalogGlobals * catalogGlobals; 
@property (nonatomic,readonly) NSURL * themeBitSourceURL; 
+(void)initialize;
+(long long)targetPlatformForMOC:(id)arg1 ;
+(int)maximumAreaOfPackableImageForScale:(unsigned long long)arg1 ;
+(id)dataModelNameForVersion:(long long)arg1 ;
+(BOOL)HEVCCompressionEnabled;
+(BOOL)deepmapCompressionEnabled;
+(BOOL)deepmap2CompressionEnabled;
+(id)_sharedDocumentList;
+(long long)defaultTargetPlatform;
+(id)createConfiguredDocumentAtURL:(id)arg1 targetPlatform:(long long)arg2 error:(id*)arg3 ;
+(long long)dataModelVersionFromMetadata:(id)arg1 ;
+(long long)dataModelVersion;
+(void)presentMigrationProgress;
+(void)closeMigrationProgress;
+(id)defaultThemeBitSourceURLForDocumentURL:(id)arg1 ;
+(id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStringForPlatform:(long long)arg1 ;
+(long long)platformForPersistentString:(id)arg1 ;
+(unsigned long long)standardColorSpaceID;
+(int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)doneWithColorConversion;
+(BOOL)defaultAllowsExtendedRangePixelFormats;
+(void)_addThemeDocument:(id)arg1 ;
+(id)createConfiguredDocumentAtURL:(id)arg1 error:(id*)arg2 ;
+(id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)uuid;
-(id)managedObjectModel;
-(void)deleteObject:(id)arg1 ;
-(int)majorVersion;
-(int)minorVersion;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned)checksum;
-(int)patchVersion;
-(long long)targetPlatform;
-(void)setTargetPlatform:(long long)arg1 ;
-(unsigned long long)colorSpaceID;
-(BOOL)_clampMetrics;
-(BOOL)usesCUISystemThemeRenditionKey;
-(const renditionkeyfmt*)renditionKeyFormat;
-(TDCatalogGlobals *)catalogGlobals;
-(id)stateWithIdentifier:(long long)arg1 ;
-(BOOL)allowsExtendedRangePixelFormats;
-(id)rootPathForProductionData;
-(id)valueWithIdentifier:(long long)arg1 ;
-(id)presentationStateWithIdentifier:(long long)arg1 ;
-(id)drawingLayerWithIdentifier:(long long)arg1 ;
-(void)deleteObjects:(id)arg1 ;
-(id<TDAssetManagementDelegate>)assetManagementDelegate;
-(BOOL)shouldAllowPaletteImageCompression;
-(BOOL)shouldAllowHevcCompression;
-(BOOL)shouldAllowDeepmapCompression;
-(BOOL)shouldAllowDeepmap2Compression;
-(BOOL)shouldPerformHistogramBasedPacking;
-(id)elementWithIdentifier:(long long)arg1 ;
-(id)partWithIdentifier:(long long)arg1 ;
-(id)sizeWithIdentifier:(long long)arg1 ;
-(id)directionWithIdentifier:(long long)arg1 ;
-(id)idiomWithIdentifier:(long long)arg1 ;
-(id)sizeClassWithIdentifier:(long long)arg1 ;
-(id)graphicsFeatureSetClassWithIdentifier:(long long)arg1 ;
-(id)displayGamutWithIdentifier:(long long)arg1 ;
-(id)deploymentTargetWithIdentifier:(long long)arg1 ;
-(id)appearanceWithIdentifier:(long long)arg1 ;
-(id)localizationWithIdentifier:(long long)arg1 ;
-(id)glyphSizeWithIdentifier:(long long)arg1 ;
-(id)glyphWeightWithIdentifier:(long long)arg1 ;
-(void)_updateDeviceTraits;
-(void)addDeviceTraitForOptimization:(id)arg1 ;
-(void)removeDeviceTraitsForOptimization;
-(BOOL)shouldSupportCompactCompression;
-(id)historian;
-(id)metadatumForKey:(id)arg1 ;
-(BOOL)isCustomLook;
-(id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)primeArrayControllers;
-(void)changedObjectsNotification:(id)arg1 ;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(void)buildModel;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)initWithType:(id)arg1 targetPlatform:(long long)arg2 error:(id*)arg3 ;
-(void)_configureAfterFirstSave;
-(void)setPathToRepresentedDocument:(NSString *)arg1 ;
-(id)_namedTextEffectPartDefinition;
-(id)_namedImageEffectPartDefinition;
-(id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2 ;
-(id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 ;
-(id)_cachedConstantsForEntity:(id)arg1 ;
-(id)themeConstant:(id)arg1 withIdentifier:(long long)arg2 ;
-(id)newObjectForEntity:(id)arg1 ;
-(id)effectTypeWithIdentifier:(unsigned)arg1 ;
-(id)effectParameterValueWithType:(unsigned)arg1 inComponent:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(unsigned long long)countForEntity:(id)arg1 withPredicate:(id)arg2 ;
-(id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id*)arg3 ;
-(id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(id)mocOrganizer;
-(id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 withContext:(id)arg4 error:(id*)arg5 ;
-(void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
-(id)minimalDisplayNameForThemeConstant:(id)arg1 ;
-(id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 ;
-(id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2 ;
-(id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 ;
-(NSString *)pathToRepresentedDocument;
-(id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 nameElement:(id)arg4 shouldReplaceExisting:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)allowMultipleInstancesOfElementID:(long long)arg1 ;
-(id)artworkDraftTypeWithIdentifier:(long long)arg1 ;
-(id)renditionTypeWithIdentifier:(long long)arg1 ;
-(id)renditionSubtypeWithIdentifier:(unsigned)arg1 ;
-(id)defaultPathComponentsForPartDefinition:(id)arg1 ;
-(id)_themeBitSource:(id*)arg1 ;
-(id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id*)arg4 ;
-(void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2 ;
-(BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id*)arg3 ;
-(id)iterationTypeWithIdentifier:(int)arg1 ;
-(id)mappingForPhotoshopLayerIndex:(long long)arg1 themeDrawingLayerIdentifier:(long long)arg2 ;
-(id)namedEffectProductionWithName:(id)arg1 ;
-(id)_createNamedElementWithNextAvailableIdentifier;
-(id)_createNamedElementWithIdentifier:(long long)arg1 ;
-(id)appearanceWithIdentifier:(long long)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)localizationWithIdentifier:(long long)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(BOOL)needToCreateForwardstopForPlatform;
-(id)compressionTypeWithIdentifier:(long long)arg1 ;
-(BOOL)shouldCreateForwardstopForLossy;
-(BOOL)shouldCreate2018ForwardstopForLossless;
-(BOOL)shouldCreate2019ForwardstopForLossless;
-(BOOL)isArtworkRenditionEligibleForForwardstop:(id)arg1 ;
-(BOOL)needToCreateForwardstopFor2018DeploymentVariant:(id)arg1 ;
-(BOOL)needToCreateForwardstopFor2019DeploymentVariant:(id)arg1 ;
-(BOOL)shouldAllowPaletteImageCompressionForDeploymentTarget:(unsigned)arg1 ;
-(BOOL)shouldAllowDeepmapCompressionForDeploymentTarget:(unsigned)arg1 ;
-(BOOL)shouldAllowHevcCompressionForDeploymentTarget:(unsigned)arg1 ;
-(BOOL)shouldAllowDeepmap2CompressionForDeploymentTarget:(unsigned)arg1 ;
-(void)createForwardstops:(id)arg1 ;
-(id)_namedImagePartDefinition;
-(id)templateRenderingModeWithIdentifier:(long long)arg1 ;
-(id)_sizeIndexesByNameFromNamedAssetImportInfos:(id)arg1 ;
-(id)slicesComputedForImageSize:(CGSize)arg1 usingSliceInsets:(SCD_Struct_TD8)arg2 resizableSliceSize:(CGSize)arg3 withRenditionType:(long long)arg4 ;
-(void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
-(void)_removeRedundantPDFBasedRenditionsForAssets:(id)arg1 ;
-(id)textureFaceWithIdentifier:(long long)arg1 ;
-(id)textureInterpretaitionWithIdentifier:(unsigned)arg1 ;
-(id)pixelFormatWithIdentifier:(long long)arg1 ;
-(void)_getFilename:(id*)arg1 scaleFactor:(unsigned*)arg2 category:(id*)arg3 bitSource:(id*)arg4 forFileURL:(id)arg5 ;
-(id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5 ;
-(const renditionkeyfmt*)untrimmedRenditionKeyFormat;
-(long long)_compareFlattenedKeySpec1:(id)arg1 toKeySpec2:(id)arg2 ;
-(void)_addResolvedLayerReferenceToFlattenedImageRendition:(id)arg1 usingArtworkRendition:(id)arg2 andLayerReference:(id)arg3 ;
-(void)_makeRadiosityImages;
-(BOOL)_production:(id)arg1 containsScale:(unsigned)arg2 andIdiom:(unsigned)arg3 andSubtype:(unsigned)arg4 ;
-(id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 ;
-(id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id*)arg3 ;
-(void)_tidyUpRecognitionImages;
-(void)_generateWatchImages;
-(void)_automaticSRGBGenerationFromP3;
-(void)_automaticP3GenerationFromSRGB;
-(void)_createForwardstopRenditions;
-(void)_optimizeForDeviceTraits;
-(void)_tidyUpLayerStacks;
-(void)_backwardsCompatibilityPatchForLayoutDirection;
-(void)packRenditionsError:(id*)arg1 ;
-(BOOL)canImportNamedAssetImportInfo:(id)arg1 ;
-(id)_addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id*)arg6 ;
-(void)createNamedRenditionGroupProductionsForImportInfos:(id)arg1 error:(id*)arg2 ;
-(void)createNamedRecognitionObjectsForAssets:(id)arg1 customInfos:(id)arg2 error:(id*)arg3 ;
-(void)createNamedGlyphVectorForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id*)arg4 ;
-(id)updateAutomaticTexturesForCustomInfos:(id)arg1 allTextureInfos:(id)arg2 ;
-(void)createNamedTexturesForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id*)arg4 ;
-(id)createNamedColorProductionsForImportInfos:(id)arg1 error:(id*)arg2 ;
-(void)createNamedModelsForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id*)arg4 ;
-(id)createTextStyleProductionsForImportInfos:(id)arg1 error:(id*)arg2 ;
-(id)namedElementWithName:(id)arg1 ;
-(id)_addAssetsFromCustomAssetInfos:(id)arg1 bitSource:(id)arg2 error:(id*)arg3 ;
-(BOOL)createCustomArtworkProductionsForCustomAssets:(id)arg1 withImportInfos:(id)arg2 error:(id*)arg3 ;
-(id)_createPhotoshopElementProductionWithAsset:(id)arg1 ;
-(id)createAssetWithName:(id)arg1 scaleFactor:(unsigned)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4 ;
-(id)assetAtFileURL:(id)arg1 ;
-(id)createElementProductionWithAsset:(id)arg1 ;
-(id)relativePathToProductionData;
-(void)setMetadatum:(id)arg1 forKey:(id)arg2 ;
-(id)_predicateForRenditionKeySpec:(id)arg1 ;
-(NSString *)minimumDeploymentVersion;
-(void)resetThemeConstants;
-(id)schemaCategoryWithIdentifier:(long long)arg1 ;
-(BOOL)_canremoveKeyAttribte:(unsigned short)arg1 ;
-(int)renditionKeySemantics;
-(void)_updateKeyFormatWithContext:(id)arg1 ;
-(id)_customizedSchemaDefinitionsForEntity:(id)arg1 ;
-(BOOL)customizationExistsForSchemaDefinition:(id)arg1 ;
-(BOOL)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 nameElement:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id*)arg5 ;
-(id)createEffectStyleProductionForPartDefinition:(id)arg1 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)updatedVersionsMetadataFromMetadata:(id)arg1 ;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(BOOL)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)convertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 ;
-(void)setArtworkFormat:(id)arg1 ;
-(void)setAllowsExtendedRangePixelFormats:(BOOL)arg1 ;
-(void)setRelativePathToProductionData:(id)arg1 ;
-(void)addThemeBitSourceAtPath:(id)arg1 createProductions:(BOOL)arg2 ;
-(void)_synchronousSave;
-(void)_removeRedundantPDFBasedRenditions:(id)arg1 ;
-(id)renditionsMatchingRenditionKeySpec:(id)arg1 ;
-(void)_delete:(id)arg1 withRendition:(id)arg2 ;
-(void)_insertRendition:(id)arg1 forKey:(id)arg2 ;
-(id)namedArtworkProductionWithName:(id)arg1 ;
-(BOOL)_updateRenditionPackings:(id)arg1 error:(id*)arg2 ;
-(void)_groupPackableRenditions;
-(id)deviceTraitsUsedForOptimization;
-(TDDeviceTraits *)optimizeForDeviceTraits;
-(BOOL)_matchesAllExceptGamut:(id)arg1 andKeySpec:(id)arg2 ;
-(void)setMinimumDeploymentVersion:(NSString *)arg1 ;
-(void)setOptimizeForDeviceTraits:(TDDeviceTraits *)arg1 ;
-(void)updateRenditionSpec:(id)arg1 ;
-(void)checkVersionsAndUpdateIfNecessary;
-(id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id*)arg1 ;
-(void)recacheThemeConstant:(id)arg1 ;
-(id)previousStateWithIdentifier:(long long)arg1 ;
-(id)previousValueWithIdentifier:(long long)arg1 ;
-(id)effectParameterTypeWithIdentifier:(unsigned)arg1 ;
-(id)effectComponentWithType:(unsigned)arg1 inRendition:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)constantWithName:(id)arg1 forIdentifier:(long long)arg2 ;
-(id)psdImageRefForAsset:(id)arg1 ;
-(id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id*)arg5 ;
-(id)createNamedEffectProductionWithName:(id)arg1 isText:(BOOL)arg2 ;
-(id)namedElementsForElementDefinition:(id)arg1 ;
-(id)elementProductionsWithName:(id)arg1 ;
-(void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importCustomAssetsWithImportInfos:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_genericPartDefinition;
-(id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3 ;
-(id)assetAtPath:(id)arg1 ;
-(id)addAssetsAtFileURLs:(id)arg1 ;
-(id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 ;
-(id)pathToAsset:(id)arg1 ;
-(unsigned long long)countOfRenditionsMatchingRenditionKeySpec:(id)arg1 ;
-(unsigned long long)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1 ;
-(id)artworkFormat;
-(BOOL)didMigrate;
-(long long)renditionKeySpecAttributeCount;
-(id)customizedSchemaElementDefinitions;
-(id)customizedSchemaEffectDefinitions;
-(id)customizedSchemaMaterialDefinitions;
-(void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
-(BOOL)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)customizeSchemaMaterialDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id*)arg3 ;
-(id)schemaDefinitionWithElementID:(long long)arg1 ;
-(id)schemaPartDefinitionWithElementID:(long long)arg1 partID:(long long)arg2 ;
-(id)namedArtworkProductions;
-(id)namedEffectProductions;
-(void)exportCursorsToURL:(id)arg1 ;
-(void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id*)arg2 getUnupdatedCursors:(id*)arg3 ;
-(NSURL *)themeBitSourceURL;
-(void)addThemeBitSourceAtPath:(id)arg1 ;
-(void)incrementallyPackRenditionsSinceDate:(id)arg1 error:(id*)arg2 ;
-(void)_processModelProductions;
-(id)_cachedModelAssets;
-(void)setAssetManagementDelegate:(id<TDAssetManagementDelegate>)arg1 ;
-(id<TDCustomAssetProvider>)customAssetProvider;
-(void)setCustomAssetProvider:(id<TDCustomAssetProvider>)arg1 ;
@end

