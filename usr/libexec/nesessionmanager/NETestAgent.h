//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEAgent.h"

@class NSXPCListenerEndpoint;

@interface NETestAgent : NEAgent
{
    NSXPCListenerEndpoint *_listenerEndpoint;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005489c
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (_Bool)isLocal;	// IMP=0x0000000100054870
- (_Bool)validateAfterStartWithAuditTokens:(id)arg1;	// IMP=0x0000000100054868
- (_Bool)isPerUser;	// IMP=0x0000000100054860
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000546b0
- (id)initWithPluginType:(id)arg1 pluginVersion:(long long)arg2 pluginClass:(long long)arg3 pluginKind:(long long)arg4 startMessage:(id)arg5;	// IMP=0x0000000100054404

@end

