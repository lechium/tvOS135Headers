/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSArray, PXSectionedDataSourceChangeDetails;

@interface PXLegacySectionedDataSourceChangeDetails : NSObject {

	NSIndexSet* _deletedSections;
	NSIndexSet* _insertedSections;
	NSIndexSet* _changedSections;
	NSArray* _deletedIndexPaths;
	NSArray* _insertedIndexPaths;
	NSArray* _changedIndexPaths;
	NSArray* _contentChangedIndexPaths;
	long long _shiftingSectionLocation;
	BOOL _prepared;
	BOOL _hasIncrementalChanges;
	BOOL _hasMoves;
	PXSectionedDataSourceChangeDetails* _sectionedDataSourceChangeDetails;
	NSArray* _contentItemsChangedIndexPaths;

}

@property (nonatomic,readonly) PXSectionedDataSourceChangeDetails * sectionedDataSourceChangeDetails;              //@synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) NSIndexSet * deletedSections; 
@property (nonatomic,readonly) NSIndexSet * insertedSections; 
@property (nonatomic,readonly) NSIndexSet * changedSections; 
@property (nonatomic,readonly) NSArray * deletedItemsIndexPaths; 
@property (nonatomic,readonly) NSArray * insertedItemsIndexPaths; 
@property (nonatomic,readonly) NSArray * changedItemsIndexPaths; 
@property (nonatomic,readonly) NSArray * contentItemsChangedIndexPaths;                                            //@synthesize contentItemsChangedIndexPaths=_contentItemsChangedIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL hasMoves; 
-(id)description;
-(BOOL)hasMoves;
-(BOOL)hasIncrementalChanges;
-(NSIndexSet *)insertedSections;
-(NSIndexSet *)deletedSections;
-(id)initWithSectionedDataSourceChangeDetails:(id)arg1 shiftedSection:(long long)arg2 ;
-(NSIndexSet *)changedSections;
-(NSArray *)deletedItemsIndexPaths;
-(NSArray *)insertedItemsIndexPaths;
-(NSArray *)changedItemsIndexPaths;
-(id)contentChangedItemsIndexPaths;
-(void)prepareIfNeeded;
-(void)_prepareIncrementalDetails;
-(void)enumerateMovedIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(PXSectionedDataSourceChangeDetails *)sectionedDataSourceChangeDetails;
-(NSArray *)contentItemsChangedIndexPaths;
@end

