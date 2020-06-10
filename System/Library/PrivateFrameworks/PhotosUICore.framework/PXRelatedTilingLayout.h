/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@protocol PXRelatedTilingLayoutDelegate;
@class PXRelatedDataSource, PXRelatedSpec;

@interface PXRelatedTilingLayout : PXTilingLayout {

	unsigned long long _dataSourceIdentifier;
	long long _numberOfEntries;
	long long _numberOfColumns;
	long long _numberOfRows;
	UIEdgeInsets _margins;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	CGRect _contentBounds;
	BOOL _isDataSourceTransient;
	SCD_Struct_PX66 _delegateRespondsTo;
	id<PXRelatedTilingLayoutDelegate> _delegate;
	PXRelatedDataSource* _dataSource;
	PXRelatedSpec* _spec;
	long long _maximumNumberOfRows;
	PXSimpleIndexPath _highlightedIndexPath;
	PXSimpleIndexPath _focusedIndexPath;

}

@property (assign,nonatomic,__weak) id<PXRelatedTilingLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXRelatedDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXRelatedSpec * spec;                                           //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfRows;                                  //@synthesize maximumNumberOfRows=_maximumNumberOfRows - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath highlightedIndexPath;                         //@synthesize highlightedIndexPath=_highlightedIndexPath - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath focusedIndexPath;                             //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
-(id)init;
-(id<PXRelatedTilingLayoutDelegate>)delegate;
-(void)setDelegate:(id<PXRelatedTilingLayoutDelegate>)arg1 ;
-(PXRelatedDataSource *)dataSource;
-(void)setDataSource:(PXRelatedDataSource *)arg1 ;
-(CGRect)contentBounds;
-(PXRelatedSpec *)spec;
-(PXSimpleIndexPath)highlightedIndexPath;
-(void)setHighlightedIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)prepareLayout;
-(void)setSpec:(PXRelatedSpec *)arg1 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(PXSimpleIndexPath)indexPathForTileIdentifier:(PXTileIdentifier)arg1 ;
-(long long)tileKindForTileIdentifier:(PXTileIdentifier)arg1 ;
-(void)setMaximumNumberOfRows:(long long)arg1 ;
-(void)setFocusedIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 entryIndexPath:(PXSimpleIndexPath)arg2 ;
-(PXSimpleIndexPath)indexPathForEntryAtPoint:(CGPoint)arg1 ;
-(CGRect)rectOfInterestForEntryAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXTileIdentifier)_tileIdentifierForTileKind:(long long)arg1 entryIndex:(long long)arg2 ;
-(void)_enumerateEntryIndexesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)_rectForEntryAtIndex:(long long)arg1 ;
-(BOOL)_shouldShowActivityIndicator;
-(CGRect)_rectForActivityIndicator;
-(BOOL)_shouldShowEmptyPlaceholder;
-(CGRect)_rectForEmptyPlaceholder;
-(long long)maximumNumberOfRows;
-(PXSimpleIndexPath)focusedIndexPath;
@end

