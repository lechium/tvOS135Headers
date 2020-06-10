/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelStoreBrowseContentItemBuilder, MPModelForYouRecommendationGroupBuilder, MPPropertySet, NSDictionary, MPMutableSectionedCollection;

@interface MPModelForYouRecommendationItemBuilder : NSObject {

	SCD_Struct_MP48 _requestedItemProperties;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	MPModelForYouRecommendationGroupBuilder* _subgroupBuilder;
	MPPropertySet* _requestedPropertySet;
	NSDictionary* _storeItemMetadataResults;
	MPMutableSectionedCollection* _flatSectionedItems;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;                           //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeItemMetadataResults;                        //@synthesize storeItemMetadataResults=_storeItemMetadataResults - In the implementation block
@property (nonatomic,readonly) MPMutableSectionedCollection * flatSectionedItems;              //@synthesize flatSectionedItems=_flatSectionedItems - In the implementation block
+(id)allSupportedProperties;
-(MPPropertySet *)requestedPropertySet;
-(NSDictionary *)storeItemMetadataResults;
-(MPMutableSectionedCollection *)flatSectionedItems;
-(id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4 ;
-(id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 ;
@end

