//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPPlayer.h>

@interface TVPPlayer (AirPlay)
- (id)mediaItemForIdentifier:(id)arg1;	// IMP=0x000000010000cbfc
- (void)setAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010000cae0
- (void)setReversePlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000c998
- (void)setForwardPlaybackEndTime:(CDStruct_198678f7)arg1;	// IMP=0x000000010000c850
- (void)setPlayerRate:(float)arg1;	// IMP=0x000000010000c738
- (void)setPlayerPosition:(double)arg1;	// IMP=0x000000010000c604
- (void)setSelectedMediaArray:(id)arg1;	// IMP=0x000000010000c5f8
- (id)selectedMediaArray;	// IMP=0x000000010000c394
- (void)setTrackEnabled:(_Bool)arg1 trackID:(long long)arg2;	// IMP=0x000000010000c1b8
- (_Bool)trackEnabled:(long long)arg1;	// IMP=0x000000010000bfb4
- (id)timedMetadata;	// IMP=0x000000010000bee8
- (id)errorLogArray;	// IMP=0x000000010000be94
- (id)accessLogArray;	// IMP=0x000000010000be40
- (id)playbackInfo;	// IMP=0x000000010000b250
@end

