/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@protocol PXMemoriesFeedTilingLayoutDelegate;
@class PXMemoriesSpec, PXIndexPathSet, PXSectionedLayoutSnapshot, PXCollectionTileLayoutTemplate, PXMemoriesFeedDataSource;

@interface PXMemoriesFeedTilingLayout : PXTilingLayout {

	SCD_Struct_PX53 _delegateRespondsTo;
	PXMemoriesSpec* _spec;
	PXIndexPathSet* _selectedMemoryIndexPaths;
	id<PXMemoriesFeedTilingLayoutDelegate> _delegate;
	PXSectionedLayoutSnapshot* _layoutSnapshot;
	PXCollectionTileLayoutTemplate* __tileLayoutTemplate;
	PXSimpleIndexPath _highlightedMemoryIndexPath;

}

@property (nonatomic,readonly) PXCollectionTileLayoutTemplate * _tileLayoutTemplate;              //@synthesize _tileLayoutTemplate=__tileLayoutTemplate - In the implementation block
@property (nonatomic,retain) PXMemoriesSpec * spec;                                               //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath highlightedMemoryIndexPath;                        //@synthesize highlightedMemoryIndexPath=_highlightedMemoryIndexPath - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * selectedMemoryIndexPaths;                           //@synthesize selectedMemoryIndexPaths=_selectedMemoryIndexPaths - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesFeedTilingLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXSectionedLayoutSnapshot * layoutSnapshot;                        //@synthesize layoutSnapshot=_layoutSnapshot - In the implementation block
@property (nonatomic,readonly) PXMemoriesFeedDataSource * dataSource; 
-(id)init;
-(id<PXMemoriesFeedTilingLayoutDelegate>)delegate;
-(void)setDelegate:(id<PXMemoriesFeedTilingLayoutDelegate>)arg1 ;
-(PXMemoriesFeedDataSource *)dataSource;
-(CGRect)contentBounds;
-(PXMemoriesSpec *)spec;
-(void)prepareLayout;
-(void)setSpec:(PXMemoriesSpec *)arg1 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(PXTileGeometry*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setLayoutSnapshot:(PXSectionedLayoutSnapshot *)arg1 ;
-(CGRect)_contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2 ;
-(PXSectionedLayoutSnapshot *)layoutSnapshot;
-(id)initWithSpec:(id)arg1 layoutSnapshot:(id)arg2 ;
-(PXSimpleIndexPath)indexPathForMemoryAtPoint:(CGPoint)arg1 ;
-(id)indexPathsForMemoriesInRect:(CGRect)arg1 ;
-(PXSimpleIndexPath)indexPathForTileIdentifier:(PXTileIdentifier)arg1 ;
-(long long)dataSourceIdentifierForTileIdentifier:(PXTileIdentifier)arg1 ;
-(long long)tileKindForTileIdentifier:(PXTileIdentifier)arg1 ;
-(PXTileIdentifier)tileIdentifierAtIndexPath:(PXSimpleIndexPath)arg1 withTileKind:(long long)arg2 ;
-(void)setHighlightedMemoryIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)setSelectedMemoryIndexPaths:(PXIndexPathSet *)arg1 ;
-(void)_enumerateTilesInLayoutItem:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_addTileWithKind:(long long)arg1 entryIndex:(unsigned long long)arg2 memoryIndex:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_viewSpecForTileWithIdentifier:(PXTileIdentifier)arg1 boundingSize:(CGSize)arg2 ;
-(id)_titleFontNameForMemoryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(unsigned long long)_zPositionForTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(long long)_itemKindForTileKind:(long long)arg1 ;
-(void)_invalidateSelectionTilesWithTag:(id)arg1 ;
-(PXSimpleIndexPath)highlightedMemoryIndexPath;
-(PXIndexPathSet *)selectedMemoryIndexPaths;
-(PXCollectionTileLayoutTemplate *)_tileLayoutTemplate;
@end

