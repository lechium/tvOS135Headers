//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBaseFeedManager.h"

@interface MTFeedUpdateManager : MTBaseFeedManager
{
}

- (_Bool)_updatePodcastWithUUID:(id)arg1 userInitiated:(_Bool)arg2 forced:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4 tryRedirectURL:(_Bool)arg5;	// IMP=0x00000001001686b0
- (_Bool)_updatePodcastWithUUID:(id)arg1 userInitiated:(_Bool)arg2 forced:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4;	// IMP=0x00000001001686a0
- (long long)_updatePodcastsWithUUIDs:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x000000010016848c
- (long long)_updateAllPodcastsUserInitiated:(_Bool)arg1 useBackgroundFetch:(_Bool)arg2;	// IMP=0x0000000100168000
- (_Bool)isPodcastUpdatable:(id)arg1 userInitiated:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x0000000100167f48
- (_Bool)isPodcastUpdatable:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0000000100167f38
- (_Bool)_updatePodcastWithUUID:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3 tryRedirectURL:(_Bool)arg4;	// IMP=0x0000000100167f20
- (_Bool)_updatePodcastWithUUID:(id)arg1 userInitiated:(_Bool)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x0000000100167f0c
- (void)updatePodcastWithUUID:(id)arg1 userInitiated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100167ce8
- (void)updatePodcastWithUUID:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100167c8c
- (void)updatePodcastsWithUUIDs:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100167ae4
- (void)updateAllPodcastsForBackgroundFetch:(CDUnknownBlockType)arg1;	// IMP=0x0000000100167980
- (void)updateAllPodcasts:(CDUnknownBlockType)arg1;	// IMP=0x000000010016781c

@end
