/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHPhotoLibrary, PXPersonsSectionedDataSource, NSString;

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                          //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PXPersonsSectionedDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadData;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)createInitialDataSource;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(long long)_personTypeForSection:(long long)arg1 ;
@end
