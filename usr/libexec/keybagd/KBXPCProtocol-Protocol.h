//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSFileHandle, NSString, UMPersonaMachPort;

@protocol KBXPCProtocol <NSObject>
- (void)Event:(int)arg1;
- (void)replacePersonaMachPortVoucher:(UMPersonaMachPort *)arg1 withAccountID:(NSString *)arg2 generationSet:(_Bool)arg3 forPid:(int)arg4 withReply:(void (^)(UMPersonaMachPort *, NSError *))arg5;
- (void)SeshatDebugWithDebugMask:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)SeshatRecoverWithSecret:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 withReply:(void (^)(int, NSError *))arg3;
- (void)SeshatUnlockWithSecret:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 withReply:(void (^)(int, NSError *))arg3;
- (void)SeshatEnrollWithSecret:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 withReply:(void (^)(NSError *))arg3;
- (void)userSessionDeviceConfigurationInfo:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)isLoginSessionwithReply:(void (^)(NSError *))arg1;
- (void)unmountUserSessionVolumeforID:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)mountUserSessionVolumeforID:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)userSessionLRUInfoWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)switchBlockTasksInfoWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)limitNumberOfUserSessions:(int)arg1 withReply:(void (^)(int, NSError *))arg2;
- (void)clearSyncBubbleUserswithReply:(void (^)(NSError *))arg1;
- (void)listSyncBubbleUserswithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)listSyncServiceSourcesForUserSession:(NSDictionary *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)currentSyncBubbleIDwithReply:(void (^)(int, NSError *))arg1;
- (void)MKBUserSessionSetInternalTest:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)stoptUserSyncBubble:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)startUserSyncBubble:(int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)removeSyncServiceSource:(NSString *)arg1 toUserSession:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)addSyncServiceSource:(NSString *)arg1 toUserSession:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)switchToLoginUIUserSessionWithReply:(void (^)(NSError *))arg1;
- (void)configureLoginUIWithUserSessionCount:(int)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)foregroundUserSessionAttributesWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setUserSessionAttributes:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getUserSessionAttributes:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteUserSessionSecureBlobwithReply:(void (^)(NSError *))arg1;
- (void)retrieveUserSessionSecureBackupBlobwithReply:(void (^)(NSData *, NSError *))arg1;
- (void)setUserSessionSecureBackupBlob:(NSData *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)switchToUserSession:(NSDictionary *)arg1 withOpaqueData:(NSData *)arg2 reply:(void (^)(NSError *))arg3;
- (void)deleteUserSessionBlobwithReply:(void (^)(NSError *))arg1;
- (void)retrieveUserSessionBlobwithReply:(void (^)(NSData *, NSError *))arg1;
- (void)listAllUserSessionIDsWithAReply:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUserSession:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)migrateUserSession:(NSDictionary *)arg1 fromfilePath:(NSString *)arg2 withSecret:(NSFileHandle *)arg3 oldSize:(unsigned long long)arg4 withOpaqueData:(NSData *)arg5 reply:(void (^)(NSDictionary *, NSError *))arg6;
- (void)createUserSession:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 withOpaqueData:(NSData *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)unloadUserSession:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)loadUserSession:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)getDeviceLockState:(int)arg1 needsExtended:(_Bool)arg2 withReply:(void (^)(int, NSError *))arg3;
- (void)passcodeUnlockFailedWithReply:(void (^)(NSError *))arg1;
- (void)passcodeUnlockSuccessWithReply:(void (^)(NSError *))arg1;
- (void)passcodeUnlockStartWithReply:(void (^)(NSError *))arg1;
- (void)getLockSateInfoforUser:(int)arg1 WithReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)migrationWithReply:(void (^)(NSError *))arg1;
- (void)isKeyRollingInProgresswithreply:(void (^)(int, NSError *))arg1;
- (void)stashDestroywithReply:(void (^)(NSError *))arg1;
- (void)stashLoadwithReply:(void (^)(NSData *, NSError *))arg1;
- (void)stashVerifywithReply:(void (^)(int, NSError *))arg1;
- (void)stashCommitwithReply:(void (^)(NSError *))arg1;
- (void)stashCreatewithSecret:(NSFileHandle *)arg1 secrestSize:(unsigned long long)arg2 withMode:(int)arg3 reply:(void (^)(NSError *))arg4;
- (void)stopBackupSessionwithReply:(void (^)(NSError *))arg1;
- (void)startBackupSessionwithReply:(void (^)(NSError *))arg1;
- (void)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)getBackupBlobreply:(void (^)(NSData *, NSError *))arg1;
- (void)registerBackupBag:(NSData *)arg1 withSecret:(NSFileHandle *)arg2 secretSize:(unsigned long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)changeClassKeysGenerationWithSecret:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 generationOption:(int)arg3 reply:(void (^)(NSError *))arg4;
- (void)changeSystemSecretWithEscrow:(NSData *)arg1 fromOldSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 toNewSecret:(NSFileHandle *)arg4 newSize:(unsigned long long)arg5 opaqueData:(NSData *)arg6 keepstate:(_Bool)arg7 reply:(void (^)(NSError *))arg8;
- (void)getPasscodeBlobWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)changeSystemSecretfromOldSecret:(NSFileHandle *)arg1 oldSize:(unsigned long long)arg2 toNewSecret:(NSFileHandle *)arg3 newSize:(unsigned long long)arg4 opaqueData:(NSData *)arg5 reply:(void (^)(NSError *))arg6;
@end

