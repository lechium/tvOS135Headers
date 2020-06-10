/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TVShelfViewLayoutDelegate.h>

@class UICollectionView, UIView, VUIShelfView, NSIndexPath, NSString;

@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate> {

	BOOL _shouldUpdateBeforeLayout;
	UICollectionView* _collectionView;
	UIView* _headerView;
	long long _gridStyle;
	VUIShelfView* _containerView;
	NSIndexPath* _focusedIndexPath;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) VUIShelfView * containerView;                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedIndexPath;                 //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) long long gridStyle;                          //@synthesize gridStyle=_gridStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)loadView;
-(UICollectionView *)collectionView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)headerView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(VUIShelfView *)containerView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setFocusedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)focusedIndexPath;
-(void)setContainerView:(VUIShelfView *)arg1 ;
-(id)initWithGridStyle:(long long)arg1 ;
-(long long)gridStyle;
-(void)_updateCollectionViewLayout:(BOOL)arg1 ;
-(void)_ensureScrollViewSnaps;
-(void)updateContentOffsetWithTransitionCoordinator:(id)arg1 ;
-(id)_findSnappingItemFromContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(void)_snapTargetContentOffset:(inout CGPoint*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(CGPoint)arg3 ;
@end

