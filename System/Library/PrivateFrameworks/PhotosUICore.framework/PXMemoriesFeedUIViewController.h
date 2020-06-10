/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXUIViewControllerZoomTransitionEndPoint.h>
#import <libobjc.A.dylib/PXTilingControllerZoomAnimationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PXMemoriesFeedViewControllerHelperDelegate.h>
#import <libobjc.A.dylib/PXMemoriesOnboardingViewControllerDelegate.h>
#import <libobjc.A.dylib/PXMemoriesUITileSourceDelegate.h>
#import <libobjc.A.dylib/PXUserInterfaceFeatureViewController.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class PXUIScrollViewController, PXBasicUIViewTileAnimator, UIBarButtonItem, PXMemoriesFeedViewControllerHelper, PXPhotoAnalysisStatusController, PXMemoriesOnboardingUIViewController, _UIContentUnavailableView, PXPhotosDetailsContext, PXMemoriesUITileSource, PXUITapGestureRecognizer, PXTouchingUIGestureRecognizer, NSString, PXMemoriesFeedDataSourceManager, UIScrollView, PXSectionedDataSource;

@interface PXMemoriesFeedUIViewController : UIViewController <PXReusableObjectPoolDelegate, PXChangeObserver, UIGestureRecognizerDelegate, PXAssetCollectionActionPerformerDelegate, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXSectionedDataSourceManagerObserver, UIPopoverPresentationControllerDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXSettingsKeyObserver> {

	BOOL _isInitialized;
	SCD_Struct_PX53 _needsUpdateFlags;
	BOOL _hasAppeared;
	PXUIScrollViewController* __scrollViewController;
	PXBasicUIViewTileAnimator* __tileAnimator;
	UIBarButtonItem* __refreshBarButtonItem;
	PXMemoriesFeedViewControllerHelper* __helper;
	unsigned long long __memoriesStyle;
	PXPhotoAnalysisStatusController* __graphStatusController;
	PXMemoriesOnboardingUIViewController* __onboardingViewController;
	_UIContentUnavailableView* __contentUnavailableView;
	PXPhotosDetailsContext* __selectedItemDetailsContext;
	PXMemoriesUITileSource* __tileSource;
	PXUITapGestureRecognizer* __tapRecognizer;
	PXTouchingUIGestureRecognizer* __touchRecognizer;
	NSString* _scrollTargetMemoryUUID;

}

