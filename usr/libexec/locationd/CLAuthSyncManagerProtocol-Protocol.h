//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLCompanionSyncAuthObject, NSString;

@protocol CLAuthSyncManagerProtocol <CLIntersiloServiceProtocol>
- (void)considerPerformingAForcedFullSync;
- (void)sendNotification:(int)arg1;
- (void)deleteObject:(CLCompanionSyncAuthObject *)arg1 withSyncSessionReason:(NSString *)arg2;
- (void)addObject:(CLCompanionSyncAuthObject *)arg1 withSyncSessionReason:(NSString *)arg2;
- (void)sendGlobalAuthStatus:(int)arg1;
@end

