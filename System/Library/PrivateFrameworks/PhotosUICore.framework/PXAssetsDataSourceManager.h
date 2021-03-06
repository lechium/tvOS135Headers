/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@class PXAssetsDataSource, NSString;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (nonatomic,readonly) PXAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
-(id)mutableChangeObject;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
@end

