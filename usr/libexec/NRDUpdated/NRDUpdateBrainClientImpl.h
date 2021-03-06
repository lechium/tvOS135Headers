//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDUpdateBrainInterface-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol NRDUpdateBrainDelegateInterface;

@interface NRDUpdateBrainClientImpl : NSObject <NRDUpdateBrainInterface>
{
    NSXPCConnection *_serverConnection;	// 8 = 0x8
    NSXPCListenerEndpoint *_serverEndpoint;	// 16 = 0x10
    _Bool _connected;	// 24 = 0x18
    id <NRDUpdateBrainDelegateInterface> _delegate;	// 32 = 0x20
}

- (void)cancelNeRDUpdate:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006fac
- (void)calculateCurrentRequiredSpace:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006ea8
- (void)finishNeRDUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006c9c
- (void)purgeNeRDUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006ba4
- (void)installNeRDUpdate:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006918
- (void)downloadNeRDUpdate:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006670
- (void)queryNeRDUpdate:(id)arg1 build:(id)arg2 options:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000010000654c
- (void)getListenerEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006450
- (void)run:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006278
- (void)ping:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005bf8
- (void)handleConnectionError:(id)arg1 method:(const char *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005b60
- (void)noteConnectionDropped;	// IMP=0x0000000100005b38
- (void)connectToServerIfNecessary;	// IMP=0x0000000100005aec
- (void)_connectToServerIfNecessary_nolock;	// IMP=0x000000010000552c
- (void)_invalidateConnection;	// IMP=0x00000001000054e0
- (void)_invalidateConnection_nolock;	// IMP=0x0000000100005478
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005344
- (void)dealloc;	// IMP=0x00000001000052ec
- (id)initWithEndpoint:(id)arg1;	// IMP=0x00000001000052a4
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100005274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

