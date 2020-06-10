/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PXPeopleSuggestionManagerDelegate.h>
#import <libobjc.A.dylib/PXPeopleSwipeSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PXPeopleFlowViewController.h>

@protocol PXPeopleFlowViewControllerActionDelegate;
@class PXPeopleSwipeSelectionManager, PXPeopleSuggestionManager, NSArray, NSTimer, PXPeopleBootstrapContext, NSString;

@interface PXPeopleBootstrapConfirmationViewController : UICollectionViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSwipeSelectionManagerDelegate, PXPeopleFlowViewController> {

	BOOL _suggestionsPresented;
	BOOL _willAppear;
	id _context;
	id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
	PXPeopleSwipeSelectionManager* _swipeSelectionManager;
	PXPeopleSuggestionManager* _suggestionManager;
	NSArray* _currentSuggestions;
	NSTimer* _loadingDelayTimer;
	unsigned long long _viewState;
	unsigned long long _type;
	CGSize _lastSize;

}

@property (nonatomic,retain) PXPeopleSwipeSelectionManager * swipeSelectionManager;                           //@synthesize swipeSelectionManager=_swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) PXPeopleSuggestionManager * suggestionManager;                                 //@synthesize suggestionManager=_suggestionManager - In the implementation block
@property (nonatomic,readonly) PXPeopleBootstrapContext * bootstrapContext; 
@property (nonatomic,readonly) NSArray * presentationStatuses; 
@property (nonatomic,retain) NSArray * currentSuggestions;                                                    //@synthesize currentSuggestions=_currentSuggestions - In the implementation block
@property (nonatomic,retain) NSTimer * loadingDelayTimer;                                                     //@synthesize loadingDelayTimer=_loadingDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL suggestionsPresented;                                                       //@synthesize suggestionsPresented=_suggestionsPresented - In the implementation block
@property (assign,nonatomic) unsigned long long viewState;                                                    //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL willAppear;                                                                 //@synthesize willAppear=_willAppear - In the implementation block
@property (assign,nonatomic) CGSize lastSize;                                                                 //@synthesize lastSize=_lastSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id context;                                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (assign,nonatomic,__weak) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate; 
-(void)dealloc;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(unsigned long long)viewState;
-(void)setViewState:(unsigned long long)arg1 ;
-(CGSize)lastSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setActionDelegate:(id<PXPeopleFlowViewControllerActionDelegate>)arg1 ;
-(id<PXPeopleFlowViewControllerActionDelegate>)actionDelegate;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)preferredSize;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)willTransitionToNextInFlow;
-(PXPeopleBootstrapContext *)bootstrapContext;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(NSArray *)currentSuggestions;
-(void)setCurrentSuggestions:(NSArray *)arg1 ;
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(PXPeopleSwipeSelectionManager *)swipeSelectionManager;
-(void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1 ;
-(void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1 ;
-(PXPeopleSuggestionManager *)suggestionManager;
-(NSTimer *)loadingDelayTimer;
-(void)setLoadingDelayTimer:(NSTimer *)arg1 ;
-(BOOL)suggestionsPresented;
-(void)setSuggestionsPresented:(BOOL)arg1 ;
-(id)_localizedPromptString;
-(id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1 ;
-(void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2 ;
-(void)setSwipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 ;
-(id)initWithContext:(id)arg1 dataSource:(id)arg2 ;
-(NSArray *)presentationStatuses;
-(void)_updateViewWithViewState:(unsigned long long)arg1 ;
-(void)_finishedPresentingSuggestions;
-(void)_evaluateIfSuggestionPresentationFinished;
-(void)_markSkippedSuggestions;
-(void)_noSuggestionsFound;
-(void)_toggleConfirmedForCollectionViewCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_startLoadingTimer;
-(void)_updateHeaderContent;
-(UIEdgeInsets)_sectionInsets;
-(double)_wonkyAutomaticContentOffset;
-(void)_badgeLoadingCells;
-(id)_sortedIndexPathsForVisibleCells;
-(void)_cacheCurrentSuggestions;
-(void)updateImageForCell:(id)arg1 withPerson:(id)arg2 ;
-(void)keyFaceUpdated:(id)arg1 ;
-(BOOL)willAppear;
-(void)setWillAppear:(BOOL)arg1 ;
-(void)setLastSize:(CGSize)arg1 ;
@end

