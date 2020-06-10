//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKMultiplayerService-Protocol.h"

@class NSString;

@interface GKMultiplayerMatchService : GKService <GKMultiplayerService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100187050
+ (Class)interfaceClass;	// IMP=0x0000000100187044
- (oneway void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x000000010019073c
- (oneway void)presentNearbyInvite:(id)arg1;	// IMP=0x0000000100190700
- (oneway void)updateCacheWithNearbyProfileDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100190140
- (oneway void)cancelRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018ffa8
- (oneway void)updateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018fd00
- (oneway void)initiateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018fa48
- (oneway void)_performRelayAction:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018f7ec
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010018f2a4
- (oneway void)getInviteSessionTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018f148
- (oneway void)getPlayersToInviteWithHandlerV2:(CDUnknownBlockType)arg1;	// IMP=0x000000010018eed8
- (oneway void)getAcceptedGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018e9a0
- (oneway void)declineGameInvite:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018e734
- (oneway void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018dd7c
- (oneway void)cancelGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018da1c
- (oneway void)removePlayersFromGameInviteV2:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018d448
- (oneway void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018c524
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018c274
- (id)privateDatabase;	// IMP=0x000000010018c240
- (void)setupInviteShareWithRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018be38
- (oneway void)loadURLWithData:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018aacc
- (void)initiateInvitationForMatchRequest:(id)arg1 connectionData:(id)arg2 recipients:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100189c08
- (oneway void)setShareRecordID:(id)arg1;	// IMP=0x0000000100189b7c
- (oneway void)setShareInvitees:(id)arg1;	// IMP=0x0000000100189470
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100188b8c
- (oneway void)getOverallFlowRateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100188500
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100187dac
- (oneway void)cancelOutstandingMatchRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100187aa8
- (oneway void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(long long)arg3 rematchID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100187058

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

