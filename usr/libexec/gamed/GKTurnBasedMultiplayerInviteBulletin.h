//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTurnBasedMultiplayerBulletin.h"

@interface GKTurnBasedMultiplayerInviteBulletin : GKTurnBasedMultiplayerBulletin
{
}

+ (_Bool)shouldExpirePlayerList;	// IMP=0x00000001000d4694
+ (_Bool)shouldLoadCacheList;	// IMP=0x00000001000d468c
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d3d6c
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d5118
- (void)handleDeclineAction;	// IMP=0x00000001000d4fd0
- (void)handleAcceptAction;	// IMP=0x00000001000d4e54
- (void)handleAction:(id)arg1;	// IMP=0x00000001000d4b64
- (void)assembleBulletin;	// IMP=0x00000001000d469c

@end

