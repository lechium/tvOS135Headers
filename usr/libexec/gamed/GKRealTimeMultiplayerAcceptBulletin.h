//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerActionBulletin.h"

@class NSData, NSNumber;

@interface GKRealTimeMultiplayerAcceptBulletin : GKRealTimeMultiplayerActionBulletin
{
    NSNumber *_blobType;	// 120 = 0x78
    NSNumber *_relayType;	// 128 = 0x80
    NSData *_relayConnectionID;	// 136 = 0x88
    NSData *_relayTranscationID;	// 144 = 0x90
    NSData *_selfRelayIP;	// 152 = 0x98
    NSNumber *_selfRelayPort;	// 160 = 0xa0
    NSData *_peerRelayIP;	// 168 = 0xa8
    NSNumber *_peerRelayPort;	// 176 = 0xb0
    NSData *_relayToken;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010003c910
@property(retain) NSData *relayToken; // @synthesize relayToken=_relayToken;
@property(retain) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(retain) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(retain) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(retain) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(retain) NSData *relayTranscationID; // @synthesize relayTranscationID=_relayTranscationID;
@property(retain) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(retain) NSNumber *blobType; // @synthesize blobType=_blobType;
- (void)handleAction:(id)arg1;	// IMP=0x000000010003d64c
- (void)assembleBulletin;	// IMP=0x000000010003d338
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010003d068
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003cd34
- (id)initWithPushNotification:(id)arg1;	// IMP=0x000000010003ca1c
- (_Bool)isAccept;	// IMP=0x000000010003ca14
- (id)notificationName;	// IMP=0x000000010003ca04
- (id)debugLine;	// IMP=0x000000010003c9f8
- (id)aggregateDictionaryKey;	// IMP=0x000000010003c9e8
- (void)dealloc;	// IMP=0x000000010003c918

@end

