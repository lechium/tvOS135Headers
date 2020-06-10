/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <libobjc.A.dylib/PXLibrarySummaryDataSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXCuratedLibraryViewModelPresenter.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>
#import <libobjc.A.dylib/PXGAnchorDelegate.h>

@class PXCuratedLibrarySectionHeaderLayout, PXCuratedLibrarySummaryHelper, NSMutableDictionary, PXGDiagnosticsSpriteProbe, PXNumberAnimator, PXCuratedLibrarySectionedLayout, PXCuratedLibraryAllPhotosLayout, PXCuratedLibraryViewModel, PXGSpriteReference, PXAssetCollectionReference, PXCuratedLibraryLayoutSpec, NSString;

@interface PXCuratedLibraryLayout : PXGSplitLayout <PXLibrarySummaryDataSource, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXCuratedLibraryViewModelPresenter, PXGNamedImageSource, PXGAnchorDelegate> {

	PXCuratedLibrarySectionHeaderLayout* _floatingHeaderLayout;
	PXCuratedLibrarySummaryHelper* _summaryHelper;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	NSMutableDictionary* _lastVisibleAreaAnchorsByZoomLevels;
	NSMutableDictionary* _preferredVisibleAreaAnchorsByZoomLevels;
	PXGDiagnosticsSpriteProbe* _spriteProbe;
	BOOL _wantsStatusBarGradient;
	PXNumberAnimator* _statusBarGradientAnimator;
	unsigned short _statusBarGradientResizableCapInsetsIndex;
	unsigned _statusBarGradientSpriteIndex;
	double _statusBarGradientAlpha;
	double _statusBarGradientHeight;
	double _statusBarGradientAndStyleFadeDuration;
	BOOL _isPerformingUpdate;
	PXCuratedLibrarySectionedLayout* _libraryBodyLayout;
	PXCuratedLibraryAllPhotosLayout* _allPhotosBodyLayout;
	long long _presentedZoomLevel;
	PXCuratedLibraryViewModel* _viewModel;
	PXGSpriteReference* _lastHitSpriteReference;
	double _lateralMargin;
	id _lastVisibleDominantObjectReference;
	PXAssetCollectionReference* _lastPresentedDayAssetCollectionReference;
	id _dominantHeroPreferencesBeforeTransition;
	PXCuratedLibraryLayoutSpec* _spec;
	CGRect _presentedVisibleRect;

}

