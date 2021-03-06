//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTCoalescableWorkController;

@interface MTLibrary : NSObject
{
    MTCoalescableWorkController *_deleteHiddenPodcastsWorkController;	// 8 = 0x8
    id _cloudClient;	// 16 = 0x10
    _Bool _subscriptionSyncEnabled;	// 24 = 0x18
    _Bool _iTunesMatchEnabled;	// 25 = 0x19
}

+ (unsigned long long)freeSpace;	// IMP=0x000000010000c7f8
+ (_Bool)isSupportedUrlString:(id)arg1;	// IMP=0x00000001000083b4
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100007574
+ (id)sharedInstance;	// IMP=0x000000010000749c
+ (void)initialize;	// IMP=0x0000000100007424
- (void).cxx_destruct;	// IMP=0x000000010000c934
@property(nonatomic) _Bool iTunesMatchEnabled; // @synthesize iTunesMatchEnabled=_iTunesMatchEnabled;
@property(readonly, nonatomic, getter=isSubscriptionSyncEnabled) _Bool subscriptionSyncEnabled; // @synthesize subscriptionSyncEnabled=_subscriptionSyncEnabled;
- (id)storeContext;	// IMP=0x000000010000c79c
- (id)carPlayContext;	// IMP=0x000000010000c740
- (id)resetableImportContext;	// IMP=0x000000010000c6e4
- (id)importContext;	// IMP=0x000000010000c688
- (id)privateQueueContext;	// IMP=0x000000010000c62c
- (id)mainQueueContext;	// IMP=0x000000010000c5d0
- (id)mainOrPrivateContext;	// IMP=0x000000010000c574
- (_Bool)canDeleteEpisode:(id)arg1;	// IMP=0x000000010000c4a8
- (_Bool)setPlayState:(long long)arg1 fromContextActions:(_Bool)arg2 manually:(_Bool)arg3 forUserActionOnEpisode:(id)arg4 saveChanges:(_Bool)arg5;	// IMP=0x000000010000c384
- (_Bool)setPlayState:(long long)arg1 manually:(_Bool)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(_Bool)arg4;	// IMP=0x000000010000c368
- (_Bool)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(_Bool)arg4;	// IMP=0x000000010000c350
- (_Bool)setPlayState:(long long)arg1 manually:(_Bool)arg2 forUserActionOnEpisodeUuid:(id)arg3;	// IMP=0x000000010000c184
- (_Bool)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 forUserActionOnEpisodeUuid:(id)arg3;	// IMP=0x000000010000bfb4
- (void)markAsSaved:(_Bool)arg1 forEpisodeUuids:(id)arg2;	// IMP=0x000000010000bca4
- (_Bool)setStationShowGroupOrder:(id)arg1 forStation:(id)arg2;	// IMP=0x000000010000b848
- (_Bool)setEpisodesOrder:(id)arg1 forStation:(id)arg2;	// IMP=0x000000010000b3ec
- (_Bool)setPodcastsOrder:(id)arg1;	// IMP=0x000000010000af00
- (_Bool)setStationsOrder:(id)arg1;	// IMP=0x000000010000aaf4
- (void)deleteAllTopLevelStationsExcludingFolders;	// IMP=0x000000010000a85c
- (void)deleteAllPodcasts;	// IMP=0x000000010000a578
- (void)deleteOrphanedEpisodes;	// IMP=0x000000010000a16c
- (void)deleteEpisodeUuids:(id)arg1;	// IMP=0x000000010000a15c
- (void)_deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2;	// IMP=0x000000010000a14c
- (void)_deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2 save:(_Bool)arg3;	// IMP=0x0000000100009d74
- (void)_deletePodcast:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010000992c
- (void)_deletePodcastWithId:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000098a0
- (void)deleteStationWithUuid:(id)arg1;	// IMP=0x00000001000096e4
- (void)deletePlaylist:(id)arg1;	// IMP=0x00000001000095bc
- (void)_deleteHiddenPodcasts;	// IMP=0x000000010000932c
- (void)deleteHiddenPodcastsSynchronously;	// IMP=0x0000000100009320
- (void)deleteHiddenPodcasts;	// IMP=0x0000000100009238
- (void)_deletePodcastWithUuid:(id)arg1 forced:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x0000000100008e7c
- (void)deleteFromSyncPodcastsWithUuids:(id)arg1;	// IMP=0x0000000100008cfc
- (void)deletePodcastWithUuid:(id)arg1 shouldSave:(_Bool)arg2;	// IMP=0x0000000100008ba4
- (void)deletePodcastWithUuid:(id)arg1;	// IMP=0x0000000100008b94
- (_Bool)isSubscribedToPodcastWithUuid:(id)arg1;	// IMP=0x00000001000088f0
- (_Bool)isSubscribedToPodcastWithFeedUrl:(id)arg1;	// IMP=0x0000000100008800
- (void)markPlaylistsForUpdateForPodcastUuids:(id)arg1;	// IMP=0x00000001000083c8
- (void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2;	// IMP=0x0000000100008338
- (void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x00000001000081bc
- (void)disableSubscriptionOnPodcastUuid:(id)arg1;	// IMP=0x00000001000081ac
- (void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x0000000100008088
- (void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2;	// IMP=0x0000000100007f30
- (void)enableSubscriptionOnPodcastUuid:(id)arg1;	// IMP=0x0000000100007f20
- (void)finishPlayingEpisodeUuid:(id)arg1;	// IMP=0x0000000100007c50
- (id)lastUpdatedDateAttributedString;	// IMP=0x0000000100007b1c
- (id)lastUpdatedDateString;	// IMP=0x0000000100007928
- (void)_userDefaultsDidChange:(id)arg1;	// IMP=0x000000010000789c
- (void)updateiTunesPlaylistForiTunesMatchState;	// IMP=0x0000000100007768
- (id)copy;	// IMP=0x0000000100007738
- (id)init;	// IMP=0x0000000100007594

@end

