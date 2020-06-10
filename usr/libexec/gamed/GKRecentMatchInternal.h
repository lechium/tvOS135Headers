//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKGameRecordInternal, GKPlayerInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;	// 8 = 0x8
    GKGameRecordInternal *_game;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001245f0
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GKGameRecordInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;	// IMP=0x0000000100124834
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001246f4
- (void)dealloc;	// IMP=0x0000000100124580

@end

