//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPCPlaybackEngineDelegate-Protocol.h"
#import "MPCPlaybackEngineEventObserving-Protocol.h"
#import "TVMusicPlayQueueDelegate-Protocol.h"
#import "TVPAVFPlayback-Protocol.h"

@class AVPlayer, AVPlayerItem, MPAVItem, MPCPlaybackEngine, MPCPlaybackIntent, MPIdentifierSet, NSArray, NSDate, NSMutableArray, NSString, TVMusicAgeGateInfo, TVMusicPlayQueue, TVMusicPlayerPlaybackEngineQueueEndedObserver, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange, UIView;
@protocol MPCVideoView, OS_dispatch_queue, TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@interface TVMusicPlayer : NSObject <TVMusicPlayQueueDelegate, MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving, TVPAVFPlayback>
{
    id <TVPMediaItem> _currentMediaItem;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_mediaItemObservationQueue;	// 16 = 0x10
    _Bool _waitsAfterPreparingMediaItems;	// 24 = 0x18
    TVMusicAgeGateInfo *_ageGateInfo;	// 32 = 0x20
    _Bool interactive;	// 40 = 0x28
    _Bool limitReadAhead;	// 41 = 0x29
    _Bool muted;	// 42 = 0x2a
    _Bool updatesMediaRemoteInfoAutomatically;	// 43 = 0x2b
    _Bool preventsSleepDuringVideoPlayback;	// 44 = 0x2c
    _Bool currentMediaItemInitialLoadingComplete;	// 45 = 0x2d
    _Bool _isStopped;	// 46 = 0x2e
    _Bool _elapsedTimeJumpInProgress;	// 47 = 0x2f
    _Bool _isLive;	// 48 = 0x30
    _Bool _isLoading;	// 49 = 0x31
    float volume;	// 52 = 0x34
    long long errorBehavior;	// 56 = 0x38
    TVPChapterCollection *currentChapterCollection;	// 64 = 0x40
    double rateUsedForPlayback;	// 72 = 0x48
    NSArray *subtitleOptions;	// 80 = 0x50
    double maximumBitRate;	// 88 = 0x58
    id <TVPASyncPlaybackDelegate> asyncDelegate;	// 96 = 0x60
    TVPSubtitleOption *selectedSubtitleOption;	// 104 = 0x68
    long long mediaItemEndAction;	// 112 = 0x70
    TVPInterstitial *currentInterstitial;	// 120 = 0x78
    NSArray *chapterCollections;	// 128 = 0x80
    TVPAudioOption *selectedAudioOption;	// 136 = 0x88
    double forwardPlaybackEndTime;	// 144 = 0x90
    NSDate *playbackDate;	// 152 = 0x98
    double reversePlaybackEndTime;	// 160 = 0xa0
    TVPChapter *currentChapter;	// 168 = 0xa8
    MPCPlaybackEngine *_playbackEngine;	// 176 = 0xb0
    TVMusicPlayQueue *_playQueue;	// 184 = 0xb8
    TVMusicPlayerPlaybackEngineQueueEndedObserver *_playbackQueueEndedObserver;	// 192 = 0xc0
    NSString *_name;	// 200 = 0xc8
    NSMutableArray *_elapsedTimeObservers;	// 208 = 0xd0
    AVPlayer *_avPlayer;	// 216 = 0xd8
    double _targetElapsedTime;	// 224 = 0xe0
    TVPPlaybackState *_state;	// 232 = 0xe8
    double _duration;	// 240 = 0xf0
    TVPTimeRange *_bufferedTimeRange;	// 248 = 0xf8
    MPAVItem *_currentAVItem;	// 256 = 0x100
    MPIdentifierSet *_identifiersForLastEndedPlaybackItem;	// 264 = 0x108
    AVPlayerItem *_currentAVPlayerItem;	// 272 = 0x110
    UIView<MPCVideoView> *_videoView;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000100071818
@property(retain, nonatomic) UIView<MPCVideoView> *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) AVPlayerItem *currentAVPlayerItem; // @synthesize currentAVPlayerItem=_currentAVPlayerItem;
@property(retain, nonatomic) MPIdentifierSet *identifiersForLastEndedPlaybackItem; // @synthesize identifiersForLastEndedPlaybackItem=_identifiersForLastEndedPlaybackItem;
@property(retain, nonatomic) MPAVItem *currentAVItem; // @synthesize currentAVItem=_currentAVItem;
@property(retain, nonatomic) TVPTimeRange *bufferedTimeRange; // @synthesize bufferedTimeRange=_bufferedTimeRange;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TVPPlaybackState *state; // @synthesize state=_state;
@property(nonatomic) double targetElapsedTime; // @synthesize targetElapsedTime=_targetElapsedTime;
@property(nonatomic) _Bool elapsedTimeJumpInProgress; // @synthesize elapsedTimeJumpInProgress=_elapsedTimeJumpInProgress;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) NSMutableArray *elapsedTimeObservers; // @synthesize elapsedTimeObservers=_elapsedTimeObservers;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TVMusicPlayerPlaybackEngineQueueEndedObserver *playbackQueueEndedObserver; // @synthesize playbackQueueEndedObserver=_playbackQueueEndedObserver;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(retain, nonatomic) TVMusicPlayQueue *playQueue; // @synthesize playQueue=_playQueue;
@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) _Bool currentMediaItemInitialLoadingComplete; // @synthesize currentMediaItemInitialLoadingComplete;
@property(readonly, nonatomic) TVPChapter *currentChapter; // @synthesize currentChapter;
@property(readonly, nonatomic) double reversePlaybackEndTime; // @synthesize reversePlaybackEndTime;
@property(nonatomic) float volume; // @synthesize volume;
@property(copy, nonatomic) NSDate *playbackDate; // @synthesize playbackDate;
@property(readonly, nonatomic) double forwardPlaybackEndTime; // @synthesize forwardPlaybackEndTime;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption; // @synthesize selectedAudioOption;
@property(readonly, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections;
@property(readonly, nonatomic) TVPInterstitial *currentInterstitial; // @synthesize currentInterstitial;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback;
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption; // @synthesize selectedSubtitleOption;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate;
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate;
@property(readonly, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(nonatomic) _Bool muted; // @synthesize muted;
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback;
@property(nonatomic) _Bool limitReadAhead; // @synthesize limitReadAhead;
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection;
@property(nonatomic) _Bool interactive; // @synthesize interactive;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior;
- (void)_getStringForTitleLabel:(id *)arg1 subtitleLabel:(id *)arg2 forMusicVideo:(id)arg3;	// IMP=0x00000001000713d8
- (void)_getStringForTitleLabel:(id *)arg1 subtitleLabel:(id *)arg2 forTVEpisode:(id)arg3;	// IMP=0x0000000100071270
- (id)_metadataItemWithValue:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000711d0
- (void)_addMetadataToArray:(id)arg1 withMetadataIdentifier:(id)arg2 value:(id)arg3;	// IMP=0x00000001000710f0
- (id)_roundedImageWithImage:(id)arg1 radius:(double)arg2;	// IMP=0x0000000100070ffc
- (void)_addMetadataToPlayerItem:(id)arg1 fromGenericObject:(id)arg2;	// IMP=0x0000000100070884
- (id)_TVPPlaybackStateFromMCPPlayerState:(long long)arg1;	// IMP=0x0000000100070714
- (void)_updateAVPlayerFromAVItem:(id)arg1;	// IMP=0x0000000100070514
- (void)_updateAVPlayerItem:(id)arg1;	// IMP=0x00000001000703a0
- (void)_updateAVPlayerItemMetadataIfNeeded;	// IMP=0x000000010007018c
- (void)_avPlayerItemDidChange:(id)arg1;	// IMP=0x0000000100070034
- (void)_itemReadyToPlay;	// IMP=0x000000010006fe44
- (void)_sendNotificationForError:(id)arg1 avItem:(id)arg2;	// IMP=0x000000010006fbe8
- (id)_mpGenericObjectFromMPAVItem:(id)arg1;	// IMP=0x000000010006f884
- (void)_appDidEnterBackground:(id)arg1;	// IMP=0x000000010006f7d4
- (void)_appDidBecomeActive:(id)arg1;	// IMP=0x000000010006f750
- (void)_appWillResignActive:(id)arg1;	// IMP=0x000000010006f5ec
- (void)_playerPathChanged:(id)arg1;	// IMP=0x000000010006f5dc
- (void)_itemChanged:(id)arg1;	// IMP=0x000000010006f370
- (void)_itemPlaybackEnded:(id)arg1;	// IMP=0x000000010006ee80
- (void)engine:(id)arg1 requiresAuthorizationToPlayItem:(id)arg2 reason:(long long)arg3 authorizationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010006e984
- (void)engine:(id)arg1 didFailToPlayFirstItem:(id)arg2 withError:(id)arg3;	// IMP=0x000000010006e3bc
- (void)engine:(id)arg1 didFailToPlayItem:(id)arg2 withError:(id)arg3;	// IMP=0x000000010006e278
- (void)engine:(id)arg1 didPauseForLeaseEndWithError:(id)arg2;	// IMP=0x000000010006e068
- (void)engineDidPauseForLeaseEnd:(id)arg1;	// IMP=0x000000010006df6c
- (void)_updateElapsedTimeObserversWithDurationSnapshot:(CDStruct_fce57115)arg1;	// IMP=0x000000010006dd9c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010006d988
@property(readonly, nonatomic) _Bool hasTimedMetadata;
- (void)playQueue:(id)arg1 didChangeCurrentPlayingSection:(id)arg2;	// IMP=0x000000010006d5b8
- (void)playQueue:(id)arg1 didChangeDurationSnapshot:(CDStruct_fce57115)arg2;	// IMP=0x000000010006d334
- (void)playQueue:(id)arg1 didChangeVideoView:(id)arg2;	// IMP=0x000000010006d220
- (void)playQueue:(id)arg1 didChangeFromPlayState:(long long)arg2 toPlayState:(long long)arg3;	// IMP=0x000000010006d03c
- (void)playQueue:(id)arg1 didChangePlayingItem:(id)arg2;	// IMP=0x000000010006cf44
- (void)playQueue:(id)arg1 didUpdateQueue:(id)arg2;	// IMP=0x000000010006ccf8
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x000000010006ccf4
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x000000010006ccec
- (void)updateSubtitleOptions;	// IMP=0x000000010006cce8
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x000000010006cc30
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x000000010006cb74
@property(readonly, nonatomic) TVPDateRange *seekableDateRange;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange;
@property(readonly, nonatomic) NSArray *audioOptions;
- (void)invalidate;	// IMP=0x000000010006ca58
- (void)removeWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000010006c9a0
- (void)addWeakReferenceToVideoView:(id)arg1;	// IMP=0x000000010006c8e8
- (void)continueLoadingCurrentItem;	// IMP=0x000000010006c830
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x000000010006c74c
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x000000010006c668
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010006c584
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x000000010006c4a0
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006c2b8
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006c1fc
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x000000010006c1f0
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x000000010006c07c
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;	// IMP=0x000000010006c034
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x000000010006c028
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2;	// IMP=0x000000010006c01c
- (void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006bf70
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x000000010006bf64
- (void)setElapsedTime:(double)arg1;	// IMP=0x000000010006bee8
@property(readonly, nonatomic) double elapsedTime;
- (void)_setCurrentMediaItem:(id)arg1;	// IMP=0x000000010006bbc8
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
- (void)_setCurrentState:(id)arg1;	// IMP=0x000000010006b7e8
- (void)stopAndClearPlayQueue:(_Bool)arg1;	// IMP=0x000000010006b420
- (void)stop;	// IMP=0x000000010006b2e0
- (void)play;	// IMP=0x000000010006b1e0
- (void)togglePlayPause;	// IMP=0x000000010006b0b4
- (void)scanWithRate:(double)arg1;	// IMP=0x000000010006af60
- (void)pause;	// IMP=0x000000010006ad60
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate;
@property(readonly, nonatomic) double rate;
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x000000010006aba8
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000010006aa74
@property(readonly, nonatomic) _Bool currentMediaItemHasDates;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(retain, nonatomic) TVPPlaylist *playlist;
@property(retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
- (void)dealloc;	// IMP=0x000000010006a658
- (id)initWithAgeGateInfo:(id)arg1;	// IMP=0x000000010006a1ac
- (id)initWithName:(id)arg1;	// IMP=0x000000010006a148
- (id)init;	// IMP=0x000000010006a138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

