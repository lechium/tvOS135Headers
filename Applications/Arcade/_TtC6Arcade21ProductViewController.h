//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade29StoreCollectionViewController.h"

@class MISSING_TYPE;

@interface _TtC6Arcade21ProductViewController : _TtC6Arcade29StoreCollectionViewController
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

- (void).cxx_destruct;	// IMP=0x00000001001447d8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010014b9ec
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x000000010014b9b8
- (void)didFailFocusMovement:(id)arg1;	// IMP=0x000000010014b8f4
- (void)didAskToBuy:(id)arg1;	// IMP=0x000000010014af1c
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000010014aadc
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010014aa4c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100149540
- (double)collectionView:(id)arg1 layout:(id)arg2 multiColumnMarginAt:(long long)arg3;	// IMP=0x0000000100149358
- (long long)collectionView:(id)arg1 layout:(id)arg2 multiColumnCountAtSection:(long long)arg3;	// IMP=0x00000001001492d4
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldLayoutManageMultiColumnAt:(long long)arg3;	// IMP=0x0000000100149240
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForBackgroundAtSection:(long long)arg3;	// IMP=0x0000000100149184
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldProvideBackgroundAtSection:(long long)arg3;	// IMP=0x0000000100149178
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100149090
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100148fc0
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100148e14
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100148c00
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100148908
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100148298
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010014828c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100147d84
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000100147cc4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100147cb8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100147be0
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100147618
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001001475ac
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100147540
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00000001001474a8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010014581c
- (void)viewWillLayoutSubviews;	// IMP=0x00000001001456e0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100145584
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100145250
- (void)viewDidLoad;	// IMP=0x0000000100145224
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100144d68
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100144c14
- (void)dealloc;	// IMP=0x000000010014473c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001445a0

@end
