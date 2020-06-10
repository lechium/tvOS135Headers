/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXPhotosDetailsContext.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PHFetchResult, NSString;

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchingQueue;
	PHFetchResult* _keyFaceAssetFetchResult;

}

@property (nonatomic,readonly) PHFetchResult * keyFaceAssetFetchResult;              //@synthesize keyFaceAssetFetchResult=_keyFaceAssetFetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(unsigned long long)arg3 ;
+(id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2 ;
+(id)assetCollectionListFetchResultForPeople:(id)arg1 assetCount:(unsigned long long*)arg2 ;
+(id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(BOOL)arg4 enableKeyAssets:(BOOL)arg5 viewSourceOrigin:(unsigned long long)arg6 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)didPerformChanges;
-(id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4 ;
-(BOOL)shouldUseKeyFace;
-(id)initWithPeople:(id)arg1 parentContext:(id)arg2 ;
-(id)initWithPeople:(id)arg1 parentContext:(id)arg2 assetCollectionsFetch:(id)arg3 ;
-(void)setKeyFaceAssetFetchResult:(PHFetchResult *)arg1 ;
-(void)_updateKeyFaceAssetFetchResult;
-(id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1 ;
-(id)_displayTitleForPeople:(id)arg1 ;
-(PHFetchResult *)keyFaceAssetFetchResult;
@end

