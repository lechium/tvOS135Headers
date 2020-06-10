//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKCloudTournament : NSObject
{
}

+ (void)lookForCustomTournamentInvitesInParticipantRecords:(id)arg1;	// IMP=0x00000001000253e0
+ (id)findContactParticipantRecordToRemoveForTournamentID:(id)arg1;	// IMP=0x000000010002508c
+ (void)createZoneForPrivateContactDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024d6c
+ (void)createPrivateContactInviteRecordsForPlayers:(id)arg1 tournamentID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024008
+ (id)contactInviteRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x0000000100023fa0
+ (_Bool)isMessagesIDForLocalUser:(id)arg1;	// IMP=0x0000000100023f98
+ (void)acceptShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023dc0
+ (void)fetchTournamentRecordIfNeededWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000237f8
+ (void)addInviteeAndGenerateBulletinForShareMetadata:(id)arg1;	// IMP=0x00000001000228ec
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x000000010002278c
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022114
+ (void)setInProgressAcceptShareRecordIDs:(id)arg1;	// IMP=0x00000001000220c0
+ (id)inProgressAcceptShareRecordIDs;	// IMP=0x00000001000220b4
+ (void)createShareWithShareRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002161c
+ (void)createCustomInviteZoneWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000212fc
+ (void)fetchExistingShareWithRecordID:(id)arg1 fromDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020eb4
+ (void)shareURLForCustomTournament:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020410
+ (id)inviteRecordWithDataForSharingTournament:(id)arg1 clientProxy:(id)arg2;	// IMP=0x00000001000201fc
+ (id)inviteDictionaryForTournament:(id)arg1 originatingPlayerID:(id)arg2 clientProxy:(id)arg3;	// IMP=0x000000010001fff8
+ (id)cloudKitOperationConfigurationForCustomInvite;	// IMP=0x000000010001ff2c
+ (id)shareRecordIDForTournamentID:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000010001fe6c
+ (id)sharedDatabaseForInviteContainer;	// IMP=0x000000010001fe08
+ (id)privateDatabaseForInviteContainer;	// IMP=0x000000010001fda4
+ (void)removeCustomTournament:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f980
+ (void)manageStatesForTournamentsWithDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e8b4
+ (void)manageTournamentsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001dfc4
+ (_Bool)canManageTournaments;	// IMP=0x000000010001df20
+ (id)lastUsedBundleID;	// IMP=0x000000010001df14
+ (void)setLastUsedBundleID:(id)arg1;	// IMP=0x000000010001de80
+ (id)lastManagementDate;	// IMP=0x000000010001de74
+ (void)setLastManagementDate:(id)arg1;	// IMP=0x000000010001de20
+ (void)resetDataForTournamentsWithTournamentDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d938
+ (void)fetchAndUpdateRecordsWithIDs:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d060
+ (id)checkForServerRecordChangedErrorsInModifyRecordsOperationError:(id)arg1;	// IMP=0x000000010001cd14
+ (void)subscribeToDatabaseChangesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c430
+ (void)activeAutomaticTournamentsForTournamentDefinition:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bbec
+ (void)allParticipantRecordsForTournamentReferences:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b54c
+ (void)localPlayerTournamentRecordsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a370
+ (void)localPlayerParticipantRecordsForTournaments:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019c10
+ (void)allTournamentDefintionRecordsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000195c0
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017a9c
+ (void)updateCacheForPublicDatabaseForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000172cc
+ (void)updateCacheForDatabaseWithScope:(long long)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016974
+ (void)updatePlayerRanksForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015e90
+ (void)updateScoreDataForParticipantRecord:(id)arg1 newScore:(long long)arg2 tournamentScoringMethod:(long long)arg3;	// IMP=0x0000000100015ce0
+ (id)createParticipantRecordForTournamentRecord:(id)arg1 playerID:(id)arg2;	// IMP=0x0000000100015934
+ (void)saveTournamentRecords:(id)arg1 deleteTournamentRecordIDs:(id)arg2 database:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100014970
+ (id)cloudKitOperationConfiguration;	// IMP=0x00000001000148a4
+ (void)createCustomTournamentWithRequest:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013750
+ (id)customTournamentRecordsForRequest:(id)arg1 definitionReference:(id)arg2;	// IMP=0x0000000100012ea4
+ (void)createAutomaticTournamentFromDefinition:(id)arg1 startDate:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011f8c
+ (id)automaticTournamentNameFromDefinition:(id)arg1 startDate:(id)arg2;	// IMP=0x0000000100011c4c
+ (long long)timePeriod:(id)arg1;	// IMP=0x0000000100011bd0
+ (id)nextAutomaticTournamentStartDateForDefinitionRecurrenceRule:(id)arg1;	// IMP=0x0000000100011a40
+ (void)sortParticipants:(id)arg1;	// IMP=0x00000001000118f0
+ (void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010b40
+ (id)contactPlayerInternalForPlayerID:(id)arg1 tournamentID:(id)arg2;	// IMP=0x0000000100010924
+ (void)declineLocalPlayerInvitationInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fd20
+ (void)removeInvitees:(id)arg1 fromCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000edc8
+ (void)removeCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e058
+ (void)addCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d2ac
+ (void)addInvitees:(id)arg1 toCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000bd00
+ (id)participantRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x000000010000bc8c
+ (void)historicalDataForPlayer:(id)arg1 tournamentDefinitionWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ac6c
+ (id)computeHistoricalDataFromParticipationRecords:(id)arg1;	// IMP=0x000000010000a7e8
+ (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009b4c
+ (void)reportScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008c64
+ (_Bool)tryTokenIsValid:(id)arg1 forTournamentParticipantRecord:(id)arg2;	// IMP=0x0000000100008bd8
+ (_Bool)deviceIsValidForTournamentParticipantRecord:(id)arg1;	// IMP=0x0000000100008b1c
+ (void)resignLocalPlayerFromTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007e84
+ (void)resumePlayInTournamentWithID:(id)arg1 withTryToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007024
+ (void)beginPlayInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000060f0
+ (void)registerLocalPlayerForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005000
+ (void)decrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x0000000100004f30
+ (void)incrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x0000000100004e64
+ (void)getLocalParticipantForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004d78
+ (void)getFriendCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004d64
+ (void)getTotalPlayerCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004bf8
+ (void)tournamentsMatchingPredicate:(id)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000044bc
+ (id)filterCustomTournamentsForLocalPlayer:(id)arg1;	// IMP=0x00000001000041b4
+ (void)tournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004084
+ (void)tournamentDefinitionWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003dcc
+ (void)tournamentDefinitionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003db8
+ (void)updateUserRecordWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000394c
+ (void)setProcessedRecordIDsForBulletins:(id)arg1;	// IMP=0x00000001000038f8
+ (id)processedRecordIDsForBulletins;	// IMP=0x00000001000038ec
+ (id)privateDatabase;	// IMP=0x0000000100003888
+ (id)publicDatabase;	// IMP=0x0000000100003824
+ (id)tournamentQueue;	// IMP=0x00000001000037b0
+ (id)cacheQueue;	// IMP=0x0000000100003740
+ (id)tournamentCache;	// IMP=0x00000001000036d4

@end
