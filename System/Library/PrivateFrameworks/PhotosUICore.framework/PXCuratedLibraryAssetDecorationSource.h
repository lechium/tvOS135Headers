/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGShadowSource.h>
#import <libobjc.A.dylib/PXGAssetBadgeDecorationSource.h>
#import <libobjc.A.dylib/PXGCaptionDecorationSource.h>
#import <libobjc.A.dylib/PXGSelectionDecorationSource.h>
#import <libobjc.A.dylib/PXGDragDecorationSource.h>
#import <libobjc.A.dylib/PXGDebugDecorationSource.h>
#import <libobjc.A.dylib/PXGDisplayAssetRequestObserver.h>

@class NSIndexSet, NSMutableSet, PXAssetBadgeManager, PXGLayout, PXAssetsDataSource, PXSelectionSnapshot, NSSet, PXGItemsLayout, NSString;

@interface PXCuratedLibraryAssetDecorationSource : NSObject <PXGShadowSource, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGSelectionDecorationSource, PXGDragDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetRequestObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSIndexSet* _draggedItems;
	NSMutableSet* _assetUUIDsInCloud;
	PXAssetBadgeManager* _badgeManager;
	BOOL _forceBadgesOnAllAssets;
	BOOL _isInSelectMode;
	BOOL _durationAlwaysHidden;
	BOOL _enableDebugDecoration;
	PXGLayout* _decoratedLayout;
	PXAssetsDataSource* _dataSource;
	long long _section;
	PXSelectionSnapshot* _selectionSnapshot;
	NSSet* _draggedAssetReferences;
	unsigned long long _forbiddenBadges;
	NSIndexSet* _itemsWithCoveredBottomTrailingCorner;

}

@property (nonatomic,readonly) PXGItemsLayout * decoratedItemsLayout; 
@property (assign,nonatomic,__weak) PXGLayout * decoratedLayout;                           //@synthesize decoratedLayout=_decoratedLayout - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) long long section;                                          //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isInSelectMode;                                          //@synthesize isInSelectMode=_isInSelectMode - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                      //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,copy) NSSet * draggedAssetReferences;                                 //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (assign,nonatomic) unsigned long long forbiddenBadges;                           //@synthesize forbiddenBadges=_forbiddenBadges - In the implementation block
@property (assign,nonatomic) BOOL durationAlwaysHidden;                                    //@synthesize durationAlwaysHidden=_durationAlwaysHidden - In the implementation block
@property (nonatomic,copy) NSIndexSet * itemsWithCoveredBottomTrailingCorner;              //@synthesize itemsWithCoveredBottomTrailingCorner=_itemsWithCoveredBottomTrailingCorner - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDecoration;                                   //@synthesize enableDebugDecoration=_enableDebugDecoration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)update;
-(long long)section;
-(PXAssetsDataSource *)dataSource;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(PXSelectionSnapshot *)selectionSnapshot;
-(id)shadowForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(double)cornerRadiusForShadowSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setDataSource:(id)arg1 section:(long long)arg2 ;
-(NSSet *)draggedAssetReferences;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(void)observeIsInCloud:(BOOL)arg1 forDisplayAsset:(id)arg2 ;
-(BOOL)wantsDebugDecorationInLayout:(id)arg1 ;
-(id)debugDecorationAtSpriteIndex:(unsigned)arg1 asset:(id)arg2 inLayout:(id)arg3 ;
-(id)draggingSpriteIndexesInLayout:(id)arg1 ;
-(long long)selectionDecorationStyleInLayout:(id)arg1 ;
-(unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1 ;
-(id)selectedSpriteIndexesInLayout:(id)arg1 ;
-(BOOL)wantsCaptionDecorationsInLayout:(id)arg1 ;
-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg1 ;
-(PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned)arg2 inLayout:(id)arg3 ;
-(void)setDecoratedLayout:(PXGLayout *)arg1 ;
-(void)setEnableDebugDecoration:(BOOL)arg1 ;
-(void)setForbiddenBadges:(unsigned long long)arg1 ;
-(void)setItemsWithCoveredBottomTrailingCorner:(NSIndexSet *)arg1 ;
-(PXGItemsLayout *)decoratedItemsLayout;
-(id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2 ;
-(void)_invalidateDragDecoration;
-(void)_updateDragDecoration;
-(PXGLayout *)decoratedLayout;
-(BOOL)isInSelectMode;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(unsigned long long)forbiddenBadges;
-(BOOL)durationAlwaysHidden;
-(void)setDurationAlwaysHidden:(BOOL)arg1 ;
-(NSIndexSet *)itemsWithCoveredBottomTrailingCorner;
-(BOOL)enableDebugDecoration;
@end

