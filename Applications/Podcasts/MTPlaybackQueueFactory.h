//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTPlaybackQueueFactory : NSObject
{
}

+ (id)_uuidForEpisode:(id)arg1;	// IMP=0x000000010018f984
+ (id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 latest:(_Bool)arg4 ctx:(id)arg5;	// IMP=0x000000010018f704
+ (id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x000000010018f684
+ (id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x000000010018f604
+ (id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;	// IMP=0x000000010018f3d8
+ (id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x000000010018ef58
+ (id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;	// IMP=0x000000010018e8c8
+ (_Bool)_isContinuousPlaybackEnabledForLimit:(long long)arg1;	// IMP=0x000000010018e844
+ (id)_manifestForPlayMyOldestPodcasts;	// IMP=0x000000010018e7fc
+ (id)_manifestForPlayMyLatestPodcasts;	// IMP=0x000000010018e7b4
+ (id)_manifestForPlayMyPodcasts;	// IMP=0x000000010018e728
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2 sortType:(long long)arg3 limit:(long long)arg4;	// IMP=0x000000010018e370
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2 limit:(long long)arg3;	// IMP=0x000000010018e35c
+ (id)playEpisodeUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x000000010018e348
+ (id)playEpisodeUuid:(id)arg1 context:(long long)arg2;	// IMP=0x000000010018e338
+ (id)playEpisodeUuid:(id)arg1;	// IMP=0x000000010018e328
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2 limit:(long long)arg3;	// IMP=0x000000010018e030
+ (id)playStationUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x000000010018e01c
+ (id)playStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x000000010018dfb4
+ (id)playStationUuid:(id)arg1;	// IMP=0x000000010018dfa4
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3;	// IMP=0x000000010018df94
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long *)arg4;	// IMP=0x000000010018dc9c
+ (id)playPodcastUuid:(id)arg1 limit:(long long)arg2;	// IMP=0x000000010018dc88
+ (id)playPodcastUuid:(id)arg1 order:(long long)arg2;	// IMP=0x000000010018dc78
+ (id)playPodcastUuid:(id)arg1;	// IMP=0x000000010018dc68
+ (id)playMyPodcastsWithOrder:(long long)arg1;	// IMP=0x000000010018dc20
+ (id)playListenNow;	// IMP=0x000000010018d978

@end

