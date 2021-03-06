//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface RPPrivateDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _prefPrivateDiscoveryEnabled;	// 10 = 0xa
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedPrivateDaemon;	// IMP=0x000000010004b884
- (void).cxx_destruct;	// IMP=0x000000010004d268
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x000000010004d160
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004cf14
- (void)removeDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ccc0
- (void)addDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004cb24
- (void)removeAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c8d0
- (void)addAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c734
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010004c72c
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c724
- (void)prefsChanged;	// IMP=0x000000010004c718
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010004c710
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010004c70c
- (void)_processAnswerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004c630
- (void)_processQueryPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004c554
- (void)_processAnnouncementPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004c3dc
- (void)_processResponsePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004c278
- (void)_processProbePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004c100
- (void)_processPacketPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004bfb4
- (void)_ensureStopped;	// IMP=0x000000010004bfb0
- (void)_ensureStarted;	// IMP=0x000000010004bfac
- (void)_update;	// IMP=0x000000010004bf88
- (void)_invalidated;	// IMP=0x000000010004bf08
- (void)_invalidate;	// IMP=0x000000010004be58
- (void)invalidate;	// IMP=0x000000010004bdf0
- (void)activate;	// IMP=0x000000010004bca4
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010004b968
- (id)init;	// IMP=0x000000010004b8f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

