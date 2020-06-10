//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameplayBulletin.h"

@class GKChallengeInternal, GKStoreItemInternal, NSString;

@interface GKChallengeBulletin : GKGameplayBulletin
{
    GKChallengeInternal *_challenge;	// 16 = 0x10
    NSString *_challengeID;	// 24 = 0x18
    GKStoreItemInternal *_storeItem;	// 32 = 0x20
}

+ (void)expireChallengeList;	// IMP=0x0000000100027778
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000275c8
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)handleAcceptAction;	// IMP=0x0000000100029194
- (unsigned long long)launchEventType;	// IMP=0x000000010002906c
- (id)customChallengeSoundPathForBundleID:(id)arg1;	// IMP=0x0000000100028efc
- (void)assembleBulletin;	// IMP=0x0000000100028d1c
- (void)notifyClient:(id)arg1;	// IMP=0x0000000100028ba0
- (void)notifyApp;	// IMP=0x0000000100028904
- (_Bool)isAppRunning;	// IMP=0x0000000100028670
- (void)refreshData;	// IMP=0x0000000100028474
- (void)setGameName:(id)arg1;	// IMP=0x0000000100028418
- (id)gameName;	// IMP=0x00000001000283e8
- (void)setOriginatorPlayer:(id)arg1;	// IMP=0x000000010002838c
- (id)originatorPlayer;	// IMP=0x0000000100028368
- (void)setOriginatorPlayerID:(id)arg1;	// IMP=0x000000010002830c
- (id)originatorPlayerID;	// IMP=0x00000001000282dc
- (void)setReceiverPlayer:(id)arg1;	// IMP=0x0000000100028280
- (id)receiverPlayer;	// IMP=0x000000010002825c
- (void)setReceiverPlayerID:(id)arg1;	// IMP=0x0000000100028200
- (id)receiverPlayerID;	// IMP=0x00000001000281d0
- (id)gameDescriptor;	// IMP=0x0000000100027f94
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027984
- (void)dealloc;	// IMP=0x0000000100027708
- (id)URLContext;	// IMP=0x00000001000276f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100027688
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100027604
- (id)init;	// IMP=0x00000001000275d0

@end

