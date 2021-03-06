//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKSubmitScoresCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

+ (id)readerWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000af034
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000af750
- (id)eligibleChallengeIDsForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af58c
- (id)scoreForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af40c
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2 daysAgo:(unsigned long long)arg3;	// IMP=0x00000001000af37c
- (id)getAllScoreRequestIDsStatement;	// IMP=0x00000001000af318
- (id)getSubmitScoreDescriptorsStatementForDaysAgo:(unsigned long long)arg1;	// IMP=0x00000001000af15c
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000af0f4
- (id)initWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000af074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

