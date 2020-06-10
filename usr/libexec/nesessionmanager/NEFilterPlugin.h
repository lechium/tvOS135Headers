//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPlugin.h"

#import "NEFilterPluginManager-Protocol.h"

@interface NEFilterPlugin : NEPlugin <NEFilterPluginManager>
{
    long long _filterStatus;	// 64 = 0x40
}

@property(readonly) long long filterStatus; // @synthesize filterStatus=_filterStatus;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001347c
- (id)managerInterface;	// IMP=0x0000000100013460
- (id)remotePluginInterface;	// IMP=0x0000000100013444
- (void)acceptAgentClients;	// IMP=0x000000010001337c
- (void)setStatus:(long long)arg1 error:(id)arg2;	// IMP=0x00000001000131b8
- (void)handlePluginFailedWithError:(id)arg1;	// IMP=0x000000010001315c
- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013030
- (void)createContentFilterSocketWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012f04
- (void)getFilterClientConnectionWithHandler:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012b84
- (void)startFilter;	// IMP=0x0000000100012b44

@end

