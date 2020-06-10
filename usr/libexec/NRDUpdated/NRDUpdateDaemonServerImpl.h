//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDUpdateDCoreDelegate-Protocol.h"
#import "NRDUpdatedProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NRDUpdateDCore, NSError, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NRDUpdateDaemonServerImpl : NSObject <NSXPCListenerDelegate, NRDUpdatedProtocol, NRDUpdateDCoreDelegate>
{
    NSObject<OS_dispatch_semaphore> *_updateSemaphore;	// 8 = 0x8
    NRDUpdateDCore *_core;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_updateQueue;	// 24 = 0x18
    NSError *_completedWithError;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100008110
- (void).cxx_destruct;	// IMP=0x00000001000096d8
@property(retain, nonatomic) NSError *completedWithError; // @synthesize completedWithError=_completedWithError;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain, nonatomic) NRDUpdateDCore *core; // @synthesize core=_core;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000941c
- (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x000000010000924c
- (void)getNRDUpdateBrainEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009010
- (void)requestExit:(int)arg1 reason:(id)arg2;	// IMP=0x0000000100008e44
- (void)updateCompleted:(id)arg1;	// IMP=0x0000000100008d7c
- (void)update:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008d68
- (void)updateHelper:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008bf0
- (id)init;	// IMP=0x0000000100008b1c
- (void)_run;	// IMP=0x0000000100008b18
- (void)runUntilExit;	// IMP=0x0000000100008194

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
