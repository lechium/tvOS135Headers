//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKTournamentService-Protocol.h"

@class NSString;

@interface GKCloudTournamentService : GKService <GKTournamentService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000b07fc
+ (Class)interfaceClass;	// IMP=0x00000001000b07f0
- (oneway void)getAcceptedCustomTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b7250
- (oneway void)getShareURLForCustomTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b6f04
- (void)tournamentForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b6e98
- (oneway void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b69dc
- (oneway void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b6598
- (oneway void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b6354
- (oneway void)registerPlayerInTournament:(id)arg1 playerGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b5f14
- (oneway void)getTournamentStateForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b5a94
- (oneway void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b563c
- (oneway void)getLocalParticipantForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b51d0
- (oneway void)getTotalPlayerCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b4908
- (oneway void)getFriendCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b40bc
- (oneway void)resumePlayInTournament:(id)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b3c6c
- (oneway void)beginPlayInTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b37ec
- (oneway void)resignFromTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b33ac
- (oneway void)declineInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b2f6c
- (oneway void)acceptInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b2b2c
- (oneway void)removeCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b26dc
- (oneway void)addCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b228c
- (oneway void)removeInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b1e3c
- (oneway void)addInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b19ec
- (oneway void)createCustomTournamentWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b154c
- (oneway void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b10e4
- (oneway void)reportScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b0c7c
- (oneway void)loadHistoricalDataForPlayer:(id)arg1 tournamentDefinition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b0804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

