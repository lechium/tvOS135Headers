/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class PHPhotoLibrary, NSObject, NSMapTable, NSString;

@interface PXAssetFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _resultsByAssetCollectionByConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFetcherForPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)existingKeyAssetsFetchResultForAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 ;
-(id)existingCuratedAssetsFetchResultForAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(BOOL)arg6 hideHiddenAssets:(BOOL)arg7 fetchPropertySets:(id)arg8 ;
-(void)clearFetchResultsForAssetCollection:(id)arg1 ;
-(id)fetchKeyAssetsInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 ;
-(id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(BOOL)arg6 hideHiddenAssets:(BOOL)arg7 fetchPropertySets:(id)arg8 ;
-(id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 fetchLimit:(unsigned long long)arg3 sortDescriptors:(id)arg4 reverseSortOrder:(BOOL)arg5 hideHiddenAssets:(BOOL)arg6 fetchPropertySets:(id)arg7 ;
-(id)_fetchConfigurationForCurationWithReferencePersons:(id)arg1 curationType:(long long)arg2 options:(unsigned long long)arg3 ;
-(id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg1 referencePersons:(id)arg2 ;
-(void)_storeExistingFetchResult:(id)arg1 forAssetCollection:(id)arg2 withFetchConfiguration:(id)arg3 ;
@end

