//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCompositionalLayout.h>

@class NSArray, NSIndexPath, NSIndexSet;

@interface HBAppGridLayout : UICollectionViewCompositionalLayout
{
    _Bool _dockMode;	// 8 = 0x8
    _Bool _appGridHidden;	// 9 = 0x9
    _Bool _needsUpdateTopShelfLayoutAttributes;	// 10 = 0xa
    _Bool _needsUpdateDockBackgroundLayoutAttributes;	// 11 = 0xb
    _Bool _leadingDockItemHasFocus;	// 12 = 0xc
    _Bool _trailingDockItemHasFocus;	// 13 = 0xd
    long long _topShelfContentStyle;	// 16 = 0x10
    NSIndexSet *_updatingItemIndexes;	// 24 = 0x18
    struct CGRect _topShelfContentRect;	// 32 = 0x20
    struct CGRect _dockBackgroundRect;	// 64 = 0x40
}

+ (id)layoutAttributesNearPosition:(struct CGPoint)arg1 inLayoutAttributes:(id)arg2;	// IMP=0x000000010009f17c
+ (Class)layoutAttributesClass;	// IMP=0x000000010009d0bc
+ (id)makeFolderLayout;	// IMP=0x000000010009cbbc
+ (id)makeMainLayout;	// IMP=0x000000010009c824
- (void).cxx_destruct;	// IMP=0x00000001000a059c
@property(copy, nonatomic) NSIndexSet *updatingItemIndexes; // @synthesize updatingItemIndexes=_updatingItemIndexes;
@property(nonatomic, getter=_trailingDockItemHasFocus, setter=_setTrailingDockItemHasFocus:) _Bool trailingDockItemHasFocus; // @synthesize trailingDockItemHasFocus=_trailingDockItemHasFocus;
@property(nonatomic, getter=_leadingDockItemHasFocus, setter=_setLeadingDockItemHasFocus:) _Bool leadingDockItemHasFocus; // @synthesize leadingDockItemHasFocus=_leadingDockItemHasFocus;
@property(nonatomic, getter=_dockBackgroundRect, setter=_setDockBackgroundRect:) struct CGRect dockBackgroundRect; // @synthesize dockBackgroundRect=_dockBackgroundRect;
@property(nonatomic, getter=_needsUpdateDockBackgroundLayoutAttributes, setter=_setNeedsUpdateDockBackgroundLayoutAttributes:) _Bool needsUpdateDockBackgroundLayoutAttributes; // @synthesize needsUpdateDockBackgroundLayoutAttributes=_needsUpdateDockBackgroundLayoutAttributes;
@property(nonatomic, getter=_topShelfContentRect, setter=_setTopShelfContentRect:) struct CGRect topShelfContentRect; // @synthesize topShelfContentRect=_topShelfContentRect;
@property(nonatomic, getter=_needsUpdateTopShelfLayoutAttributes, setter=_setNeedsUpdateTopShelfLayoutAttributes:) _Bool needsUpdateTopShelfLayoutAttributes; // @synthesize needsUpdateTopShelfLayoutAttributes=_needsUpdateTopShelfLayoutAttributes;
@property(nonatomic, getter=isAppGridHidden) _Bool appGridHidden; // @synthesize appGridHidden=_appGridHidden;
@property(nonatomic) long long topShelfContentStyle; // @synthesize topShelfContentStyle=_topShelfContentStyle;
@property(readonly, nonatomic) _Bool dockMode; // @synthesize dockMode=_dockMode;
- (id)_delegateRespondingToHoverOverlayRect;	// IMP=0x00000001000a03f4
@property(readonly, nonatomic) unsigned long long indexOfLastRow;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (unsigned long long)colFromIndexPath:(id)arg1;	// IMP=0x00000001000a0284
- (unsigned long long)rowFromIndexPath:(id)arg1;	// IMP=0x00000001000a0240
- (id)_layoutAttributesForCellsInRowNearPosition:(struct CGPoint)arg1 positionContainedInRow:(_Bool *)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x000000010009fdf4
- (struct CGRect)_searchRectForConstrainToHoverRect:(_Bool)arg1;	// IMP=0x000000010009fcf8
- (id)_layoutAttributesForCellsInRect:(struct CGRect)arg1;	// IMP=0x000000010009fb3c
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000010009fa90
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1;	// IMP=0x000000010009fa80
- (id)indexPathNearPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000010009f86c
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x000000010009f85c
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x000000010009f364
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010009f354
- (id)indexPathInDirection:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010009efc4
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x000000010009ef3c
@property(readonly, nonatomic) NSIndexPath *firstIndexPathOutOfDock;
@property(readonly, nonatomic) NSArray *indexPathsInDock;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
- (void)_updateSceneSettingsForAppGridHidden:(_Bool)arg1;	// IMP=0x000000010009ec44
- (double)_hideAppGridAlpha;	// IMP=0x000000010009ec20
- (struct CGAffineTransform)_hideAppGridTransform;	// IMP=0x000000010009ebc0
- (void)_updateLayoutParameters;	// IMP=0x000000010009e9bc
- (id)_dockBackgroundLayoutAttributes;	// IMP=0x000000010009e8bc
- (id)_topShelfContentLayoutAttributes;	// IMP=0x000000010009e7ec
- (id)_commonAccessoryViewIndexPath;	// IMP=0x000000010009e7d0
- (void)setAppGridHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009e5c0
- (void)invalidateLayoutWithNextFocusedIndexPath:(id)arg1 animationCoordinator:(id)arg2;	// IMP=0x000000010009e280
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009e048
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009df88
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000010009de7c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010009db30
- (void)prepareLayout;	// IMP=0x000000010009dae0
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x000000010009d984
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010009d740
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x000000010009d664
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000010009d588
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009d4dc
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009d430
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000010009d3dc
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000010009d194
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000010009d0c8

@end

