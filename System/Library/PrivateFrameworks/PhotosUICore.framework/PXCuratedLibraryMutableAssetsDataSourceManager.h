/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSPredicate;


@protocol PXCuratedLibraryMutableAssetsDataSourceManager
@property (assign,nonatomic) long long zoomLevel; 
@property (nonatomic,copy) NSPredicate * allPhotosFilterPredicate; 
@required
-(long long)zoomLevel;
-(void)setZoomLevel:(long long)arg1;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1;
-(void)loadIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2;
-(void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3;
-(void)resumeChangeDelivery:(id)arg1;
-(NSPredicate *)allPhotosFilterPredicate;
-(void)setAllPhotosFilterPredicate:(id)arg1;

@end

