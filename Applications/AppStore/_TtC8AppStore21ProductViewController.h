//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

@class MISSING_TYPE;

@interface _TtC8AppStore21ProductViewController : _TtC8AppStore29StoreCollectionViewController
{
    MISSING_TYPE *objectGraph;	// 112 = 0x70
    MISSING_TYPE *shelfDataSource;	// 120 = 0x78
    MISSING_TYPE *presenter;	// 128 = 0x80
    MISSING_TYPE *artworkLoader;	// 136 = 0x88
    MISSING_TYPE *appStateController;	// 144 = 0x90
    MISSING_TYPE *scrollViewDelegateCoordinator;	// 152 = 0x98
    MISSING_TYPE *actionRunner;	// 160 = 0xa0
    MISSING_TYPE *lockupDistance;	// 168 = 0xa8
    MISSING_TYPE *footerDistance;	// 176 = 0xb0
    MISSING_TYPE *isUserInterfaceDark;	// 184 = 0xb8
    MISSING_TYPE *effectView;	// 192 = 0xc0
    MISSING_TYPE *footerBackgroundView;	// 200 = 0xc8
    MISSING_TYPE *iconImage;	// 208 = 0xd0
    MISSING_TYPE *iconImageSize;	// 216 = 0xd8
    MISSING_TYPE *iconStyle;	// 232 = 0xe8
    MISSING_TYPE *iconBackgroundColor;	// 240 = 0xf0
    MISSING_TYPE *iconRecipients;	// 248 = 0xf8
    MISSING_TYPE *impressionsCoordinator;	// 256 = 0x100
    MISSING_TYPE *isPurchasedOnProductLoad;	// 264 = 0x108
    MISSING_TYPE *footerFirstIndexPath;	// 0 = 0x0
    MISSING_TYPE *backgroundUberView;	// 0 = 0x0
    MISSING_TYPE *desiredContentOffset;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100142548
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010014975c
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0000000100149728
- (void)didFailFocusMovement:(id)arg1;	// IMP=0x0000000100149664
- (void)didAskToBuy:(id)arg1;	// IMP=0x0000000100148c8c
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000010014884c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001001487bc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001001472b0
- (double)collectionView:(id)arg1 layout:(id)arg2 multiColumnMarginAt:(long long)arg3;	// IMP=0x00000001001470c8
- (long long)collectionView:(id)arg1 layout:(id)arg2 multiColumnCountAtSection:(long long)arg3;	// IMP=0x0000000100147044
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldLayoutManageMultiColumnAt:(long long)arg3;	// IMP=0x0000000100146fb0
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForBackgroundAtSection:(long long)arg3;	// IMP=0x0000000100146ef4
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldProvideBackgroundAtSection:(long long)arg3;	// IMP=0x0000000100146ee8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100146e00
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100146d30
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100146b84
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100146970
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100146678
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100146008
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100145ffc
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100145af4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000100145a34
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100145a28
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100145950
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100145388
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010014531c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001001452b0
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100145218
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010014358c
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100143450
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001001432f4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100142fc0
- (void)viewDidLoad;	// IMP=0x0000000100142f94
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100142ad8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100142984
- (void)dealloc;	// IMP=0x00000001001424ac
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100142310

@end

