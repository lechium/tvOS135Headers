//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPhotoCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)readerWithDatabaseConnection:(id)arg1;	// IMP=0x000000010018695c
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100186bf0
- (id)setPhotoDescriptorForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100186ab8
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x0000000100186aa4
- (id)setPhotoDescriptorStatement;	// IMP=0x0000000100186a4c
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001001869ec
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x000000010018698c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
