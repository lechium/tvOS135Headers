//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPluginDelegate-Protocol.h"

@class NETunnelNetworkSettings, NEVPNTunnelPlugin, NSError, NSObject;
@protocol OS_xpc_object;

@protocol NEVPNTunnelPluginDelegate <NEPluginDelegate>
- (struct NEVirtualInterface_s *)plugin:(NEVPNTunnelPlugin *)arg1 didRequestVirtualInterfaceOfType:(long long)arg2 maxPendingPackets:(unsigned long long)arg3;
- (void)plugin:(NEVPNTunnelPlugin *)arg1 didSetPersistentData:(struct __CFDictionary *)arg2 ofType:(long long)arg3;
- (void)plugin:(NEVPNTunnelPlugin *)arg1 didAttachIPCWithEndpoint:(NSObject<OS_xpc_object> *)arg2;
- (void)pluginDidClearConfiguration:(NEVPNTunnelPlugin *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)plugin:(NEVPNTunnelPlugin *)arg1 didSetConfiguration:(NETunnelNetworkSettings *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)plugin:(NEVPNTunnelPlugin *)arg1 didSetStatus:(long long)arg2 andDisconnectError:(NSError *)arg3;
- (void)pluginDidDetachIPC:(NEVPNTunnelPlugin *)arg1;
@end
