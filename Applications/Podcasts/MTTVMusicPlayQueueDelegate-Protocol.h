//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVPlayer, MTTVMusicPlayQueue, NSArray;
@protocol TVPMediaItem;

@protocol MTTVMusicPlayQueueDelegate

@optional
- (void)playQueue:(MTTVMusicPlayQueue *)arg1 didChangeDurationSnapshot:(CDStruct_fce57115)arg2;
- (void)playQueue:(MTTVMusicPlayQueue *)arg1 didChangeAVPlayer:(AVPlayer *)arg2;
- (void)playQueue:(MTTVMusicPlayQueue *)arg1 didChangeElapsedTime:(double)arg2 forItem:(id <TVPMediaItem>)arg3 atIndex:(long long)arg4;
- (void)playQueue:(MTTVMusicPlayQueue *)arg1 didChangeFromPlayState:(long long)arg2 toPlayState:(long long)arg3;
- (void)playQueue:(MTTVMusicPlayQueue *)arg1 didChangePlayingItem:(id <TVPMediaItem>)arg2;
- (void)playQueue:(MTTVMusicPlayQueue *)arg1 didUpdateQueue:(NSArray *)arg2;
@end