@property (assign,nonatomic) double lateralMargin;                                                               //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (nonatomic,retain) id lastVisibleDominantObjectReference;                                              //@synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * lastPresentedDayAssetCollectionReference;              //@synthesize lastPresentedDayAssetCollectionReference=_lastPresentedDayAssetCollectionReference - In the implementation block
@property (nonatomic,retain) id dominantHeroPreferencesBeforeTransition;                                         //@synthesize dominantHeroPreferencesBeforeTransition=_dominantHeroPreferencesBeforeTransition - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryLayoutSpec * spec;                                                //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionedLayout * libraryBodyLayout;                              //@synthesize libraryBodyLayout=_libraryBodyLayout - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAllPhotosLayout * allPhotosLayout;                                //@synthesize allPhotosBodyLayout=_allPhotosBodyLayout - In the implementation block
@property (nonatomic,readonly) long long presentedZoomLevel;                                                     //@synthesize presentedZoomLevel=_presentedZoomLevel - In the implementation block
@property (nonatomic,readonly) CGRect presentedVisibleRect;                                                      //@synthesize presentedVisibleRect=_presentedVisibleRect - In the implementation block
@property (nonatomic,readonly) CGRect fullyVisibleRect; 
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) PXGSpriteReference * lastHitSpriteReference;                                        //@synthesize lastHitSpriteReference=_lastHitSpriteReference - In the implementation block
@property (nonatomic,readonly) double estimatedHeaderHeight; 
@property (nonatomic,readonly) double bottomMargin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXBrowserVisibleContentSnapshot> visibleContentSnapshot; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> topmostAssetCollection; 
-(void)dealloc;
-(void)update;
-(id)accessibilityLabel;
-(PXCuratedLibraryLayoutSpec *)spec;
-(void)safeAreaInsetsDidChange;
-(void)setSpec:(PXCuratedLibraryLayoutSpec *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)imageNameAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)visibleRectDidChange;
-(void)screenScaleDidChange;
-(void)setLateralMargin:(double)arg1 ;
-(double)lateralMargin;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(BOOL)changeVisibleRectToProposedVisibleRect:(CGRect)arg1 ;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(BOOL)canCreateAccessibilityGroupElement;
-(BOOL)hasBodyContent;
-(BOOL)canSelectAccessibilityGroupElements;
-(BOOL)canSelectAccessibilityGroupElementsChildren;
-(id)lastVisibleAreaAnchor;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)_updateLocalSprites;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 ;
-(CGPoint)anchor:(id)arg1 visibleRectOriginForProposedVisibleRect:(CGRect)arg2 forLayout:(id)arg3 ;
-(void)viewModel:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(void)viewModel:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(long long)viewModel:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3 ;
-(id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2 ;
-(id<PXBrowserVisibleContentSnapshot>)visibleContentSnapshot;
-(id)initWithViewModel:(id)arg1 ;
-(void)_updateZoomLevel;
-(void)_updateLateralMargin;
-(void)_updateOverlayInsets;
-(void)_updateFloatingHeaderVisibility;
-(void)_updateFloatingHeaderTitleOpacity;
-(long long)_statusBarVisibility;
-(void)_updateStatusBarStyle;
-(void)_updateStatusBarGradientVisibility;
-(void)_updateStatusBarGradientAlphaValue;
-(void)_updateFloatingHeaderButtons;
-(void)_updateFloatingHeaderSelectionTitle;
-(double)_adjustedTargetVisibleTopToAccomodateFromBottomPaddedAreaVisibility:(BOOL)arg1 proposedVisibleRect:(CGRect)arg2 ;
-(double)_adjustedTargetVisibleTopByAligningNearestHeroForProposedTargetVisibleTop:(double)arg1 ;
-(double)adjustedTargetVisibleTopForProposedTargetVisibleTop:(double)arg1 scrollingVelocity:(double)arg2 ;
-(void)_enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(double)estimatedHeaderHeight;
-(double)bottomMargin;
-(CGRect)fullyVisibleRect;
-(id)createAnchorForScrollingToInitialPosition;
-(CGPoint)_adjustInitialVisibleRect:(CGRect)arg1 inLayout:(id)arg2 forRecentSection:(long long)arg3 ;
-(id)presentedItemsGeometryForDataSource:(id)arg1 ;
-(void)_noteAnimation:(id)arg1 isRunning:(BOOL)arg2 ;
-(void)animationDidComplete:(id)arg1 ;
-(long long)curatedLibraryLayoutAnimationContextForTransitionToZoomLevel:(long long)arg1 ;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2 ;
-(id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1 ;
-(id)_createAnchorForTransitionToZoomLevel:(long long)arg1 ;
-(void)clearLastVisibleAreaAnchoringInformation;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(id)_currentBodyLayout;
-(id)topMostAssetCollectionInRect:(CGRect)arg1 ;
-(void)enumerateVisibleAssetsSectionSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVisibleAssetReferencesUsingBlock:(/*^block*/id)arg1 ;
-(CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1 ;
-(void)setLastHitSpriteReference:(PXGSpriteReference *)arg1 ;
-(void)setLastVisibleDominantObjectReference:(id)arg1 ;
-(void)_updateLibraryBodyLayoutLastVisibleDominantObjectReference;
-(void)_updateLibraryBodyLayoutLateralMargin;
-(id)_currentFloatingHeaderSpec;
-(void)_updateFloatingHeaderLayoutSpec;
-(PXCuratedLibrarySectionedLayout *)libraryBodyLayout;
-(PXCuratedLibraryAllPhotosLayout *)allPhotosLayout;
-(long long)presentedZoomLevel;
-(CGRect)presentedVisibleRect;
-(PXGSpriteReference *)lastHitSpriteReference;
-(id)lastVisibleDominantObjectReference;
-(PXAssetCollectionReference *)lastPresentedDayAssetCollectionReference;
-(void)setLastPresentedDayAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(id)dominantHeroPreferencesBeforeTransition;
-(void)setDominantHeroPreferencesBeforeTransition:(id)arg1 ;
-(id)mostDominantModelObject;
@end
