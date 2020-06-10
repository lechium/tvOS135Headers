//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKMultiplayerBulletin.h"

@class NSDictionary, NSNumber, NSString;

@interface GKTurnBasedMultiplayerBulletin : GKMultiplayerBulletin
{
    _Bool _userTapped;	// 16 = 0x10
    NSString *_matchID;	// 24 = 0x18
    NSNumber *_turnCount;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_exchangeID;	// 48 = 0x30
    NSString *_guestID;	// 56 = 0x38
    NSString *_aggregateDictionaryKey;	// 64 = 0x40
}

+ (_Bool)displayNotification;	// IMP=0x00000001000d0a44
+ (_Bool)shouldExpirePlayerList;	// IMP=0x00000001000d0a3c
+ (_Bool)shouldLoadCacheDetails;	// IMP=0x00000001000d0a34
+ (_Bool)shouldLoadCacheList;	// IMP=0x00000001000d0a2c
+ (_Bool)shouldLoadCacheData;	// IMP=0x00000001000d0a24
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cff1c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000cfe84
@property(readonly) NSString *aggregateDictionaryKey; // @synthesize aggregateDictionaryKey=_aggregateDictionaryKey;
@property(retain) NSString *guestID; // @synthesize guestID=_guestID;
@property(retain) NSString *exchangeID; // @synthesize exchangeID=_exchangeID;
@property(retain) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property _Bool userTapped; // @synthesize userTapped=_userTapped;
@property(retain) NSNumber *turnCount; // @synthesize turnCount=_turnCount;
@property(retain) NSString *matchID; // @synthesize matchID=_matchID;
- (id)description;	// IMP=0x00000001000d3c3c
- (void)handleAction:(id)arg1;	// IMP=0x00000001000d39c4
- (void)handleAcceptAction;	// IMP=0x00000001000d3894
- (void)expireAndLoadCaches;	// IMP=0x00000001000d32d8
- (void)assembleBulletin;	// IMP=0x00000001000d2dd0
- (id)bulletinMessage;	// IMP=0x00000001000d2c0c
- (void *)removePreviousTurnBulletins;	// IMP=0x00000001000d296c
- (void)declineTurnBasedInviteWithReason:(int)arg1;	// IMP=0x00000001000d2578
- (void)acceptTurnBasedTurn;	// IMP=0x00000001000d22d4
- (void)invalidateTurnCache;	// IMP=0x00000001000d1fb4
- (void)saveTurnBasedEvent;	// IMP=0x00000001000d1e50
- (void)updateBadgeCount;	// IMP=0x00000001000d1c94
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d130c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000d1098
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000d0df0
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000d0ba0
- (void)update;	// IMP=0x00000001000d0a4c
- (void)dealloc;	// IMP=0x00000001000cfe8c

@end

