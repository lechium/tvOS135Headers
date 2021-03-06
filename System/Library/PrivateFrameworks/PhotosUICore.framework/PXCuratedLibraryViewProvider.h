/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAXResponder.h>
#import <libobjc.A.dylib/PXGViewDiagnosticsSource.h>

@protocol PXGAXResponder, PXCuratedLibraryEventLogger;
@class PHPhotoLibrary, PXExtendedTraitCollection, PXGView, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXUIMediaProvider, PXCuratedLibraryAssetsDataSourceManager, PXCuratedLibraryVideoPlaybackController, PXCuratedLibraryItemCountsController, PXCuratedLibraryFooterController, PXAssetReference, PXSectionedObjectReference, NSString;

@interface PXCuratedLibraryViewProvider : NSObject <PXGAXResponder, PXGViewDiagnosticsSource> {

	id<PXGAXResponder> _axNextResponder;
	PHPhotoLibrary* _photoLibrary;
	PXExtendedTraitCollection* _extendedTraitCollection;
	PXGView* _gridView;
	PXCuratedLibraryLayout* _layout;
	PXCuratedLibraryViewModel* _viewModel;
	PXUIMediaProvider* _mediaProvider;
	PXCuratedLibraryAssetsDataSourceManager* _assetsDataSourceManager;
	PXCuratedLibraryVideoPlaybackController* _videoPlaybackController;
	PXCuratedLibraryItemCountsController* _itemCountsController;
	PXCuratedLibraryFooterController* _footerController;
	id<PXCuratedLibraryEventLogger> _eventLogger;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;                                            //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) PXGView * gridView;                                                                             //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayout * layout;                                                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider;                                                              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * assetsDataSourceManager;                              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryVideoPlaybackController * videoPlaybackController;                              //@synthesize videoPlaybackController=_videoPlaybackController - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryItemCountsController * itemCountsController;                                    //@synthesize itemCountsController=_itemCountsController - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryFooterController * footerController;                                            //@synthesize footerController=_footerController - In the implementation block
@property (nonatomic,readonly) id<PXCuratedLibraryEventLogger> eventLogger;                                                    //@synthesize eventLogger=_eventLogger - In the implementation block
@property (nonatomic,readonly) PXAssetReference * preferredAnchorAssetReference; 
@property (nonatomic,readonly) PXSectionedObjectReference * preferredObjectReferenceToScrollToWhenRestoringState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXGAXResponder> axNextResponder;                                                        //@synthesize axNextResponder=_axNextResponder - In the implementation block
-(id)init;
-(PXCuratedLibraryLayout *)layout;
-(PHPhotoLibrary *)photoLibrary;
-(PXGView *)gridView;
-(PXUIMediaProvider *)mediaProvider;
-(id<PXGAXResponder>)axNextResponder;
-(void)setAxNextResponder:(id<PXGAXResponder>)arg1 ;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(id)additionalRectDiagnosticsProvidersForView:(id)arg1 ;
-(id)axContainingViewForAXGroup:(id)arg1 ;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)initWithPhotoLibrary:(id)arg1 extendedTraitCollection:(id)arg2 ;
-(PXAssetReference *)preferredAnchorAssetReference;
-(PXSectionedObjectReference *)preferredObjectReferenceToScrollToWhenRestoringState;
-(void)_stopLibraryViewScrolling;
-(void)scrollLibraryViewToAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scrollLibraryViewToObjectReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)hitTestResultControlsForCurrentZoomLevel;
-(id)_itemsGeometryForDataSource:(id)arg1 ;
-(PXSimpleIndexPath)_indexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(BOOL)canSelectObjectAtIndexPath:(PXSimpleIndexPath)arg1 inDataSource:(id)arg2 ;
-(PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(id)indexPathsFromIndexPath:(PXSimpleIndexPath)arg1 toIndexPath:(PXSimpleIndexPath)arg2 inDataSource:(id)arg3 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 coordinateSpace:(id)arg2 ;
-(void)_handleFocusChangeWithUserInfo:(id)arg1 ;
-(id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(PXSimpleIndexPath)arg2 andIndexPath:(PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4 ;
-(PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3 ;
-(void)selectionManager:(id)arg1 revealObjectAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(UIEdgeInsets)anchorPaddingForCurrentZoomLevel;
-(PXCuratedLibraryViewModel *)viewModel;
-(PXCuratedLibraryAssetsDataSourceManager *)assetsDataSourceManager;
-(PXCuratedLibraryVideoPlaybackController *)videoPlaybackController;
-(PXCuratedLibraryItemCountsController *)itemCountsController;
-(PXCuratedLibraryFooterController *)footerController;
-(id<PXCuratedLibraryEventLogger>)eventLogger;
@end

