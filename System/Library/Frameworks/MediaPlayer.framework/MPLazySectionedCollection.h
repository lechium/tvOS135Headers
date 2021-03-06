/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@protocol MPLazySectionedCollectionDataSource;
@class NSCache;

@interface MPLazySectionedCollection : MPSectionedCollection {

	vector<long, std::__1::allocator<long> >* _cachedNumberOfItemsInSections;
	long long _cachedNumberOfSections;
	BOOL _hasValidCachedNumberOfSections;
	NSCache* _itemsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _itemIdentifierSetMap;
	NSCache* _sectionsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _sectionIdentifierSetMap;
	os_unfair_lock_s _mapLock;
	id<MPLazySectionedCollectionDataSource> _dataSource;

}

@property (nonatomic,retain) id<MPLazySectionedCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)firstItem;
-(id<MPLazySectionedCollectionDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(id<MPLazySectionedCollectionDataSource>)arg1 ;
-(id)lastItem;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)allItems;
-(long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)allSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstSection;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)lastSection;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(id)_cachedObjectAtIndexPath:(id)arg1 ;
-(void)_updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2 ;
@end

