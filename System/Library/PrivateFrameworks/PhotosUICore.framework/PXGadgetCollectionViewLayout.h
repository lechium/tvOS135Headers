/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol PXGadgetCollectionViewLayoutDelegate;
@class PXGadgetSpec, NSString;

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout> {

	BOOL _pagingEnabled;
	BOOL _isPageFullColumnnWidth;
	PXGadgetSpec* _spec;
	id<PXGadgetCollectionViewLayoutDelegate> _delegate;
	long long _pageSizeClass;
	double _columnWidth;
	double _interSectionSpacing;

}

@property (nonatomic,retain) PXGadgetSpec * spec;                                                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL pagingEnabled;                                                    //@synthesize pagingEnabled=_pagingEnabled - In the implementation block
@property (assign,nonatomic) long long pageSizeClass;                                               //@synthesize pageSizeClass=_pageSizeClass - In the implementation block
@property (assign,nonatomic) BOOL isPageFullColumnnWidth;                                           //@synthesize isPageFullColumnnWidth=_isPageFullColumnnWidth - In the implementation block
@property (assign,nonatomic) double columnWidth;                                                    //@synthesize columnWidth=_columnWidth - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                                            //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXGadgetCollectionViewLayoutDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetCollectionViewLayoutDelegate>)arg1 ;
-(PXGadgetSpec *)spec;
-(void)setPagingEnabled:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)setSpec:(PXGadgetSpec *)arg1 ;
-(void)setColumnWidth:(double)arg1 ;
-(void)setInterSectionSpacing:(double)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)_gadgetForSection:(long long)arg1 ;
-(id)_titleForGadget:(id)arg1 ;
-(unsigned long long)_buttonTypeForGadget:(id)arg1 ;
-(BOOL)_hasButtonForGadget:(id)arg1 ;
-(BOOL)_shouldShowSectionHeaderForGadget:(id)arg1 ;
-(unsigned long long)_sectionHeaderStyleForGadget:(id)arg1 ;
-(BOOL)pagingEnabled;
-(long long)pageSizeClass;
-(void)setPageSizeClass:(long long)arg1 ;
-(BOOL)isPageFullColumnnWidth;
-(void)setIsPageFullColumnnWidth:(BOOL)arg1 ;
-(double)columnWidth;
-(double)interSectionSpacing;
@end

