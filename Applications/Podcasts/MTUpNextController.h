//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSArray, NSMutableArray;

@interface MTUpNextController : MTSingleton
{
    NSMutableArray *_playerItems;	// 8 = 0x8
    unsigned long long _updateCount;	// 16 = 0x10
}

+ (id)_filePath;	// IMP=0x00000001000fa85c
+ (id)_encodedUpNextClasses;	// IMP=0x00000001000fa3f4
- (void).cxx_destruct;	// IMP=0x00000001000fa928
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSMutableArray *playerItems; // @synthesize playerItems=_playerItems;
- (void)_restoreUpNext;	// IMP=0x00000001000fa61c
- (void)_upNextDidChange;	// IMP=0x00000001000fa504
- (id)_encodedUpNext;	// IMP=0x00000001000fa220
- (void)_reportUpNextChangeType:(id)arg1 forPlayerItems:(id)arg2 withData:(id)arg3;	// IMP=0x00000001000f9fdc
- (void)_reportUpNextChangeType:(id)arg1 forPlayerItem:(id)arg2 withData:(id)arg3;	// IMP=0x00000001000f9dc0
- (unsigned long long)_currentUpNextIndex;	// IMP=0x00000001000f9d44
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *items;
- (void)endUpdates;	// IMP=0x00000001000f9c44
- (void)beginUpdates;	// IMP=0x00000001000f9c0c
- (_Bool)hasItemsInQueue;	// IMP=0x00000001000f9bc8
- (unsigned long long)upNextOffset;	// IMP=0x00000001000f9bac
- (_Bool)isPlayingFromUpNext;	// IMP=0x00000001000f9b04
- (void)clear;	// IMP=0x00000001000f9a70
- (_Bool)moveEpisodeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00000001000f983c
- (void)removeEpisodesForUuid:(id)arg1;	// IMP=0x00000001000f9608
- (void)removeEpisodeAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000f9474
- (_Bool)containsEpisodeUuid:(id)arg1;	// IMP=0x00000001000f92c0
- (void)addPlayerItemsToPlayNext:(id)arg1;	// IMP=0x00000001000f90f0
- (void)addPlayerItemToPlayNext:(id)arg1;	// IMP=0x00000001000f8f74
- (void)addEpisodeUuidsToPlayNext:(id)arg1;	// IMP=0x00000001000f8da0
- (void)addEpisodeUuidToPlayNext:(id)arg1;	// IMP=0x00000001000f8d4c
- (void)addPlayerItemsToUpNext:(id)arg1;	// IMP=0x00000001000f8ca4
- (void)addPlayerItemToUpNext:(id)arg1;	// IMP=0x00000001000f8c00
- (void)addEpisodeUuidsToUpNext:(id)arg1;	// IMP=0x00000001000f8a2c
- (void)addEpisodeUuidToUpNext:(id)arg1;	// IMP=0x00000001000f89d8
- (id)init;	// IMP=0x00000001000f8980

@end
