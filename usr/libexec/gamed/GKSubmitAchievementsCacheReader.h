//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKSubmitAchievementsCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

+ (id)readerWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000c8a3c
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c8fa4
- (id)eligibleChallengeIDsForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000c8de0
- (id)achievementForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000c8c70
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00000001000c8c2c
- (id)getAllAchievementRequestIDsStatement;	// IMP=0x00000001000c8bc8
- (id)getSubmitAchievementsDescriptorsStatement;	// IMP=0x00000001000c8b64
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000c8afc
- (id)initWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000c8a7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

