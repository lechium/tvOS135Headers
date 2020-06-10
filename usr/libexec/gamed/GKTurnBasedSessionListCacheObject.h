//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKGameCacheObject;

@interface GKTurnBasedSessionListCacheObject : GKListCacheObject
{
}

+ (void)expireListsForSessionID:(id)arg1 context:(id)arg2;	// IMP=0x0000000100059364
+ (Class)entryClass;	// IMP=0x0000000100058b90
+ (id)entityName;	// IMP=0x0000000100058b84
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100058f64
- (id)internalRepresentation;	// IMP=0x0000000100058d1c
- (id)sessions;	// IMP=0x0000000100058bc8
- (id)sessionIDs;	// IMP=0x0000000100058b9c

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
