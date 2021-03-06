//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

#import "MTPlaybackIdentifierComposing-Protocol.h"

@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>
{
}

+ (id)__queryStringToQueryDictionary:(id)arg1;	// IMP=0x00000001000b6f6c
+ (id)__stringByRemovingPercentEscapes:(id)arg1;	// IMP=0x00000001000b6f2c
+ (id)__stringWithPercentEscape:(id)arg1;	// IMP=0x00000001000b6ee8
- (long long)_episodeContextSortFromString:(id)arg1;	// IMP=0x00000001000b6e94
- (long long)_episodeContextFromString:(id)arg1;	// IMP=0x00000001000b6e40
- (unsigned long long)_playReasonFromString:(id)arg1;	// IMP=0x00000001000b6dec
- (long long)_episodeOrderFromString:(id)arg1;	// IMP=0x00000001000b6d70
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryComponents:(id)arg2;	// IMP=0x00000001000b6b00
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryKey:(id)arg2 value:(id)arg3;	// IMP=0x00000001000b69ec
- (unsigned long long)_playQueueTypeForRequestURL:(id)arg1;	// IMP=0x00000001000b67b0
- (id)requestIdentifierForPlayerItem:(id)arg1;	// IMP=0x00000001000b6294
- (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 initiatedByAnotherUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b55cc
- (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b5578
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForPlayerItems:(id)arg1;	// IMP=0x00000001000b53ac
- (id)requestIdentifiersForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000b4d50
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000b4cf8
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithDsid:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x00000001000b4c48
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForIdentifiers:(id)arg1;	// IMP=0x00000001000b4ba0
- (id)podcastUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000b46b4
- (id)episodeUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000b4374
- (id)universalPlaybackQueueRequestIdentifierForEpisode:(id)arg1;	// IMP=0x00000001000b3f4c
- (id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg1 limit:(long long)arg2 queueStatus:(out unsigned long long *)arg3;	// IMP=0x00000001000b3b30
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5;	// IMP=0x00000001000b390c
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4;	// IMP=0x00000001000b3878
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x00000001000b3808
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;	// IMP=0x00000001000b37f8
- (id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg1;	// IMP=0x00000001000b3760
- (id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg1;	// IMP=0x00000001000b3740
- (id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000b362c
- (id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8 sampPlaybackOrder:(id)arg9;	// IMP=0x00000001000b30ac
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8;	// IMP=0x00000001000b2fc8
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(id)arg7;	// IMP=0x00000001000b2edc
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6;	// IMP=0x00000001000b2e08
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(id)arg4;	// IMP=0x00000001000b2d64
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3;	// IMP=0x00000001000b2cd4
- (id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5;	// IMP=0x00000001000b2c2c
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;	// IMP=0x00000001000b2b48
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000b2ae0
- (id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;	// IMP=0x00000001000b2ac0
- (id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;	// IMP=0x00000001000b2aa0
- (_Bool)isUniversalPlaybackIdentifierURLString:(id)arg1;	// IMP=0x00000001000b2a1c
- (_Bool)isSubscribeCommandURLString:(id)arg1;	// IMP=0x00000001000b2998
- (_Bool)isLocalSetPlaybackQueueURLString:(id)arg1;	// IMP=0x00000001000b282c
- (id)playbackRequestURLWithPlayReason:(unsigned long long)arg1 baseRequestURLString:(id)arg2;	// IMP=0x00000001000b2588

@end

