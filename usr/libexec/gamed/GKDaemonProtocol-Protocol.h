//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKXPCShareDaemon-Protocol.h"
#import "NSObject-Protocol.h"

@class CKShareMetadata, GKGameInternal, GKPlayerInternal, NSDictionary, NSString, NSURL;

@protocol GKDaemonProtocol <NSObject, CKXPCShareDaemon>
- (void)handleCloudKitShareMetadata:(CKShareMetadata *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resetLoginCancelCount;
- (oneway void)loadRemoteImageDataForURL:(NSURL *)arg1 reply:(void (^)(NSData *))arg2;
- (oneway void)localizedMessageFromDictionary:(NSDictionary *)arg1 forBundleID:(NSString *)arg2 handler:(void (^)(NSString *))arg3;
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getAuthenticatedPlayerInfo:(void (^)(GKAuthenticateResponse *, NSError *))arg1;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(void (^)(NSString *))arg1;
- (oneway void)getAccountNameWithHandler:(void (^)(NSString *))arg1;
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(GKPlayerInternal *)arg2 reply:(void (^)(id <GKAccountServicePrivate>, id <GKProfileServicePrivate>, id <GKFriendServicePrivate>, id <GKGameServicePrivate>, id <GKGameStatServicePrivate>, id <GKChallengeServicePrivate>, id <GKMultiplayerServicePrivate>, id <GKTurnBasedServicePrivate>, id <GKUtilityServicePrivate>, id <GKBulletinServicePrivate>, id <GKAnalyticsServicePrivate>, id <GKGameSessionServicePrivate>, id <GKTournamentServicePrivate>))arg3;
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(GKPlayerInternal *)arg2 reply:(void (^)(id <GKAccountService>, id <GKProfileService>, id <GKFriendService>, id <GKGameService>, id <GKGameStatService>, id <GKChallengeService>, id <GKMultiplayerService>, id <GKTurnBasedService>, id <GKUtilityService>, id <GKBulletinService>, id <GKAnalyticsService>, id <GKGameSessionService>, id <GKTournamentService>))arg3;
- (oneway void)setTestGame:(GKGameInternal *)arg1 reply:(void (^)(void))arg2;
- (oneway void)setHostPID:(int)arg1 reply:(void (^)(void))arg2;
@end

