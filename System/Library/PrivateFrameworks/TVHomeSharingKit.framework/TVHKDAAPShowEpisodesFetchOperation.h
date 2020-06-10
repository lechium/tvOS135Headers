/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKDAAPShowsBaseFetchOperation.h>

@class TVHKMediaEntityIdentifier;

@interface TVHKDAAPShowEpisodesFetchOperation : TVHKDAAPShowsBaseFetchOperation {

	TVHKMediaEntityIdentifier* _sourceSeasonIdentifier;

}

@property (nonatomic,copy) TVHKMediaEntityIdentifier * sourceSeasonIdentifier;              //@synthesize sourceSeasonIdentifier=_sourceSeasonIdentifier - In the implementation block
-(id)_episodesFetchRequest;
-(id)_mediaEntityCacheWithFetchCache:(id)arg1 ;
-(id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2 ;
-(id)initWithRequest:(id)arg1 fetchCache:(id)arg2 mediaServerIdentifier:(id)arg3 ;
-(BOOL)_useFetchCache;
-(TVHKMediaEntityIdentifier *)sourceSeasonIdentifier;
-(void)setSourceSeasonIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
@end

