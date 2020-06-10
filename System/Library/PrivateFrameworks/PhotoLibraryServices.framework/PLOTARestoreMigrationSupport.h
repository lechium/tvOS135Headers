/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLLibraryServicesManager;

@interface PLOTARestoreMigrationSupport : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;

}
-(void)deletePhotoStreamDataForStreamID:(id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(BOOL)isOTARestoreInProgress;
-(BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1 ;
-(id)_assetTypesExcludedFromOTARestore;
-(void)_prepareDatabaseForOTAAssetsPhase;
-(void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(BOOL)arg2 ;
-(void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1 ;
-(void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2 ;
-(void)_linkAsideAlbumMetadata;
-(id)_dataMigrationInfo;
@end

