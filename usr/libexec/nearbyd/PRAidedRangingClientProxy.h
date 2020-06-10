//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRAidedRangingClientProtocol-Protocol.h"
#import "PRAidedRangingServerProtocol-Protocol.h"
#import "PRClientProxy-Protocol.h"

@class NSDictionary, NSString, PRNSXPCConnection;
@protocol OS_dispatch_queue, PRAidedRangingClientProtocol;

@interface PRAidedRangingClientProxy : NSObject <PRClientProxy, PRAidedRangingClientProtocol, PRAidedRangingServerProtocol>
{
    PRNSXPCConnection<PRAidedRangingClientProtocol> *_connWrapper;	// 8 = 0x8
    struct shared_ptr<PRRangingManagerClient> _rangingManagerClient;	// 16 = 0x10
    unsigned short _serviceTicketId;	// 32 = 0x20
    struct unique_ptr<rose::RoseStartRangingOptions, std::__1::default_delete<rose::RoseStartRangingOptions>> _startOptions;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSDictionary *_clientInfo;	// 56 = 0x38
    _Bool _terminated;	// 64 = 0x40
    unsigned short _deviceIndex;	// 66 = 0x42
    struct RangeEnableParameters _debugOptions;	// 72 = 0x48
    _Bool _sessionOngoing;	// 192 = 0xc0
}

- (id).cxx_construct;	// IMP=0x0000000100018630
- (void).cxx_destruct;	// IMP=0x00000001000185dc
@property _Bool sessionOngoing; // @synthesize sessionOngoing=_sessionOngoing;
@property(readonly, copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
- (void)announceLeavingSession;	// IMP=0x00000001000184d4
- (void)announceStopSession;	// IMP=0x00000001000183b0
- (void)announceStartSession;	// IMP=0x000000010001828c
- (void)teardownLocalSession;	// IMP=0x00000001000181f8
- (_Bool)isSessionCoordinator;	// IMP=0x00000001000181e8
- (void)stopSessionAsCoordinator;	// IMP=0x000000010001811c
- (void)startSessionAsCoordinator;	// IMP=0x0000000100018050
- (void)_stopRanging;	// IMP=0x0000000100017ddc
- (_Bool)_startRanging;	// IMP=0x00000001000179cc
- (_Bool)tryAcceptingConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000171ac
- (void)connectWithClientInfo:(id)arg1;	// IMP=0x0000000100016ffc
- (void)resume;	// IMP=0x0000000100016e38
- (void)suspend;	// IMP=0x0000000100016c74
- (void)runWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015fa8
- (void)receivedData:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100015c3c
- (void)requestInitialCollaborationDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015a38
- (void)sendDataToPeers:(id)arg1;	// IMP=0x00000001000158cc
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x00000001000157bc
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;	// IMP=0x00000001000156ac
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x0000000100015540
- (void)didFailWithError:(id)arg1;	// IMP=0x00000001000153d4
- (void)terminate;	// IMP=0x0000000100015304
- (void)activate;	// IMP=0x0000000100015184
- (void)dealloc;	// IMP=0x0000000100015100
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100014d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
