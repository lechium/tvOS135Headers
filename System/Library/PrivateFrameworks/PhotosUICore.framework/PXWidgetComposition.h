/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingControllerComposition.h>
#import <libobjc.A.dylib/PXWidgetCompositionElementObserver.h>
#import <libobjc.A.dylib/PXWidgetCompositionElementDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>

@protocol PXWidgetCompositionDelegate;
@class NSArray, PXScrollViewController, PXWidgetCompositionSpec, PXTilingController, NSString;

@interface PXWidgetComposition : PXTilingControllerComposition <PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver> {

	struct {
		BOOL respondsToHasContentAbove;
		BOOL respondsToShouldUseEdgeToEdgeLayoutForWidget;
		BOOL respondsToLoadingPriorityForWidget;
		BOOL respondsToWidgetTransitionToViewControllerWithTransitionType;
		BOOL respondsToRequestViewControllerDismissalAnimated;
		BOOL respondsToDidUpdateCompositionWithDefaultAnimationOptions;
	}  _delegateFlags;
	BOOL _isPerformingWidgetLoadingChange;
	SCD_Struct_PX37 _needsUpdateFlags;
	BOOL _shouldLoadVisibleWidgets;
	BOOL _shouldLoadAllWidgets;
	BOOL _shouldUnloadAllWidgets;
	BOOL __didLayoutWidgets;
	NSArray* __elements;
	PXScrollViewController* _scrollViewController;
	id<PXWidgetCompositionDelegate> _delegate;
	NSArray* _widgets;
	PXWidgetCompositionSpec* _spec;
	long long _minimumWidgetLoadingPriority;
	PXTilingController* __focusedTilingController;
	CGPoint __lastContentAdjustmentOffset;

}

@property (setter=_setElements:,nonatomic,copy) NSArray * _elements;                                                         //@synthesize _elements=__elements - In the implementation block
@property (setter=_setFocusedTilingController:,nonatomic,retain) PXTilingController * _focusedTilingController;              //@synthesize _focusedTilingController=__focusedTilingController - In the implementation block
@property (assign,setter=_setDidLayoutWidgets:,nonatomic) BOOL _didLayoutWidgets;                                            //@synthesize _didLayoutWidgets=__didLayoutWidgets - In the implementation block
@property (assign,setter=_setLastContentAdjustmentOffset:,nonatomic) CGPoint _lastContentAdjustmentOffset;                   //@synthesize _lastContentAdjustmentOffset=__lastContentAdjustmentOffset - In the implementation block
@property (nonatomic,__weak,readonly) PXScrollViewController * scrollViewController;                                         //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetCompositionDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * widgets;                                                                                //@synthesize widgets=_widgets - In the implementation block
@property (nonatomic,retain) PXWidgetCompositionSpec * spec;                                                                 //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long minimumWidgetLoadingPriority;                                                         //@synthesize minimumWidgetLoadingPriority=_minimumWidgetLoadingPriority - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadVisibleWidgets;                                                                  //@synthesize shouldLoadVisibleWidgets=_shouldLoadVisibleWidgets - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadAllWidgets;                                                                      //@synthesize shouldLoadAllWidgets=_shouldLoadAllWidgets - In the implementation block
@property (assign,nonatomic) BOOL shouldUnloadAllWidgets;                                                                    //@synthesize shouldUnloadAllWidgets=_shouldUnloadAllWidgets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXWidgetCompositionDelegate>)delegate;
-(void)setDelegate:(id<PXWidgetCompositionDelegate>)arg1 ;
-(NSArray *)_elements;
-(PXWidgetCompositionSpec *)spec;
-(void)setSpec:(PXWidgetCompositionSpec *)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(id)initWithScrollViewController:(id)arg1 ;
-(void)updateComposition;
-(id)tilingControllers;
-(BOOL)element:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(long long)arg3 ;
-(BOOL)element:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2 ;
-(id)elementViewController:(id)arg1 ;
-(void)elementNeedsLayout:(id)arg1 preferredAnimationOptions:(id)arg2 originatingTilingController:(id)arg3 ;
-(void)elementHasLoadedContentDataDidChange:(id)arg1 ;
-(void)setWidgets:(NSArray *)arg1 ;
-(void)_invalidateElements;
-(void)_updateElements;
-(void)_setElements:(id)arg1 ;
-(void)_invalidateElementsSpec;
-(void)_updateElementsSpec;
-(void)_invalidateFocusedTilingController;
-(void)_updateFocusedTilingController;
-(BOOL)_shouldFocusOnTilingController:(id)arg1 ;
-(BOOL)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg1 ;
-(long long)_loadingPriorityForElement:(id)arg1 ;
-(void)setMinimumWidgetLoadingPriority:(long long)arg1 ;
-(void)setShouldLoadVisibleWidgets:(BOOL)arg1 ;
-(void)setShouldLoadAllWidgets:(BOOL)arg1 ;
-(void)setShouldUnloadAllWidgets:(BOOL)arg1 ;
-(void)_setDidLayoutWidgets:(BOOL)arg1 ;
-(void)performWidgetLoadingChange:(/*^block*/id)arg1 ;
-(void)_updateWidgetLoadingIfNeeded;
-(void)_setNeedsUpdateWidgetLoading;
-(void)_invalidateElementsToLoad;
-(void)_updateElementsToLoadIfNeeded;
-(id)widgetAtLocation:(CGPoint)arg1 ;
-(CGRect)frameForWidget:(id)arg1 ;
-(id)headerTilingControllerForWidget:(id)arg1 ;
-(id)footerTilingControllerForWidget:(id)arg1 ;
-(NSArray *)widgets;
-(long long)minimumWidgetLoadingPriority;
-(BOOL)shouldLoadVisibleWidgets;
-(BOOL)shouldLoadAllWidgets;
-(BOOL)shouldUnloadAllWidgets;
-(PXTilingController *)_focusedTilingController;
-(void)_setFocusedTilingController:(id)arg1 ;
-(BOOL)_didLayoutWidgets;
-(CGPoint)_lastContentAdjustmentOffset;
-(void)_setLastContentAdjustmentOffset:(CGPoint)arg1 ;
@end
