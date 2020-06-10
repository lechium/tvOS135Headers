/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaCollection.h>

@class TVHKMediaEntityType, NSString, NSArray, TVHKDAAPSeasonMediaCollection, TVHKDAAPShowMediaCollectionIdentifier;

@interface TVHKDAAPShowMediaCollection : TVHKMediaCollection {

	TVHKMediaEntityType* _type;
	NSString* _sortTitle;
	NSString* _title;
	NSArray* _seasons;
	NSArray* _episodes;
	TVHKDAAPSeasonMediaCollection* _selectedSeason;
	TVHKDAAPShowMediaCollectionIdentifier* _showIdentifier;
	NSArray* _seasonsSortedByAddedDate;
	NSArray* _seasonsSortedByAddedToDate;
	NSString* _seasonsMetadataHash;

}

@property (nonatomic,copy) NSArray * seasons;                                                     //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,copy) NSArray * episodes;                                                    //@synthesize episodes=_episodes - In the implementation block
@property (nonatomic,copy) TVHKDAAPSeasonMediaCollection * selectedSeason;                        //@synthesize selectedSeason=_selectedSeason - In the implementation block
@property (nonatomic,retain) TVHKDAAPShowMediaCollectionIdentifier * showIdentifier;              //@synthesize showIdentifier=_showIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * seasonsSortedByAddedDate;                                    //@synthesize seasonsSortedByAddedDate=_seasonsSortedByAddedDate - In the implementation block
@property (nonatomic,copy) NSArray * seasonsSortedByAddedToDate;                                  //@synthesize seasonsSortedByAddedToDate=_seasonsSortedByAddedToDate - In the implementation block
@property (nonatomic,copy) NSString * seasonsMetadataHash;                                        //@synthesize seasonsMetadataHash=_seasonsMetadataHash - In the implementation block
-(id)type;
-(id)identifier;
-(unsigned long long)protocol;
-(id)title;
-(unsigned long long)persistentID;
-(id)addedDate;
-(id)sortTitle;
-(id)genreTitle;
-(id)imageIdentifier;
-(NSArray *)episodes;
-(unsigned long long)nonPersistentID;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(TVHKDAAPShowMediaCollectionIdentifier *)showIdentifier;
-(NSArray *)seasons;
-(void)setEpisodes:(NSArray *)arg1 ;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonWithIdentifier:(id)arg1 ;
-(id)_firstAddedSeason;
-(TVHKDAAPSeasonMediaCollection *)selectedSeason;
-(void)setPlayedState:(long long)arg1 ;
-(unsigned long long)imageNonPersistentID;
-(id)_lastAddedToSeason;
-(id)addedToDate;
-(id)metadataKeyPaths;
-(long long)playedState;
-(NSArray *)seasonsSortedByAddedDate;
-(NSArray *)seasonsSortedByAddedToDate;
-(id)initWithMediaEntityServer:(id)arg1 title:(id)arg2 sortTitle:(id)arg3 ;
-(void)assignSeasons:(id)arg1 ;
-(id)mediaItemCount;
-(id)mediaCollectionCount;
-(id)selectedMediaCollectionIdentifier;
-(NSString *)seasonsMetadataHash;
-(id)_lastAddedSeason;
-(id)_firstAddedToSeason;
-(void)setSelectedSeason:(TVHKDAAPSeasonMediaCollection *)arg1 ;
-(void)setShowIdentifier:(TVHKDAAPShowMediaCollectionIdentifier *)arg1 ;
-(void)setSeasonsSortedByAddedDate:(NSArray *)arg1 ;
-(void)setSeasonsSortedByAddedToDate:(NSArray *)arg1 ;
-(void)setSeasonsMetadataHash:(NSString *)arg1 ;
@end

