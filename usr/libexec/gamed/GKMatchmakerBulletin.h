//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKBulletin.h"

@class NSString;

@interface GKMatchmakerBulletin : GKBulletin
{
    NSString *_matchID;	// 16 = 0x10
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cdcac
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
- (void)executeBulletinWithBulletinController:(id)arg1;	// IMP=0x00000001000ce0ac
- (void)dealloc;	// IMP=0x00000001000ce05c

@end

