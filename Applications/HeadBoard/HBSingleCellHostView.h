//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class HBRootCell, HBRootItem, NSString, UICollectionView;

@interface HBSingleCellHostView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _showsPersistantFocus;	// 8 = 0x8
    HBRootItem *_item;	// 16 = 0x10
    HBRootCell *_cell;	// 24 = 0x18
    UICollectionView *_cellHostCollectionView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100019054
@property(retain, nonatomic) UICollectionView *cellHostCollectionView; // @synthesize cellHostCollectionView=_cellHostCollectionView;
@property(nonatomic) _Bool showsPersistantFocus; // @synthesize showsPersistantFocus=_showsPersistantFocus;
@property(retain, nonatomic) HBRootCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) HBRootItem *item; // @synthesize item=_item;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100018ebc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100018eb4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100018eac
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100018e90
- (id)preferredFocusEnvironments;	// IMP=0x0000000100018e00
- (id)initWithItem:(id)arg1;	// IMP=0x0000000100018abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
