/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MPSectionedCollection, MPPropertySet, NSDictionary, MPMediaLibraryView, MPMediaLibraryEntityTranslationContext, NSMapTable, NSMutableDictionary, NSString;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > >* _entityCaches;
	MPSectionedCollection* _unpersonalizedContentDescriptors;
	MPPropertySet* _itemProperties;
	MPPropertySet* _sectionProperties;
	NSDictionary* _itemIndexPathToOverridePropertySet;
	MPMediaLibraryView* _libraryView;
	MPMediaLibraryEntityTranslationContext* _translatingContext;
	NSMapTable* _relativeModelClassToMappingResponse;
	NSMutableDictionary* _sectionToLibraryAddedOverride;

}

@property (nonatomic,retain) MPSectionedCollection * unpersonalizedContentDescriptors;                 //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
@property (nonatomic,copy) MPPropertySet * itemProperties;                                             //@synthesize itemProperties=_itemProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * sectionProperties;                                          //@synthesize sectionProperties=_sectionProperties - In the implementation block
@property (nonatomic,copy) NSDictionary * itemIndexPathToOverridePropertySet;                          //@synthesize itemIndexPathToOverridePropertySet=_itemIndexPathToOverridePropertySet - In the implementation block
@property (nonatomic,copy) MPMediaLibraryView * libraryView;                                           //@synthesize libraryView=_libraryView - In the implementation block
@property (nonatomic,retain) MPMediaLibraryEntityTranslationContext * translatingContext;              //@synthesize translatingContext=_translatingContext - In the implementation block
@property (nonatomic,copy) NSMapTable * relativeModelClassToMappingResponse;                           //@synthesize relativeModelClassToMappingResponse=_relativeModelClassToMappingResponse - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * sectionToLibraryAddedOverride;                        //@synthesize sectionToLibraryAddedOverride=_sectionToLibraryAddedOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_completePersonalizedObjectWithLibraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(long long)arg3 ;
+(id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4 ;
+(id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)arg1 requestedProperties:(id)arg2 ;
+(id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 libraryPlaybackPosition:(id)arg2 personalizationProperties:(id)arg3 ;
+(id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 identifiers:(id)arg2 personalizationProperties:(id)arg3 ;
+(id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)arg1 libraryAsset:(id)arg2 personalizationProperties:(id)arg3 ;
-(id)init;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(MPPropertySet *)itemProperties;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(MPPropertySet *)sectionProperties;
-(void)setSectionProperties:(MPPropertySet *)arg1 ;
-(void)setItemProperties:(MPPropertySet *)arg1 ;
-(id)_libraryObjectWithRelativeModelClass:(Class)arg1 identifierSet:(id)arg2 propertySet:(id)arg3 ;
-(shared_ptr<mlcore::EntityCache>*)_entityCacheForEntityClass:(EntityClass*)arg1 propertiesToFetch:(vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *> >*)arg2 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)setUnpersonalizedContentDescriptors:(MPSectionedCollection *)arg1 ;
-(NSDictionary *)itemIndexPathToOverridePropertySet;
-(void)setItemIndexPathToOverridePropertySet:(NSDictionary *)arg1 ;
-(MPMediaLibraryEntityTranslationContext *)translatingContext;
-(void)setTranslatingContext:(MPMediaLibraryEntityTranslationContext *)arg1 ;
-(NSMapTable *)relativeModelClassToMappingResponse;
-(void)setRelativeModelClassToMappingResponse:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)sectionToLibraryAddedOverride;
-(void)setSectionToLibraryAddedOverride:(NSMutableDictionary *)arg1 ;
@end

