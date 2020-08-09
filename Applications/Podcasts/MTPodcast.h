//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "IMMetricsDataSource-Protocol.h"

@class MTSyncInfo, NSSet, NSString;

@interface MTPodcast : NSManagedObject <IMMetricsDataSource>
{
}

+ (long long)storeCollectionIdForRedirectURL:(id)arg1;	// IMP=0x000000010001c9b4
+ (id)redirectURLForStoreCollectionId:(long long)arg1;	// IMP=0x000000010001c898
+ (_Bool)isRedirectURL:(id)arg1;	// IMP=0x000000010001c7d8
+ (void)setRemovePlayedEpisodesSetting:(long long)arg1 forPodcastUuid:(id)arg2;	// IMP=0x000000010001be3c
+ (id)productURLForStoreCollectionId:(long long)arg1 storeTrackId:(long long)arg2;	// IMP=0x000000010001bb58
+ (unsigned long long)totalUnplayedCount;	// IMP=0x000000010001b440
+ (void)prepareForPlatform:(id)arg1;	// IMP=0x000000010001b43c
+ (id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(_Bool)arg2 feedUrl:(id)arg3 title:(id)arg4 author:(id)arg5 provider:(id)arg6 category:(id)arg7 imageUrl:(id)arg8 description:(id)arg9;	// IMP=0x000000010001afe0
+ (id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(_Bool)arg2 feedUrl:(id)arg3 title:(id)arg4 author:(id)arg5 provider:(id)arg6 category:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 adamId:(long long)arg10;	// IMP=0x000000010001ae64
+ (id)latestEpisodeUuidForPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x0000000100069a24
+ (id)podcastUuidForEpisodeUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x0000000100069758
+ (id)podcastUuidForFeedUrl:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000696b8
+ (id)podcastUuidForFeedUrlString:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000694e0
+ (id)sortDescriptorsForNewestToOldest:(_Bool)arg1;	// IMP=0x0000000100068f2c
+ (id)sortDescriptorsForNewestOnTop;	// IMP=0x0000000100068d88
+ (id)sortDescriptorsForOldestOnTop;	// IMP=0x0000000100068c24
+ (id)allPossibleEpisodeListSortOrderProperties;	// IMP=0x000000010006869c
+ (id)_imageFetchQueue;	// IMP=0x00000001000a1b70
+ (void)_downloadArtworkForPodcastUuid:(id)arg1;	// IMP=0x00000001000a1af4
+ (id)_defaultPlaceholderArtworkWithSize:(struct CGSize)arg1;	// IMP=0x00000001000a1a74
+ (void)fetchArtworkForPodcastUuid:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a1600
+ (id)artworkForPodcastUuid:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000001000a1520
+ (int)autoDownloadDefaultValue;	// IMP=0x0000000100137248
+ (long long)deletePlayedEpisodesDefaultValue;	// IMP=0x00000001001371f0
+ (long long)episodeLimitDefaultValue;	// IMP=0x0000000100137198
+ (id)_defaultsForLoadingDefaultValues;	// IMP=0x0000000100137124
+ (long long)updateIntervalSettingForTimeInterval:(double)arg1;	// IMP=0x0000000100136f94
+ (double)timeIntervalForUpdate:(long long)arg1;	// IMP=0x0000000100136ef4
+ (long long)updateIntervalDefaultValue;	// IMP=0x0000000100136e9c
+ (id)predicateForPodcastWithPodcastPID:(long long)arg1;	// IMP=0x000000010013891c
+ (id)predicateForPodcastStoreId:(long long)arg1;	// IMP=0x0000000100138820
+ (id)predicateForPodcastUUID:(id)arg1;	// IMP=0x00000001001387dc
+ (id)predicateForPodcastUuids:(id)arg1;	// IMP=0x0000000100138798
+ (id)predicateForPodcastWithTitle:(id)arg1;	// IMP=0x0000000100138704
+ (id)predicateForPodcastWithFeedUrl:(id)arg1;	// IMP=0x000000010013855c
+ (id)predicateForUpdateInterval:(long long)arg1;	// IMP=0x0000000100138450
+ (id)predicateForUpdatablePodcasts;	// IMP=0x00000001001382b8
+ (id)predicateForAutoDownloadType:(int)arg1;	// IMP=0x0000000100138274
+ (id)predicateForAutoDownloadEnabled;	// IMP=0x0000000100138144
+ (id)predicateForHasBeenSynced:(_Bool)arg1;	// IMP=0x00000001001380f0
+ (id)predicateForSyncablePodcasts;	// IMP=0x0000000100138060
+ (id)predicateForOrphanedFromCloud:(_Bool)arg1;	// IMP=0x0000000100137fd0
+ (id)predicateForSubscribedAndNotHidden:(_Bool)arg1;	// IMP=0x0000000100137f30
+ (id)predicateForSubscribed:(_Bool)arg1;	// IMP=0x0000000100137ea0
+ (id)predicateForAllPodcasts;	// IMP=0x0000000100137e5c
+ (id)userDefaultPropertiesAffectingPredicates;	// IMP=0x0000000100137da4
+ (id)sortDescriptorsForTitle;	// IMP=0x000000010013fbc0
+ (id)sortDescriptorsForDateAdded;	// IMP=0x000000010013fac4
+ (id)sortDescriptorsForRecentlyUpdated;	// IMP=0x000000010013f9c8
+ (id)sortDescriptorsForLastDatePlayed;	// IMP=0x000000010013f914
+ (id)sortDescriptorsForAllPodcasts;	// IMP=0x000000010013f8b8
+ (id)sortDescriptorsForManualOrder;	// IMP=0x000000010013f804
- (unsigned long long)countOfMyEpisodes;	// IMP=0x000000010001cab0
- (id)bestFeedURLExcludingRedirectURL:(_Bool)arg1;	// IMP=0x000000010001c3cc
- (id)redirectURL;	// IMP=0x000000010001c390
- (id)countOfUnplayedEpisodes;	// IMP=0x000000010001c2e0
- (id)countOfNewEpisodes;	// IMP=0x000000010001c230
- (void)updateLastTouchDate;	// IMP=0x000000010001c1f4
- (void)resetGoDark;	// IMP=0x000000010001c16c
@property(nonatomic, getter=isAuthenticatedDark) _Bool authenticatedDark;
@property(readonly, nonatomic, getter=isPastAutodownloadDark) _Bool autodownloadDark;
@property(readonly, nonatomic, getter=isPastFeedDark) _Bool feedDark;
@property(readonly, nonatomic, getter=isDark) _Bool dark;
@property(nonatomic) _Bool orphanedFromCloud; // @dynamic orphanedFromCloud;
- (id)twitterShareURL;	// IMP=0x000000010001bd90
- (id)shareURL;	// IMP=0x000000010001bd24
- (id)bestAvailableStoreCleanURL;	// IMP=0x000000010001b96c
- (_Bool)isShareable;	// IMP=0x000000010001b930
- (void)updateEpisodesMetadataIdentifiers;	// IMP=0x000000010001b814
@property(nonatomic) _Bool subscribed; // @dynamic subscribed;
@property(retain, nonatomic) NSString *updatedFeedURL; // @dynamic updatedFeedURL;
@property(retain, nonatomic) NSString *title; // @dynamic title;
- (id)bestDescription;	// IMP=0x000000010006d2e8
- (id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 limit:(unsigned long long)arg6;	// IMP=0x000000010006ced0
- (id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 limit:(unsigned long long)arg5;	// IMP=0x000000010006cebc
- (id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(_Bool)arg2;	// IMP=0x000000010006cea4
- (id)episodesInSeasonNumber:(long long)arg1;	// IMP=0x000000010006cd28
- (id)episodesInLatestSeason;	// IMP=0x000000010006cbb4
- (long long)latestSeasonNumber;	// IMP=0x000000010006c900
- (id)seasonNumbers;	// IMP=0x000000010006c6f4
- (_Bool)hasMultipleSeasons;	// IMP=0x000000010006c6a4
- (_Bool)hasAtLeastOneSeason;	// IMP=0x000000010006c504
- (id)_fetchRequestForDistinctSeasons;	// IMP=0x000000010006c328
- (id)oldestEpisodeInLatestSeasonOrShowExcludingPlayed:(_Bool)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3;	// IMP=0x000000010006c10c
- (id)oldestEpisodeInLatestSeasonOrShowExcludingPlayed:(_Bool)arg1 excludeExplicit:(long long)arg2;	// IMP=0x000000010006c0fc
- (id)oldestEpisodeInLatestSeasonOrShow;	// IMP=0x000000010006c0e8
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 episodeTypeFilter:(long long)arg7;	// IMP=0x000000010006bacc
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5 episodeTypeFilter:(long long)arg6;	// IMP=0x000000010006ba98
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 episodeTypeFilter:(long long)arg5;	// IMP=0x000000010006ba84
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6;	// IMP=0x000000010006ba5c
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5;	// IMP=0x000000010006ba48
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5;	// IMP=0x000000010006ba38
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4;	// IMP=0x000000010006ba28
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3;	// IMP=0x000000010006ba18
- (id)newestEpisodeUuid;	// IMP=0x000000010006b980
- (id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x000000010006b960
- (id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b950
- (id)oldestUserEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x000000010006b930
- (id)oldestUserEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b920
- (id)oldestUserEpisode;	// IMP=0x000000010006b910
- (id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2;	// IMP=0x000000010006b8f0
- (id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b8e0
- (id)oldestEpisodeNotPlayed;	// IMP=0x000000010006b8d0
- (id)oldestFullEpisode;	// IMP=0x000000010006b8b0
- (id)oldestEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x000000010006b890
- (id)oldestEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b880
- (id)oldestEpisode;	// IMP=0x000000010006b870
- (id)newestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x000000010006b850
- (id)newestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b840
- (id)newestUserEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b824
- (id)newestEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x000000010006b804
- (id)newestEpisodeNotPlayedExcludingExplicit:(long long)arg1;	// IMP=0x000000010006b7f4
- (id)newestFullEpisode;	// IMP=0x000000010006b7d4
- (id)newestEpisode;	// IMP=0x000000010006b7c0
- (id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3;	// IMP=0x000000010006b79c
- (id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2;	// IMP=0x000000010006b78c
- (id)firstUserEpisodeNotPlayed;	// IMP=0x000000010006b33c
- (id)_episodesNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 limit:(long long)arg8;	// IMP=0x000000010006ad18
- (id)_episodesNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 limit:(long long)arg7;	// IMP=0x000000010006acec
- (id)_episodeNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7;	// IMP=0x000000010006ac84
- (id)_episodeNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6;	// IMP=0x000000010006ac5c
- (id)_episodeBeforeEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4;	// IMP=0x000000010006ac3c
- (id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4 excludeExplicit:(long long)arg5 excludeStreaming:(long long)arg6;	// IMP=0x000000010006abfc
- (id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4 excludeExplicit:(long long)arg5;	// IMP=0x000000010006abec
- (id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4;	// IMP=0x000000010006abdc
- (id)episodeAfterEpisode:(id)arg1;	// IMP=0x000000010006abc4
- (id)episodeOlderThanEpisode:(id)arg1;	// IMP=0x000000010006abac
- (id)episodeNewerThanEpisode:(id)arg1;	// IMP=0x000000010006ab94
- (id)episodeNewerThanEpisode:(id)arg1 excludePlayed:(_Bool)arg2;	// IMP=0x000000010006ab7c
- (id)userEpisodeNewerThanEpisode:(id)arg1 excludePlayed:(_Bool)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4;	// IMP=0x000000010006ab5c
- (id)userEpisodeNewerThanEpisode:(id)arg1 excludePlayed:(_Bool)arg2 excludeExplicit:(long long)arg3;	// IMP=0x000000010006ab4c
- (id)episodesAfterEpisode:(id)arg1 restrictToUserEpisodes:(_Bool)arg2;	// IMP=0x000000010006ab10
- (id)userEpisodesAfterEpisode:(id)arg1;	// IMP=0x000000010006aad4
- (id)userEpisodeAfterEpisode:(id)arg1;	// IMP=0x000000010006aabc
- (id)mostRecentlyManuallyAddedEpisode;	// IMP=0x000000010006a6b8
- (id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(_Bool)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4;	// IMP=0x0000000100069fc4
- (id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(_Bool)arg2 excludeExplicit:(long long)arg3;	// IMP=0x0000000100069fb4
- (id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(_Bool)arg2;	// IMP=0x0000000100069fa4
- (id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1;	// IMP=0x0000000100069f94
- (id)mostRecentlyPlayedEpisodeRestrictedToLibrary:(_Bool)arg1;	// IMP=0x0000000100069f80
- (id)mostRecentlyPlayedEpisodeExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2;	// IMP=0x0000000100069f64
- (id)mostRecentlyPlayedEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x0000000100069f4c
- (id)mostRecentlyPlayedEpisode;	// IMP=0x0000000100069f3c
- (id)episodeToResume;	// IMP=0x0000000100069d40
- (_Bool)updateCursorPosition:(_Bool)arg1;	// IMP=0x000000010006923c
@property(nonatomic) _Bool playbackNewestToOldest;
- (id)sortDescriptorsForPlayOrder;	// IMP=0x0000000100068eec
- (id)sortDescriptorsForSortOrder;	// IMP=0x00000001000689d4
@property(readonly, nonatomic) _Bool sortAscending;
@property(nonatomic) _Bool isExplicit;
@property(nonatomic) long long showTypeSetting; // @dynamic showTypeSetting;
- (_Bool)isSerialShowTypeInFeed;	// IMP=0x00000001000683bc
- (long long)showTypeInFeedResolvedValue;	// IMP=0x0000000100068360
- (long long)showTypeResolvedValue;	// IMP=0x0000000100068330
@property(retain, nonatomic) NSString *webpageURL; // @dynamic webpageURL;
@property(retain, nonatomic) NSString *showTypeInFeed; // @dynamic showTypeInFeed;
@property(retain, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) double updateAvg; // @dynamic updateAvg;
@property(nonatomic) double updateStdDev; // @dynamic updateStdDev;
@property(nonatomic) double feedChangedDate; // @dynamic feedChangedDate;
@property(retain, nonatomic) NSString *itemDescription; // @dynamic itemDescription;
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(nonatomic) long long flags; // @dynamic flags;
@property(nonatomic) _Bool needsArtworkUpdate;
@property(nonatomic) double modifiedDate; // @dynamic modifiedDate;
@property(nonatomic) double lastDatePlayed; // @dynamic lastDatePlayed;
@property(nonatomic) _Bool importing;
@property(nonatomic) long long deletePlayedEpisodes; // @dynamic deletePlayedEpisodes;
@property(nonatomic) _Bool hasBeenSynced;
- (void)markPlaylistsForUpdate;	// IMP=0x0000000100067618
- (id)currentFeedURL;	// IMP=0x00000001000674f0
- (void)fetchArtworkWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a19e0
- (id)artworkWithSize:(struct CGSize)arg1;	// IMP=0x00000001000a195c
- (_Bool)deletePlayedEpisodesResolvedValue;	// IMP=0x0000000100136e3c
- (long long)episodeLimitResolvedValue;	// IMP=0x0000000100136de8
- (int)autoDownloadResolvedValue;	// IMP=0x0000000100136d94
- (id)displayURL;	// IMP=0x0000000100136ce4
@property(nonatomic) long long podcastPID; // @dynamic podcastPID;
- (id)metricsAdditionalData;	// IMP=0x0000000100172764
- (id)metricsContentIdentifier;	// IMP=0x0000000100172604

// Remaining properties
@property(nonatomic) double addedDate; // @dynamic addedDate;
@property(readonly, nonatomic) _Bool autoDownload; // @dynamic autoDownload;
@property(nonatomic) int autoDownloadType; // @dynamic autoDownloadType;
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) long long darkCount; // @dynamic darkCount;
@property(nonatomic) long long darkCountLocal; // @dynamic darkCountLocal;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double downloadedDate; // @dynamic downloadedDate;
@property(nonatomic) long long episodeLimit; // @dynamic episodeLimit;
@property(retain, nonatomic) NSSet *episodes; // @dynamic episodes;
@property(retain, nonatomic) NSString *feedURL; // @dynamic feedURL;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) long long keepEpisodes; // @dynamic keepEpisodes;
@property(nonatomic) double lastStoreEpisodesInfoCheckDate; // @dynamic lastStoreEpisodesInfoCheckDate;
@property(nonatomic) double lastStorePodcastInfoCheckDate; // @dynamic lastStorePodcastInfoCheckDate;
@property(nonatomic) double lastTouchDate; // @dynamic lastTouchDate;
@property(retain, nonatomic) NSString *nextEpisodeUuid; // @dynamic nextEpisodeUuid;
@property(nonatomic) _Bool notifications; // @dynamic notifications;
@property(retain, nonatomic) NSSet *playlistSettings; // @dynamic playlistSettings;
@property(retain, nonatomic) NSSet *playlists; // @dynamic playlists;
@property(retain, nonatomic) NSString *provider; // @dynamic provider;
@property(nonatomic) _Bool showPlacardForOrphanedFromCloud; // @dynamic showPlacardForOrphanedFromCloud;
@property(nonatomic) _Bool showPlacardForRemovePlayedEpisodes; // @dynamic showPlacardForRemovePlayedEpisodes;
@property(nonatomic) _Bool showPlacardForSavedEpisodes; // @dynamic showPlacardForSavedEpisodes;
@property(nonatomic) long long sortOrder; // @dynamic sortOrder;
@property(retain, nonatomic) NSString *storeCleanURL; // @dynamic storeCleanURL;
@property(nonatomic) long long storeCollectionId; // @dynamic storeCollectionId;
@property(retain, nonatomic) NSString *storeShortURL; // @dynamic storeShortURL;
@property(readonly) Class superclass;
@property(retain, nonatomic) MTSyncInfo *syncInfo; // @dynamic syncInfo;
@property(nonatomic) long long updateInterval; // @dynamic updateInterval;
@property(nonatomic) double updatedDate; // @dynamic updatedDate;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
