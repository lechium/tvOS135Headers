//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKSubmitRatingsCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSDictionary *_gameDescriptor;	// 16 = 0x10
}

+ (id)writerWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x0000000100076fdc
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007755c
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x000000010007733c
- (void)bindParametersForRatingsStatement:(struct sqlite3_stmt *)arg1 payload:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x00000001000772ac
- (id)ratingsInsertSQL;	// IMP=0x0000000100077258
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2 digest:(id)arg3;	// IMP=0x0000000100077178
- (id)requestsInsertSQL;	// IMP=0x0000000100077108
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000770a0
- (id)initWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x0000000100077020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

