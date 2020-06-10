/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXCuratedLibraryMutableAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;
@class NSPredicate, NSDictionary, PXUpdater, PXCuratedLibraryAssetsDataSourceManagerConfiguration, PXAssetsDataSource, PXVisualPositionsChangeDetails, PXAssetsDataSourceManager, PXPhotoKitAssetsDataSourceManager, NSString;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <PXCuratedLibraryMutableAssetsDataSourceManager, PXAssetsDataSourceManagerObserver> {

	SCD_Struct_PX141 _delegateRespondsTo;
	NSDictionary* _dataSourceManagerByZoomLevel;
	BOOL _isForcingSections;
	BOOL _canLoadData;
	BOOL _wantsCuration;
	id<PXCuratedLibraryAssetsDataSourceManagerDelegate> _delegate;
	long long _zoomLevel;
	NSPredicate* _allPhotosFilterPredicate;
	PXUpdater* _updater;
	PXCuratedLibraryAssetsDataSourceManagerConfiguration* _configuration;
	long long _zoomLevelForCurrentDataSourceManager;
	PXAssetsDataSource* _currentDataSource;
	long long _currentDataSourceZoomLevel;
	PXVisualPositionsChangeDetails* _lastVisualPositionsChangeDetails;
	long long _lastTransitionType;
	unsigned long long _lastVisualPositionsChangeFromDataSourceIdentifier;
	unsigned long long _lastVisualPositionsChangeToDataSourceIdentifier;

}

@property (nonatomic,readonly) PXUpdater * updater;                                                                     //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManagerConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL canLoadData;                                                                          //@synthesize canLoadData=_canLoadData - In the implementation block
@property (assign,nonatomic) long long zoomLevelForCurrentDataSourceManager;                                            //@synthesize zoomLevelForCurrentDataSourceManager=_zoomLevelForCurrentDataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL wantsCuration;                                                                        //@synthesize wantsCuration=_wantsCuration - In the implementation block
@property (nonatomic,copy) NSPredicate * allPhotosFilterPredicate;                                                      //@synthesize allPhotosFilterPredicate=_allPhotosFilterPredicate - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * currentDataSource;                                                    //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * currentAssetsDataSourceManager; 
@property (assign,nonatomic) long long currentDataSourceZoomLevel;                                                      //@synthesize currentDataSourceZoomLevel=_currentDataSourceZoomLevel - In the implementation block
@property (nonatomic,retain) PXVisualPositionsChangeDetails * lastVisualPositionsChangeDetails;                         //@synthesize lastVisualPositionsChangeDetails=_lastVisualPositionsChangeDetails - In the implementation block
@property (assign,nonatomic) long long lastTransitionType;                                                              //@synthesize lastTransitionType=_lastTransitionType - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisualPositionsChangeFromDataSourceIdentifier;                      //@synthesize lastVisualPositionsChangeFromDataSourceIdentifier=_lastVisualPositionsChangeFromDataSourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisualPositionsChangeToDataSourceIdentifier;                        //@synthesize lastVisualPositionsChangeToDataSourceIdentifier=_lastVisualPositionsChangeToDataSourceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                                                     //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * currentPhotoKitAssetsDataSourceManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXCuratedLibraryAssetsDataSourceManagerDelegate>)delegate;
-(void)setDelegate:(id<PXCuratedLibraryAssetsDataSourceManagerDelegate>)arg1 ;
-(PXCuratedLibraryAssetsDataSourceManagerConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(long long)zoomLevel;
-(void)setZoomLevel:(long long)arg1 ;
-(void)setNeedsUpdate;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)createInitialDataSource;
-(void)didPerformChanges;
-(PXUpdater *)updater;
-(void)_updateDataSource;
-(void)_invalidateDataSource;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)setCurrentDataSource:(PXAssetsDataSource *)arg1 ;
-(PXAssetsDataSource *)currentDataSource;
-(BOOL)wantsCuration;
-(void)setWantsCuration:(BOOL)arg1 ;
-(void)loadIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2 ;
-(void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3 ;
-(void)resumeChangeDelivery:(id)arg1 ;
-(NSPredicate *)allPhotosFilterPredicate;
-(void)setAllPhotosFilterPredicate:(NSPredicate *)arg1 ;
-(void)setCanLoadData:(BOOL)arg1 ;
-(void)setZoomLevelForCurrentDataSourceManager:(long long)arg1 ;
-(id)visualPositionsChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(long long)transitionTypeFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(id)dataSourceManagerForZoomLevel:(long long)arg1 ;
-(id)dataSourceForZoomLevel:(long long)arg1 ;
-(unsigned long long)libraryStateForZoomLevel:(long long)arg1 ;
-(id)_photosDataSourceForZoomLevel:(long long)arg1 ;
-(PXAssetsDataSourceManager *)currentAssetsDataSourceManager;
-(PXPhotoKitAssetsDataSourceManager *)currentPhotoKitAssetsDataSourceManager;
-(void)ensureLastSectionHasContent;
-(BOOL)forceAllPhotosAccurateIfNeeded;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 ;
-(id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 assetCollectionReferenceWithSameKeyAssetAsParent:(id*)arg3 ;
-(id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)arg1 withParent:(id)arg2 ;
-(void)_invalidatePropertiesDerivedFromZoomLevel;
-(void)_updatePropertiesDerivedFromZoomLevel;
-(void)_invalidateDataSourceManagers;
-(void)_updateDataSourceManagers;
-(void)_invalidateCuration;
-(void)_updateCuration;
-(BOOL)canLoadData;
-(long long)zoomLevelForCurrentDataSourceManager;
-(long long)currentDataSourceZoomLevel;
-(void)setCurrentDataSourceZoomLevel:(long long)arg1 ;
-(PXVisualPositionsChangeDetails *)lastVisualPositionsChangeDetails;
-(void)setLastVisualPositionsChangeDetails:(PXVisualPositionsChangeDetails *)arg1 ;
-(long long)lastTransitionType;
-(void)setLastTransitionType:(long long)arg1 ;
-(unsigned long long)lastVisualPositionsChangeFromDataSourceIdentifier;
-(void)setLastVisualPositionsChangeFromDataSourceIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)lastVisualPositionsChangeToDataSourceIdentifier;
-(void)setLastVisualPositionsChangeToDataSourceIdentifier:(unsigned long long)arg1 ;
@end

