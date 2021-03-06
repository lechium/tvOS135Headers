//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSMutableSet;

@interface MTVisitedEpisodeManager : MTSingleton
{
    NSMutableSet *_startedEpisodeUuids;	// 8 = 0x8
    NSMutableSet *_endedEpisodeUuids;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100190234
@property(retain, nonatomic) NSMutableSet *endedEpisodeUuids; // @synthesize endedEpisodeUuids=_endedEpisodeUuids;
@property(retain, nonatomic) NSMutableSet *startedEpisodeUuids; // @synthesize startedEpisodeUuids=_startedEpisodeUuids;
- (void)flushVisitedEpisodes;	// IMP=0x000000010018fedc
- (unsigned long long)countOfEndedEpisodes;	// IMP=0x000000010018fe90
- (unsigned long long)countOfStartedEpisodes;	// IMP=0x000000010018fe44
- (_Bool)hasEndedVisitingEpisode:(id)arg1;	// IMP=0x000000010018fda4
- (void)startVisitingEpisode:(id)arg1;	// IMP=0x000000010018fcd0
- (void)endVisitingEpisode:(id)arg1;	// IMP=0x000000010018fc30
- (id)init;	// IMP=0x000000010018fb00

@end

