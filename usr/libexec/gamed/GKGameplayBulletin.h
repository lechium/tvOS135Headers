//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKBulletin.h"

@class GKPlayerInternal, NSArray, NSString, NSURL;

@interface GKGameplayBulletin : GKBulletin
{
    unsigned char _gameLocation;	// 16 = 0x10
    NSString *_receiverPlayerID;	// 24 = 0x18
    NSString *_originatorPlayerID;	// 32 = 0x20
    GKPlayerInternal *_receiverPlayer;	// 40 = 0x28
    GKPlayerInternal *_originatorPlayer;	// 48 = 0x30
    NSString *_receiverGuestPlayerID;	// 56 = 0x38
    NSString *_originatorGuestPlayerID;	// 64 = 0x40
    GKPlayerInternal *_receiverGuestPlayer;	// 72 = 0x48
    GKPlayerInternal *_originatorGuestPlayer;	// 80 = 0x50
    NSURL *_storeURL;	// 88 = 0x58
    NSArray *_compatibleVersions;	// 96 = 0x60
    NSArray *_compatibleShortVersions;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000fb540
@property unsigned char gameLocation; // @synthesize gameLocation=_gameLocation;
@property(retain) NSArray *compatibleShortVersions; // @synthesize compatibleShortVersions=_compatibleShortVersions;
@property(retain) NSArray *compatibleVersions; // @synthesize compatibleVersions=_compatibleVersions;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) GKPlayerInternal *originatorGuestPlayer; // @synthesize originatorGuestPlayer=_originatorGuestPlayer;
@property(retain) GKPlayerInternal *receiverGuestPlayer; // @synthesize receiverGuestPlayer=_receiverGuestPlayer;
@property(retain) NSString *originatorGuestPlayerID; // @synthesize originatorGuestPlayerID=_originatorGuestPlayerID;
@property(retain) NSString *receiverGuestPlayerID; // @synthesize receiverGuestPlayerID=_receiverGuestPlayerID;
@property(retain) GKPlayerInternal *originatorPlayer; // @synthesize originatorPlayer=_originatorPlayer;
@property(retain) GKPlayerInternal *receiverPlayer; // @synthesize receiverPlayer=_receiverPlayer;
@property(retain) NSString *originatorPlayerID; // @synthesize originatorPlayerID=_originatorPlayerID;
@property(retain) NSString *receiverPlayerID; // @synthesize receiverPlayerID=_receiverPlayerID;
- (void)loadOriginatorPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000feeb8
- (void)loadStoreItemWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fe278
- (void)gamePlatformForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fdf48
- (void)gamePlatformWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fddd4
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fd520
- (void)determineGameLocationOnDeviceViaCompatibilityMatrixWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fc9e0
- (void)determineGameLocationOnDeviceOnly;	// IMP=0x00000001000fc60c
- (_Bool)isCompatibleWithGameDescriptor:(id)arg1;	// IMP=0x00000001000fc344
- (_Bool)isPushFromLocalPlayers;	// IMP=0x00000001000fc1ec
- (_Bool)isPushForLocalPlayers;	// IMP=0x00000001000fc094
- (_Bool)playerIsLocal:(id)arg1;	// IMP=0x00000001000fbe14
@property(readonly, retain) NSString *URLContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000fbaa4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000fb638
- (void)dealloc;	// IMP=0x00000001000fb548

@end

