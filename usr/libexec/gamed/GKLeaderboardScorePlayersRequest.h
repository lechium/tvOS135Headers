//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKLeaderboardScoreRequest.h"

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest
{
    NSArray *_playerInternals;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100080d0c
@property(copy, nonatomic) NSArray *playerInternals; // @synthesize playerInternals=_playerInternals;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100080eb0
- (void)dealloc;	// IMP=0x0000000100080e60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100080dd0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100080d14
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100162374
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100161f38
- (id)resourceIdentifier;	// IMP=0x0000000100161da0
- (id)serverRequestWithService:(id)arg1;	// IMP=0x0000000100161b6c
- (id)bagKey;	// IMP=0x0000000100161b60

@end