@property (nonatomic,readonly) PXMemoriesFeedViewControllerHelper * _helper;                                                                     //@synthesize _helper=__helper - In the implementation block
@property (nonatomic,readonly) unsigned long long _memoriesStyle;                                                                                //@synthesize _memoriesStyle=__memoriesStyle - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                                                        //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * _scrollViewController;                                                                 //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (nonatomic,readonly) PXPhotoAnalysisStatusController * _graphStatusController;                                                         //@synthesize _graphStatusController=__graphStatusController - In the implementation block
@property (setter=_setOnboardingViewController:,nonatomic,retain) PXMemoriesOnboardingUIViewController * _onboardingViewController;              //@synthesize _onboardingViewController=__onboardingViewController - In the implementation block
@property (setter=_setContentUnavailableView:,nonatomic,retain) _UIContentUnavailableView * _contentUnavailableView;                             //@synthesize _contentUnavailableView=__contentUnavailableView - In the implementation block
@property (setter=_setSelectedItemDetailsContext:,nonatomic,retain) PXPhotosDetailsContext * _selectedItemDetailsContext;                        //@synthesize _selectedItemDetailsContext=__selectedItemDetailsContext - In the implementation block
@property (nonatomic,readonly) PXMemoriesUITileSource * _tileSource;                                                                             //@synthesize _tileSource=__tileSource - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _refreshBarButtonItem;                                                                          //@synthesize _refreshBarButtonItem=__refreshBarButtonItem - In the implementation block
@property (nonatomic,readonly) PXUITapGestureRecognizer * _tapRecognizer;                                                                        //@synthesize _tapRecognizer=__tapRecognizer - In the implementation block
@property (nonatomic,readonly) PXTouchingUIGestureRecognizer * _touchRecognizer;                                                                 //@synthesize _touchRecognizer=__touchRecognizer - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (setter=setScrollTargetMemoryUUID:,nonatomic,retain) NSString * scrollTargetMemoryUUID;                                                //@synthesize scrollTargetMemoryUUID=_scrollTargetMemoryUUID - In the implementation block
@property (nonatomic,readonly) PXSectionedDataSource * ppt_memoriesDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@property (nonatomic,readonly) long long userInterfaceFeature; 
+(void)_setCurrentFeedViewController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(PXMemoriesFeedViewControllerHelper *)_helper;
-(BOOL)_needsUpdate;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_setNeedsUpdate;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(void)scrollViewControllerWillLayoutSubviews:(id)arg1 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(long long)userInterfaceFeature;
-(void)_updateIfNeeded;
-(PXUIScrollViewController *)_scrollViewController;
-(PXMemoriesFeedDataSourceManager *)dataSourceManager;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(UIScrollView *)ppt_scrollView;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)_handleScrollViewTap:(id)arg1 ;
-(void)_handleTouch:(id)arg1 ;
-(id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1 ;
-(PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1 ;
-(void)_updateScrollViewControllerContentInset;
-(id)_sourceViewForMemoryActionsController;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(PXMemoriesUITileSource *)_tileSource;
-(PXPhotosDetailsContext *)_selectedItemDetailsContext;
-(void)_setSelectedItemDetailsContext:(id)arg1 ;
-(unsigned long long)_memoriesStyle;
-(PXUITapGestureRecognizer *)_tapRecognizer;
-(PXTouchingUIGestureRecognizer *)_touchRecognizer;
-(void)_handleSpecChange;
-(BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1 ;
-(id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1 ;
-(void)setScrollTargetMemoryUUID:(NSString *)arg1 ;
-(NSString *)scrollTargetMemoryUUID;
-(void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg1 ;
-(id)initWithMemoriesStyle:(unsigned long long)arg1 ;
-(id)_suppressionContexts;
-(void)_preloadFontSpecs;
-(void)_updateBarAppearance;
-(id)_showMemoryDetailsForContext:(id)arg1 animated:(BOOL)arg2 ;
-(id)showDetailsForMemoryWithLocalIdentifier:(id)arg1 ;
-(void)revealMostRecentMemoryAnimated:(BOOL)arg1 ;
-(void)_navigateToMemoryAtSectionObjectReference:(id)arg1 ;
-(id)_photosDetailsContextForMemoryObjectReference:(id)arg1 ;
-(UIBarButtonItem *)_refreshBarButtonItem;
-(void)_refreshBarButtonItemAction:(id)arg1 ;
-(void)_startRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateNavigationItem;
-(void)_updateNavigationItemIfNeeded;
-(void)_invalidateContentUnavailablePlaceholder;
-(void)_updateContentUnavailablePlaceholderIfNeeded;
-(void)playMiroMovieWithMemoryUUID:(id)arg1 ;
-(void)ppt_navigateToLatestMemoryAnimated:(BOOL)arg1 ;
-(PXSectionedDataSource *)ppt_memoriesDataSource;
-(void)ppt_revealMemoryWithReference:(id)arg1 animated:(BOOL)arg2 ;
-(void)ppt_navigateToMemoryWithReference:(id)arg1 animated:(BOOL)arg2 ;
-(PXPhotoAnalysisStatusController *)_graphStatusController;
-(PXMemoriesOnboardingUIViewController *)_onboardingViewController;
-(void)_setOnboardingViewController:(id)arg1 ;
-(_UIContentUnavailableView *)_contentUnavailableView;
-(void)_setContentUnavailableView:(id)arg1 ;
@end

