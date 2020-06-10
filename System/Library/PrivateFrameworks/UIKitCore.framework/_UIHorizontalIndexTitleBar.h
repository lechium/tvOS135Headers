/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol _UIHorizontalIndexTitleBarDelegate;
@class NSArray, UICollectionView, UICollectionViewFlowLayout, _UIHorizontalIndexTitleBarCell, UIFocusGuide, NSString;

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NSArray* _entries;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	_UIHorizontalIndexTitleBarCell* _focusedCell;
	_UIHorizontalIndexTitleBarCell* _selectedCell;
	UIFocusGuide* _horizontalIndexTitleBarFocusGuide;
	id<_UIHorizontalIndexTitleBarDelegate> _delegate;
	UIEdgeInsets _sectionInset;
	UIEdgeInsets _parentSafeAreaInsets;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                                                      //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) NSArray * entries;                                                                                            //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic,__weak) _UIHorizontalIndexTitleBarCell * focusedCell;                                                          //@synthesize focusedCell=_focusedCell - In the implementation block
@property (assign,nonatomic,__weak) _UIHorizontalIndexTitleBarCell * selectedCell;                                                         //@synthesize selectedCell=_selectedCell - In the implementation block
@property (nonatomic,retain) UIFocusGuide * horizontalIndexTitleBarFocusGuide;                                                             //@synthesize horizontalIndexTitleBarFocusGuide=_horizontalIndexTitleBarFocusGuide - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHorizontalIndexTitleBarDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setParentSafeAreaInsets:,getter=_parentSafeAreaInsets,nonatomic) UIEdgeInsets parentSafeAreaInsets;              //@synthesize parentSafeAreaInsets=_parentSafeAreaInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                                                                    //@synthesize sectionInset=_sectionInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_UIHorizontalIndexTitleBarDelegate>)delegate;
-(void)setDelegate:(id<_UIHorizontalIndexTitleBarDelegate>)arg1 ;
-(NSArray *)entries;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(void)commonInit;
-(UICollectionView *)collectionView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIEdgeInsets)sectionInset;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(_UIHorizontalIndexTitleBarCell *)focusedCell;
-(void)_updateWithEntries:(id)arg1 ;
-(void)_setParentSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isViewEntryCell:(id)arg1 ;
-(id)_currentlyFocusedCell;
-(id)selectedEntry;
-(void)_selectEntryForTitleIndex:(long long)arg1 ;
-(void)_cancelDelayedFocusAction;
-(void)_sendDelayedFocusActionIfNecessary;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setHorizontalIndexTitleBarFocusGuide:(UIFocusGuide *)arg1 ;
-(UIFocusGuide *)horizontalIndexTitleBarFocusGuide;
-(void)_flipIfRightToLeft;
-(void)setSelectedCell:(_UIHorizontalIndexTitleBarCell *)arg1 ;
-(_UIHorizontalIndexTitleBarCell *)selectedCell;
-(void)_updateSectionInset;
-(void)_selectFocusedCell;
-(UIEdgeInsets)_parentSafeAreaInsets;
-(void)setFocusedCell:(_UIHorizontalIndexTitleBarCell *)arg1 ;
@end

