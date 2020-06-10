//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WAMessage, WAXPCConnection;

@protocol WAXPCConnectionDelegate <NSObject>
- (void)xpcConnection:(WAXPCConnection *)arg1 trigger11axPerfStudyAndReply:(void (^)(id, NSError *))arg2;
- (void)xpcConnection:(WAXPCConnection *)arg1 trapCrashMiniTracerDumpReadyForInterfaceWithName:(NSString *)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 clearMessageStoreAndReply:(void (^)(id, NSError *))arg2;
- (void)xpcConnection:(WAXPCConnection *)arg1 killDaemonAndReply:(void (^)(id, NSError *))arg2;
- (void)xpcConnection:(WAXPCConnection *)arg1 triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg2 waMessage:(WAMessage *)arg3 andReply:(void (^)(id, NSError *))arg4;
- (void)xpcConnection:(WAXPCConnection *)arg1 triggerQueryForNWActivity:(long long)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 clientConfigChangeDelegateSetForGroupType:(long long)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 registerForQueryableMessageWithidentifierDict:(NSDictionary *)arg2 groupType:(long long)arg3 andReply:(void (^)(id, NSError *))arg4;
- (void)xpcConnection:(WAXPCConnection *)arg1 ingestMessage:(WAMessage *)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 submitMessage:(WAMessage *)arg2 groupType:(long long)arg3 andReply:(void (^)(id, NSError *))arg4;
- (void)xpcConnection:(WAXPCConnection *)arg1 getMessagesModelForGroupType:(long long)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 getNewMessageForKey:(NSString *)arg2 groupType:(long long)arg3 andReply:(void (^)(id, NSError *))arg4;
- (void)xpcConnection:(WAXPCConnection *)arg1 getMessageForUUID:(NSString *)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 registerMessageGroup:(long long)arg2 andReply:(void (^)(id, NSError *))arg3;
- (void)xpcConnection:(WAXPCConnection *)arg1 establishConnectionWithToken:(NSString *)arg2 andReply:(void (^)(id, NSError *))arg3;
@end

