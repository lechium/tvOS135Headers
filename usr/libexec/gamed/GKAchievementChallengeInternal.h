//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeInternal.h"

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal
{
    GKAchievementInternal *_achievement;	// 88 = 0x58
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100130be8
+ (id)internalRepresentation;	// IMP=0x0000000100130bd4
@property(copy, nonatomic) GKAchievementInternal *achievement; // @synthesize achievement=_achievement;
- (id)titleText;	// IMP=0x0000000100130e70
- (unsigned long long)type;	// IMP=0x0000000100130e68
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x0000000100130cdc
- (void)dealloc;	// IMP=0x0000000100130b84

@end
