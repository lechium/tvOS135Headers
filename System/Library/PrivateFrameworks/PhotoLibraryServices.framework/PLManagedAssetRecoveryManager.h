/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSObject;

@interface PLManagedAssetRecoveryManager : NSObject {

	int _assetsDownloadsCount;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _syncablePhotoLibrary;
	NSObject*<OS_dispatch_queue> _resourceDownloadIsolationQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	long long _state;

}

@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                            //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * syncablePhotoLibrary;                                    //@synthesize syncablePhotoLibrary=_syncablePhotoLibrary - In the implementation block
@property (assign,nonatomic) int assetsDownloadsCount;                                                 //@synthesize assetsDownloadsCount=_assetsDownloadsCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceDownloadIsolationQueue;              //@synthesize resourceDownloadIsolationQueue=_resourceDownloadIsolationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) long long state;                                                          //@synthesize state=_state - In the implementation block
+(id)_irisesWithZeroVideoCpDuration;
+(id)_predicateForAdjustedAssetsWithMissingResources;
+(id)_predicateForAdjustedAssetsFailedDeferredRendering;
+(id)_jpegImagesPredicate;
+(id)_imagesWithZeroWidthHeightPredicate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)identifyAssetsWithInconsistentCloudState;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)startRecoveryOfAssetsInInconsistentCloudStateUsingCloudPhotoLibraryManager:(id)arg1 ;
-(void)_setCloudRecoveryState:(unsigned long long)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3 ;
-(void)_recoverAsset:(id)arg1 usingCloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(unsigned long long)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_assetKindsAllowedForDownloading;
-(void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_fixRawUTIForAsset:(id)arg1 error:(id*)arg2 ;
-(void)_fixFullSizeAdjustedResource:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_canUnderstandAdjustmentForAsset:(id)arg1 ;
-(PLPhotoLibrary *)syncablePhotoLibrary;
-(void)setSyncablePhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(int)assetsDownloadsCount;
-(void)setAssetsDownloadsCount:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceDownloadIsolationQueue;
-(void)setResourceDownloadIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

