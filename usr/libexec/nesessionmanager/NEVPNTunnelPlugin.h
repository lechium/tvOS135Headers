//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPlugin.h"

#import "NEVPNPluginManager-Protocol.h"

@interface NEVPNTunnelPlugin : NEPlugin <NEVPNPluginManager>
{
    long long _pluginStatus;	// 64 = 0x40
}

@property(readonly) long long pluginStatus; // @synthesize pluginStatus=_pluginStatus;
- (id)managerInterface;	// IMP=0x00000001000127d4
- (id)remotePluginInterface;	// IMP=0x00000001000127b8
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012584
- (void)setStatus:(long long)arg1 error:(id)arg2;	// IMP=0x000000010001243c
- (void)handleIPCDetached;	// IMP=0x0000000100012374
- (void)createVirtualInterfaceOfType:(long long)arg1 maxPendingPackets:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012204
- (void)setPersistentData:(id)arg1 ofType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012074
- (void)attachIPC;	// IMP=0x0000000100011d44
- (void)transportAvailableWithName:(id)arg1;	// IMP=0x0000000100011cd0
- (void)transportUnavailableWithName:(id)arg1;	// IMP=0x0000000100011c5c
- (void)disconnectWithReason:(int)arg1;	// IMP=0x0000000100011c14
- (void)startTunnelWithParameters:(id)arg1;	// IMP=0x0000000100011b98
- (void)handlePluginFailedWithError:(id)arg1;	// IMP=0x0000000100011b18
- (id)initWithAgent:(id)arg1 delegateQueue:(id)arg2 andDelegate:(id)arg3;	// IMP=0x0000000100011a7c

@end
