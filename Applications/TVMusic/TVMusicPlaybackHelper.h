//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicPlaybackHelper : NSObject
{
}

+ (id)_currentFeatureName;	// IMP=0x000000010009be24
+ (id)_stringForItemType:(unsigned long long)arg1;	// IMP=0x000000010009bd50
+ (_Bool)_isPlayingOnLocalDevice;	// IMP=0x000000010009bcd4
+ (_Bool)_isAppleMusicSubscriber;	// IMP=0x000000010009bc80
+ (_Bool)_isVideoItemType:(unsigned long long)arg1;	// IMP=0x000000010009bc70
+ (void)_queueSongsWithRequest:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x000000010009bab4
+ (void)_playSongsWithRequest:(id)arg1 playbackAction:(unsigned long long)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x000000010009ba88
+ (void)_playSongsWithRequest:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x000000010009ba78
+ (void)_playSongsWithRequest:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 initialPlaybackType:(unsigned long long)arg4;	// IMP=0x000000010009b8c0
+ (void)_playLibraryItemWithRequest:(id)arg1 identifiers:(id)arg2 playbackType:(unsigned long long)arg3;	// IMP=0x000000010009b7c0
+ (void)_playRequestWithItemType:(unsigned long long)arg1 requestBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010009b4bc
+ (void)_playUsingAirPlayWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x000000010009b19c
+ (void)_playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3 checkSubscriptionStatus:(_Bool)arg4;	// IMP=0x000000010009aea8
+ (void)_playVideoItemWithRequest:(id)arg1 item:(id)arg2;	// IMP=0x000000010009ae30
+ (id)_songsRequestForContainer:(id)arg1 filterObject:(id)arg2;	// IMP=0x000000010009ab64
+ (id)_songsRequestForContainer:(id)arg1;	// IMP=0x000000010009ab54
+ (id)modelKindForPlaybackType:(unsigned long long)arg1;	// IMP=0x000000010009a8d0
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 filterObject:(id)arg4;	// IMP=0x000000010009a784
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4 inSectionKind:(id)arg5 sectionSortDescriptors:(id)arg6 initialPlaybackType:(unsigned long long)arg7;	// IMP=0x000000010009a59c
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4;	// IMP=0x000000010009a508
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x000000010009a498
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3;	// IMP=0x000000010009a424
+ (void)shuffleAllLibrarySongs;	// IMP=0x000000010009a3c8
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x000000010009a3b4
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 inContainer:(id)arg3 playbackAction:(unsigned long long)arg4;	// IMP=0x0000000100099c70
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2;	// IMP=0x0000000100099c60
+ (void)playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2;	// IMP=0x0000000100099868
+ (void)playRadioFromMPSong:(id)arg1;	// IMP=0x000000010009964c
+ (void)queueRadioWithPlaybackIntent:(id)arg1;	// IMP=0x0000000100099548
+ (void)playRadioWithPlaybackIntent:(id)arg1;	// IMP=0x0000000100099444
+ (void)playFromRequest:(id)arg1 startItemIdentifiers:(id)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x0000000100099308
+ (void)playFromRequest:(id)arg1 shuffle:(_Bool)arg2 initialPlaybackType:(unsigned long long)arg3;	// IMP=0x00000001000992f0
+ (void)playItemType:(unsigned long long)arg1 withMPObject:(id)arg2;	// IMP=0x0000000100099010
+ (_Bool)canPlayItemWithStoreID:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x0000000100098e10
+ (_Bool)canPlayItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x0000000100098b84

@end

