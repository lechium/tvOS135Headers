/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>
#import <libobjc.A.dylib/PXSectionedLayoutEngineDataSourceSnapshot.h>

@class NSArray, NSString;

@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot> {

	NSArray* _entries;
	PXSimpleIndexPath _indexPathForFirstPastMemorySection;

}

@property (assign,nonatomic) PXSimpleIndexPath indexPathForFirstPastMemorySection;              //@synthesize indexPathForFirstPastMemorySection=_indexPathForFirstPastMemorySection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entries;                                          //@synthesize entries=_entries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,readonly) long long numberOfSections; 
-(id)init;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSArray *)entries;
-(id)initWithEntries:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)inputForItem:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(PXSimpleIndexPath)_firstSectionIndexPath;
-(void)_enumerateSectionIndexPathsStartingAtIndexPath:(PXSimpleIndexPath)arg1 reverseDirection:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateSectionIndexPathsWithHintIndexPath:(PXSimpleIndexPath)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateItemIndexPathsWithHintIndexPath:(PXSimpleIndexPath)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 withHintIndexPath:(PXSimpleIndexPath)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)sectionedObjectReferenceForMemoryUUID:(id)arg1 ;
-(PXSimpleIndexPath)indexPathForFirstPastMemorySection;
-(void)setIndexPathForFirstPastMemorySection:(PXSimpleIndexPath)arg1 ;
@end
