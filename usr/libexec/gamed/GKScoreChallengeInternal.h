//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeInternal.h"

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal
{
    GKScoreInternal *_score;	// 88 = 0x58
    GKLeaderboardInternal *_leaderboard;	// 96 = 0x60
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010013073c
+ (id)internalRepresentation;	// IMP=0x0000000100130728
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)titleText;	// IMP=0x0000000100130a78
- (unsigned long long)type;	// IMP=0x0000000100130a70
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x0000000100130858
- (void)dealloc;	// IMP=0x00000001001306c8

@end

