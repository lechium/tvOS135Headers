//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileSelfCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x000000010007e808
- (id)emailForPlayerEmailStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e700
- (void)bindParametersForEmailsStatement:(struct sqlite3_stmt *)arg1 playerRowID:(int)arg2;	// IMP=0x000000010007e6b0
- (id)playerEmailsSQLString;	// IMP=0x000000010007e578
- (double)photoPendingTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e56c
- (double)friendRequestsTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e560
- (double)challengesTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e554
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e548
- (int)rowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e53c
- (int)lastPlayedGameRowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e530
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007e524
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010007df04
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x000000010007dec0
- (id)playerProfileSQLString;	// IMP=0x000000010007dd78

@end

